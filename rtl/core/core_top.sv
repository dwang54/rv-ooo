// -----------------------------------------------------------------------------
// core_top.sv
// Port-level contract for the core. THE BODY IS YOURS TO WRITE -- this file
// exists so the memory model, testbenches, co-simulation harness, CI and
// synthesis flow are all wired up and green before any datapath exists.
//
// Keep this port list stable across all three variants:
//   1. single-cycle baseline      (Week 1)
//   2. in-order 5-stage pipeline  (Week 2, the measured baseline)
//   3. Tomasulo + ROB             (Weeks 3-6)
// Because the ports don't change, the same testbench, the same Spike
// scoreboard and the same regression run against all three -- which is what
// makes the final IPC comparison an apples-to-apples number.
//
// NOTE ON STYLE: package types are written fully qualified
// (cpu_types_pkg::commit_t) rather than using a module-level `import`. Yosys
// rejects the module-header import form, and this project runs Yosys on every
// commit. Inside the body, `import cpu_types_pkg::*;` is fine.
// -----------------------------------------------------------------------------
`include "cpu_types_pkg.vh"

module core_top #(
    parameter int          ID_W    = 4,
    parameter logic [31:0] PC_INIT = 32'h8000_0000
) (
    input  logic                    clk,
    input  logic                    rst_n,

    // ---- instruction memory port ---------------------------------------
    output logic                    imem_req_valid,
    input  logic                    imem_req_ready,
    output logic [ID_W-1:0]         imem_req_id,
    output logic [31:0]             imem_req_addr,
    input  logic                    imem_resp_valid,
    output logic                    imem_resp_ready,
    input  logic [ID_W-1:0]         imem_resp_id,
    input  logic [31:0]             imem_resp_rdata,

    // ---- data memory port ----------------------------------------------
    output logic                    dmem_req_valid,
    input  logic                    dmem_req_ready,
    output logic [ID_W-1:0]         dmem_req_id,
    output logic [31:0]             dmem_req_addr,
    output logic                    dmem_req_we,
    output logic [3:0]              dmem_req_be,
    output logic [31:0]             dmem_req_wdata,
    input  logic                    dmem_resp_valid,
    output logic                    dmem_resp_ready,
    input  logic [ID_W-1:0]         dmem_resp_id,
    input  logic [31:0]             dmem_resp_rdata,

    // ---- commit trace (co-simulation contract) --------------------------
    // Exactly one pulse per architecturally retired instruction, in program
    // order. The scoreboard compares this against Spike's commit log.
    //
    // Flat signals rather than a packed struct, deliberately: struct ports are
    // rejected by Yosys, awkward to read from cocotb (they arrive flattened
    // and have to be bit-sliced), and painful to probe with an ILA on
    // hardware. cpu_types_pkg::commit_t is still used INTERNALLY -- this is
    // just the boundary.
    output logic                    commit_valid,
    output logic [31:0]             commit_pc,
    output logic [31:0]             commit_instr,
    output logic                    commit_rd_we,
    output logic [4:0]              commit_rd_addr,
    output logic [31:0]             commit_rd_wdata,

    // ---- performance counters ------------------------------------------
    output logic [63:0]             perf_cycles,
    output logic [63:0]             perf_instret,
    output logic [63:0]             perf_branches,
    output logic [63:0]             perf_mispredicts,
    output logic [63:0]             perf_stall_rob_full,
    output logic [63:0]             perf_stall_rs_full,

    // ---- end-of-test hook ----------------------------------------------
    // Assert when the program stores to HALT_ADDR (the HTIF tohost address),
    // which is the same event that terminates Spike.
    output logic                    halted
);

  import cpu_types_pkg::*;

  // ===========================================================================
  // TODO: replace everything below with the real design.
  // Build order is in docs/WEEK1.md through docs/WEEK8.md.
  // ===========================================================================

  assign imem_req_valid      = 1'b0;
  assign imem_req_id         = '0;
  assign imem_req_addr       = PC_INIT;
  assign imem_resp_ready     = 1'b1;

  assign dmem_req_valid      = 1'b0;
  assign dmem_req_id         = '0;
  assign dmem_req_addr       = '0;
  assign dmem_req_we         = 1'b0;
  assign dmem_req_be         = '0;
  assign dmem_req_wdata      = '0;
  assign dmem_resp_ready     = 1'b1;

  assign commit_valid        = 1'b0;
  assign commit_pc           = '0;
  assign commit_instr        = '0;
  assign commit_rd_we        = 1'b0;
  assign commit_rd_addr      = '0;
  assign commit_rd_wdata     = '0;
  assign halted              = 1'b0;

  assign perf_instret        = '0;
  assign perf_branches       = '0;
  assign perf_mispredicts    = '0;
  assign perf_stall_rob_full = '0;
  assign perf_stall_rs_full  = '0;

  // Free-running cycle counter is real from day 1 -- it costs nothing and the
  // IPC scripts depend on it.
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) perf_cycles <= '0;
    else        perf_cycles <= perf_cycles + 64'd1;
  end

  // Silence unused warnings on inputs the skeleton doesn't consume yet.
  /* verilator lint_off UNUSEDSIGNAL */
  wire _unused = &{1'b0, imem_req_ready, imem_resp_valid, imem_resp_id,
                   imem_resp_rdata, dmem_req_ready, dmem_resp_valid,
                   dmem_resp_id, dmem_resp_rdata};
  /* verilator lint_on UNUSEDSIGNAL */

endmodule
