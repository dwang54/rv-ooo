module tb_mem_base;
  logic clk=0, rst_n=0; always #5 clk=~clk;
  logic rq_v, rq_r, rs_v, rs_r, rs_err;
  logic [3:0] rq_id, rs_id; logic [31:0] rq_a, rs_d;
  int errors = 0;
  mem_model #(.ID_W(4), .LATENCY(2), .BASE_ADDR(32'h8000_0000), .INIT_HEX("")) dut (
    .clk,.rst_n,.req_valid(rq_v),.req_ready(rq_r),.req_id(rq_id),.req_addr(rq_a),
    .req_we(1'b0),.req_be(4'h0),.req_wdata(32'h0),
    .resp_valid(rs_v),.resp_ready(rs_r),.resp_id(rs_id),.resp_rdata(rs_d),.resp_err(rs_err));
  logic seen_err; logic [3:0] seen_id;
  always @(posedge clk) if (rst_n && rs_v && rs_r) begin seen_err<=rs_err; seen_id<=rs_id; end
  task automatic rd(input logic [31:0] a, input logic [3:0] id);
    @(negedge clk); rq_v=1; rq_a=a; rq_id=id;
    @(posedge clk); while(!rq_r) @(posedge clk); @(negedge clk); rq_v=0;
    wait(rs_v && rs_id==id); @(posedge clk); @(negedge clk);
  endtask
  initial begin
    rq_v=0; rq_a=0; rq_id=0; rs_r=1;
    repeat(3) @(negedge clk); rst_n=1;
    rd(32'h8000_0000, 4'h1);
    if (seen_err) begin $display("  FAIL base address rejected"); errors++; end
    else $display("  PASS 0x80000000 accepted (base of memory)");
    rd(32'h8000_FFFC, 4'h2);
    if (seen_err) begin $display("  FAIL top of memory rejected"); errors++; end
    else $display("  PASS 0x8000FFFC accepted (top of 64KiB)");
    rd(32'h0000_0100, 4'h3);
    if (!seen_err) begin $display("  FAIL low address NOT rejected -- aliasing bug"); errors++; end
    else $display("  PASS 0x00000100 rejected (below base)");
    rd(32'h9000_0000, 4'h4);
    if (!seen_err) begin $display("  FAIL far address NOT rejected"); errors++; end
    else $display("  PASS 0x90000000 rejected (past end)");
    $display("=== %s ===", (errors!=0)?"FAILED":"ALL PASS");
    $finish;
  end
  initial begin #50000; $display("TIMEOUT"); $finish; end
endmodule
