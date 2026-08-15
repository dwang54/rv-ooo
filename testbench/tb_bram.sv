/*
  tb_bram.sv
  Behavioural check on the synthesizable memory. Confirms the 2-cycle read,
  byte enables, single-outstanding backpressure, and out-of-range flagging.

  Passing this does NOT prove BRAM inference -- only Vivado's synthesis report
  can tell you that. Check synth/reports/utilization.rpt for a non-zero
  RAMB36/RAMB18 count. If it reads 0 and LUT count is huge, inference failed.
*/
`include "cpu_types_pkg.vh"

module tb_bram;
  import cpu_types_pkg::*;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  logic rq_v, rq_r, rq_we, rs_v, rs_r, rs_err;
  logic [3:0]  rq_id, rs_id;
  logic [31:0] rq_a, rq_wd, rs_d;
  logic [3:0]  rq_be;
  int errors = 0, cyc = 0, t_req = 0, t_rsp = 0;

  bram #(.ID_W(4), .MEM_WORDS(1024), .BASE_ADDR(32'h8000_0000)) dut (
    .clk, .rst_n,
    .req_valid(rq_v), .req_ready(rq_r), .req_id(rq_id), .req_addr(rq_a),
    .req_we(rq_we), .req_be(rq_be), .req_wdata(rq_wd),
    .resp_valid(rs_v), .resp_ready(rs_r), .resp_id(rs_id),
    .resp_rdata(rs_d), .resp_err(rs_err));

  always @(posedge clk) if (rst_n) begin
    cyc <= cyc + 1;
    if (rq_v && rq_r) t_req <= cyc;
    if (rs_v && rs_r) t_rsp <= cyc;
  end

  task automatic chk(input string what, input bit ok, input string d);
    if (ok) $display("  PASS  %-24s %s", what, d);
    else  begin $display("  FAIL  %-24s %s", what, d); errors++; end
  endtask

  task automatic go(input logic we, input logic [31:0] a,
                    input logic [31:0] d, input logic [3:0] be,
                    input logic [3:0] id);
    @(negedge clk);
    rq_v = 1; rq_we = we; rq_a = a; rq_wd = d; rq_be = be; rq_id = id;
    @(posedge clk); while (!rq_r) @(posedge clk);
    @(negedge clk); rq_v = 0;
    wait (rs_v); @(posedge clk); @(negedge clk);
  endtask

  initial begin
    rq_v = 0; rq_we = 0; rq_a = 0; rq_wd = 0; rq_be = 0; rq_id = 0; rs_r = 1;
    repeat (3) @(negedge clk); rst_n = 1;

    go(1, 32'h8000_0100, 32'hDEAD_BEEF, 4'hF, 4'h1);
    go(0, 32'h8000_0100, 32'h0, 4'h0, 4'h2);
    chk("write / read back", rs_d === 32'hDEAD_BEEF, $sformatf("got %h", rs_d));
    chk("id echoed", rs_id === 4'h2, $sformatf("id=%0d", rs_id));
    chk("2-cycle read", (t_rsp - t_req) <= 2 && (t_rsp - t_req) >= 1,
        $sformatf("%0d cycles", t_rsp - t_req));

    go(1, 32'h8000_0200, 32'hFFFF_FFFF, 4'hF, 4'h3);
    go(1, 32'h8000_0200, 32'h0000_0011, 4'b0001, 4'h4);
    go(0, 32'h8000_0200, 32'h0, 4'h0, 4'h5);
    chk("byte enables", rs_d === 32'hFFFF_FF11, $sformatf("got %h", rs_d));

    go(0, 32'h9000_0000, 32'h0, 4'h0, 4'h6);
    chk("out of range flags err", rs_err === 1'b1, "resp_err asserted");

    go(0, 32'h0000_0004, 32'h0, 4'h0, 4'h7);
    chk("below base flags err", rs_err === 1'b1, "resp_err asserted");

    // backpressure: hold resp_ready low, confirm req_ready drops
    rs_r = 0;
    @(negedge clk); rq_v = 1; rq_we = 0; rq_a = 32'h8000_0100; rq_id = 4'h8;
    @(posedge clk); while (!rq_r) @(posedge clk);
    @(negedge clk); rq_v = 0;
    repeat (4) @(negedge clk);
    chk("single outstanding", rq_r === 1'b0, "req_ready low while resp held");
    rs_r = 1; @(negedge clk); @(negedge clk);
    chk("drains after ready", rq_r === 1'b1, "req_ready restored");

    $display("\n=== %s: %0d errors ===\n",
             (errors != 0) ? "FAILED" : "ALL PASS", errors);
    $finish;
  end
  initial begin #100000; $display("TIMEOUT"); $finish; end
endmodule
