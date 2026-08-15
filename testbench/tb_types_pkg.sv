// Elaboration smoke test: instantiate every interface and exercise a modport
// through a trivial module, so a broken direction or width fails here.
`include "cpu_types_pkg.vh"
`include "alu_if.vh"
`include "muldiv_if.vh"
`include "regfile_if.vh"
`include "mem_if.vh"
`include "fetch_if.vh"
`include "cdb_if.vh"
`include "rob_if.vh"
`include "rs_if.vh"

module alu_stub (alu_if.alu aif);
  import cpu_types_pkg::*;
  always_comb begin
    unique case (aif.aluop)
      ALU_ADD:    aif.out = aif.port_a + aif.port_b;
      ALU_SUB:    aif.out = aif.port_a - aif.port_b;
      ALU_AND:    aif.out = aif.port_a & aif.port_b;
      ALU_XOR:    aif.out = aif.port_a ^ aif.port_b;
      ALU_SLL:    aif.out = aif.port_a << aif.port_b[4:0];
      ALU_SLT:    aif.out = {31'b0, ($signed(aif.port_a) < $signed(aif.port_b))};
      ALU_PASS_B: aif.out = aif.port_b;
      default:    aif.out = '0;
    endcase
    aif.zero     = (aif.out == '0);
    aif.negative = aif.out[WORD_W-1];
    aif.overflow = 1'b0;
  end
endmodule

module tb_types_pkg;
  import cpu_types_pkg::*;

  logic clk = 0, rst_n = 0;
  always #5 clk = ~clk;

  alu_if     aif();
  muldiv_if  mdif();
  regfile_if rfif();
  mem_if #(.ID_W(4)) imif();
  mem_if #(.ID_W(4)) dmif();
  fetch_if   fif();
  cdb_if #(.N_FU(4)) cif();
  rob_if     rbif();
  rs_if #(.DEPTH(4)) rsif();

  alu_stub u_alu (aif.alu);

  decoded_t d;
  int errors = 0;

  task automatic chk(input string what, input bit ok, input string detail);
    if (ok) $display("  PASS  %-26s %s", what, detail);
    else  begin $display("  FAIL  %-26s %s", what, detail); errors++; end
  endtask

  initial begin
    // ---- decoder spot checks -------------------------------------------
    d = decode(32'h00500293);            // addi t0, x0, 5
    chk("decode ADDI", d.valid && d.aluop == ALU_ADD && d.rd == 5'd5
        && d.imm == 32'd5 && d.writes_rd, "addi t0,x0,5");

    d = decode(32'hFCE00293);            // addi t0, x0, -50
    chk("ADDI sign extension", d.imm == 32'hFFFF_FFCE,
        $sformatf("imm=%h expected FFFFFFCE", d.imm));

    d = decode(32'h006283B3);            // add t2, t0, t1
    chk("decode ADD", d.valid && d.aluop == ALU_ADD && d.fu == FU_ALU
        && d.uses_rs1 && d.uses_rs2, "add t2,t0,t1");

    d = decode(32'h40628333);            // sub t1, t0, t1
    chk("decode SUB", d.valid && d.aluop == ALU_SUB, "funct7=0x20 -> SUB");

    d = decode(32'h026283B3);            // mul t2, t0, t1
    chk("decode MUL", d.valid && d.aluop == ALU_MUL && d.fu == FU_MULDIV,
        "steered to FU_MULDIV");

    d = decode(32'h0002A283);            // lw t0, 0(t0)
    chk("decode LW", d.valid && d.is_load && d.fu == FU_LSU
        && d.aluop == ALU_ADD, "address = rs1 + imm");

    d = decode(32'h0062A023);            // sw t1, 0(t0)
    chk("decode SW", d.valid && d.is_store && !d.writes_rd, "no rd write");

    d = decode(32'h00628463);            // beq t0, t1, +8
    chk("decode BEQ", d.valid && d.is_branch && !d.br_invert, "br_invert=0");

    d = decode(32'h00629463);            // bne t0, t1, +8
    chk("decode BNE", d.valid && d.is_branch && d.br_invert, "br_invert=1");

    d = decode(32'h123452B7);            // lui t0, 0x12345
    chk("decode LUI", d.valid && d.aluop == ALU_PASS_B
        && d.imm == 32'h12345000, $sformatf("imm=%h", d.imm));

    d = decode(32'h00000297);            // auipc t0, 0
    chk("decode AUIPC", d.valid && d.op_a_is_pc, "operand A is PC");

    d = decode(32'h008000EF);            // jal ra, +8
    chk("decode JAL", d.valid && d.is_jump && d.op_a_is_pc, "jump, PC-relative");

    d = decode(32'h00028067);            // jalr x0, 0(t0)
    chk("decode JALR", d.valid && d.is_jump && d.uses_rs1, "indirect jump");

    d = decode(32'h00500013);            // addi x0, x0, 5  -> rd == x0
    chk("x0 never a destination", !d.writes_rd, "writes_rd forced low");

    d = decode(32'h0062E2B3);            // or t0,t1,t1 -- outside subset
    chk("out-of-subset rejected", !d.valid, "OR returns valid=0");

    d = decode(32'hFFFFFFFF);
    chk("garbage rejected", !d.valid, "all-ones returns valid=0");

    // ---- interface / ALU through a modport ------------------------------
    aif.aluop = ALU_ADD; aif.port_a = 32'd7; aif.port_b = 32'd6; #1;
    chk("alu_if modport", aif.out == 32'd13, $sformatf("7+6=%0d", aif.out));

    aif.aluop = ALU_SLT; aif.port_a = 32'hFFFFFFFF; aif.port_b = 32'd1; #1;
    chk("ALU_SLT is signed", aif.out == 32'd1, "-1 < 1");

    aif.aluop = ALU_SLL; aif.port_a = 32'd1; aif.port_b = 32'd31; #1;
    chk("ALU_SLL shift by 31", aif.out == 32'h8000_0000,
        $sformatf("out=%h", aif.out));

    // ---- struct widths ---------------------------------------------------
    chk("rs_entry_t packs", $bits(rs_entry_t) > 0,
        $sformatf("%0d bits", $bits(rs_entry_t)));
    chk("rob_entry_t packs", $bits(rob_entry_t) > 0,
        $sformatf("%0d bits", $bits(rob_entry_t)));
    chk("cdb_t packs", $bits(cdb_t) > 0, $sformatf("%0d bits", $bits(cdb_t)));
    chk("commit_t packs", $bits(commit_t) == 1+32+32+1+5+32,
        $sformatf("%0d bits", $bits(commit_t)));

    $display("\n=== %s: %0d errors ===\n", (errors != 0) ? "FAILED" : "ALL PASS", errors);
    $finish;
  end
endmodule
