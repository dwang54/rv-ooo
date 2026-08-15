/*
  mem_if.vh
  Decoupled request/response memory port. Each request carries an ID and the
  response echoes it, which maps 1:1 onto AXI4 ARID/RID when the model is
  later swapped for an AXI shim.

  Responses may return out of order when the model is configured for it, so
  never assume the next response belongs to the oldest request -- match on ID.
*/
`ifndef MEM_IF_VH
`define MEM_IF_VH
`include "cpu_types_pkg.vh"

interface mem_if #(parameter int ID_W = 4);
  import cpu_types_pkg::*;

  logic              req_valid;
  logic              req_ready;
  logic [ID_W-1:0]   req_id;
  word_t             req_addr;
  logic              req_we;
  logic [WBYTES-1:0] req_be;
  word_t             req_wdata;

  logic              resp_valid;
  logic              resp_ready;
  logic [ID_W-1:0]   resp_id;
  word_t             resp_rdata;
  logic              resp_err;

  // Initiator: the core.
  modport cpu (
    output req_valid, req_id, req_addr, req_we, req_be, req_wdata, resp_ready,
    input  req_ready, resp_valid, resp_id, resp_rdata, resp_err
  );
  // Target: the memory model.
  modport mem (
    input  req_valid, req_id, req_addr, req_we, req_be, req_wdata, resp_ready,
    output req_ready, resp_valid, resp_id, resp_rdata, resp_err
  );
  modport tb (
    output req_valid, req_id, req_addr, req_we, req_be, req_wdata, resp_ready,
    input  req_ready, resp_valid, resp_id, resp_rdata, resp_err
  );
endinterface
`endif //MEM_IF_VH
