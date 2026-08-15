/*
  cdb_if.vh
  Common data bus. This replaces the forwarding unit of an in-order pipeline:
  one result is broadcast to every reservation station and the ROB in the same
  cycle, rather than being routed along dedicated bypass paths.

  Only one result may win the bus per cycle. The arbiter decides; losing units
  must hold their result and retry, so `gnt` is not optional.
*/
`ifndef CDB_IF_VH
`define CDB_IF_VH
`include "cpu_types_pkg.vh"

interface cdb_if #(parameter int N_FU = 4);
  import cpu_types_pkg::*;

  // request side, one bit/payload per functional unit
  logic [N_FU-1:0] req;
  logic [N_FU-1:0] gnt;
  cdb_t [N_FU-1:0] payload;

  // broadcast side
  cdb_t bcast;

  modport arb (
    input  req, payload,
    output gnt, bcast
  );
  modport fu (
    output req, payload,
    input  gnt
  );
  modport snoop (            // reservation stations and ROB listen only
    input  bcast
  );
  modport tb (
    output req, payload,
    input  gnt, bcast
  );
endinterface
`endif //CDB_IF_VH
