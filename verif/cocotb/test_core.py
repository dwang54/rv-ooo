"""test_core.py -- top-level cocotb tests for Tomasulo-RV.

Run a single test:
    make TESTCASE=test_cosim MODULE=test_core PROG=00_smoke
Sweep memory latency:
    make sweep

The tests here are deliberately generic: they read whichever program image the
Makefile built and compare against that program's Spike log. Adding a new
directed test means adding one .S file, not touching this file.
"""

from __future__ import annotations

import os
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ClockCycles

from cosim import parse_spike_log, Scoreboard, CommitMismatch

CLK_PERIOD_NS = 10
TIMEOUT_CYCLES = int(os.environ.get("TIMEOUT_CYCLES", "200000"))
PROG = os.environ.get("PROG", "00_smoke")
BUILD_DIR = Path(os.environ.get("SW_BUILD", "../../asmFiles/build"))


async def reset(dut):
    """Standard async-assert / sync-deassert reset."""
    dut.rst_n.value = 0
    cocotb.start_soon(Clock(dut.clk, CLK_PERIOD_NS, units="ns").start())
    await ClockCycles(dut.clk, 5)
    await RisingEdge(dut.clk)
    dut.rst_n.value = 1
    await RisingEdge(dut.clk)


def _commit_fields(dut):
    """Read the commit bundle.

    core_top exposes these as flat ports rather than a packed struct, so there
    is no bit-slicing to get wrong and the same signals can be probed with an
    ILA if the design ever goes on hardware.
    """
    return (
        int(dut.commit_valid.value),
        int(dut.commit_pc.value),
        int(dut.commit_instr.value),
        int(dut.commit_rd_we.value),
        int(dut.commit_rd_addr.value),
        int(dut.commit_rd_wdata.value),
    )


@cocotb.test()
async def test_reset(dut):
    """Reset brings the core to a known state and nothing commits during it."""
    await reset(dut)
    await ClockCycles(dut.clk, 2)
    valid, *_ = _commit_fields(dut)
    assert valid == 0, "commit asserted immediately out of reset"
    dut._log.info("reset clean")


@cocotb.test()
async def test_cosim(dut):
    """Lockstep architectural comparison against Spike.

    This is the test that matters. Every retired instruction is compared to the
    golden model's next retirement; the first divergence fails the test with
    the offending PC, instruction word, and the preceding commit history.
    """
    golden_path = BUILD_DIR / f"{PROG}.spike.log"
    if not golden_path.exists():
        raise FileNotFoundError(
            f"missing golden log {golden_path}. "
            f"Run `make -C asmFiles {PROG}` first."
        )

    golden = parse_spike_log(golden_path)
    assert golden, f"golden log {golden_path} contained no commits"
    dut._log.info(f"golden model: {len(golden)} instructions from {PROG}")

    sb = Scoreboard(golden)
    await reset(dut)

    cycles = 0
    while cycles < TIMEOUT_CYCLES:
        await RisingEdge(dut.clk)
        cycles += 1

        valid, pc, instr, rd_we, rd_addr, rd_wdata = _commit_fields(dut)
        if valid:
            try:
                sb.check(pc, instr,
                         rd_addr if rd_we else None,
                         rd_wdata if rd_we else None)
            except CommitMismatch as e:
                dut._log.error(f"\n{'='*70}\n{e}\n{'='*70}")
                raise

        if int(dut.halted.value):
            dut._log.info(f"halt asserted after {cycles} cycles")
            break
    else:
        raise TimeoutError(
            f"no halt after {TIMEOUT_CYCLES} cycles. {sb.summary()}. "
            f"Either the program is stuck or `halted` is never driven."
        )

    assert sb.done, (
        f"DUT halted early: {sb.summary()}. "
        f"Next expected was {golden[sb.retired]}"
    )

    # ---- performance report ------------------------------------------------
    try:
        cyc = int(dut.perf_cycles.value)
        instret = int(dut.perf_instret.value)
        if instret:
            ipc = instret / cyc if cyc else 0.0
            dut._log.info(
                f"PERF {PROG}: instret={instret} cycles={cyc} "
                f"IPC={ipc:.3f} CPI={1/ipc if ipc else 0:.3f}"
            )
            brs = int(dut.perf_branches.value)
            mis = int(dut.perf_mispredicts.value)
            if brs:
                dut._log.info(
                    f"PERF {PROG}: branches={brs} mispredicts={mis} "
                    f"accuracy={100*(1-mis/brs):.2f}%"
                )
    except AttributeError:
        pass

    dut._log.info(f"PASS: {sb.summary()}")


@cocotb.test()
async def test_no_x_on_commit(dut):
    """No X or Z may reach the commit signals while commit_valid is high.

    Cheap, and it catches a whole class of uninitialized-register and
    partially-written-ROB-entry bugs that otherwise surface much later as
    inexplicable co-simulation mismatches.
    """
    await reset(dut)
    watched = ("commit_pc", "commit_instr", "commit_rd_we",
               "commit_rd_addr", "commit_rd_wdata")
    for _ in range(2000):
        await RisingEdge(dut.clk)
        if dut.commit_valid.value.binstr in ("x", "z"):
            continue
        if int(dut.commit_valid.value):
            for name in watched:
                bits = getattr(dut, name).value.binstr.lower()
                assert "x" not in bits and "z" not in bits, (
                    f"X/Z on {name} while commit_valid high: {bits}"
                )
        if int(dut.halted.value):
            break
