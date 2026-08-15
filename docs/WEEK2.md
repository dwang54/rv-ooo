# Week 2 — In-order 5-stage pipeline

**Goal:** a classic pipelined RV32I core with forwarding and hazard detection,
passing the same co-simulation suite as Week 1.

**Why this week exists.** You are building an out-of-order machine, and this
week builds an in-order one you will later delete. That is deliberate. The
number that sells the whole project is *"X% higher IPC than in-order at the
same memory latency"* — and you cannot claim it honestly unless you measured
the in-order machine yourself, on the same testbench, with the same memory
model. Downloading someone else's IPC figure is not a comparison.

It also has a second payoff: forwarding and hazard detection are what
reservation stations *replace*. Understanding them concretely makes the
Tomasulo material land much harder next week.

---

## Reading — what a pipeline actually buys you

A single-cycle core has a clock period set by the **longest** path in the whole
design: fetch → decode → register read → ALU → memory → writeback, all in one
cycle. Every instruction pays for the slowest one.

Pipelining cuts that path into five stages with registers between them:

| Stage | Does |
|---|---|
| IF | fetch instruction from imem |
| ID | decode, read registers |
| EX | ALU / branch resolution |
| MEM | data memory access |
| WB | write result to register file |

Now the clock period is set by the longest *stage*, not the longest path. In
principle that's a 5× speedup. In practice it's much less, because of hazards.

### The three hazards

**Structural** — two instructions want the same resource in the same cycle.
Split instruction and data memory (which you already have) and this mostly
disappears.

**Data (RAW)** — an instruction needs a value the previous one hasn't written
yet. `add t0, t1, t2` followed by `sub t3, t0, t4`: the `sub` reads `t0` in ID
while the `add` is still in EX. The register file holds a stale value.

**Control** — a branch resolves in EX, but by then two younger instructions are
already in the pipeline. If the branch is taken, they're wrong.

### Forwarding solves most RAW hazards

The value the `sub` needs already exists — it's sitting in the EX/MEM pipeline
register, it just hasn't reached the register file. So route it directly:

```
EX/MEM.alu_out  ──┐
MEM/WB.wdata    ──┼──> mux ──> ALU operand A
regfile.rdat1   ──┘
```

The forwarding unit compares the source registers of the instruction in EX
against the destination registers of the instructions in MEM and WB, and picks
the newest match. **Newest wins** — if both MEM and WB have a matching
destination, MEM is younger and correct.

### One hazard forwarding cannot fix

```
lw   t0, 0(a0)
add  t1, t0, t2     # needs t0 immediately
```

When the `add` is in EX, the `lw` is in MEM — the load data hasn't come back
yet. There is nothing to forward. The only fix is to stall one cycle: hold IF
and ID, inject a bubble into EX. This is the **load-use hazard**, and it's the
one case where the hazard unit must stall rather than forward.

Note this gets *worse* with memory latency. At `DMEM_LAT=8`, a load-use pair
stalls eight cycles. That is precisely the cost the out-of-order machine
eliminates by finding independent work to run instead — and it's why your IPC
sweep across latency is the headline result.

### Control hazards

Simplest approach: **predict not-taken**, and flush IF/ID and ID/EX when a
branch resolves taken. Costs two cycles per taken branch. Fine for now; Week 6
replaces it with real prediction.

---

## Day-by-day

### Day 1 — Pipeline registers

Implement the four latches from `latch_if.vh`: `if_id`, `id_ex`, `ex_mem`,
`mem_wb`. All share the same shape: `en` to capture, `clr` to bubble, **`clr`
takes priority**.

Wire them up with no forwarding and no hazard logic yet. Almost everything will
fail — that's expected.

**Checkpoint:** `make -C testbench latches` passes. Each latch holds on
`!en`, captures on `en`, and zeroes on `clr` regardless of `en`.

### Day 2 — Forwarding unit

Implement `forward_if`. Compare `ex_rs1`/`ex_rs2` against `mem_rd` and `wb_rd`.

Three rules, all of which people get wrong at least once:
- Only forward when the producer actually writes a register (`mem_we`/`wb_we`).
- Never forward from `x0`. It's always zero; a forwarded x0 write is wrong.
- MEM beats WB when both match — younger data wins.

**Checkpoint:** `make -C testbench forward` — the testbench walks all four
combinations of match/no-match on both operands.

### Day 3 — Hazard detection

Implement `hazard_if`. The load-use case is the whole job:

```
stall = ex_is_load && ex_we && ex_rd != 0 &&
        ((id_uses_rs1 && id_rs1 == ex_rd) ||
         (id_uses_rs2 && id_rs2 == ex_rd))
```

On stall: hold PC, hold IF/ID, bubble ID/EX. Everything downstream continues.

**Checkpoint:** `02_ldst` passes at `DMEM_LAT=1`.

### Day 4 — Branch flush

Resolve branches in EX. On taken (or on any jump), redirect the PC and clear
IF/ID and ID/EX.

Common bug: flushing only IF/ID. Two instructions entered the pipe after the
branch, not one.

**Checkpoint:** `03_branch` passes.

### Day 5 — Multi-cycle memory

Handle `DMEM_LAT > 1`. The MEM stage must stall the whole pipeline until
`dmem_resp_valid`. Every stage above holds; nothing below is affected.

**Checkpoint:** `02_ldst` passes at `DMEM_LAT` of 1, 4, and 8.

### Day 6 — Full regression

All six programs, all latencies.

```bash
python3 scripts/run_regression.py --lat 1 2 4 8 16
```

### Day 7 — Record the baseline

This is the important part of the week.

```bash
python3 scripts/run_regression.py --lat 1 2 4 8 16 --json baseline_inorder.json
git tag -a m2-inorder -m "in-order pipeline, co-simulation clean"
```

**Commit `baseline_inorder.json` to the repo.** It is the "before" half of
every comparison you will make for the rest of the semester, and regenerating
it after you've deleted the in-order core is impossible.

---

## Checkpoints

| # | Check | Command |
|---|---|---|
| 1 | Latches | `make -C testbench latches` |
| 2 | Forwarding | `make -C testbench forward` |
| 3 | Hazard unit | `make -C testbench hazard` |
| 4 | Load/store | `make sim PROG=02_ldst` |
| 5 | Branches | `make sim PROG=03_branch` |
| 6 | Full regression | `make test` |
| 7 | Latency sweep recorded | `baseline_inorder.json` exists |

---

## Bugs to expect

**Forwarding from x0.** `add x0, t1, t2` writes nothing, but a naive
comparison sees `rd == 0` matching a source of `x0` and forwards garbage.
Guard on `rd != 0`.

**Stall and flush in the same cycle.** A load-use stall coinciding with a
branch flush. Flush wins — the stalled instruction is being squashed anyway.

**Forwarding into the wrong stage.** Forwarding paths feed the *EX* stage
inputs, not ID. Wiring them to ID reads a value one cycle too early.

**The `clr`/`en` priority inversion.** If `en` beats `clr`, a squashed
instruction survives the flush. This only shows up when a stall and a flush
coincide, which is rare enough to survive casual testing and fail your
regression.
