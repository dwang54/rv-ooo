# 03_branch.S -- branch direction, backward loops, and JAL/JALR linkage.
# The loop below is the workload your branch predictor accuracy number comes
# from: 32 taken iterations then one not-taken, which a 2-bit counter should
# get almost perfectly and a static not-taken predictor should get badly wrong.
    .globl main
main:
    li   s0, 0          # accumulator
    li   t0, 0          # i
    li   t1, 32         # trip count
loop:
    add  s0, s0, t0
    addi t0, t0, 1
    bne  t0, t1, loop

    li   t2, 496        # sum(0..31)
    bne  s0, t2, fail

    # JAL / JALR round trip.
    # Link through t6, not ra -- ra still holds crt0's return address and
    # clobbering it makes main() return into the weeds.
    jal  t6, leaf
    li   t3, 42
    bne  a1, t3, fail

    # BEQ taken
    li   t0, 9
    li   t1, 9
    beq  t0, t1, ok
    j    fail
ok:
    li   a0, 0
    ret
fail:
    li   a0, 1
    ret

leaf:
    li   a1, 42
    jalr x0, 0(t6)
