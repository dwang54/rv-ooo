/*
  rs_if.vh
  Reservation station. Parameterized on depth so one module serves the ALU,
  mul/div, branch and LSU stations rather than being written four times.

  An entry issues when both operands are resolved and the functional unit can
  accept. Operand readiness is tracked with explicit wait flags, not by
  comparing the tag to zero -- tag 0 is a legal ROB slot.
*/
`ifndef RS_IF_VH
`define RS_IF_VH
`include "cpu_types_pkg.vh"

interface rs_if #(parameter int DEPTH = 4);
  import cpu_types_pkg::*;

  // dispatch -> RS
  logic      alloc_req;
  logic      alloc_gnt;       // deasserted when every entry is busy
  rs_entry_t alloc_entry;

  // RS -> functional unit
  logic      issue_valid;
  logic      issue_ready;     // unit can accept this cycle
  rs_entry_t issue_entry;

  // status
  logic      full;
  logic [$clog2(DEPTH+1)-1:0] count;   // occupancy, for the RS pressure plots

  // recovery
  logic      flush;

  modport rs (
    input  alloc_req, alloc_entry, issue_ready, flush,
    output alloc_gnt, issue_valid, issue_entry, full, count
  );
  modport dispatch (
    output alloc_req, alloc_entry,
    input  alloc_gnt, full, count
  );
  modport fu (
    input  issue_valid, issue_entry,
    output issue_ready
  );
  modport tb (
    output alloc_req, alloc_entry, issue_ready, flush,
    input  alloc_gnt, issue_valid, issue_entry, full, count
  );
endinterface
`endif //RS_IF_VH
