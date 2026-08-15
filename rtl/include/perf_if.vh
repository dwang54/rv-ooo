/*
  perf_if.vh
  Performance counters. Free to add, and they are what turn "it works" into a
  results section: IPC, branch accuracy, and where the stall cycles went.

  Count stall REASONS separately. "The core stalled 4,000 cycles" is not a
  finding; "3,100 of those were ROB-full" tells you to make the ROB deeper.
*/
`ifndef PERF_IF_VH
`define PERF_IF_VH
`include "cpu_types_pkg.vh"

interface perf_if;
  logic [63:0] cycles;
  logic [63:0] instret;
  logic [63:0] branches;
  logic [63:0] mispredicts;
  logic [63:0] stall_rob_full;
  logic [63:0] stall_rs_full;
  logic [63:0] stall_lsq_full;
  logic [63:0] stall_imem;
  logic [63:0] stall_dmem;
  logic [63:0] cdb_conflicts;
  logic [63:0] store_forwards;

  modport perf (output cycles, instret, branches, mispredicts,
                       stall_rob_full, stall_rs_full, stall_lsq_full,
                       stall_imem, stall_dmem, cdb_conflicts, store_forwards);
  modport tb   (input  cycles, instret, branches, mispredicts,
                       stall_rob_full, stall_rs_full, stall_lsq_full,
                       stall_imem, stall_dmem, cdb_conflicts, store_forwards);
endinterface
`endif //PERF_IF_VH
