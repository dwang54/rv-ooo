# Week 3 — Register renaming, reservation stations, common data bus

**Goal:** instructions issue out of order into reservation stations, execute
when their operands arrive, and broadcast results on a common data bus.
Commit is still in order but *ad hoc* — the ROB arrives next week.

This is the week the project stops being a normal undergraduate CPU.

---

## Reading — the actual idea

### The problem Tomasulo solves

In an in-order pipeline, one stalled instruction blocks everything behind it:

```
lw   t0, 0(a0)      # 8 cycles at DMEM_LAT=8
add  t1, t0, t2     # waits for t0 -- genuinely must wait
add  t3, t4, t5     # waits too -- but it has NO dependency at all
```

The third instruction is independent. It could execute immediately. In-order
execution forbids it purely because of program order, not because of any real
dependency. **Tomasulo's algorithm removes that artificial constraint.**

### False dependencies

Not every register conflict is a real one. Three kinds:

| Type | Pattern | Real? |
|---|---|---|
| **RAW** (true) | write then read | Yes — data must flow |
| **WAR** (anti) | read then write | No — artifact of reusing a register name |
| **WAW** (output) | write then write | No — same |

```
add t0, t1, t2      # writes t0
sub t3, t0, t4      # RAW on t0        -- real
add t0, t5, t6      # WAW on t0, WAR vs the sub -- both fake
```

The last instruction has no data relationship with the first two. It's only
"dependent" because the compiler happened to reuse the name `t0`. There are 32
architectural registers and vastly more values in flight.

### Renaming makes false dependencies disappear

Give every in-flight result its own **tag** — its ROB slot number. Registers
stop being storage locations and become *pointers to the most recent producer*.

The **register alias table (RAT)** holds that mapping. At dispatch:

1. For each source, ask the RAT: is there a pending producer? If yes, record
   its tag and mark the operand as waiting. If no, read the value from the
   architectural register file.
2. For the destination, allocate a ROB slot and write `rd → tag` into the RAT.

When the third instruction above renames `t0` to a new tag, the `sub` is
unaffected — it already captured the *old* tag. WAR and WAW hazards don't need
to be detected or stalled on. They stop existing.

### Reservation stations

A reservation station is a waiting room for one instruction. Each entry holds:

```
busy    aluop    dest        (which ROB slot this result belongs to)
vj  qj  qj_wait              (operand 1: value, or tag we're waiting on)
vk  qk  qk_wait              (operand 2: same)
```

If an operand is ready at dispatch, its value goes in `vj`/`vk`. If not, the
producer's tag goes in `qj`/`qk` and the wait flag is set. An entry issues when
both wait flags are clear and the functional unit can accept.

**Why the explicit wait flags.** The classic textbook presentation uses `qj ==
0` to mean "ready". That works only if tag 0 is reserved. In this design ROB
slot 0 is a perfectly ordinary slot, so a zero tag is ambiguous. Use the flags.
This is a real bug that shows up as one instruction intermittently reading a
stale operand, and it's miserable to find.

### The common data bus

When a functional unit finishes, it broadcasts `{tag, value}` on the CDB. Every
reservation station compares that tag against both of its waiting operands and
captures the value on a match. The ROB captures it too.

This *is* the forwarding network — but broadcast instead of point-to-point.
There are no dedicated bypass paths and no forwarding unit, because a result
reaches every possible consumer in the same cycle.

The cost: only one result can broadcast per cycle. Units that finish
simultaneously contend, and losers must hold their result and retry. Count
those conflicts (`perf_cdb_conflicts`) — if the number is large, that's an
argument for a second CDB, and a measured one.

**This is also where your Fmax will die.** One net fanning out to every RS
entry is the classic critical path in a Tomasulo implementation. Expect it, and
treat "pipelining the CDB cost one cycle of latency and bought N MHz" as a
result worth reporting.

---

## Day-by-day

### Day 1 — RAT

Implement `rat_if`. 32 entries of `{busy, tag}`.

Reset and flush must clear every `busy` bit. A stale tag pointing at a squashed
ROB slot leaves consumers waiting for a broadcast that will never come, and the
core silently deadlocks.

**Checkpoint:** `make -C testbench rat`

### Day 2 — Reservation station

Implement `rs_if`, parameterized on `DEPTH`. Allocation, CDB snooping, issue
select.

Issue policy: oldest-ready-first is both simplest and best. Random or
lowest-index selection measurably hurts IPC.

**Checkpoint:** `make -C testbench rs`

### Day 3 — CDB arbiter

Implement `cdb_if`. Fixed-priority is fine to start; count conflicts.

**Checkpoint:** `make -C testbench cdb`

### Day 4 — Dispatch

Wire RAT + RS together. Read operands from the architectural regfile when not
renamed; capture tags when they are.

Stall dispatch when the target RS is full — and count it separately from other
stalls (`perf_stall_rs_full`).

### Day 5 — Integration

Replace the in-order EX stage with RS + functional units + CDB. Keep a simple
in-order retire for now: commit when the oldest instruction's result appears.

**Checkpoint:** `00_smoke` and `01_alu` pass.

### Day 6 — Hazard tests

`04_hazards.S` is the real test this week — it's built specifically around WAW
and WAR patterns. On the in-order core it passed trivially. Here it exercises
the renaming machinery.

**Checkpoint:** `04_hazards` and `05_muldiv` pass.

### Day 7 — First out-of-order evidence

```bash
make sim PROG=05_muldiv WAVES=1
gtkwave dump.vcd
```

Find a `DIV` in flight and confirm independent ALU instructions complete
*before* it. That waveform is worth a screenshot in your README — it is the
most direct visual evidence that the machine is genuinely out of order.

---

## Checkpoints

| # | Check | Command |
|---|---|---|
| 1 | RAT | `make -C testbench rat` |
| 2 | Reservation station | `make -C testbench rs` |
| 3 | CDB arbiter | `make -C testbench cdb` |
| 4 | Smoke + ALU | `make test` |
| 5 | Hazards | `make sim PROG=04_hazards` |
| 6 | Mul/div | `make sim PROG=05_muldiv` |
| 7 | OOO completion observed | waveform screenshot |

---

## Bugs to expect

**Zero tag treated as ready.** Covered above. Use `qj_wait`/`qk_wait`.

**Missing a broadcast during allocation.** An instruction dispatched in the
same cycle a result is broadcast must capture that broadcast. If you write the
RS entry from the RAT lookup and ignore the concurrent CDB, the operand waits
forever on a tag that has already fired. This deadlocks, and only for specific
timing alignments.

**Reading the regfile for a renamed register.** If the RAT says busy, the
architectural value is stale by definition.

**Forgetting the RS is full.** Silent overwrite of a live entry. Always check
`alloc_gnt`.

**Two units broadcasting at once.** Without arbitration both write the CDB and
you get X's, or worse, one value with the other's tag.
