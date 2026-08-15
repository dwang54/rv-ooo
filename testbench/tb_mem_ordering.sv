module tb_mem_ordering #(parameter bit OOO = 1);
  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;
  localparam int ID_W = 4;
  logic rq_v, rq_r, rs_v, rs_r, rs_err;
  logic [ID_W-1:0] rq_id, rs_id;
  logic [31:0] rq_a, rs_d;

  mem_model #(.ID_W(ID_W), .LATENCY(4), .RANDOM_LATENCY(1), .MAX_LATENCY(12),
              .OOO_RESP(OOO), .MAX_OUTSTANDING(8), .BASE_ADDR(32'h0000_0000), .INIT_HEX("")) dut (
    .clk, .rst_n, .req_valid(rq_v), .req_ready(rq_r), .req_id(rq_id),
    .req_addr(rq_a), .req_we(1'b0), .req_be(4'h0), .req_wdata(32'h0),
    .resp_valid(rs_v), .resp_ready(rs_r), .resp_id(rs_id),
    .resp_rdata(rs_d), .resp_err(rs_err));

  int order[$]; int reorder_events = 0; int rounds = 0;
  always @(posedge clk) if (rst_n && rs_v && rs_r) order.push_back(int'(rs_id));

  initial begin
    rq_v = 0; rq_a = 0; rq_id = 0; rs_r = 1;
    repeat (3) @(negedge clk); rst_n = 1;

    for (int r = 0; r < 40; r++) begin
      order.delete();
      // issue 6 back-to-back reads, ids 0..5, responses free to return
      for (int i = 0; i < 6; i++) begin
        @(negedge clk); rq_v = 1; rq_id = ID_W'(i); rq_a = 32'(i * 4);
        @(posedge clk); while (!rq_r) @(posedge clk);
      end
      @(negedge clk); rq_v = 0;
      wait (order.size() == 6);
      rounds++;
      for (int i = 0; i < 6; i++) if (order[i] != i) begin
        reorder_events++; break;
      end
      repeat (4) @(negedge clk);
    end

    $display("  %0s: %0d of %0d rounds returned reordered  (example: %p)",
             OOO ? "OOO_RESP=1" : "OOO_RESP=0", reorder_events, rounds, order);
    if (OOO && reorder_events == 0)
      $display("  FAIL: OOO mode never reordered -- responses are pinned in order");
    else if (!OOO && reorder_events != 0)
      $display("  FAIL: in-order mode reordered -- ordering guarantee is broken");
    else
      $display("  PASS");
    $finish;
  end
  initial begin #500000; $display("TIMEOUT"); $finish; end
endmodule
