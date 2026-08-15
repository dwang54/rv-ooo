/*
  latch_if.vh
  Pipeline registers for the in-order baseline (Week 2). One interface per
  stage boundary.

  All four share the same control convention:
    en    - capture new data this cycle (low = stall, hold current contents)
    clr   - insert a bubble (flush) this cycle
  clr takes priority over en. A latch that honours en over clr will keep a
  squashed instruction alive through a branch flush.

  These disappear at Week 3 when reservation stations replace the in-order
  pipeline. They are kept in the tree because the in-order core remains the
  IPC baseline the out-of-order design is measured against.
*/
`ifndef LATCH_IF_VH
`define LATCH_IF_VH
`include "cpu_types_pkg.vh"

// ---------------------------------------------------------------- IF / ID --
interface if_id_if;
  import cpu_types_pkg::*;

  logic  en;
  logic  clr;
  logic  in_valid;
  word_t in_instr;
  word_t in_pc;
  word_t in_pc_plus4;
  logic  in_pred_taken;

  logic  out_valid;
  word_t out_instr;
  word_t out_pc;
  word_t out_pc_plus4;
  logic  out_pred_taken;

  modport latch (input  en, clr, in_valid, in_instr, in_pc, in_pc_plus4,
                        in_pred_taken,
                 output out_valid, out_instr, out_pc, out_pc_plus4,
                        out_pred_taken);
  modport cpu   (output en, clr, in_valid, in_instr, in_pc, in_pc_plus4,
                        in_pred_taken,
                 input  out_valid, out_instr, out_pc, out_pc_plus4,
                        out_pred_taken);
  modport tb    (output en, clr, in_valid, in_instr, in_pc, in_pc_plus4,
                        in_pred_taken,
                 input  out_valid, out_instr, out_pc, out_pc_plus4,
                        out_pred_taken);
endinterface

// ---------------------------------------------------------------- ID / EX --
interface id_ex_if;
  import cpu_types_pkg::*;

  logic     en;
  logic     clr;
  logic     in_valid;
  decoded_t in_dec;
  word_t    in_pc;
  word_t    in_pc_plus4;
  word_t    in_instr;
  word_t    in_rdat1;
  word_t    in_rdat2;
  logic     in_pred_taken;

  logic     out_valid;
  decoded_t out_dec;
  word_t    out_pc;
  word_t    out_pc_plus4;
  word_t    out_instr;
  word_t    out_rdat1;
  word_t    out_rdat2;
  logic     out_pred_taken;

  modport latch (input  en, clr, in_valid, in_dec, in_pc, in_pc_plus4,
                        in_instr, in_rdat1, in_rdat2, in_pred_taken,
                 output out_valid, out_dec, out_pc, out_pc_plus4,
                        out_instr, out_rdat1, out_rdat2, out_pred_taken);
  modport cpu   (output en, clr, in_valid, in_dec, in_pc, in_pc_plus4,
                        in_instr, in_rdat1, in_rdat2, in_pred_taken,
                 input  out_valid, out_dec, out_pc, out_pc_plus4,
                        out_instr, out_rdat1, out_rdat2, out_pred_taken);
  modport tb    (output en, clr, in_valid, in_dec, in_pc, in_pc_plus4,
                        in_instr, in_rdat1, in_rdat2, in_pred_taken,
                 input  out_valid, out_dec, out_pc, out_pc_plus4,
                        out_instr, out_rdat1, out_rdat2, out_pred_taken);
endinterface

// --------------------------------------------------------------- EX / MEM --
interface ex_mem_if;
  import cpu_types_pkg::*;

  logic     en;
  logic     clr;
  logic     in_valid;
  decoded_t in_dec;
  word_t    in_pc;
  word_t    in_instr;
  word_t    in_alu_out;     // also the effective address for loads/stores
  word_t    in_store_data;
  word_t    in_link;

  logic     out_valid;
  decoded_t out_dec;
  word_t    out_pc;
  word_t    out_instr;
  word_t    out_alu_out;
  word_t    out_store_data;
  word_t    out_link;

  modport latch (input  en, clr, in_valid, in_dec, in_pc, in_instr,
                        in_alu_out, in_store_data, in_link,
                 output out_valid, out_dec, out_pc, out_instr,
                        out_alu_out, out_store_data, out_link);
  modport cpu   (output en, clr, in_valid, in_dec, in_pc, in_instr,
                        in_alu_out, in_store_data, in_link,
                 input  out_valid, out_dec, out_pc, out_instr,
                        out_alu_out, out_store_data, out_link);
  modport tb    (output en, clr, in_valid, in_dec, in_pc, in_instr,
                        in_alu_out, in_store_data, in_link,
                 input  out_valid, out_dec, out_pc, out_instr,
                        out_alu_out, out_store_data, out_link);
endinterface

// --------------------------------------------------------------- MEM / WB --
interface mem_wb_if;
  import cpu_types_pkg::*;

  logic     en;
  logic     clr;
  logic     in_valid;
  decoded_t in_dec;
  word_t    in_pc;
  word_t    in_instr;
  word_t    in_wdata;       // ALU result, load data, or link value

  logic     out_valid;
  decoded_t out_dec;
  word_t    out_pc;
  word_t    out_instr;
  word_t    out_wdata;

  modport latch (input  en, clr, in_valid, in_dec, in_pc, in_instr, in_wdata,
                 output out_valid, out_dec, out_pc, out_instr, out_wdata);
  modport cpu   (output en, clr, in_valid, in_dec, in_pc, in_instr, in_wdata,
                 input  out_valid, out_dec, out_pc, out_instr, out_wdata);
  modport tb    (output en, clr, in_valid, in_dec, in_pc, in_instr, in_wdata,
                 input  out_valid, out_dec, out_pc, out_instr, out_wdata);
endinterface
`endif //LATCH_IF_VH
