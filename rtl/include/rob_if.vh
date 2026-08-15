/*
  rob_if.vh
  Reorder buffer: allocation at dispatch, writeback from the CDB, in-order
  commit at retire.

  The classic bug here is full/empty ambiguity when head == tail. Track an
  explicit count or an extra wrap bit -- do not infer fullness from pointer
  equality alone.
*/
`ifndef ROB_IF_VH
`define ROB_IF_VH
`include "cpu_types_pkg.vh"

interface rob_if;
  import cpu_types_pkg::*;

  // allocate (dispatch)
  logic       alloc_req;
  logic       alloc_gnt;      // deasserted when the ROB is full
  robtag_t    alloc_tag;
  decoded_t   alloc_dec;
  word_t      alloc_pc;
  word_t      alloc_instr;

  // operand lookup: has this tag already produced a value?
  robtag_t    q_tag1;
  robtag_t    q_tag2;
  logic       q_ready1;
  logic       q_ready2;
  word_t      q_val1;
  word_t      q_val2;

  // commit (retire)
  commit_t    commit;
  logic       commit_store;   // store may now be released to memory
  word_t      commit_addr;
  word_t      commit_data;

  // recovery
  logic       flush;
  word_t      flush_pc;

  // status
  logic       full;
  logic       empty;

  modport rob (
    input  alloc_req, alloc_dec, alloc_pc, alloc_instr, q_tag1, q_tag2,
    output alloc_gnt, alloc_tag, q_ready1, q_ready2, q_val1, q_val2,
           commit, commit_store, commit_addr, commit_data,
           flush, flush_pc, full, empty
  );
  modport dispatch (
    output alloc_req, alloc_dec, alloc_pc, alloc_instr, q_tag1, q_tag2,
    input  alloc_gnt, alloc_tag, q_ready1, q_ready2, q_val1, q_val2, full
  );
  modport tb (
    output alloc_req, alloc_dec, alloc_pc, alloc_instr, q_tag1, q_tag2,
    input  alloc_gnt, alloc_tag, q_ready1, q_ready2, q_val1, q_val2,
           commit, commit_store, commit_addr, commit_data,
           flush, flush_pc, full, empty
  );
endinterface
`endif //ROB_IF_VH
