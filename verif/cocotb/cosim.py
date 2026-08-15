"""cosim.py -- Spike lockstep co-simulation support.

Parses a Spike commit log into a stream of architectural retirement events and
provides a scoreboard that compares the DUT's commit bundle against it, in
order, one instruction at a time.

This is the backbone of the whole verification strategy. A directed test tells
you *that* something broke; the scoreboard tells you *which instruction, at
which PC, wrote the wrong value* -- usually within a few seconds of the bug
being introduced.

Generate the golden log with:
    spike --isa=rv32im -l --log-commits --log=prog.spike.log prog.elf
"""

from __future__ import annotations

import re
from dataclasses import dataclass
from pathlib import Path


# Spike with `-l --log-commits` emits TWO lines per instruction:
#
#   core   0: 0x00000000 (0x00000093) addi  ra, zero, 0     <- disassembly
#   core   0: 3 0x00000000 (0x00000093) x1 0x00000000       <- commit
#
# They are distinguished by the privilege-level digit, which only the commit
# line carries. Requiring it is what keeps every instruction from being
# counted twice -- a subtle bug that shows up as a bogus "PC divergence" on
# the second instruction of every test.
#
# Commit lines come in several shapes:
#   ... (0x...) x5 0x00000005                  register write
#   ... (0x...)                                no architectural write (branch)
#   ... (0x...) mem 0x00008000 0x00000005      store
#   ... (0x...) x5 0x00000005 mem 0x00008000   load
_COMMIT_RE = re.compile(
    r"^core\s+\d+:\s+"
    r"\d+\s+"                                    # privilege level, required
    r"0x([0-9a-fA-F]+)\s+"                        # pc
    r"\(0x([0-9a-fA-F]+)\)"                      # instruction word
    r"(?:\s+x\s*(\d+)\s+0x([0-9a-fA-F]+))?"      # optional rd / wdata
    r"(?:\s+mem\s+0x([0-9a-fA-F]+)"              # optional mem address
    r"(?:\s+0x([0-9a-fA-F]+))?)?"                # optional store data
)


@dataclass(frozen=True)
class CommitEvent:
    """One architecturally retired instruction."""
    pc: int
    instr: int
    rd: int | None        # None when the instruction writes no register
    wdata: int | None
    mem_addr: int | None = None   # set for loads and stores
    mem_data: int | None = None   # set for stores

    def __str__(self) -> str:
        base = f"pc=0x{self.pc:08x} instr=0x{self.instr:08x}"
        if self.rd is not None:
            base += f" x{self.rd}=0x{self.wdata:08x}"
        else:
            base += " (no rd)"
        if self.mem_addr is not None:
            base += f" mem[0x{self.mem_addr:08x}]"
            if self.mem_data is not None:
                base += f"<=0x{self.mem_data:08x}"
        return base


def parse_spike_log(path: str | Path, max_events: int | None = None
                    ) -> list[CommitEvent]:
    """Read a Spike commit log into an ordered list of CommitEvent."""
    events: list[CommitEvent] = []
    with open(path, "r", errors="replace") as fh:
        for line in fh:
            m = _COMMIT_RE.match(line.strip())
            if not m:
                continue
            pc = int(m.group(1), 16) & 0xFFFFFFFF
            instr = int(m.group(2), 16) & 0xFFFFFFFF
            if m.group(3) is None:
                rd, wdata = None, None
            else:
                rd = int(m.group(3))
                wdata = int(m.group(4), 16) & 0xFFFFFFFF
                # Writes to x0 are architecturally discarded. Spike logs them
                # anyway; the DUT should not, so normalize them away here
                # rather than special-casing at every comparison site.
                if rd == 0:
                    rd, wdata = None, None
            mem_addr = int(m.group(5), 16) if m.group(5) else None
            mem_data = int(m.group(6), 16) if m.group(6) else None
            events.append(CommitEvent(pc, instr, rd, wdata, mem_addr, mem_data))
            if max_events is not None and len(events) >= max_events:
                break
    return events


class CommitMismatch(AssertionError):
    """Raised on the first architectural divergence from the golden model."""


class Scoreboard:
    """Compares DUT commits against the golden stream, in program order.

    Usage from a cocotb test:

        sb = Scoreboard(parse_spike_log("prog.spike.log"))
        ...
        if dut.commit_valid.value:
            sb.check(pc=..., instr=..., rd=..., wdata=...)
    """

    def __init__(self, golden: list[CommitEvent], *,
                 check_instr: bool = True,
                 skip: int = 0):
        # `skip` drops the first N golden events, useful while crt0's register
        # zeroing is longer than the design can yet execute.
        self.golden = golden[skip:]
        self.index = 0
        self.check_instr = check_instr
        self.history: list[CommitEvent] = []

    @property
    def done(self) -> bool:
        return self.index >= len(self.golden)

    @property
    def retired(self) -> int:
        return self.index

    def check(self, pc: int, instr: int, rd: int | None,
              wdata: int | None) -> None:
        actual = CommitEvent(pc & 0xFFFFFFFF, instr & 0xFFFFFFFF,
                             rd if rd else None,
                             (wdata & 0xFFFFFFFF) if rd else None)

        if self.done:
            raise CommitMismatch(
                f"DUT retired more instructions than the golden model "
                f"({len(self.golden)}). Extra commit: {actual}\n"
                + self._context())

        expected = self.golden[self.index]

        if actual.pc != expected.pc:
            raise CommitMismatch(
                f"PC divergence at commit #{self.index}:\n"
                f"  expected {expected}\n"
                f"  actual   {actual}\n"
                f"A PC mismatch usually means a branch resolved the wrong way "
                f"or squash/recovery restored the wrong redirect target.\n"
                + self._context())

        if self.check_instr and actual.instr != expected.instr:
            raise CommitMismatch(
                f"Instruction word mismatch at pc=0x{actual.pc:08x}: "
                f"expected 0x{expected.instr:08x}, got 0x{actual.instr:08x}. "
                f"The fetched word does not match the image -- suspect the "
                f"instruction memory path, not the datapath.\n"
                + self._context())

        if (actual.rd, actual.wdata) != (expected.rd, expected.wdata):
            raise CommitMismatch(
                f"Writeback mismatch at commit #{self.index}, "
                f"pc=0x{actual.pc:08x} (instr 0x{actual.instr:08x}):\n"
                f"  expected {expected}\n"
                f"  actual   {actual}\n"
                + self._context())

        self.history.append(actual)
        self.index += 1

    def _context(self, n: int = 8) -> str:
        """The last few good commits, so a failure carries its own backtrace."""
        tail = self.history[-n:]
        if not tail:
            return "  (no instructions retired successfully before this point)"
        lines = ["  last successful commits:"]
        for i, ev in enumerate(tail, start=self.index - len(tail)):
            lines.append(f"    #{i}: {ev}")
        return "\n".join(lines)

    def summary(self) -> str:
        return (f"{self.index}/{len(self.golden)} golden instructions matched"
                + ("" if self.done else " -- DUT stopped early"))
