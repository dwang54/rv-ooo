/*
  decoder_if.vh
  Purely combinational instruction decode. Wraps cpu_types_pkg::decode() in a
  module so it can be instantiated, unit-tested, and (if you later want) given
  a pipeline register on its output.

  `dec.valid` low means the instruction is outside the implemented subset. The
  testbench treats that as an error rather than executing it as a NOP -- an
  unimplemented instruction silently becoming a NOP is how you get a
  co-simulation mismatch 200 instructions later with no obvious cause.
*/
`ifndef DECODER_IF_VH
`define DECODER_IF_VH
`include "cpu_types_pkg.vh"

interface decoder_if;
  import cpu_types_pkg::*;

  word_t    instr;
  word_t    pc;
  decoded_t dec;
  logic     illegal;      // !dec.valid, broken out for convenience

  modport decoder (input instr, pc, output dec, illegal);
  modport cpu     (output instr, pc, input dec, illegal);
  modport tb      (output instr, pc, input dec, illegal);
endinterface
`endif //DECODER_IF_VH
