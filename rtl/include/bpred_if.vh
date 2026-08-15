/*
  bpred_if.vh
  Branch predictor: a BHT of 2-bit saturating counters plus a BTB for targets.
  Lookup is combinational off the fetch PC; update comes from the branch unit
  when a branch resolves.

  A 2-bit counter needs TWO consecutive surprises to change its prediction,
  which is what makes it beat a 1-bit counter on loops: the single not-taken
  exit at the end of a loop does not flip the prediction for the next entry.
*/
`ifndef BPRED_IF_VH
`define BPRED_IF_VH
`include "cpu_types_pkg.vh"

interface bpred_if #(parameter int BHT_IDX_W = 8, parameter int BTB_IDX_W = 6);
  import cpu_types_pkg::*;

  // lookup (combinational, same cycle as fetch)
  word_t lookup_pc;
  logic  pred_taken;
  logic  btb_hit;
  word_t pred_target;

  // update (from the branch unit on resolve)
  logic  upd_valid;
  word_t upd_pc;
  logic  upd_taken;
  word_t upd_target;
  logic  upd_mispredict;

  modport bp  (input  lookup_pc, upd_valid, upd_pc, upd_taken, upd_target,
                      upd_mispredict,
               output pred_taken, btb_hit, pred_target);
  modport cpu (output lookup_pc, upd_valid, upd_pc, upd_taken, upd_target,
                      upd_mispredict,
               input  pred_taken, btb_hit, pred_target);
  modport tb  (output lookup_pc, upd_valid, upd_pc, upd_taken, upd_target,
                      upd_mispredict,
               input  pred_taken, btb_hit, pred_target);
endinterface
`endif //BPRED_IF_VH
