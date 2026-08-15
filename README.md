# rv-ooo

An out-of-order RISC-V processor in SystemVerilog: register renaming,
reservation stations, a common data bus, and a reorder buffer for precise
in-order commit. Verified by lockstep co-simulation against Spike, synthesized
for Artix-7.

> **Status:** infrastructure complete, design in progress.
> `rtl/core/core_top.sv` defines the port contract; the datapath goes behind it.

---

## Quickstart

Windows: follow [`docs/SETUP_WSL.md`](docs/SETUP_WSL.md) first.

```bash
make check      # verify the toolchain
make unit       # SystemVerilog unit tests -- seconds, Verilator only
make asm        # assemble programs + Spike golden logs
make test       # full co-simulation regression
make synth      # Yosys area check
make progress   # milestone status
```

---

## Schedule

| Week | Milestone | Doc |
|---|---|---|
| 1 | Single-cycle baseline | [WEEK1](docs/WEEK1.md) |
| 2 | In-order 5-stage pipeline | [WEEK2](docs/WEEK2.md) |
| 3 | Renaming, reservation stations, CDB | [WEEK3](docs/WEEK3.md) |
| 4 | Reorder buffer, precise commit | [WEEK4](docs/WEEK4.md) |
| 5 | Load/store queue, disambiguation | [WEEK5](docs/WEEK5.md) |
| 6 | Branch prediction, recovery | [WEEK6](docs/WEEK6.md) |
| 7 | Performance analysis | [WEEK7](docs/WEEK7.md) |
| 8 | Synthesis and timing | [WEEK8](docs/WEEK8.md) |

Each doc has a background reading section, day-by-day tasks, verifiable
checkpoints, and the bugs to expect.

**Week 2 is not optional.** It builds an in-order core you later delete — and
it's the only way to honestly claim an IPC improvement, because the baseline is
one you measured yourself on the same testbench with the same memory model.

---

## Layout

```
docs/            week-by-week plans with background reading
rtl/
  include/       cpu_types_pkg.vh + one interface per functional unit
  core/          the design (yours to write)
  mem/           behavioral memory model, simulation only
  fpga/          synthesizable BRAM
asmFiles/        assembly unit tests + Spike golden log generation
testbench/       SystemVerilog unit tests, one per module
verif/cocotb/    Spike lockstep co-simulation
synth/           Vivado (real numbers) and Yosys (fast loop)
scripts/         environment check, regression runner, progress tracker
```

---

## Instruction subset

Deliberately scoped. All six RV32I encoding formats are covered, so the decoder
is genuinely RV32I-shaped and real GCC output runs — but redundant variants
that add decode work without architectural insight are excluded.

| Format | Instructions |
|---|---|
| R | `ADD` `SUB` `XOR` `AND` `SLT` |
| I | `ADDI` `ANDI` `SLLI` · `LW` · `JALR` |
| S | `SW` |
| B | `BEQ` `BNE` |
| U | `LUI` `AUIPC` |
| J | `JAL` |
| M | `MUL` `DIV` |

**Excluded:** sub-word loads/stores (`LB/LH/LBU/LHU/SB/SH`) — byte enables and
sign extension are decoder plumbing with no bearing on out-of-order execution.
Also the remaining shift/compare variants, `FENCE`, and the CSR instructions.

**`MUL`/`DIV` are included for a specific reason.** If every functional unit
completes in one cycle, there is almost nothing to reorder around except loads.
Real variable latency is what makes the reorder buffer earn its keep, and what
makes the IPC comparison meaningful rather than marginal.

---

## Verification

Three tiers, fastest first. Each gates the next in CI.

**1. SystemVerilog unit tests** (`make unit`) — one testbench per module, no
Python and no RISC-V toolchain. Currently 57 assertions covering the memory
model across the full latency sweep, both response-ordering modes, address
bounds, the synthesizable BRAM, the decoder, and elaboration of all 20
interfaces.

**2. Scoreboard unit tests** (`pytest verif/cocotb/test_cosim_unit.py`) — the
comparison logic is itself code that can be wrong, and a broken scoreboard
either hides real bugs or invents fake ones.

**3. Lockstep co-simulation** (`make test`) — the main event. Every retired
instruction is compared against Spike's next retirement: PC, instruction word,
destination register, write data. The first divergence fails with the offending
PC and the preceding commit history, so a failure carries its own backtrace.

This is what commercial CPU verification actually does. A passing regression
means the core is architecturally equivalent to the reference on every
instruction of every test.

### The commit-trace contract

`core_top` exposes flat `commit_*` ports that pulse once per retired
instruction, in program order. Identical across the single-cycle, in-order, and
out-of-order variants — which is what makes the final IPC comparison
apples-to-apples.

Flat signals rather than a packed struct, deliberately: struct ports are
rejected by Yosys, awkward to read from cocotb, and painful to probe with an
ILA on hardware.

### Memory model

Three stages behind parameters:

| Stage | Config | Purpose |
|---|---|---|
| 1 | `LATENCY=1` | simple SRAM, get the baseline fetching |
| 2 | `LATENCY=N` | fixed latency, ready/valid — sweep for the IPC curve |
| 3 | `RANDOM_LATENCY=1, OOO_RESP=1` | reordered responses; forces the LSQ to be correct rather than accidentally correct |

RAM is 64 KiB based at `0x80000000`, matching Spike's default DRAM. Don't move
it to `0x0` — Spike's boot ROM sits at `0x1000`.

Request/response channels carry IDs and map 1:1 onto AXI4 `ARID`/`RID`.

---

## Synthesis

No FPGA required. Vivado runs out-of-context synthesis and implementation with
nothing attached, reporting Fmax, utilization, and the critical path.

```bash
make synth                                          # Yosys, seconds
vivado -mode batch -source synth/vivado/synth.tcl   # real numbers
```

See [`synth/README.md`](synth/README.md) for the Fmax search procedure and
expected results.

---

## References

- Tomasulo, R. M. (1967). *An Efficient Algorithm for Exploiting Multiple
  Arithmetic Units.* IBM Journal of Research and Development, 11(1).
- Hennessy & Patterson. *Computer Architecture: A Quantitative Approach*, Ch. 3.
- Smith & Pleszkun (1988). *Implementing Precise Interrupts in Pipelined
  Processors.* IEEE Trans. Computers.
- Yeh & Patt (1991). *Two-Level Adaptive Training Branch Prediction.* MICRO-24.
- [RISC-V Unprivileged ISA Specification](https://riscv.org/technical/specifications/)
