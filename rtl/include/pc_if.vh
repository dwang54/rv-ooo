/*
  pc_if.vh
  Program counter register. Deliberately tiny: a register, an enable, and a
  redirect port. Everything else (fetch buffer, predictor lookup, imem
  handshake) lives in its own module and is combined in fetch.sv.

  `en` is the stall input. When the fetch buffer is full or imem is not ready,
  the PC must hold -- a PC that free-runs while nothing is being fetched is the
  single most common early bug.
*/
`ifndef PC_IF_VH
`define PC_IF_VH
`include "cpu_types_pkg.vh"

interface pc_if;
  import cpu_types_pkg::*;

  logic  en;              // advance this cycle
  logic  redirect_valid;  // overrides normal advance
  word_t redirect_pc;
  word_t next_pc;         // predicted or sequential target
  word_t pc;              // current architectural fetch address
  word_t pc_plus4;

  // NOTE: the modport is 'pcreg', not 'pc' -- a modport may not share a name
  // with a signal in the same interface.
  modport pcreg (input  en, redirect_valid, redirect_pc, next_pc,
                 output pc, pc_plus4);
  modport cpu (output en, redirect_valid, redirect_pc, next_pc,
               input  pc, pc_plus4);
  modport tb  (output en, redirect_valid, redirect_pc, next_pc,
               input  pc, pc_plus4);
endinterface
`endif //PC_IF_VH
