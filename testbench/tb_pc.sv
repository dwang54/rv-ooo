`include "pc_if.vh"


module tb_pc;
    import cpu_types_pkg::*;
    string test_desc;
    parameter PERIOD = 10;


    logic CLK = 0, nRST;

    always #(PERIOD/2) CLK++;

    pc_if pcif();

    pc DUT (.clk (CLK), .n_rst(nRST), .pc_if(pcif));


    localparam COLNRM = "\x1b[0m";
    localparam COLRED = "\x1b[31m";
    localparam COLGRN = "\x1b[32m";
    localparam COLCYA = "\x1b[36m";

    int fail_count = 0;

task test_PC;
    input logic enable, redirect_valid;
    input word_t redirect_pc, next_pc;
    input word_t expected_pc, expected_pc_plus4;
    input string test_desc;
begin

    // set DUT inputs
    pcif.en = enable;
    pcif.redirect_valid = redirect_valid;
    pcif.redirect_pc = redirect_pc;
    pcif.next_pc = next_pc;

    @(negedge CLK);

    // check outputs
    if (pcif.pc === expected_pc && pcif.pc_plus4 === expected_pc_plus4)
        $write("%sSuccess%s for the ", COLGRN, COLNRM);
    else begin
        $write("%sFailure%s for the ", COLRED, COLNRM);
        fail_count++;
    end
    $write("%s%s test case%s\n", COLCYA, test_desc, COLNRM);

    if (pcif.pc != expected_pc) $write("\tExpected pc: %s %h %s, got %s %h %s\n.", COLGRN, expected_pc, COLNRM, COLRED, pcif.pc, COLNRM);
    if (pcif.pc_plus4 != expected_pc_plus4) $write("\tExpected pc + 4: %s %h %s, got %s %h %s\n.", COLGRN, expected_pc_plus4, COLNRM, COLRED, pcif.pc_plus4, COLNRM);

end
endtask


task reset_DUT;
    begin
        nRST = 0;
        @(posedge CLK);
        @(posedge CLK);
        @(posedge CLK);
        nRST = 1;
        @(negedge CLK);
        @(negedge CLK);
    end
endtask

initial begin


reset_DUT();
test_desc = "Test after reset";
test_PC(.enable(1'b1), .redirect_valid(1'b0), .redirect_pc(32'h0), .next_pc(32'h8000_0000), .expected_pc(32'h8000_0000), .expected_pc_plus4(32'h8000_0004), .test_desc(test_desc));

$display("\n=== %s: %0d failures ===\n", (fail_count != 0) ? "FAILED" : "ALL PASS", fail_count);
$finish;
end

endmodule
