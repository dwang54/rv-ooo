# Week 5 — Load/store queue and memory disambiguation

**Goal:** memory operations execute out of order safely — loads forward from
older stores, and no load reads data an older store was about to write.

---

## Reading — why memory is the hard part

Register dependencies are easy: the register number is in the instruction, so
you know at *decode* which instructions conflict.

Memory isn't. Consider:

```
sw  t0, 0(a0)
lw  t1, 0(a1)
```

Do these conflict? It depends entirely on whether `a0 == a1`, which isn't known
until both addresses are computed. Register renaming can't help — there is no
name to rename.

This is **memory disambiguation**, and it's why the LSQ is a separate structure
rather than just another reservation station.

### The two rules

**1. A store must not reach memory before it commits.**

Stores are irreversible. Once memory is written there is no undo. If a store
executes speculatively and the branch above it turns out mispredicted, memory
is corrupted permanently. So stores sit in the LSQ, addresses and data
resolved, and are released only when the ROB commits them.

**2. A load may only execute when every older store's address is known.**

If an older store's address is still unresolved, it *might* alias with this
load. Executing anyway risks reading stale data. Three policies:

| Policy | Behavior | Cost |
|---|---|---|
| Conservative | load waits for all older store addresses | simple, slow |
| Speculative | load executes; squash if an aliasing store appears | fast, needs recovery |
| Predictive | predict whether aliasing will occur | best, complex |

**Implement conservative.** It's correct, it's simple, and — importantly — it
gives you a measurable baseline. "Conservative disambiguation costs N% IPC on
this workload" is a real result, and it motivates the speculative version as
future work without requiring you to build it.

### Store-to-load forwarding

When a load's address matches an older store already sitting in the LSQ, the
data is right there. Return it directly instead of going to memory:

```
sw  t0, 0(a0)      # in LSQ, not yet committed
lw  t1, 0(a0)      # same address -- forward from the store
```

Without forwarding this load would have to wait for the store to commit and
then read memory — dozens of cycles. With it, one.

**Match the newest older store**, not the first one found. If two older stores
wrote the same address, the younger one holds the correct value.

Count forwards (`perf_store_forwards`). On pointer-heavy code it's a
surprisingly large number and makes a good plot.

### Out-of-order responses

Once `OOO_RESP=1` on the memory model, responses come back in a different order
than requests were issued. The LSQ must match responses to loads by **ID**, not
by assuming FIFO order. This is the whole reason that mode exists in the model
— it forces the LSQ to be correct rather than accidentally correct.

---

## Day-by-day

### Day 1 — LSQ structure

Implement `lsq_if`: in-order allocation at dispatch, entries holding
`{is_store, tag, addr, addr_valid, data, data_valid}`.

**Checkpoint:** `make -C testbench lsq`

### Day 2 — Address generation

Loads and stores compute `rs1 + imm` in their reservation station, then write
the address into their LSQ entry.

### Day 3 — Conservative load issue

A load may issue only when every older entry has `addr_valid`. Walk backward
from the load to the LSQ head.

### Day 4 — Store-to-load forwarding

On a load whose address matches an older store with `data_valid`, forward
instead of issuing to memory. Newest matching store wins.

**Checkpoint:** `02_ldst` passes; `perf_store_forwards` is non-zero.

### Day 5 — Store release at commit

The ROB signals `commit_store`; the LSQ issues the write and frees the entry.

### Day 6 — Out-of-order memory responses

Switch the model to `RAND_LAT=1, OOO_RESP=1` and match responses by ID.

```bash
make sim PROG=02_ldst RAND_LAT=1 OOO_RESP=1
```

**Checkpoint:** the full regression passes in both memory modes.

### Day 7 — Measure

```bash
python3 scripts/run_regression.py --lat 1 2 4 8 16
git tag -a m5-lsq -m "load/store queue with forwarding and disambiguation"
```

---

## Checkpoints

| # | Check | Command |
|---|---|---|
| 1 | LSQ alloc/free | `make -C testbench lsq` |
| 2 | Address generation | `make sim PROG=02_ldst` |
| 3 | Conservative issue | `make -C testbench lsq` |
| 4 | Store forwarding | `perf_store_forwards > 0` |
| 5 | Commit-time stores | `make test` |
| 6 | OOO responses | `make test OOO_RESP=1` |
| 7 | Latency sweep | regression JSON |

---

## Bugs to expect

**Forwarding from the wrong store.** Oldest match instead of newest. Only
breaks when two stores hit the same address.

**Partial forwarding.** Only relevant if you add sub-word accesses. You
scoped `SB`/`SH` out, so a store either fully covers a load or doesn't overlap
at all — one of the quiet benefits of that scoping decision.

**Forwarding from a store whose data isn't ready.** The address may resolve
before the data. Check `data_valid`, not just an address match.

**Loads bypassing an unresolved older store.** The disambiguation violation.
Fails intermittently, only when addresses happen to alias.

**Assuming FIFO memory responses.** Works at fixed latency, breaks the moment
`OOO_RESP=1`.
