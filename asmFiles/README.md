# asmFiles

Assembly unit tests. One file per behaviour under test.

## Writing a test

```bash
make new NAME=07_myfeature
```

Conventions:
- Define `main:`. `crt0.S` calls it and uses the return value as the exit code.
- Return `0` in `a0` for pass, non-zero for fail.
- Branch to a `fail:` label on any mismatch.

The exit code doesn't actually decide pass/fail — **Spike co-simulation does**,
by comparing every retired instruction. The `a0` convention is a convenience so
a program is also meaningful when run standalone under Spike.

That distinction matters: your test doesn't have to *check* anything to be
useful. Any program that exercises a code path is a valid test, because the
scoreboard compares the entire architectural trace against the golden model.
Writing assertions is optional; exercising instructions is the point.

## Existing tests

| File | Exercises |
|---|---|
| `00_smoke.S` | fetch, decode, regfile, one ALU op |
| `01_alu.S` | every ALU op, sign extension, shift-by-31, signed compare |
| `02_ldst.S` | load/store, load-use, forwarding, negative offsets |
| `03_branch.S` | 32-iteration loop, JAL/JALR linkage |
| `04_hazards.S` | RAW chains, WAW, WAR — the renaming test |
| `05_muldiv.S` | multi-cycle units, independent work around a slow DIV |

## Tests worth adding

- **`06_sort.S`** — bubble sort over 32 elements. Realistic branch and memory mix.
- **`07_ptrchase.S`** — linked-list traversal. Nearly all load-use dependency,
  so out-of-order execution helps *least*. Reporting a case where your design
  doesn't win is a strong signal of honest measurement.
- **`08_matmul.S`** — small matrix multiply. Exercises the multiplier and
  regular memory access patterns.
- **`09_deps.S`** — alternating dependent and independent chains, tuned to
  saturate the reservation stations. Good for RS occupancy plots.

## Building

```bash
make            # all tests + golden logs
make 03_branch  # one
make dump       # disassembly
```

Requires `riscv-none-elf-gcc` and `spike` on PATH. If your toolchain uses a
different prefix, pass it: `make RISCV_PREFIX=riscv32-unknown-elf-`
