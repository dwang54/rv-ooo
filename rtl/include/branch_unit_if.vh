/*
  branch_unit_if.vh
  Resolves branches and jumps: computes the target, compares against the
  prediction, and raises a mispredict.

  On a mispredict the recovery PC is NOT always the branch target -- for a
  wrongly-taken branch it is pc+4. Getting this backwards passes every
  always-taken test and fails only on the not-taken path.
*/
`ifndef BRANCH_UNIT_IF_VH
`define BRANCH_UNIT_IF_VH
`include "cpu_types_pkg.vh"

interface branch_unit_if;
  import cpu_types_pkg::*;

  logic      valid;
  word_t     pc;
  word_t     op_a;        // rs1 value
  word_t     op_b;        // rs2 value
  word_t     imm;
  logic      is_branch;
  logic      is_jump;
  logic      is_jalr;
  logic      invert;
  logic      pred_taken;
  word_t     pred_target;
  robtag_t   tag_in;

  logic      resolved;
  logic      taken;
  word_t     target;
  logic      mispredict;
  word_t     recover_pc;  // where fetch must restart
  word_t     link_value;  // pc+4, written to rd for JAL/JALR
  robtag_t   tag_out;

  modport bu (
    input  valid, pc, op_a, op_b, imm, is_branch, is_jump, is_jalr,
           invert, pred_taken, pred_target, tag_in,
    output resolved, taken, target, mispredict, recover_pc, link_value, tag_out
  );
  modport cpu (
    output valid, pc, op_a, op_b, imm, is_branch, is_jump, is_jalr,
           invert, pred_taken, pred_target, tag_in,
    input  resolved, taken, target, mispredict, recover_pc, link_value, tag_out
  );
  modport tb (
    output valid, pc, op_a, op_b, imm, is_branch, is_jump, is_jalr,
           invert, pred_taken, pred_target, tag_in,
    input  resolved, taken, target, mispredict, recover_pc, link_value, tag_out
  );
endinterface
`endif //BRANCH_UNIT_IF_VH
