/*
  regfile_if.vh
  Architectural register file. Two read ports, one write port.

  Two rules that cause most early bugs:
    - x0 reads as zero and ignores writes.
    - A read of the register being written this cycle must return the NEW
      value (write-before-read), or single-cycle execution reads stale data.
*/
`ifndef REGFILE_IF_VH
`define REGFILE_IF_VH
`include "cpu_types_pkg.vh"

interface regfile_if;
  import cpu_types_pkg::*;

  logic     wen;
  regbits_t wsel;
  regbits_t rsel1;
  regbits_t rsel2;
  word_t    wdat;
  word_t    rdat1;
  word_t    rdat2;

  modport rf (
    input  wen, wsel, rsel1, rsel2, wdat,
    output rdat1, rdat2
  );
  modport cpu (
    output wen, wsel, rsel1, rsel2, wdat,
    input  rdat1, rdat2
  );
  modport tb (
    output wen, wsel, rsel1, rsel2, wdat,
    input  rdat1, rdat2
  );
endinterface
`endif //REGFILE_IF_VH
