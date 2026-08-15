/*
  rat_if.vh
  Register alias table. Maps each architectural register to the ROB tag of the
  instruction that will produce its next value, or marks it as held in the
  architectural register file.

  This is the mechanism that eliminates WAR and WAW hazards. When a second
  writer to the same architectural register is dispatched, it simply overwrites
  the mapping -- the earlier writer keeps its own ROB slot and its consumers
  keep the older tag. Nothing has to stall.

  On a mispredict flush, every entry must revert to "in the register file".
  Missing that leaves stale tags pointing at squashed ROB slots, and consumers
  wait forever for a broadcast that will never come.
*/
`ifndef RAT_IF_VH
`define RAT_IF_VH
`include "cpu_types_pkg.vh"

interface rat_if;
  import cpu_types_pkg::*;

  // lookup, two sources per dispatched instruction
  regbits_t rsel1;
  regbits_t rsel2;
  logic     busy1;      // 1 = value not yet produced, wait on tag1
  robtag_t  tag1;
  logic     busy2;
  robtag_t  tag2;

  // allocate: this instruction now owns rd
  logic     set_valid;
  regbits_t set_rd;
  robtag_t  set_tag;

  // commit: tag retired, mapping returns to the register file unless a
  // younger instruction has since claimed rd
  logic     clr_valid;
  regbits_t clr_rd;
  robtag_t  clr_tag;

  logic     flush;

  modport rat (input  rsel1, rsel2, set_valid, set_rd, set_tag,
                      clr_valid, clr_rd, clr_tag, flush,
               output busy1, tag1, busy2, tag2);
  modport cpu (output rsel1, rsel2, set_valid, set_rd, set_tag,
                      clr_valid, clr_rd, clr_tag, flush,
               input  busy1, tag1, busy2, tag2);
  modport tb  (output rsel1, rsel2, set_valid, set_rd, set_tag,
                      clr_valid, clr_rd, clr_tag, flush,
               input  busy1, tag1, busy2, tag2);
endinterface
`endif //RAT_IF_VH
