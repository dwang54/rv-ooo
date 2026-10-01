`include "pc_if.vh"
`timescale 1 ns/ 1ns


module pc_tb;
    import cpu_types_pkg::*;
    string test_desc;


    pc_if pcif();


    test PROG (
        .test_desc(test_desc),
        .pcif(pcif.tb)
    );

    pc DUT (.pc_if(pcif));


endmodule


program test (
    output string test_desc,
    pc_if.tb pcif
);

import cpu_types_pkg::*;

    localparam COLNRM = "\x1b[0m";
    localparam COLRED = "\x1b[31m";
    localparam COLGRN = "\x1b[32m";
    localparam COLCYA = "\x1b[36m";

task test_PC
    // pass in SrcA, SrcB, OpCode
    input word_t 
    input aluop_t ALUOp;
    input word_t expOUT;
    input logic expZERO, expNEG, expOVER;
    input string test_desc;
begin

    // set DUT inputs
    aluif.SrcA = SrcA;
    aluif.SrcB = SrcB;
    aluif.alu_op = ALUOp;

    #1;                 

    // check outputs
    if (aluif.Out == expOUT && aluif.ZERO == expZERO && aluif.negative == expNEG && aluif.overflow == expOVER)
        $write("%sSuccess%s for the ", COLGRN, COLNRM);
    else 
        $write("%sFailure%s for the ", COLRED, COLNRM);
    $write("%s%s test case%s\n", COLCYA, test_desc, COLNRM);

    if (aluif.Out != expOUT) $write("\tExpected out of ALU: %s %h %s, got %s %h %s.\n", COLGRN, expOUT, COLNRM, COLRED, aluif.Out, COLNRM);
    if (aluif.ZERO != expZERO) $write("\tExpected zero flag: %s %h %s, got %s %h %s\n.", COLGRN, expZERO, COLNRM, COLRED, aluif.ZERO, COLNRM);
    if (aluif.negative != expNEG) $write("\tExpected neg flag: %s %h %s, got %s %h %s\n.", COLGRN, expNEG, COLNRM, COLRED, aluif.negative, COLNRM);
    if (aluif.overflow != expOVER) $write("\tExpected overflow flag: %s %h %s, got %s %h %s\n.", COLGRN, expOVER, COLNRM, COLRED, aluif.overflow, COLNRM);

end
endtask


initial begin

// Testing SLLs

$finish;
end
endprogram



endprogram 