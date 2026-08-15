# 02_ldst.S -- load/store correctness and load-use dependency.
# On an out-of-order core this is the first test where independent work should
# slip past a pending load; on the in-order baseline it simply stalls.
    .globl main
main:
    la   t0, buf

    li   t1, 0xDEADBEEF
    sw   t1, 0(t0)
    li   t2, 0x12345678
    sw   t2, 4(t0)

    lw   t3, 0(t0)
    bne  t3, t1, fail

    # load-use: consumer immediately after the load
    lw   t4, 4(t0)
    addi t5, t4, 1
    li   t6, 0x12345679
    bne  t5, t6, fail

    # store-to-load forwarding through memory, same address
    li   t1, 0xCAFEBABE
    sw   t1, 8(t0)
    lw   t2, 8(t0)
    bne  t2, t1, fail

    # negative offset
    addi t0, t0, 16
    lw   t3, -16(t0)
    li   t4, 0xDEADBEEF
    bne  t3, t4, fail

    li   a0, 0
    ret
fail:
    li   a0, 1
    ret

    .section .data
    .align 4
buf:
    .space 64
