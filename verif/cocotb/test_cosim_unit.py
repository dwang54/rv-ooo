"""Unit tests for the Spike log parser and scoreboard.

These run under plain pytest with no simulator and no RISC-V toolchain, so a
broken parser is caught in seconds rather than being misdiagnosed as an RTL
bug. Run with:  pytest verif/cocotb/test_cosim_unit.py
"""
import textwrap
import pytest

from cosim import parse_spike_log, Scoreboard, CommitMismatch

# A realistic excerpt: spike -l --log-commits emits interleaved disassembly and
# commit lines, and the parser must consume only the latter.
SAMPLE = textwrap.dedent("""\
    core   0: 0x00000000 (0x00000093) addi    ra, zero, 0
    core   0: 3 0x00000000 (0x00000093) x1  0x00000000
    core   0: 0x00000004 (0x00500293) addi    t0, zero, 5
    core   0: 3 0x00000004 (0x00500293) x5  0x00000005
    core   0: 0x00000008 (0x00700313) addi    t1, zero, 7
    core   0: 3 0x00000008 (0x00700313) x6  0x00000007
    core   0: 0x0000000c (0x006283b3) add     t2, t0, t1
    core   0: 3 0x0000000c (0x006283b3) x7  0x0000000c
    core   0: 0x00000010 (0x0073a023) sw      t2, 0(t2)
    core   0: 3 0x00000010 (0x0073a023) mem 0x0000000c 0x0000000c
    core   0: 0x00000014 (0x0003a383) lw      t2, 0(t2)
    core   0: 3 0x00000014 (0x0003a383) x7  0x0000000c mem 0x0000000c
    core   0: 0x00000018 (0x00628463) beq     t0, t1, pc + 8
    core   0: 3 0x00000018 (0x00628463)
    core   0: 0x0000001c (0x00000013) addi    zero, zero, 0
    core   0: 3 0x0000001c (0x00000013) x0  0x00000000
    """)


@pytest.fixture
def log(tmp_path):
    p = tmp_path / "prog.spike.log"
    p.write_text(SAMPLE)
    return p


def test_disassembly_lines_are_not_double_counted(log):
    ev = parse_spike_log(log)
    # 8 instructions, each with a disassembly line AND a commit line.
    assert len(ev) == 8, f"expected 8 commits, parsed {len(ev)}"


def test_register_write(log):
    ev = parse_spike_log(log)
    assert ev[1].pc == 0x4
    assert ev[1].instr == 0x00500293
    assert ev[1].rd == 5
    assert ev[1].wdata == 5


def test_store_captures_address_and_data(log):
    st = parse_spike_log(log)[4]
    assert st.rd is None, "a store writes no register"
    assert st.mem_addr == 0xC
    assert st.mem_data == 0xC


def test_load_captures_both_rd_and_address(log):
    ld = parse_spike_log(log)[5]
    assert ld.rd == 7 and ld.wdata == 0xC
    assert ld.mem_addr == 0xC and ld.mem_data is None


def test_branch_has_no_writeback(log):
    br = parse_spike_log(log)[6]
    assert br.rd is None and br.wdata is None


def test_x0_write_is_normalized_away(log):
    nop = parse_spike_log(log)[7]
    assert nop.rd is None, "writes to x0 must be discarded, not compared"


def test_scoreboard_accepts_matching_stream(log):
    g = parse_spike_log(log)
    sb = Scoreboard(g)
    for e in g:
        sb.check(e.pc, e.instr, e.rd, e.wdata)
    assert sb.done and sb.retired == 8


def test_scoreboard_flags_pc_divergence(log):
    g = parse_spike_log(log)
    sb = Scoreboard(g)
    sb.check(g[0].pc, g[0].instr, g[0].rd, g[0].wdata)
    with pytest.raises(CommitMismatch, match="PC divergence"):
        sb.check(0xDEAD, g[1].instr, g[1].rd, g[1].wdata)


def test_scoreboard_flags_wrong_writeback(log):
    g = parse_spike_log(log)
    sb = Scoreboard(g)
    for e in g[:3]:
        sb.check(e.pc, e.instr, e.rd, e.wdata)
    with pytest.raises(CommitMismatch, match="Writeback mismatch"):
        sb.check(g[3].pc, g[3].instr, g[3].rd, 0xBAD)


def test_failure_message_includes_recent_history(log):
    g = parse_spike_log(log)
    sb = Scoreboard(g)
    for e in g[:3]:
        sb.check(e.pc, e.instr, e.rd, e.wdata)
    try:
        sb.check(g[3].pc, g[3].instr, g[3].rd, 0xBAD)
    except CommitMismatch as e:
        assert "last successful commits" in str(e)
        assert "0x00000004" in str(e)


def test_scoreboard_flags_extra_commits(log):
    g = parse_spike_log(log)
    sb = Scoreboard(g)
    for e in g:
        sb.check(e.pc, e.instr, e.rd, e.wdata)
    with pytest.raises(CommitMismatch, match="more instructions"):
        sb.check(0x20, 0x13, None, None)
