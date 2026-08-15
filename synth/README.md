# synth/

Two synthesis paths. Use both — they answer different questions.

| | Yosys | Vivado |
|---|---|---|
| Runtime | seconds | 10–40 min |
| Install | ~50 MB, apt | ~100 GB |
| Where | WSL, in CI | native Windows |
| Numbers | generic cells | real LUT/FF/BRAM/DSP, real Fmax |
| Use for | every commit | milestones |

## Yosys (fast loop)

```bash
sudo apt install yosys
bash scripts/synth_check.sh
```

Catches non-synthesizable constructs and area regressions. Appends to
`synth/reports/area_history.txt` so growth over the semester is visible.

Cell counts here will **not** match Vivado. Don't report them.

## Vivado (real numbers)

Install Vivado ML Standard (free) on the Windows side, then from a Windows
terminal:

```
vivado -mode batch -source synth/vivado/synth.tcl
vivado -mode batch -source synth/vivado/synth.tcl -tclargs 8.0
```

The optional argument is the clock period in ns.

Runs **out-of-context**: no pin assignments, no I/O buffers. This measures your
core's critical path rather than pad delays, which is the right number for
"what Fmax does this microarchitecture achieve." Adding a board later means
adding a pin XDC — the flow doesn't change.

## Finding Fmax

Vivado never tells you Fmax. It tells you whether you met the constraint you
gave it. So binary-search:

```
-tclargs 10.0   ->  WNS +2.1  (met, too loose)
-tclargs 8.0    ->  WNS +0.4  (met)
-tclargs 7.0    ->  WNS -0.6  (missed)
-tclargs 7.5    ->  WNS +0.05 (met — report ~133 MHz)
```

Report the tightest period that meets timing. Three or four runs gets you there.

## Expected results

Rough targets for the finished out-of-order core on `xc7a100t`:

| Metric | Ballpark |
|---|---|
| LUTs | 8,000–15,000 |
| FFs | 5,000–10,000 |
| BRAM (RAMB36) | 16 (64 KiB) |
| DSP | 2–4 (multiplier) |
| Fmax | 60–120 MHz |

**If BRAM reads 0 and LUTs are enormous,** memory inference failed and your
64 KB became distributed RAM. Check that you built with `rtl/fpga/bram.sv` and
not `rtl/mem/mem_model.sv` — the latter is simulation-only and will never
infer.

**If Fmax is far below 60 MHz,** read `timing.rpt`. On this design the critical
path is almost always the CDB broadcast: one result fanning out to every
reservation station in a single cycle. Pipelining it costs a cycle of latency
and usually buys a lot of clock — and that tradeoff, measured, is a better
results section than any single number.
