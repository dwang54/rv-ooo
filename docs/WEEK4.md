# Week 4 — Reorder buffer and precise commit

**Goal:** results are written back out of order but *committed* in order, so
the architectural state is always exactly what a sequential machine would have
produced.

---

## Reading — why out-of-order isn't enough

Week 3's core executes out of order but has no coherent notion of
architectural state. That breaks two things badly:

**Exceptions.** If instruction 10 faults while instruction 12 has already
written its result, the machine is in a state no sequential execution could
produce. There is no PC to restart from.

**Speculation.** If a branch is mispredicted, everything after it must be
undone. If those instructions already wrote the register file, there is
nothing to undo them with.

Both need the same thing: **results must be held somewhere revocable until
we're certain they should happen.**

### The reorder buffer

A circular FIFO. Instructions are allocated slots at dispatch in program order,
results land in slots out of order, and slots retire from the head in program
order.

```
        head (commit)                          tail (allocate)
          |                                      |
        [ ADD  ready ][ DIV  busy  ][ LW  ready ][ free ]
```

`DIV` is slow. `LW` after it has already finished — its result sits in its ROB
slot. It does **not** write the register file. When `DIV` completes, `ADD`
commits, then `DIV`, then `LW`. Architectural state updates in program order
even though execution didn't.

That property is called **precise state**, and it's what makes the machine a
usable processor rather than a fast calculator.

### What commit actually does

For the instruction at the head, once `ready`:

1. If it writes a register, write the architectural register file.
2. If it's a store, release it to memory (this is when a store becomes real).
3. Clear the RAT entry — but **only if the RAT still points at this tag**. A
   younger instruction may have since renamed the same architectural register,
   and clearing then would lose that mapping.
4. If it mispredicted, flush everything and redirect fetch.
5. Advance the head.

Step 3 is subtle and its failure mode is a consumer waiting on a tag that will
never broadcast again.

### Full vs empty

`head == tail` means both empty and full. You must disambiguate. Either keep an
explicit `count`, or add one extra bit to each pointer and compare wrap bits.
This is the single most common ROB bug and it presents as a lockup once the
buffer first fills.

### Sizing

`ROB_DEPTH` bounds how many instructions can be in flight. Too small and you
stall constantly. Too large and you spend area and hurt timing for nothing.

Don't guess — you have `perf_stall_rob_full`. Sweep 8/16/32 and plot IPC. That
sweep is a genuine microarchitectural result and takes one afternoon.

---

## Day-by-day

### Day 1 — ROB storage and pointers

Implement `rob_if`: allocation, the entry array, head/tail with unambiguous
full/empty.

**Checkpoint:** `make -C testbench rob` — fill it completely, drain it
completely, wrap around several times.

### Day 2 — Writeback

Snoop the CDB. On a tag match, store the value and set `ready`.

### Day 3 — Operand lookup

When dispatch renames a source to a tag, the ROB may already have that value.
Return it directly rather than making the RS wait for a broadcast that already
happened.

### Day 4 — Commit

Implement the five-step sequence above. Drive the flat `commit_*` outputs —
these are the co-simulation contract.

**Checkpoint:** `00_smoke` passes co-simulation with real commit.

### Day 5 — Stores at commit

Stores must not reach memory before commit. Hold them in the ROB and release
on retire.

**Checkpoint:** `02_ldst` passes.

### Day 6 — Full regression

All six programs. This is the milestone where the design is a real
out-of-order processor.

### Day 7 — ROB depth sweep

```bash
for d in 8 16 32; do
  make sim PROG=04_hazards ROB_DEPTH=$d | grep PERF
done
git tag -a m4-rob -m "reorder buffer, precise in-order commit"
```

---

## Checkpoints

| # | Check | Command |
|---|---|---|
| 1 | ROB wraparound | `make -C testbench rob` |
| 2 | Writeback from CDB | `make -C testbench rob` |
| 3 | Operand lookup | `make -C testbench rob` |
| 4 | Commit trace | `make sim PROG=00_smoke` |
| 5 | Stores at commit | `make sim PROG=02_ldst` |
| 6 | Full regression | `make test` |
| 7 | Depth sweep recorded | IPC vs ROB_DEPTH |

---

## Bugs to expect

**Full/empty ambiguity.** Covered above. Symptom: lockup once the ROB first
fills, which may be thousands of instructions in.

**Clearing a RAT entry a younger instruction owns.** Check the tag matches
before clearing.

**Committing more than one instruction per cycle by accident.** Fine to do
deliberately later, but the commit trace must still pulse once per instruction
in program order or co-simulation breaks.

**Store released at execute rather than commit.** Passes every test without a
mispredicted branch above a store, then corrupts memory.

**Not marking a store `ready`.** Stores produce no register result, so nothing
sets `ready` from the CDB. They must be marked ready when their address and
data resolve, or the ROB head never advances.
