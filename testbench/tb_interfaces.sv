/*
  tb_interfaces.sv
  Elaboration check for every interface in rtl/include.

  This is deliberately dumb: it instantiates each interface and touches a few
  signals. It proves nothing about behaviour -- it proves the files COMPILE and
  the modport directions are consistent. An interface that has never been
  elaborated is an interface that does not work, and finding that out while
  debugging a real module wastes an afternoon.

  Add a line here whenever you add an interface.
*/
`include "cpu_types_pkg.vh"
`include "pc_if.vh"
`include "decoder_if.vh"
`include "immgen_if.vh"
`include "brcond_if.vh"
`include "branch_unit_if.vh"
`include "alu_if.vh"
`include "muldiv_if.vh"
`include "regfile_if.vh"
`include "mem_if.vh"
`include "fetch_if.vh"
`include "fetch_buffer_if.vh"
`include "bpred_if.vh"
`include "latch_if.vh"
`include "hazard_if.vh"
`include "rat_if.vh"
`include "rs_if.vh"
`include "rob_if.vh"
`include "cdb_if.vh"
`include "lsq_if.vh"
`include "perf_if.vh"

module tb_interfaces;
  import cpu_types_pkg::*;

  pc_if             pcif();
  decoder_if        decif();
  immgen_if         immif();
  brcond_if         bcif();
  branch_unit_if    buif();
  alu_if            aif();
  muldiv_if         mdif();
  regfile_if        rfif();
  mem_if #(.ID_W(4)) imif();
  mem_if #(.ID_W(4)) dmif();
  fetch_if          fif();
  fetch_buffer_if #(.DEPTH(4)) fbif();
  bpred_if #(.BHT_IDX_W(8), .BTB_IDX_W(6)) bpif();
  if_id_if          l1();
  id_ex_if          l2();
  ex_mem_if         l3();
  mem_wb_if         l4();
  forward_if        fwif();
  hazard_if         hzif();
  rat_if            ratif();
  rs_if  #(.DEPTH(4)) rsif();
  rob_if            rbif();
  cdb_if #(.N_FU(4)) cif();
  lsq_if #(.DEPTH(8)) lsif();
  perf_if           pfif();

  int errors = 0;

  task automatic chk(input string what, input bit ok, input string detail);
    if (ok) $display("  PASS  %-24s %s", what, detail);
    else  begin $display("  FAIL  %-24s %s", what, detail); errors++; end
  endtask

  initial begin
    // Touch a signal on each interface so it cannot be optimised away, and
    // confirm the declared widths are what the package intends.
    pcif.pc          = RESET_PC;
    decif.instr      = 32'h00500293;
    immif.sel        = IMM_I;
    bcif.op_a        = 32'd1;
    buif.pc          = RESET_PC;
    aif.aluop        = ALU_ADD;
    mdif.aluop       = ALU_MUL;
    rfif.rsel1       = 5'd1;
    imif.req_addr    = RAM_BASE;
    dmif.req_addr    = RAM_BASE;
    fif.pc           = RESET_PC;
    fbif.in_pc       = RESET_PC;
    bpif.lookup_pc   = RESET_PC;
    l1.in_pc         = RESET_PC;
    l2.in_pc         = RESET_PC;
    l3.in_pc         = RESET_PC;
    l4.in_pc         = RESET_PC;
    fwif.ex_rs1      = 5'd1;
    hzif.id_rs1      = 5'd1;
    ratif.rsel1      = 5'd1;
    rsif.alloc_req   = 1'b0;
    rbif.alloc_req   = 1'b0;
    cif.req          = '0;
    lsif.alloc_req   = 1'b0;
    #1;

    chk("all interfaces elaborate", 1'b1, "20 files instantiated");
    chk("pc_if width",     $bits(pcif.pc)        == WORD_W, "word_t");
    chk("regfile_if width",$bits(rfif.rsel1)     == REG_W,  "regbits_t");
    chk("mem_if be width", $bits(imif.req_be)    == WBYTES, "one bit per byte");
    chk("rs_if count",     $bits(rsif.count)     == 3, "clog2(DEPTH+1) for 4");
    chk("cdb_if fans out", $bits(cif.req)        == 4, "N_FU=4");
    chk("lsq_if param",    $bits(lsif.alloc_tag) == ROB_W, "tag width from pkg");
    chk("perf_if counters",$bits(pfif.cycles)    == 64, "64-bit");
    chk("decoded_t in latch", $bits(l2.in_dec) == $bits(decoded_t),
        $sformatf("%0d bits", $bits(decoded_t)));
    chk("fwdsel_t defined", FWD_NONE != FWD_EX, "enum distinct");

    $display("\n=== %s: %0d errors ===\n",
             (errors != 0) ? "FAILED" : "ALL PASS", errors);
    $finish;
  end
endmodule
