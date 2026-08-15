/*
  muldiv_if.vh
  Multi-cycle multiply/divide. This unit is the reason the machine has visible
  out-of-order completion, so it must NOT be a single-cycle `*` operator --
  keep the latency real (iterative or pipelined).
*/
`ifndef MULDIV_IF_VH
`define MULDIV_IF_VH
`include "cpu_types_pkg.vh"

interface muldiv_if;
  import cpu_types_pkg::*;

  logic    start;      // pulse to begin; ignored while busy
  aluop_t  aluop;      // ALU_MUL or ALU_DIV
  word_t   port_a;
  word_t   port_b;
  robtag_t tag_in;     // ROB slot travelling with the operation
  logic    busy;       // cannot accept a new start
  logic    done;       // one-cycle pulse when out/tag_out are valid
  word_t   out;
  robtag_t tag_out;
  logic    div_by_zero;

  modport muldiv (
    input  start, aluop, port_a, port_b, tag_in,
    output busy, done, out, tag_out, div_by_zero
  );
  modport ex (
    output start, aluop, port_a, port_b, tag_in,
    input  busy, done, out, tag_out, div_by_zero
  );
  modport tb (
    output start, aluop, port_a, port_b, tag_in,
    input  busy, done, out, tag_out, div_by_zero
  );
endinterface
`endif //MULDIV_IF_VH
