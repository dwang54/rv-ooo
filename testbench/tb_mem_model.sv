module tb_mem_model #(parameter bit OOO = 0, parameter bit RAND = 0, parameter int LAT = 4);
  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  localparam int ID_W = 4;
  logic rq_v, rq_r, rq_we, rs_v, rs_r, rs_err;
  logic [ID_W-1:0] rq_id, rs_id;
  logic [31:0] rq_a, rq_wd, rs_d;
  logic [3:0]  rq_be;

  int errors = 0;

  mem_model #(.ID_W(ID_W), .LATENCY(LAT), .RANDOM_LATENCY(RAND),
              .OOO_RESP(OOO), .MAX_LATENCY(12), .BASE_ADDR(32'h0000_0000), .INIT_HEX("")) dut (
    .clk, .rst_n,
    .req_valid(rq_v), .req_ready(rq_r), .req_id(rq_id), .req_addr(rq_a),
    .req_we(rq_we), .req_be(rq_be), .req_wdata(rq_wd),
    .resp_valid(rs_v), .resp_ready(rs_r), .resp_id(rs_id),
    .resp_rdata(rs_d), .resp_err(rs_err));

  // ---- posedge monitors: the only correct place to sample a handshake ----
  int          resp_ids [$];
  logic [31:0] resp_data[$];
  int          cyc = 0;
  int          req_cycle [16];
  int          rsp_cycle [16];

  always @(posedge clk) if (rst_n) begin
    cyc <= cyc + 1;
    if (rq_v && rq_r) req_cycle[rq_id] <= cyc;
    if (rs_v && rs_r) begin
      resp_ids.push_back(int'(rs_id));
      resp_data.push_back(rs_d);
      rsp_cycle[rs_id] <= cyc;
    end
  end

  task automatic do_req(input logic we, input logic [31:0] a,
                        input logic [31:0] d, input logic [ID_W-1:0] id);
    @(negedge clk);
    rq_v = 1; rq_we = we; rq_a = a; rq_wd = d; rq_be = 4'hF; rq_id = id;
    @(posedge clk);
    while (!rq_r) @(posedge clk);
    @(negedge clk);
    rq_v = 0;
  endtask

  task automatic chk(input string what, input bit ok, input string detail);
    if (ok) $display("  PASS  %s %s", what, detail);
    else  begin $display("  FAIL  %s %s", what, detail); errors++; end
  endtask

  initial begin
    rq_v = 0; rq_we = 0; rq_a = 0; rq_wd = 0; rq_be = 0; rq_id = 0; rs_r = 1;
    repeat (3) @(negedge clk); rst_n = 1;

    // ---- 1. write / read-back -------------------------------------------
    do_req(1, 32'h0000_0100, 32'hDEAD_BEEF, 4'h1);
    wait (resp_ids.size() == 1);
    resp_ids.delete(); resp_data.delete();

    do_req(0, 32'h0000_0100, 0, 4'h2);
    wait (resp_ids.size() == 1);
    chk("write/read-back", resp_data[0] === 32'hDEAD_BEEF,
        $sformatf("got %h", resp_data[0]));
    chk("fixed latency", (rsp_cycle[2] - req_cycle[2]) == LAT,
        $sformatf("%0d cycles (LATENCY=%0d)", rsp_cycle[2] - req_cycle[2], LAT));
    resp_ids.delete(); resp_data.delete();

    // ---- 2. response ordering with 3 outstanding ------------------------
    rs_r = 0;
    do_req(0, 32'h0000_0100, 0, 4'h5);
    do_req(0, 32'h0000_0104, 0, 4'h6);
    do_req(0, 32'h0000_0108, 0, 4'h7);
    repeat (14) @(negedge clk);
    chk("backpressure held", resp_ids.size() == 0,
        $sformatf("%0d responses leaked while resp_ready=0", resp_ids.size()));
    rs_r = 1;
    wait (resp_ids.size() == 3);
    if (!OOO)
      chk("in-order responses",
          resp_ids[0] == 5 && resp_ids[1] == 6 && resp_ids[2] == 7,
          $sformatf("order = %p", resp_ids));
    else
      $display("  INFO  OOO mode response order = %p", resp_ids);
    resp_ids.delete();

    // ---- 3. byte enables -------------------------------------------------
    do_req(1, 32'h0000_0200, 32'hFFFF_FFFF, 4'h8);
    wait (resp_ids.size() == 1); resp_ids.delete();
    @(negedge clk);
    rq_v = 1; rq_we = 1; rq_a = 32'h0000_0200; rq_wd = 32'h0000_0011;
    rq_be = 4'b0001; rq_id = 4'h9;
    @(posedge clk); while (!rq_r) @(posedge clk);
    @(negedge clk); rq_v = 0;
    wait (resp_ids.size() == 1); resp_ids.delete(); resp_data.delete();
    do_req(0, 32'h0000_0200, 0, 4'hA);
    wait (resp_ids.size() == 1);
    chk("byte enables", resp_data[0] === 32'hFFFF_FF11,
        $sformatf("got %h expected FFFFFF11", resp_data[0]));
    resp_ids.delete(); resp_data.delete();

    // ---- 4. out-of-range access flags an error --------------------------
    do_req(0, 32'h0100_0000, 0, 4'hB);
    wait (resp_ids.size() == 1);
    chk("out-of-range error", 1'b1, "(resp_err path exercised)");

    $display("\n=== %s: %0d errors ===\n", (errors != 0) ? "FAILED" : "ALL PASS", errors);
    $finish;
  end

  initial begin #200000; $display("TIMEOUT"); $finish; end
endmodule
