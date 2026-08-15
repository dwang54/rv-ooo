// -----------------------------------------------------------------------------
// mem_model.sv
// Behavioral memory model for Tomasulo-RV. Simulation only, not synthesizable.
//
// Three modes, selected by parameters, matching the three bring-up stages:
//   LATENCY=1,  RANDOM_LATENCY=0, OOO_RESP=0 -> stage 1: simple sync SRAM
//   LATENCY=N,  RANDOM_LATENCY=0, OOO_RESP=0 -> stage 2: fixed N-cycle, in-order
//   RANDOM_LATENCY=1, OOO_RESP=1             -> stage 3: variable latency with
//                                               reordered responses
//
// Sweep LATENCY across a regression to produce the IPC-vs-memory-latency curve
// that demonstrates what the out-of-order machine buys you over in-order.
//
// Protocol: decoupled request/response, ready/valid on both channels. Each
// request carries an ID and the response echoes it. This maps 1:1 onto AXI4
// ARID/RID when you swap in the AXI shim later.
// -----------------------------------------------------------------------------
module mem_model #(
    parameter int    ADDR_W          = 32,
    parameter int    DATA_W          = 32,
    parameter int    ID_W            = 4,
    parameter int    MEM_WORDS       = 16384,  // 64 KiB
    // Physical base of this memory. Requests below it, or past MEM_WORDS
    // beyond it, return resp_err rather than aliasing to a valid word.
    parameter logic [31:0] BASE_ADDR   = 32'h8000_0000,
    parameter int    LATENCY         = 4,      // request-to-response cycles, >= 1
    parameter bit    RANDOM_LATENCY  = 1'b0,
    parameter int    MAX_LATENCY     = 12,     // upper bound when random
    parameter bit    OOO_RESP        = 1'b0,   // allow reordered responses
    parameter int    MAX_OUTSTANDING = 8,
    parameter string INIT_HEX        = ""      // $readmemh image, "" to skip
) (
    input  logic                clk,
    input  logic                rst_n,

    // ---- request channel -----------------------------------------------
    input  logic                req_valid,
    output logic                req_ready,
    input  logic [ID_W-1:0]     req_id,
    input  logic [ADDR_W-1:0]   req_addr,   // byte address, word aligned
    input  logic                req_we,
    input  logic [DATA_W/8-1:0] req_be,
    input  logic [DATA_W-1:0]   req_wdata,

    // ---- response channel ----------------------------------------------
    output logic                resp_valid,
    input  logic                resp_ready,
    output logic [ID_W-1:0]     resp_id,
    output logic [DATA_W-1:0]   resp_rdata,
    output logic                resp_err
);

  localparam int WORD_LSB  = $clog2(DATA_W / 8);
  localparam int SLOT_W    = (MAX_OUTSTANDING > 1) ? $clog2(MAX_OUTSTANDING) : 1;
  localparam int AGE_W     = 16;
  localparam int LAT_W     = 16;

  logic [DATA_W-1:0] mem [0:MEM_WORDS-1];

  // ------------------------------------------------------------ init image --
  initial begin
    for (int i = 0; i < MEM_WORDS; i++) mem[i] = '0;
    if (INIT_HEX != "") begin
      $readmemh(INIT_HEX, mem);
      $display("[mem_model] loaded image: %s", INIT_HEX);
    end
  end

  // ------------------------------------------------------- outstanding pool --
  logic              e_busy  [0:MAX_OUTSTANDING-1];
  logic [ID_W-1:0]   e_id    [0:MAX_OUTSTANDING-1];
  logic [DATA_W-1:0] e_rdata [0:MAX_OUTSTANDING-1];
  logic              e_err   [0:MAX_OUTSTANDING-1];
  logic [LAT_W-1:0]  e_count [0:MAX_OUTSTANDING-1];
  logic [AGE_W-1:0]  e_age   [0:MAX_OUTSTANDING-1];

  logic [AGE_W-1:0]  age_ctr;

  // -- allocation ------------------------------------------------------------
  logic              have_free;
  logic [SLOT_W-1:0] free_idx;

  always_comb begin
    have_free = 1'b0;
    free_idx  = '0;
    for (int i = MAX_OUTSTANDING - 1; i >= 0; i--) begin
      if (!e_busy[i]) begin
        have_free = 1'b1;
        free_idx  = SLOT_W'(i);
      end
    end
  end

  assign req_ready = rst_n && have_free;

  // -- response selection ----------------------------------------------------
  // In-order mode releases only the globally oldest outstanding entry, so a
  // fast young request cannot overtake a slow old one. Out-of-order mode
  // releases the oldest *completed* entry, which under random latency lets
  // responses return in a different order than they were issued.
  logic              have_resp;
  logic [SLOT_W-1:0] resp_idx;
  logic [AGE_W-1:0]  oldest_age;
  logic [SLOT_W-1:0] oldest_idx;
  logic              have_oldest;

  always_comb begin
    have_oldest = 1'b0;
    oldest_age  = '1;
    oldest_idx  = '0;
    for (int i = 0; i < MAX_OUTSTANDING; i++) begin
      if (e_busy[i] && (!have_oldest || e_age[i] < oldest_age)) begin
        have_oldest = 1'b1;
        oldest_age  = e_age[i];
        oldest_idx  = SLOT_W'(i);
      end
    end
  end

  always_comb begin
    if (OOO_RESP) begin
      // oldest completed entry
      have_resp  = 1'b0;
      resp_idx   = '0;
      begin
        automatic logic [AGE_W-1:0] best = '1;
        for (int i = 0; i < MAX_OUTSTANDING; i++) begin
          if (e_busy[i] && e_count[i] == '0 && (!have_resp || e_age[i] < best)) begin
            have_resp = 1'b1;
            best      = e_age[i];
            resp_idx  = SLOT_W'(i);
          end
        end
      end
    end else begin
      // strictly the oldest entry, and only once it has completed
      resp_idx  = oldest_idx;
      have_resp = have_oldest && (e_count[oldest_idx] == '0);
    end
  end

  assign resp_valid = have_resp;
  assign resp_id    = have_resp ? e_id[resp_idx]    : '0;
  assign resp_rdata = have_resp ? e_rdata[resp_idx] : '0;
  assign resp_err   = have_resp ? e_err[resp_idx]   : 1'b0;

  // ------------------------------------------------------------ main engine --
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      age_ctr <= '0;
      for (int i = 0; i < MAX_OUTSTANDING; i++) begin
        e_busy[i]  <= 1'b0;
        e_count[i] <= '0;
        e_age[i]   <= '0;
      end
    end else begin
      // age every outstanding entry by one cycle
      for (int i = 0; i < MAX_OUTSTANDING; i++) begin
        if (e_busy[i] && e_count[i] != '0) e_count[i] <= e_count[i] - LAT_W'(1);
      end

      // accept a new request
      if (req_valid && req_ready) begin
        // Low bits are intentionally dropped: word-addressed array.
        /* verilator lint_off UNUSEDSIGNAL */
        automatic logic [ADDR_W-1:0] off  = req_addr - ADDR_W'(BASE_ADDR);
        /* verilator lint_on UNUSEDSIGNAL */
        automatic logic              oob  = (req_addr < ADDR_W'(BASE_ADDR));
        automatic int unsigned       widx = 32'(off[ADDR_W-1:WORD_LSB]);
        automatic logic [DATA_W-1:0] cur = '0;
        // Minus one: the entry is allocated on this edge, so a countdown of
        // zero already means "respond on the next edge". Without this,
        // LATENCY=4 would produce a 5-cycle round trip and every number in
        // the latency sweep would be quietly off by one.
        automatic logic [LAT_W-1:0] lat = RANDOM_LATENCY
                        ? LAT_W'($urandom_range(MAX_LATENCY, 1) - 1)
                        : LAT_W'(((LATENCY < 1) ? 1 : LATENCY) - 1);

        if (oob || widx >= MEM_WORDS) begin
          e_err[free_idx]   <= 1'b1;
          e_rdata[free_idx] <= '0;
        end else begin
          e_err[free_idx] <= 1'b0;
          if (req_we) begin
            cur = mem[widx];
            for (int b = 0; b < DATA_W / 8; b++) begin
              if (req_be[b]) cur[b*8+:8] = req_wdata[b*8+:8];
            end
            mem[widx]         <= cur;
            e_rdata[free_idx] <= '0;
          end else begin
            e_rdata[free_idx] <= mem[widx];
          end
        end

        e_id[free_idx]    <= req_id;
        e_count[free_idx] <= lat;
        e_age[free_idx]   <= age_ctr;
        e_busy[free_idx]  <= 1'b1;
        age_ctr           <= age_ctr + AGE_W'(1);
      end

      // retire a response
      if (resp_valid && resp_ready) e_busy[resp_idx] <= 1'b0;
    end
  end

  // ------------------------------------------------------------- backdoor ----
  // Load images and diff final memory state against Spike without perturbing
  // the DUT. Marked public so cocotb can reach them over VPI.
  /* verilator public_module */

  /* verilator lint_off UNUSEDSIGNAL */
  function automatic logic [DATA_W-1:0] peek(input int word_index);
    return mem[word_index];
  endfunction

  function automatic void poke(input int word_index, input logic [DATA_W-1:0] d);
    mem[word_index] = d;
  endfunction
  /* verilator lint_on UNUSEDSIGNAL */

`ifndef SYNTHESIS
  // A stalled request must hold its payload steady. Catches handshake bugs the
  // moment they appear rather than three modules downstream.
  property p_req_stable;
    @(posedge clk) disable iff (!rst_n)
    (req_valid && !req_ready) |=> $stable({req_addr, req_we, req_wdata, req_id});
  endproperty
  a_req_stable :
  assert property (p_req_stable)
  else $error("[mem_model] request payload changed while stalled");
`endif

endmodule
