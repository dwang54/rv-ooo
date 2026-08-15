`include "cpu_types_pkg.vh"
// -----------------------------------------------------------------------------
// tb_top.sv
// Simulation top level for Verilator + cocotb. Wires core_top to a split
// instruction/data memory model. Memory latency is a plusarg so a single build can be swept:
//   +LATENCY=1 ... +LATENCY=16
// -----------------------------------------------------------------------------
module tb_top
#(
    parameter int    ID_W      = 4,
    parameter int    IMEM_LAT  = 1,
    parameter int    DMEM_LAT  = 4,
    parameter bit    RAND_LAT  = 1'b0,
    parameter bit    OOO_RESP  = 1'b0,
    parameter logic [31:0] BASE_ADDR = 32'h8000_0000,
    parameter string IMAGE     = "program.hex"
) (
    input logic clk,
    input logic rst_n
);

  // ---- instruction port ----------------------------------------------------
  logic          i_rq_v, i_rq_r, i_rs_v, i_rs_r;
  logic [ID_W-1:0] i_rq_id, i_rs_id;
  logic [31:0]   i_rq_a, i_rs_d;

  // ---- data port -----------------------------------------------------------
  logic          d_rq_v, d_rq_r, d_rq_we, d_rs_v, d_rs_r;
  logic [ID_W-1:0] d_rq_id, d_rs_id;
  logic [31:0]   d_rq_a, d_rq_wd, d_rs_d;
  logic [3:0]    d_rq_be;

  // These are sampled from Python over VPI, so the simulator cannot see them
  // being read. Waived deliberately, not because they are dead.
  /* verilator lint_off UNUSEDSIGNAL */
  logic        commit_valid, commit_rd_we;
  logic [31:0] commit_pc, commit_instr, commit_rd_wdata;
  logic [4:0]  commit_rd_addr;
  logic        halted;
  logic        i_rs_err, d_rs_err;
  logic [63:0] perf_cycles, perf_instret, perf_branches, perf_mispredicts;
  logic [63:0] perf_stall_rob_full, perf_stall_rs_full;
  /* verilator lint_on UNUSEDSIGNAL */

  core_top #(
      .ID_W(ID_W), .PC_INIT(BASE_ADDR)
  ) u_core (
      .clk, .rst_n,
      .imem_req_valid (i_rq_v),  .imem_req_ready (i_rq_r),
      .imem_req_id    (i_rq_id), .imem_req_addr  (i_rq_a),
      .imem_resp_valid(i_rs_v),  .imem_resp_ready(i_rs_r),
      .imem_resp_id   (i_rs_id), .imem_resp_rdata(i_rs_d),

      .dmem_req_valid (d_rq_v),  .dmem_req_ready (d_rq_r),
      .dmem_req_id    (d_rq_id), .dmem_req_addr  (d_rq_a),
      .dmem_req_we    (d_rq_we), .dmem_req_be    (d_rq_be),
      .dmem_req_wdata (d_rq_wd),
      .dmem_resp_valid(d_rs_v),  .dmem_resp_ready(d_rs_r),
      .dmem_resp_id   (d_rs_id), .dmem_resp_rdata(d_rs_d),

      .commit_valid, .commit_pc, .commit_instr,
      .commit_rd_we, .commit_rd_addr, .commit_rd_wdata,
      .perf_cycles, .perf_instret, .perf_branches, .perf_mispredicts,
      .perf_stall_rob_full, .perf_stall_rs_full,
      .halted
  );

  // Instruction memory: read-only, in-order, low latency.
  mem_model #(
      .ID_W(ID_W), .LATENCY(IMEM_LAT), .BASE_ADDR(BASE_ADDR), .INIT_HEX(IMAGE)
  ) u_imem (
      .clk, .rst_n,
      .req_valid(i_rq_v), .req_ready(i_rq_r), .req_id(i_rq_id),
      .req_addr (i_rq_a), .req_we(1'b0), .req_be(4'h0), .req_wdata(32'h0),
      .resp_valid(i_rs_v), .resp_ready(i_rs_r), .resp_id(i_rs_id),
      .resp_rdata(i_rs_d), .resp_err(i_rs_err)
  );

  // Data memory: this is the one you sweep. Same image so the .data section
  // is present; the two models share nothing else.
  mem_model #(
      .ID_W(ID_W), .LATENCY(DMEM_LAT), .RANDOM_LATENCY(RAND_LAT),
      .OOO_RESP(OOO_RESP), .BASE_ADDR(BASE_ADDR), .INIT_HEX(IMAGE)
  ) u_dmem (
      .clk, .rst_n,
      .req_valid(d_rq_v), .req_ready(d_rq_r), .req_id(d_rq_id),
      .req_addr (d_rq_a), .req_we(d_rq_we), .req_be(d_rq_be),
      .req_wdata(d_rq_wd),
      .resp_valid(d_rs_v), .resp_ready(d_rs_r), .resp_id(d_rs_id),
      .resp_rdata(d_rs_d), .resp_err(d_rs_err)
  );

  // ---- waveform dump -------------------------------------------------------
  initial begin
    if ($test$plusargs("TRACE")) begin
      $dumpfile("dump.vcd");
      $dumpvars(0, tb_top);
    end
  end

endmodule
