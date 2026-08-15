/*
  immgen_if.vh
  Immediate generator. Separated from the decoder so the sign-extension and
  field-shuffling logic can be tested exhaustively on its own.

  B-type and J-type immediates already include their implicit trailing zero.
  Do NOT shift them again in the branch unit -- double-shifting is the classic
  bug here and produces branches that land two instructions past the target.
*/
`ifndef IMMGEN_IF_VH
`define IMMGEN_IF_VH
`include "cpu_types_pkg.vh"

interface immgen_if;
  import cpu_types_pkg::*;

  word_t   instr;
  immsel_t sel;
  word_t   imm;

  modport immgen (input instr, sel, output imm);
  modport cpu    (output instr, sel, input imm);
  modport tb     (output instr, sel, input imm);
endinterface
`endif //IMMGEN_IF_VH
