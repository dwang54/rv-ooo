/*
  hazard_if.vh
  Hazard detection and forwarding for the WEEK 2 IN-ORDER BASELINE ONLY.

  These units do not exist in the out-of-order design. Register renaming makes
  WAR and WAW hazards structurally impossible, and the common data bus replaces
  point-to-point forwarding with a broadcast. Both modules are deleted at
  Week 3. They are here because the in-order pipeline is the measured baseline
  the Tomasulo core is compared against -- not because they carry forward.
*/
`ifndef HAZARD_IF_VH
`define HAZARD_IF_VH
`include "cpu_types_pkg.vh"

typedef enum logic [1:0] {
  FWD_NONE,     // use the register file value
  FWD_EX,       // from the EX/MEM latch
  FWD_MEM,      // from the MEM/WB latch
  FWD_WB        // write-before-read inside the register file
} fwdsel_t;

interface forward_if;
  import cpu_types_pkg::*;

  regbits_t ex_rs1;
  regbits_t ex_rs2;
  regbits_t mem_rd;
  logic     mem_we;
  regbits_t wb_rd;
  logic     wb_we;

  fwdsel_t  sel_a;
  fwdsel_t  sel_b;

  modport fwd (input  ex_rs1, ex_rs2, mem_rd, mem_we, wb_rd, wb_we,
               output sel_a, sel_b);
  modport cpu (output ex_rs1, ex_rs2, mem_rd, mem_we, wb_rd, wb_we,
               input  sel_a, sel_b);
  modport tb  (output ex_rs1, ex_rs2, mem_rd, mem_we, wb_rd, wb_we,
               input  sel_a, sel_b);
endinterface

interface hazard_if;
  import cpu_types_pkg::*;

  // A load in EX whose destination is a source of the instruction in ID
  // cannot be forwarded -- the data does not exist yet. One bubble required.
  logic     id_uses_rs1;
  logic     id_uses_rs2;
  regbits_t id_rs1;
  regbits_t id_rs2;
  regbits_t ex_rd;
  logic     ex_is_load;
  logic     ex_we;

  logic     mem_stall;     // memory not ready
  logic     mispredict;

  logic     stall_pc;
  logic     stall_if_id;
  logic     bubble_id_ex;
  logic     flush_if_id;
  logic     flush_id_ex;

  modport hz  (input  id_uses_rs1, id_uses_rs2, id_rs1, id_rs2, ex_rd,
                      ex_is_load, ex_we, mem_stall, mispredict,
               output stall_pc, stall_if_id, bubble_id_ex,
                      flush_if_id, flush_id_ex);
  modport cpu (output id_uses_rs1, id_uses_rs2, id_rs1, id_rs2, ex_rd,
                      ex_is_load, ex_we, mem_stall, mispredict,
               input  stall_pc, stall_if_id, bubble_id_ex,
                      flush_if_id, flush_id_ex);
  modport tb  (output id_uses_rs1, id_uses_rs2, id_rs1, id_rs2, ex_rd,
                      ex_is_load, ex_we, mem_stall, mispredict,
               input  stall_pc, stall_if_id, bubble_id_ex,
                      flush_if_id, flush_id_ex);
endinterface
`endif //HAZARD_IF_VH
