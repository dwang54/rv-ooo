# ------------------------------------------------------------------------------
# crt0.S -- minimal runtime.
# Zeroes bss, sets the stack pointer, calls main, then signals completion via
# HTIF tohost. main()'s return value becomes the exit code: 0 = pass.
# ------------------------------------------------------------------------------
    .section .text.init, "ax"
    .globl _start
_start:
    # Architectural state must be deterministic for lockstep comparison against
    # Spike, so every register is explicitly zeroed rather than left X.
    li  x1,  0
    li  x2,  0
    li  x3,  0
    li  x4,  0
    li  x5,  0
    li  x6,  0
    li  x7,  0
    li  x8,  0
    li  x9,  0
    li  x10, 0
    li  x11, 0
    li  x12, 0
    li  x13, 0
    li  x14, 0
    li  x15, 0
    li  x16, 0
    li  x17, 0
    li  x18, 0
    li  x19, 0
    li  x20, 0
    li  x21, 0
    li  x22, 0
    li  x23, 0
    li  x24, 0
    li  x25, 0
    li  x26, 0
    li  x27, 0
    li  x28, 0
    li  x29, 0
    li  x30, 0
    li  x31, 0

    la  sp, __stack_top

    # zero .bss
    la  t0, __bss_start
    la  t1, __bss_end
1:  bge t0, t1, 2f
    sw  x0, 0(t0)
    addi t0, t0, 4
    j   1b
2:

    jal ra, main

    # exit(code): tohost = (code << 1) | 1   -- HTIF encoding
    slli a0, a0, 1
    ori  a0, a0, 1
    la   t0, tohost
    sw   a0, 0(t0)

hang:
    j hang
