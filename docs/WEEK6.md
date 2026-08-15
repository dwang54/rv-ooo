# Week 6 — Branch prediction and speculation recovery

**Goal:** the front end predicts branches and keeps fetching past them; on a
mispredict, the machine recovers to a precise state and restarts.

---

## Reading — the cost of not knowing

A branch resolves in a functional unit, several cycles after fetch. Without
prediction, fetch must stall until it resolves. With a deep out-of-order
machine, that's most of your throughput gone — and the deeper the machine, the
worse it gets.

So: guess, keep going, and be able to undo it.

### Two-bit saturating counters

The predictor is a table of 2-bit counters indexed by PC bits:

```
00 strongly-not-taken  01 weakly-not-taken
10 weakly-taken        11 strongly-taken
```

Taken increments, not-taken decrements, both saturating. Predict taken when
the top bit is set.

**Why two bits rather than one.** Consider a loop that runs 32 times:

```
T T T T ... T N      (32 taken, then one not-taken exit)
```

A 1-bit predictor gets the exit wrong (inevitable), then *also* gets the first
iteration of the next entry wrong, because the single not-taken flipped it.
Two mispredicts per loop execution.

A 2-bit counter sitting at `11` drops to `10` on the exit — still predicting
taken. Next entry is correct. **One** mispredict. On nested loops this
difference compounds.

`03_branch.S` is written with a 32-iteration loop precisely so this shows up in
your accuracy number.

### The branch target buffer

Knowing a branch is taken isn't enough — you need the target, and computing it
requires decoding the instruction, which happens after fetch. So cache it: the
BTB maps PC to the last observed target.

A BTB miss on a predicted-taken branch means you can't fetch the target yet.
Treat it as not-taken and correct later.

### Recovery

On a mispredict, everything younger than the branch must vanish. Two places
you can do it:

**At commit (simple).** Wait until the branch reaches the ROB head, then flush
everything. Correct, easy, and slow — you pay the full ROB drain.

**At execute (fast).** Flush as soon as the branch resolves. Requires snapshots
of the RAT to restore the rename state, which is real complexity.

**Start with commit-time recovery.** Get it correct, measure the penalty, then
decide whether execute-time recovery is worth building. "Commit-time recovery
costs N cycles per mispredict; at 94% accuracy that's X% of total cycles" is a
better sentence than an unmeasured claim that you built the fast version.

### What flush must clear

Miss any of these and you get a subtle deadlock rather than a wrong answer:

- ROB entries younger than the branch
- All reservation station entries (or just younger ones, if you track age)
- LSQ entries younger than the branch — **but not committed stores**
- Every RAT `busy` bit (safe: after a full flush nothing is in flight)
- The fetch buffer
- In-flight memory requests, or at least a way to ignore their responses

That last one is the sneaky one. A load squashed by a flush may still have a
memory request outstanding. Its response will arrive after the flush, and if
you don't drop it, it writes into a reallocated LSQ entry.

---

## Day-by-day

### Day 1 — BHT

Implement the counter table in `bpred_if`. Index with `pc[BHT_IDX_W+1:2]` —
skip the low two bits, instructions are word-aligned.

**Checkpoint:** `make -C testbench bpred` — feed `T T T T N` repeatedly and
confirm the counter saturates and survives one surprise.

### Day 2 — BTB

Tagged, direct-mapped is fine. Update on every resolved taken branch.

### Day 3 — Front-end integration

Predictor lookup in fetch, prediction carried alongside the instruction through
dispatch into the branch unit.

### Day 4 — Mispredict detection

The branch unit compares actual against predicted. Recovery PC is the target
for a wrongly-not-taken branch, and `pc+4` for a wrongly-taken one. Getting
this backwards passes every always-taken test.

### Day 5 — Flush

Implement commit-time recovery against the checklist above.

**Checkpoint:** `03_branch` passes; `perf_mispredicts` is non-zero and
plausible.

### Day 6 — Full regression, both memory modes

### Day 7 — Accuracy measurement

```bash
python3 scripts/run_regression.py --lat 1 4 16
git tag -a m6-bpred -m "branch prediction and speculation recovery"
```

Report accuracy per program. `03_branch` should exceed 90%; a program with data
dependent branches will be much lower, and that contrast is worth discussing.

---

## Checkpoints

| # | Check | Command |
|---|---|---|
| 1 | 2-bit counter | `make -C testbench bpred` |
| 2 | BTB hit/miss | `make -C testbench bpred` |
| 3 | Prediction carried | waveform |
| 4 | Mispredict detected | `perf_mispredicts > 0` |
| 5 | Flush correctness | `make sim PROG=03_branch` |
| 6 | Full regression | `make test` |
| 7 | Accuracy reported | regression JSON |

---

## Bugs to expect

**Recovery PC backwards.** Covered above.

**Not flushing in-flight memory responses.** A squashed load's response
arrives after the flush and lands in a reallocated entry. Tag responses with a
generation counter, or track which requests are still live.

**Updating the predictor from squashed branches.** Only resolved,
non-squashed branches should train the BHT.

**Indexing the BHT with `pc[7:0]`.** The low two bits are always zero, so
you've halved your effective table and aliased every branch pair. Use
`pc[9:2]`.

**A mispredicted branch that never commits.** If flush logic clears the ROB
entry of the branch itself, the head never advances. The branch must commit
*then* flush everything younger.
