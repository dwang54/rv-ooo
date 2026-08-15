/*
  alu_if.vh
  Combinational ALU. No handshake: the result is valid the same cycle the
  operands are.
*/
`ifndef ALU_IF_VH
`define ALU_IF_VH
`include "cpu_types_pkg.vh"

interface alu_if;
  import cpu_types_pkg::*;

  aluop_t aluop;
  word_t  port_a;
  word_t  port_b;
  word_t  out;
  logic   zero;
  logic   negative;
  logic   overflow;

  modport alu (
    input  aluop, port_a, port_b,
    output out, zero, negative, overflow
  );
  modport ex (
    output aluop, port_a, port_b,
    input  out, zero, negative, overflow
  );
  modport tb (
    output aluop, port_a, port_b,
    input  out, zero, negative, overflow
  );
endinterface
`endif //ALU_IF_VH
