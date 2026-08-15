# 05_muldiv.S -- multi-cycle functional units.
#
# This is the test that makes out-of-order completion visible: a long-latency
# DIV followed by independent single-cycle work. On an in-order machine every
# subsequent instruction waits; on yours they should retire around it while the
# ROB still commits in program order.
    .globl main
main:
    li   t0, 7
    li   t1, 6
    mul  t2, t0, t1
    li   t3, 42
    bne  t2, t3, fail

    li   t0, 100
    li   t1, 7
    div  t2, t0, t1     # 14
    li   t3, 14
    bne  t2, t3, fail

    # long-latency op followed by independent work
    li   a1, 1000000
    li   a2, 3
    div  a3, a1, a2     # slow
    li   s1, 1          # independent -- should not wait
    li   s2, 2
    add  s3, s1, s2
    li   t4, 3
    bne  s3, t4, fail

    li   t5, 333333
    bne  a3, t5, fail

    li   a0, 0
    ret
fail:
    li   a0, 1
    ret
