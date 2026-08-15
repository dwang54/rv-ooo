/*
  brcond_if.vh
  Branch condition evaluator. Just the comparison -- target calculation lives
  in the branch unit.

  Kept separate because signed vs unsigned comparison is easy to get wrong and
  trivial to test exhaustively in isolation.
*/
`ifndef BRCOND_IF_VH
`define BRCOND_IF_VH
`include "cpu_types_pkg.vh"

interface brcond_if;
  import cpu_types_pkg::*;

  word_t op_a;
  word_t op_b;
  logic  invert;       // BNE rather than BEQ
  logic  taken;

  modport brcond (input op_a, op_b, invert, output taken);
  modport cpu    (output op_a, op_b, invert, input taken);
  modport tb     (output op_a, op_b, invert, input taken);
endinterface
`endif //BRCOND_IF_VH
