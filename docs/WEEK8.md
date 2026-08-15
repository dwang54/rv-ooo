# Week 8 — Synthesis and timing

**Goal:** real area and frequency numbers from Vivado, and a critical path you
understand well enough to discuss.

No board required. Out-of-context synthesis gives you Fmax, utilization, and
the critical path with nothing plugged in.

---

## Reading — what synthesis tells you

Simulation proves your design is *correct*. Synthesis tells you whether it can
be *built*, how big it is, and how fast it can run. Those are separate
questions, and a design can pass every test while being unsynthesizable.

### Timing, concretely

Every path between two flip-flops has a delay: clock-to-Q of the source, logic
and routing in between, setup time at the destination. For the design to work
at period `T`:

```
t_clk_to_q + t_logic + t_routing + t_setup  <  T
```

**Slack** is the margin. Positive means it fits; negative means it doesn't.
**WNS** (worst negative slack) is the tightest path in the design.

Vivado never reports "your Fmax is X". It reports whether you met the period
*you asked for*. So you binary-search: constrain 10ns, then 8, then 7, and
report the tightest one that meets timing.

### Where this design will be slow

**The CDB broadcast** is the near-certain critical path: one result fanning out
to every reservation station, every one of them comparing tags, all in a
cycle. Fanout is the enemy, and it grows with the number of RS entries.

**The RS issue-select** is second: picking the oldest ready entry is a priority
encoder over the whole station.

**A naive divider** is third. If you wrote combinational division, it will
dominate everything. Iterative is both smaller and faster.

The fix for the CDB is pipelining — register the broadcast, accept one extra
cycle of result latency. That costs a little IPC and usually buys a lot of
clock. **Measure both sides.** The tradeoff, quantified, is a better result
than either number alone.

### Area

| Resource | What it is | Expect |
|---|---|---|
| LUT | logic | 8,000–15,000 |
| FF | registers | 5,000–10,000 |
| RAMB36 | block RAM | 16 for 64 KiB |
| DSP48 | multipliers | 2–4 |

**If RAMB36 reads 0 and LUTs are enormous,** memory inference failed — your
64 KiB became distributed RAM. You built with `mem_model.sv` instead of
`bram.sv`.

---

## Day-by-day

### Day 1 — Make it synthesizable

```bash
bash scripts/synth_check.sh
```

Fix everything it reports. Common offenders: `initial` blocks, `$display`, and
delays inside `rtl/core`.

### Day 2 — Swap in the real memory

Build with `rtl/fpga/bram.sv`. Confirm the regression still passes — the
synthesizable memory has fixed 2-cycle latency and one outstanding request,
which is a stricter environment than the behavioral model.

### Day 3 — First Vivado run

```
vivado -mode batch -source synth/vivado/synth.tcl
```

Loose constraint (10 ns). Just get it through the flow.

### Day 4 — Find Fmax

Binary-search the period. Three or four runs.

### Day 5 — Read the critical path

`synth/reports/timing.rpt` names the actual nets. Find where the delay is.

### Day 6 — One optimization

Pick the top path and fix it. Usually: pipeline the CDB. Re-run the full
regression to confirm correctness, then re-synthesize and record both the new
Fmax and the IPC cost.

### Day 7 — Final numbers

```bash
git tag -a m8-synthesis -m "synthesis complete, timing closed at N MHz"
```

---

## Checkpoints

| # | Check |
|---|---|
| 1 | `synth_check.sh` clean |
| 2 | Regression passes with `bram.sv` |
| 3 | Vivado completes implementation |
| 4 | Fmax found by search |
| 5 | Critical path identified by name |
| 6 | One optimization, both effects measured |
| 7 | README has area and timing |

---

## For the README

State the part, the tool version, the flow, and the constraint. Something like:

> Synthesized out-of-context for Artix-7 `xc7a100tcsg324-1` in Vivado
> 2025.1. Meets timing at 7.5 ns (133 MHz) using 11,240 LUTs, 6,180 FFs,
> 16 RAMB36, and 3 DSP48. The critical path was the common data bus broadcast
> to the reservation stations; pipelining it cost 0.03 IPC and gained 31 MHz.

Every claim there is checkable, which is exactly the point.

---

## If you do buy a board later

Adding hardware is a two-day extension, not a rework:

1. Add a board XDC with pin LOCs (Digilent publishes a master file).
2. Wrap `core_top` with clock generation and the memory.
3. Drive LEDs or the 7-segment display from `commit_*`.
4. `write_bitstream`, program over JTAG.

The stretch version: stream the commit trace out over UART and run the **same**
Spike comparison against hardware that you run in simulation. "Co-simulated
against Spike in both RTL simulation and on FPGA" is a claim almost no
undergraduate project can make.
