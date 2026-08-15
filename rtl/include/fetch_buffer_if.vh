/*
  fetch_buffer_if.vh
  FIFO between the instruction memory response and dispatch.

  It exists because imem has variable latency: without a buffer, every cycle
  the memory is slow is a cycle dispatch is starved, even when useful work is
  available. The buffer decouples the two.

  Watch full/empty when head == tail. Track an explicit count or a wrap bit;
  inferring fullness from pointer equality alone is ambiguous and is the
  standard FIFO bug.
*/
`ifndef FETCH_BUFFER_IF_VH
`define FETCH_BUFFER_IF_VH
`include "cpu_types_pkg.vh"

interface fetch_buffer_if #(parameter int DEPTH = 4);
  import cpu_types_pkg::*;

  logic  push;
  logic  pop;
  logic  flush;

  word_t in_instr;
  word_t in_pc;
  logic  in_pred_taken;
  word_t in_pred_target;

  word_t out_instr;
  word_t out_pc;
  logic  out_pred_taken;
  word_t out_pred_target;

  logic  full;
  logic  empty;
  logic [$clog2(DEPTH+1)-1:0] count;

  modport fb  (input  push, pop, flush, in_instr, in_pc, in_pred_taken,
                      in_pred_target,
               output out_instr, out_pc, out_pred_taken, out_pred_target,
                      full, empty, count);
  modport cpu (output push, pop, flush, in_instr, in_pc, in_pred_taken,
                      in_pred_target,
               input  out_instr, out_pc, out_pred_taken, out_pred_target,
                      full, empty, count);
  modport tb  (output push, pop, flush, in_instr, in_pc, in_pred_taken,
                      in_pred_target,
               input  out_instr, out_pc, out_pred_taken, out_pred_target,
                      full, empty, count);
endinterface
`endif //FETCH_BUFFER_IF_VH
