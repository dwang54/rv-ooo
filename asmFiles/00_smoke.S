# 00_smoke.S -- absolute minimum: does the core fetch, decode, and write x?
# Passing this means fetch/decode/regfile/ALU are alive. Nothing more.
    .globl main
main:
    li   t0, 5
    li   t1, 7
    add  t2, t0, t1        # 12
    li   t3, 12
    bne  t2, t3, fail
    sub  t4, t2, t0        # 7
    bne  t4, t1, fail
    li   a0, 0
    ret
fail:
    li   a0, 1
    ret
