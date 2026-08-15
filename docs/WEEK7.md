# Week 7 — Performance analysis

**Goal:** turn a working processor into a set of defensible results.

No new features this week. This is where the project becomes something you can
talk about for twenty minutes in an interview.

---

## Reading — what makes a result credible

An unsupported claim ("my core is fast") is worth nothing. A measured
comparison with a stated methodology is worth a lot. The difference is usually
just discipline about three things:

**A baseline you measured yourself.** You have `baseline_inorder.json` from
Week 2 — same testbench, same memory model, same programs. That's why Week 2
existed.

**A varied parameter.** A single number is a data point; a curve is a finding.
"IPC 1.4" says little. "IPC stays flat as memory latency rises from 1 to 16
cycles, while the in-order baseline degrades 3.2×" is an argument about what
out-of-order execution actually buys.

**An explanation of the shape.** When someone asks "why does the curve flatten
after latency 8?", the answer should be a number you already have — ROB-full
stalls dominating, say — not a guess.

### The plots worth making

**IPC vs memory latency, both cores.** The headline. In-order degrades roughly
linearly; out-of-order stays much flatter until the ROB fills. The gap widening
with latency *is* the thesis.

**Stall cycle breakdown.** A stacked bar per program: ROB-full, RS-full,
LSQ-full, imem, dmem, mispredict. This tells you where to spend effort and
shows you know the difference between "it stalls" and "it stalls *here*".

**IPC vs ROB depth.** Sweep 8/16/32/64. Look for the knee. Past it, extra
entries buy nothing and cost area and timing — an argument about *design*, not
just measurement.

**Branch accuracy per program.** Contrast the loop-heavy case against
data-dependent branches.

**RS occupancy over time.** If stations are usually empty, dispatch is the
bottleneck, not execution. Genuinely useful and rarely measured.

### Amdahl's honesty

Your subset has no sub-word loads, no CSRs, no cache. Say so plainly in the
writeup. A stated limitation reads as rigor; an unstated one that an
interviewer discovers reads as carelessness. You will be asked what you'd do
differently — having that answer ready is worth more than the missing feature.

---

## Day-by-day

### Day 1 — Full data collection

```bash
python3 scripts/run_regression.py --lat 1 2 4 8 16 32 --json results_ooo.json
```

Both memory modes, all programs, all latencies.

### Day 2 — Plots

`scripts/plot_results.py` reads the regression JSON and the Week 2 baseline
and writes PNGs to `docs/figures/`.

### Day 3 — Stall analysis

Where do the cycles go? Use the per-reason counters, not a total.

### Day 4 — Parameter sweeps

ROB depth, RS depth per unit, fetch buffer depth. Find the knees.

### Day 5 — Write the results section

Every figure gets: what it shows, why the shape looks that way, what you'd do
next. Three sentences each is plenty.

### Day 6 — Longer workloads

Six directed tests are enough for correctness but thin for performance. Write
two or three real kernels — a bubble sort, a matrix multiply, a linked-list
traversal. The last one is the interesting case: pointer chasing is nearly all
load-use dependencies, so out-of-order execution helps least. Reporting a case
where your design *doesn't* win is a strong signal of honest measurement.

### Day 7 — README results section

```bash
git tag -a m7-results -m "performance analysis complete"
```

---

## Checkpoints

| # | Check |
|---|---|
| 1 | Full sweep collected |
| 2 | IPC vs latency plot, both cores |
| 3 | Stall breakdown per program |
| 4 | ROB depth knee identified |
| 5 | Results text written |
| 6 | 3+ realistic kernels added |
| 7 | README has figures and numbers |

---

## Sanity checks on your own data

**IPC above 1.0 on a single-issue machine** is impossible. If you see it,
`perf_instret` is double-counting — probably committing one instruction but
incrementing twice.

**Out-of-order IPC below in-order** at low latency is plausible, actually. At
`DMEM_LAT=1` there's little to hide and the OOO machine pays dispatch overhead.
The crossover is itself a result worth reporting.

**Branch accuracy of exactly 100%** means you're only counting resolved
branches that were predicted, or not counting at all.

**Identical IPC across memory latencies** means the sweep isn't taking effect —
check that `DMEM_LAT` is reaching the model.
