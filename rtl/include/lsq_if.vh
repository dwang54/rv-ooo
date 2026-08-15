/*
  lsq_if.vh
  Load/store queue. Holds memory operations in program order, forwards from
  older stores to younger loads, and releases stores to memory only at commit.

  Two rules that define correctness here:
   1. A store must not reach memory until it commits. If it does and the
      branch above it was mispredicted, memory is corrupted and there is no
      way to undo it.
   2. A load may only proceed when every older store's address is known. An
      older store with an unresolved address might alias -- issuing the load
      anyway is a memory disambiguation violation.
*/
`ifndef LSQ_IF_VH
`define LSQ_IF_VH
`include "cpu_types_pkg.vh"

interface lsq_if #(parameter int DEPTH = 8);
  import cpu_types_pkg::*;

  // allocation, in program order at dispatch
  logic     alloc_req;
  logic     alloc_gnt;
  logic     alloc_is_store;
  robtag_t  alloc_tag;

  // address/data become available when the AGU resolves them
  logic     addr_valid;
  robtag_t  addr_tag;
  word_t    addr;
  logic     data_valid;
  robtag_t  data_tag;
  word_t    data;

  // load result path
  logic     load_done;
  robtag_t  load_tag;
  word_t    load_data;
  logic     load_forwarded;   // came from an older store, not memory

  // store release, driven by ROB commit
  logic     commit_store;
  robtag_t  commit_tag;

  logic     full;
  logic     flush;

  modport lsq (input  alloc_req, alloc_is_store, alloc_tag, addr_valid,
                      addr_tag, addr, data_valid, data_tag, data,
                      commit_store, commit_tag, flush,
               output alloc_gnt, load_done, load_tag, load_data,
                      load_forwarded, full);
  modport cpu (output alloc_req, alloc_is_store, alloc_tag, addr_valid,
                      addr_tag, addr, data_valid, data_tag, data,
                      commit_store, commit_tag, flush,
               input  alloc_gnt, load_done, load_tag, load_data,
                      load_forwarded, full);
  modport tb  (output alloc_req, alloc_is_store, alloc_tag, addr_valid,
                      addr_tag, addr, data_valid, data_tag, data,
                      commit_store, commit_tag, flush,
               input  alloc_gnt, load_done, load_tag, load_data,
                      load_forwarded, full);
endinterface
`endif //LSQ_IF_VH
