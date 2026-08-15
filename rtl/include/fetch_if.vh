/*
  fetch_if.vh
  Fetch stage to dispatch. Also carries the redirect port, which is how the
  branch unit and ROB steer the PC on a mispredict.

  Redirect priority: a ROB-driven flush (commit-time recovery) always outranks
  a speculative branch-unit redirect. Getting that backwards produces bugs that
  only appear when two branches are in flight at once.
*/
`ifndef FETCH_IF_VH
`define FETCH_IF_VH
`include "cpu_types_pkg.vh"

interface fetch_if;
  import cpu_types_pkg::*;

  // fetch -> dispatch
  logic  instr_valid;
  logic  instr_ready;     // dispatch can accept
  word_t instr;
  word_t pc;
  word_t pc_plus4;
  logic  pred_taken;      // predictor's guess, carried for later checking
  word_t pred_target;

  // redirect: branch unit / ROB -> fetch
  logic  redirect_valid;
  word_t redirect_pc;
  logic  flush;           // squash everything in the front end

  modport fetch (
    output instr_valid, instr, pc, pc_plus4, pred_taken, pred_target,
    input  instr_ready, redirect_valid, redirect_pc, flush
  );
  modport dispatch (
    input  instr_valid, instr, pc, pc_plus4, pred_taken, pred_target,
    output instr_ready
  );
  modport redirect (
    output redirect_valid, redirect_pc, flush
  );
  modport tb (
    input  instr_valid, instr, pc, pc_plus4, pred_taken, pred_target,
    output instr_ready, redirect_valid, redirect_pc, flush
  );
endinterface
`endif //FETCH_IF_VH
