# Week 1 — Single-cycle baseline

**Goal:** a single-cycle RV32I core that passes lockstep co-simulation against
Spike on all six directed tests.

This is not the interesting part of the project, and that's the point. The
baseline exists to prove three things before you build anything hard: the
harness works, the decoder is right, and you have a *measured* in-order number
to compare the out-of-order core against. Skipping it means your final "2.1×
IPC improvement" claim rests on a number you never actually took.

Check progress at any time:

```bash
python3 scripts/week1_check.py          # full status
python3 scripts/week1_check.py --next   # just what's blocking you
```

---

## Day 1 — Environment

Work through `docs/SETUP_WSL.md` end to end. Don't write RTL today; a
half-configured toolchain produces failures that look like design bugs and
you'll waste more time than the setup costs.

**Checkpoints 1–4** should go green:

```bash
bash scripts/check_env.sh     # all ok
make unit                     # 37 assertions pass
make asm                      # 6 programs + 6 golden logs
```

**Done when:** `week1_check.py` shows 4/11 and stops at "Core implemented."

> If Spike builds but produces an empty log, check that `crt0.S`'s `tohost`
> store is reaching address `0x0000F000` — Spike terminates on that write, and
> without it the log is truncated at the timeout.

---

## Day 2 — Fetch and the PC

Build only the front end: PC register, instruction memory handshake, and the
commit bundle wired to report `pc` and `instr`. Leave `rd_we` at zero.

The single most useful ordering decision in this whole week: **get the PC
stream right before you care about data.** A wrong PC makes every subsequent
comparison meaningless, and the scoreboard reports PC divergence before
writeback mismatches specifically so you can work in this order.

Sequential PC only today. No branches.

**Checkpoint:** run `00_smoke` and expect co-simulation to fail on a
*writeback* mismatch, not a PC divergence. That failure mode means fetch is
correct and only the datapath is missing.

```bash
python3 scripts/run_regression.py --tests 00_smoke
```

**Done when:** the error says "Writeback mismatch," not "PC divergence."

---

## Day 3 — Decode, register file, ALU

Wire in `rv32_pkg::decode()`, a 32×32 register file with `x0` hardwired to
zero, and the ALU. Drive the real commit bundle.

Three things that will bite, in order of how much time they cost people:

- **`x0` must read as zero and ignore writes.** `crt0.S` writes to `x0`
  constantly. The scoreboard already normalizes those away on the golden side,
  so if your core reports an `x0` write, you get a mismatch on almost the first
  instruction.
- **`ADDI`'s immediate is sign-extended.** `01_alu.S` tests `addi t1, t0, -50`
  precisely because zero-extending is the classic first bug.
- **The register file needs write-before-read forwarding** in the same cycle,
  or single-cycle execution reads stale operands.

**Checkpoint:**

```bash
python3 scripts/week1_check.py --from 5
```

**Done when:** checkpoint 6 (Fetch + decode) passes — `00_smoke` is clean.

---

## Day 4 — Full ALU coverage

Finish the remaining ops: `SUB` `XOR` `AND` `SLT` `ANDI` `SLLI` `LUI` `AUIPC`.

`SLT` is signed comparison — `-1 < 1` must be true. Doing an unsigned compare
here passes casual testing and fails `01_alu.S`, which is why that case is in
there.

`AUIPC` needs the instruction's *own* PC, not the next one. If you've already
incremented, you'll be off by four.

**Done when:** checkpoint 7 passes.

---

## Day 5 — Load/store unit

This is the day the memory interface stops being free. `LW` and `SW` talk to
`dmem` over ready/valid, and the response arrives `DMEM_LAT` cycles later — the
core must wait for `dmem_resp_valid`, not assume the data is there.

For the single-cycle baseline, stalling the whole core on a memory access is
correct and expected. That stall is exactly what the out-of-order design will
later eliminate, and it's why the baseline's IPC number is worth having.

Start with `DMEM_LAT=1`, then confirm you still pass at `DMEM_LAT=8`. If you
pass at 1 and fail at 8, you're sampling the response too early:

```bash
make -C verif/cocotb sim PROG=02_ldst DMEM_LAT=1
make -C verif/cocotb sim PROG=02_ldst DMEM_LAT=8
```

**Done when:** checkpoint 8 passes at both latencies.

---

## Day 6 — Branches and jumps

`BEQ` `BNE` `JAL` `JALR`, plus the redirect path back into fetch.

Watch the offsets: B-type and J-type immediates are already assembled correctly
by `get_imm()` in the package, including the implicit trailing zero. Don't
shift them again — double-shifting is the standard bug here and produces
branches that land two instructions past the target.

`JALR` must clear the low bit of the computed target. `04_hazards.S` passes
trivially on a single-cycle core (there's no overlap to create hazards), so
treat it as a regression guard rather than a real test — it becomes meaningful
in week three.

**Done when:** checkpoints 9 and 10 pass.

---

## Day 7 — Multi-cycle units, then lock in the baseline

`MUL` and `DIV`. These take multiple cycles, so the core must either stall
until the result is ready or track completion — sampling the result early is
the failure mode, and `05_muldiv.S` is written to catch it.

Then close out the week properly:

```bash
python3 scripts/week1_check.py      # expect 11/11
make lint                           # clean under -Wall
python3 scripts/run_regression.py --lat 1 2 4 8 16
```

That last command produces your baseline IPC-vs-latency curve. **Save
`regression_results.json`** — it's the "before" half of your final comparison,
and it is very annoying to reconstruct later.

Tag it:

```bash
git tag -a m1-single-cycle -m "single-cycle baseline, co-simulation clean"
git push --tags
```

**Done when:** 11/11, CI green, tag pushed, IPC numbers in the README.

---

## Progress at a glance

| Day | Deliverable | Checkpoint |
|---|---|---|
| 1 | Environment | 1–4 |
| 2 | Fetch + PC | fails on writeback, not PC |
| 3 | Decode + regfile + ALU | 6 |
| 4 | Full ALU | 7 |
| 5 | Load/store | 8 (at `DMEM_LAT` 1 and 8) |
| 6 | Branches + jumps | 9, 10 |
| 7 | Mul/div + baseline data | 11, tagged |

---

## If you fall behind

Days 5–7 are the compressible ones. Cutting `MUL`/`DIV` to week 2 costs you
nothing structurally — the RS and ROB don't depend on them, they just make the
eventual demo more convincing.

**Do not compress Days 1–3.** Everything downstream assumes co-simulation
works, and debugging a reorder buffer without a working scoreboard is
genuinely miserable — you lose far more time later than you save now.

## What to write down as you go

Keep a running note of every bug that costs you more than fifteen minutes:
symptom, root cause, fix. Two reasons. It's the raw material for the README's
engineering-decisions section, and "tell me about a hard bug you debugged" is
asked in essentially every hardware interview — the specific answer of
"double-shifted B-type immediate, branches landing two instructions late,
caught it by diffing the commit log against Spike" is worth considerably more
than a general claim that you're good at debugging.
