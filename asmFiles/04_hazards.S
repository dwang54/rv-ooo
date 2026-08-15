# 04_hazards.S -- the register-renaming test.
#
# WAW and WAR hazards are exactly what Tomasulo's tag mechanism exists to
# resolve. A design that renames correctly passes this; one that lets a late
# writer clobber an earlier destination, or lets a young writer overwrite a
# source an old instruction has not yet read, fails here and nowhere else.
    .globl main
main:
    # --- RAW chain: strictly serialized, no ILP available -------------------
    li   t0, 1
    add  t1, t0, t0     # 2
    add  t2, t1, t1     # 4
    add  t3, t2, t2     # 8
    add  t4, t3, t3     # 16
    li   t5, 16
    bne  t4, t5, fail

    # --- WAW: same destination written twice in quick succession ------------
    li   t0, 111
    li   t0, 222
    li   t1, 222
    bne  t0, t1, fail

    # --- WAR: t2 is read here, then immediately rewritten -------------------
    li   t2, 7
    add  t3, t2, t2     # reads t2 == 7
    li   t2, 99         # rewrites t2; must not corrupt the add above
    li   t4, 14
    bne  t3, t4, fail

    # --- independent work interleaved with a long dependency chain ----------
    # An out-of-order machine should complete the s-register work while the
    # t-register chain is still resolving. This is where your IPC gain shows up.
    li   s1, 1
    li   s2, 2
    add  t0, t0, t0
    add  s3, s1, s2
    add  t0, t0, t0
    add  s4, s3, s2
    add  t0, t0, t0
    add  s5, s4, s2
    li   t6, 7          # s3=3, s4=5, s5=7
    bne  s5, t6, fail

    li   a0, 0
    ret
fail:
    li   a0, 1
    ret
