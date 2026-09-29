#!/usr/bin/env python3
"""week1_check.py -- mechanical progress checker for Week 1.

Every checkpoint is verified by running something, not by ticking a box. Run it
whenever you want to know where you stand:

    python3 scripts/week1_check.py           # all checkpoints
    python3 scripts/week1_check.py --next    # just the next thing to do
    python3 scripts/week1_check.py --from 4  # skip ahead

Checkpoints are ordered and cumulative: the first failure is where you are, and
everything after it is reported as blocked rather than run, so you get one
clear next action instead of a wall of red.
"""

from __future__ import annotations

import argparse
import re
import shutil
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
SW = ROOT / "asmFiles"
COCOTB = ROOT / "verif" / "cocotb"

_COLOR = sys.stdout.isatty() and not __import__("os").environ.get("NO_COLOR")
if _COLOR:
    GREEN, RED, YELLOW, GREY, BOLD, OFF = (
        "\033[0;32m", "\033[0;31m", "\033[0;33m", "\033[0;90m",
        "\033[1m", "\033[0m")
else:
    GREEN = RED = YELLOW = GREY = BOLD = OFF = ""


# crt0.S is the runtime linked into every program, not a test in its own right.
# asmFiles/Makefile filters it the same way; if these two ever disagree the
# checker reports missing artifacts for a file that is never built.
NOT_TESTS = {"crt0"}


def discover_tests() -> list[str]:
    return sorted(p.stem for p in SW.glob("*.S") if p.stem not in NOT_TESTS)


ANSI = re.compile(r"\x1b\[[0-9;]*m")


def strip_ansi(text: str) -> str:
    """check_env.sh colourizes its output; regexes must see the plain text."""
    return ANSI.sub("", text)


def sh(cmd, cwd=ROOT, timeout=1200):
    try:
        p = subprocess.run(cmd, cwd=cwd, shell=isinstance(cmd, str),
                           capture_output=True, text=True, timeout=timeout)
        return p.returncode, p.stdout + p.stderr
    except subprocess.TimeoutExpired:
        return 124, f"timed out after {timeout}s"
    except FileNotFoundError as e:
        return 127, str(e)


# --------------------------------------------------------------- checkpoints --

def c1_environment():
    """Toolchain installed and on PATH"""
    rc, out = sh(["bash", "scripts/check_env.sh"])
    if rc == 0:
        return True, "all tools present"
    missing = re.findall(r"MISSING\s+(\S+)", strip_ansi(out))
    if missing:
        return False, "missing: " + ", ".join(missing[:6])
    return False, "check_env.sh did not complete"


def c2_slow_hint() -> str | None:
    """Warn before a cold Verilator build, which otherwise looks like a hang."""
    if not (ROOT / "testbench" / "build").exists():
        return "compiling simulators, first run takes a minute"
    return None


def c2_unit_tests():
    """RTL unit tests pass (memory model, response ordering)"""
    if not shutil.which("verilator"):
        return False, "verilator not installed"
    rc, out = sh(["make", "-s", "unit"])
    clean = strip_ansi(out)
    fails = clean.count("FAIL")
    passes = clean.count("PASS")
    if fails == 0 and passes > 0:
        return True, f"{passes} assertions passed"
    return False, f"{fails} failing assertions"


def c3_scoreboard_tests():
    """Spike scoreboard unit tests pass"""
    rc, out = sh([sys.executable, "-m", "pytest", "test_cosim_unit.py", "-q"],
                 cwd=COCOTB)
    m = re.search(r"(\d+) passed", out)
    if rc == 0 and m:
        return True, f"{m.group(1)} tests passed"
    return False, "pytest failed -- the scoreboard itself is broken"


def c4_programs_build():
    """Test programs compile and Spike produces golden logs"""
    rc, out = sh(["make", "-s"], cwd=SW)
    if rc != 0:
        tail = [l for l in out.splitlines() if "rror" in l or "not found" in l]
        return False, tail[0][:70] if tail else "build failed"
    build = SW / "build"
    names = discover_tests()
    missing = []
    for n in names:
        if not (build / f"{n}.hex").exists():
            missing.append(f"{n}.hex")
        log = build / f"{n}.spike.log"
        if not log.exists() or log.stat().st_size == 0:
            missing.append(f"{n}.spike.log")
    if missing:
        return False, "missing: " + ", ".join(missing[:4])
    return True, f"{len(names)} programs + golden logs"


def c5_core_implemented():
    """core_top is a real design, not the scaffold stub"""
    src = (ROOT / "rtl" / "core" / "core_top.sv").read_text()
    if "placeholder tie-offs" in src or "TODO: replace everything below" in src:
        return False, "still the scaffold -- start writing the datapath"
    files = list((ROOT / "rtl" / "core").glob("*.sv"))
    lines = sum(len(f.read_text().splitlines()) for f in files)
    return True, f"{len(files)} files, {lines} lines of core RTL"


def _cosim(prog: str):
    rc, out = sh([sys.executable, "scripts/run_regression.py",
                  "--tests", prog], timeout=900)
    return rc == 0, out


def c6_fetch_stream():
    """Core fetches the correct instruction stream (PCs match golden)"""
    ok, out = _cosim("00_smoke")
    if ok:
        return True, "instruction stream correct"
    if "PC divergence" in out:
        m = re.search(r"expected pc=(0x[0-9a-f]+)", out)
        where = f" at {m.group(1)}" if m else ""
        return False, f"PC diverges{where} -- fetch or redirect is wrong"
    if "Instruction word mismatch" in out:
        return False, "fetched word != image -- imem handshake bug"
    if "no halt" in out:
        return False, "never halts -- check the tohost store detection"
    return False, "co-simulation failing"


def _make_cosim_check(prog: str, doc: str):
    def check():
        ok, out = _cosim(prog)
        if ok:
            m = re.search(r"IPC=([\d.]+)", out)
            return True, f"passes (IPC={m.group(1)})" if m else "passes"
        for pat, msg in (
            ("Writeback mismatch", "wrong value written back"),
            ("PC divergence", "control flow diverges"),
            ("no halt", "hangs -- no halt asserted"),
            ("more instructions", "retires too many instructions"),
        ):
            if pat in out:
                return False, msg
        return False, "failing"
    check.__doc__ = doc
    return check


CHECKS = [
    ("Environment",        c1_environment),
    ("RTL unit tests",     c2_unit_tests),
    ("Scoreboard tests",   c3_scoreboard_tests),
    ("Programs build",     c4_programs_build),
    ("Core implemented",   c5_core_implemented),
    ("Fetch + decode",     c6_fetch_stream),
    ("ALU complete",       _make_cosim_check("01_alu", "All ALU ops correct")),
    ("Load/store",         _make_cosim_check("02_ldst", "LSU against the memory interface")),
    ("Branches + jumps",   _make_cosim_check("03_branch", "Control flow and linkage")),
    ("Hazards",            _make_cosim_check("04_hazards", "RAW/WAW/WAR correctness")),
    ("Mul/div",            _make_cosim_check("05_muldiv", "Multi-cycle functional units")),
]

# Checks that may take a noticeably long time on a cold tree announce it, so a
# slow step reads as "working" rather than "frozen".
HINTS = {
    2: c2_slow_hint,
}

NEXT_ACTION = {
    0: "Work through docs/SETUP_WSL.md, then re-run.",
    1: "Verilator or the memory model is broken. Run `make unit` and read the output.",
    2: "Run pytest in verif/cocotb and fix the scoreboard before trusting any result.",
    3: "Run `make -C asmFiles` directly. Usually RISCV_PREFIX or spike not on PATH.",
    4: "Start the datapath in rtl/core/. Fetch, decode, regfile, ALU -- single cycle.",
    5: "Get the PC stream right first. Ignore writeback until PCs match the golden log.",
    6: "Fix ALU ops one at a time. Check the sign-extension cases in 01_alu.S.",
    7: "Wire the LSU to dmem ready/valid. Remember responses arrive N cycles later.",
    8: "Branch resolution and JAL/JALR linkage. Check the link register write path.",
    9: "Register dependency handling. On a single-cycle core this should be free.",
    10: "Multi-cycle units. The core must stall or track completion, not sample early.",
}


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--next", action="store_true",
                    help="report only the next incomplete checkpoint")
    ap.add_argument("--from", dest="start", type=int, default=1,
                    help="start at checkpoint N")
    args = ap.parse_args()

    print(f"\n{BOLD}Week 1 progress{OFF}")
    print("=" * 58)

    done = 0
    blocked_at = None

    for i, (name, fn) in enumerate(CHECKS):
        num = i + 1
        if num < args.start:
            print(f"  {GREY}skip{OFF}    {num:2}. {name}")
            continue
        if blocked_at is not None:
            print(f"  {GREY}----{OFF}    {num:2}. {GREY}{name}{OFF}")
            continue

        hint = HINTS.get(num)
        suffix = f"  {GREY}({hint()}){OFF}" if hint and hint() else ""
        print(f"  {YELLOW}....{OFF}    {num:2}. {name:<22}{suffix}",
              end="", flush=True)
        try:
            ok, detail = fn()
        except Exception as e:                      # noqa: BLE001
            ok, detail = False, f"checker error: {e}"

        print("\r" + " " * 96 + "\r", end="")   # clear the in-progress line
        if ok:
            done += 1
            print(f"  {GREEN}pass{OFF}    {num:2}. {name:<22} {GREY}{detail}{OFF}")
        else:
            blocked_at = i
            print(f"  {RED}HERE{OFF}    {num:2}. {name:<22} {RED}{detail}{OFF}")

    print("=" * 58)
    total = len(CHECKS)
    bar = "#" * done + "." * (total - done)
    print(f"  [{bar}]  {done}/{total} complete")

    if blocked_at is None:
        print(f"\n  {GREEN}{BOLD}Week 1 complete.{OFF} Tag the baseline:")
        print("    git tag -a m1-single-cycle -m 'single-cycle baseline, "
              "co-simulation clean'")
        print("  Then record the IPC numbers in the README before moving to "
              "reservation stations.\n")
        return 0

    print(f"\n  {BOLD}Next:{OFF} {NEXT_ACTION.get(blocked_at, 'see above')}\n")
    return 1


if __name__ == "__main__":
    sys.exit(main())
