// -----------------------------------------------------------------------------
// bram.sv
// SYNTHESIZABLE memory. This is the FPGA counterpart to mem_model.sv.
//
// mem_model.sv will not synthesize -- it has multiple outstanding requests
// tracked by a search loop, randomized latency, and unpacked arrays sized for
// simulation convenience. That is correct for verification and useless for
// hardware.
//
// This module is the opposite: a fixed 2-cycle read, one outstanding request,
// written in the exact style Vivado's inference engine recognizes as a Block
// RAM. Deviating from that style (adding an async read, a reset on the output
// register, or a second write port) silently drops it into LUT-based
// distributed RAM and blows up your utilization.
//
// The interface matches mem_if so the core does not change between flows.
// -----------------------------------------------------------------------------
`include "cpu_types_pkg.vh"

module bram #(
    parameter int    ADDR_W    = 32,
    parameter int    DATA_W    = 32,
    parameter int    ID_W      = 4,
    parameter int    MEM_WORDS = 16384,           // 64 KiB = 512 Kbit BRAM
    parameter logic [31:0] BASE_ADDR = 32'h8000_0000,
    parameter string INIT_HEX  = ""
) (
    input  logic                clk,
    input  logic                rst_n,

    input  logic                req_valid,
    output logic                req_ready,
    input  logic [ID_W-1:0]     req_id,
    input  logic [ADDR_W-1:0]   req_addr,
    input  logic                req_we,
    input  logic [DATA_W/8-1:0] req_be,
    input  logic [DATA_W-1:0]   req_wdata,

    output logic                resp_valid,
    input  logic                resp_ready,
    output logic [ID_W-1:0]     resp_id,
    output logic [DATA_W-1:0]   resp_rdata,
    output logic                resp_err
);

  localparam int WORD_LSB = $clog2(DATA_W / 8);
  localparam int IDX_W    = $clog2(MEM_WORDS);

  // ram_style="block" forces BRAM inference even if Vivado's heuristics would
  // otherwise pick distributed RAM. Keep it: without it, a small MEM_WORDS
  // during bring-up will quietly consume thousands of LUTs.
  (* ram_style = "block" *)
  logic [DATA_W-1:0] mem [0:MEM_WORDS-1];

  // $readmemh IS synthesizable in Vivado and produces a BRAM init string in
  // the bitstream. This is how the program image gets on chip without a
  // bootloader.
  initial begin
    if (INIT_HEX != "") $readmemh(INIT_HEX, mem);
  end

  logic [IDX_W-1:0] idx;
  logic             in_range;
  logic             accept;

  assign in_range = (req_addr >= ADDR_W'(BASE_ADDR)) &&
                    ((req_addr - ADDR_W'(BASE_ADDR)) >> WORD_LSB) < MEM_WORDS;
  assign idx      = IDX_W'((req_addr - ADDR_W'(BASE_ADDR)) >> WORD_LSB);

  // Single outstanding request: ready whenever the response slot is free or
  // is being drained this cycle.
  assign req_ready = rst_n && (!resp_valid || resp_ready);
  assign accept    = req_valid && req_ready;

  logic [DATA_W-1:0] rdata_q;
  logic [ID_W-1:0]   id_q;
  logic              err_q;
  logic              valid_q;

  // Synchronous read with byte-enable write. This exact shape is what the
  // inference engine matches -- do not add an else branch or a reset here.
  always_ff @(posedge clk) begin
    if (accept) begin
      if (req_we && in_range) begin
        for (int b = 0; b < DATA_W/8; b++) begin
          if (req_be[b]) mem[idx][b*8 +: 8] <= req_wdata[b*8 +: 8];
        end
        rdata_q <= '0;
      end else begin
        rdata_q <= mem[idx];
      end
    end
  end

  // Control pipeline, reset separately from the RAM itself.
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      valid_q <= 1'b0;
      id_q    <= '0;
      err_q   <= 1'b0;
    end else begin
      if (accept) begin
        valid_q <= 1'b1;
        id_q    <= req_id;
        err_q   <= !in_range;
      end else if (resp_valid && resp_ready) begin
        valid_q <= 1'b0;
      end
    end
  end

  assign resp_valid = valid_q;
  assign resp_id    = id_q;
  assign resp_rdata = rdata_q;
  assign resp_err   = err_q;

endmodule
