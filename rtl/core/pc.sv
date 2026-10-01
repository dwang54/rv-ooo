`include "pc_if.vh"

module pc #(
    parameter logic [31:0] PC_INIT = 32'h8000_0000
) (
    input logic clk,
    input logic n_rst,
    pc_if.pcreg pc_if
);


    always_ff @(posedge clk, negedge n_rst) begin
        if (~n_rst) begin
            pc_if.pc <= PC_INIT;
            pc_if.pc_plus4 <= PC_INIT + 32'h4;
        end else if (pc_if.redirect_valid) begin
            pc_if.pc <= pc_if.redirect_pc;
            pc_if.pc_plus4 <= pc_if.redirect_pc + 32'h4;
        end else if (pc_if.en) begin
            pc_if.pc <= pc_if.next_pc;
            pc_if.pc_plus4 <= pc_if.next_pc + 32'h4;
        end
    end



endmodule
    
