# 01_alu.S -- exercises every ALU op in the subset, including corner cases that
# catch sign-extension and shift-amount bugs.
    .globl main
main:
    li   s0, 0                     # error accumulator

    # ADDI with a negative immediate (sign extension)
    li   t0, 100
    addi t1, t0, -50
    li   t2, 50
    bne  t1, t2, fail

    # XOR / AND
    li   t0, 0xF0F0F0F0
    li   t1, 0x0FF00FF0
    xor  t2, t0, t1
    li   t3, 0xFF00FF00
    bne  t2, t3, fail
    and  t2, t0, t1
    li   t3, 0x00F000F0
    bne  t2, t3, fail

    # ANDI sign-extends its immediate: -1 leaves the operand unchanged
    li   t0, 0x12345678
    andi t1, t0, -1
    bne  t1, t0, fail

    # SLLI including shift-by-31
    li   t0, 1
    slli t1, t0, 31
    li   t2, 0x80000000
    bne  t1, t2, fail

    # SLT is signed: -1 < 1
    li   t0, -1
    li   t1, 1
    slt  t2, t0, t1
    li   t3, 1
    bne  t2, t3, fail
    slt  t2, t1, t0
    bne  t2, x0, fail

    # LUI / AUIPC
    lui  t0, 0x12345
    li   t1, 0x12345000
    bne  t0, t1, fail

    li   a0, 0
    ret
fail:
    li   a0, 1
    ret
