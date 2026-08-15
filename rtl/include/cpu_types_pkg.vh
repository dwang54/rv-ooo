/*
  cpu_types_pkg.vh
  Shared types, widths, and encodings for the Tomasulo-RV core.

  Scope is the deliberate RV32I subset plus MUL/DIV. Instructions outside the
  subset are still enumerated where it costs nothing, but the decoder returns
  valid=0 for them so an out-of-scope instruction is reported by the testbench
  rather than silently executing as garbage.
*/
`ifndef CPU_TYPES_PKG_VH
`define CPU_TYPES_PKG_VH

/* verilator lint_off UNUSEDPARAM */
/* verilator lint_off UNUSEDSIGNAL */
package cpu_types_pkg;

// ---------------------------------------------------------------- widths --
  parameter WORD_W      = 32;
  parameter WBYTES      = WORD_W/8;

  parameter OP_W        = 7;
  parameter REG_W       = 5;
  parameter FUNC7_W     = 7;
  parameter FUNC3_W     = 3;
  parameter IMM_W_I     = 12;
  parameter IMM_W_U_J   = 20;

  parameter AOP_W       = 4;

  // Out-of-order structure sizing. ROB_W drives the tag width, so every
  // rename tag, RS entry and CDB packet resizes from this one parameter.
  parameter ROB_DEPTH   = 16;
  parameter ROB_W       = 4;            // $clog2(ROB_DEPTH)
  parameter RS_ALU_N    = 4;
  parameter RS_MULDIV_N = 2;
  parameter RS_LSU_N    = 4;
  parameter RS_BR_N     = 2;
  parameter LSQ_DEPTH   = 8;

  // Memory map. Base is 0x80000000 to match Spike's default DRAM; see link.ld.
  parameter RAM_BASE    = 32'h8000_0000;
  parameter RAM_WORDS   = 16384;        // 64 KiB
  parameter RESET_PC    = RAM_BASE;
  parameter HALT_ADDR   = RAM_BASE + 32'h0000_F000;   // HTIF tohost

// --------------------------------------------------------------- opcodes --
  typedef enum logic [OP_W-1:0] {
    RTYPE     = 7'b0110011,
    ITYPE     = 7'b0010011,
    ITYPE_LW  = 7'b0000011,
    JALR      = 7'b1100111,
    STYPE     = 7'b0100011,
    BTYPE     = 7'b1100011,
    JAL       = 7'b1101111,
    LUI       = 7'b0110111,
    AUIPC     = 7'b0010111
  } opcode_t;

// -------------------------------------------------------------- funct3/7 --
  typedef enum logic [FUNC3_W-1:0] {
    ADD_SUB = 3'h0,
    SLL     = 3'h1,
    SLT     = 3'h2,
    SLTU    = 3'h3,
    XOR     = 3'h4,
    SRL_SRA = 3'h5,
    OR      = 3'h6,
    AND     = 3'h7
  } funct3_r_t;

  typedef enum logic [FUNC3_W-1:0] {
    ADDI      = 3'h0,
    SLLI      = 3'h1,
    SLTI      = 3'h2,
    SLTIU     = 3'h3,
    XORI      = 3'h4,
    SRLI_SRAI = 3'h5,
    ORI       = 3'h6,
    ANDI      = 3'h7
  } funct3_i_t;

  typedef enum logic [FUNC3_W-1:0] {
    LB  = 3'h0, LH  = 3'h1, LW = 3'h2,
    LBU = 3'h4, LHU = 3'h5
  } funct3_ld_t;

  typedef enum logic [FUNC3_W-1:0] {
    SB = 3'h0, SH = 3'h1, SW = 3'h2
  } funct3_s_t;

  typedef enum logic [FUNC3_W-1:0] {
    BEQ = 3'h0, BNE  = 3'h1,
    BLT = 3'h4, BGE  = 3'h5,
    BLTU= 3'h6, BGEU = 3'h7
  } funct3_b_t;

  // RV32M shares RTYPE's opcode and is distinguished by funct7 == 7'h01.
  typedef enum logic [FUNC3_W-1:0] {
    MUL = 3'h0, DIV = 3'h4
  } funct3_m_t;

  parameter logic [FUNC7_W-1:0] F7_BASE   = 7'h00;
  parameter logic [FUNC7_W-1:0] F7_ALT    = 7'h20;   // SUB, SRA
  parameter logic [FUNC7_W-1:0] F7_MULDIV = 7'h01;

// -------------------------------------------------------------- alu ops ---
  typedef enum logic [AOP_W-1:0] {
    ALU_SLL    = 4'h0,
    ALU_SRL    = 4'h1,
    ALU_SRA    = 4'h2,
    ALU_ADD    = 4'h3,
    ALU_SUB    = 4'h4,
    ALU_AND    = 4'h5,
    ALU_OR     = 4'h6,
    ALU_XOR    = 4'h7,
    ALU_SLT    = 4'h8,
    ALU_SLTU   = 4'h9,
    ALU_MUL    = 4'hA,
    ALU_DIV    = 4'hB,
    ALU_PASS_B = 4'hC,   // LUI: immediate straight through
    ALU_NOP    = 4'hF
  } aluop_t;

// ---------------------------------------------------------- base types ----
  typedef logic [WORD_W-1:0] word_t;
  typedef logic [REG_W-1:0]  regbits_t;
  typedef logic [ROB_W-1:0]  robtag_t;

// -------------------------------------------------- instruction formats ---
  typedef struct packed {
    logic [FUNC7_W-1:0] funct7;
    regbits_t           rs2;
    regbits_t           rs1;
    logic [FUNC3_W-1:0] funct3;
    regbits_t           rd;
    logic [OP_W-1:0]    opcode;
  } r_t;

  typedef struct packed {
    logic [IMM_W_I-1:0] imm;
    regbits_t           rs1;
    logic [FUNC3_W-1:0] funct3;
    regbits_t           rd;
    logic [OP_W-1:0]    opcode;
  } i_t;

  typedef struct packed {
    logic [6:0]         imm2;
    regbits_t           rs2;
    regbits_t           rs1;
    logic [FUNC3_W-1:0] funct3;
    logic [4:0]         imm1;
    logic [OP_W-1:0]    opcode;
  } s_t;

  typedef struct packed {
    logic [6:0]         imm2;
    regbits_t           rs2;
    regbits_t           rs1;
    logic [FUNC3_W-1:0] funct3;
    logic [4:0]         imm1;
    logic [OP_W-1:0]    opcode;
  } b_t;

  typedef struct packed {
    logic [IMM_W_U_J-1:0] imm;
    regbits_t             rd;
    logic [OP_W-1:0]      opcode;
  } u_t;

  typedef struct packed {
    logic [IMM_W_U_J-1:0] imm;
    regbits_t             rd;
    logic [OP_W-1:0]      opcode;
  } j_t;

// ------------------------------------------------------ functional units --
  typedef enum logic [1:0] {
    FU_ALU,       // 1 cycle
    FU_MULDIV,    // multi-cycle: what makes OOO completion observable
    FU_LSU,       // variable latency from the memory model
    FU_BRANCH
  } fu_t;

  typedef enum logic [2:0] {
    IMM_I, IMM_S, IMM_B, IMM_U, IMM_J, IMM_NONE
  } immsel_t;

// ------------------------------------------------- decoded instruction ----
  typedef struct packed {
    logic     valid;        // decode succeeded, i.e. in-subset
    aluop_t   aluop;
    fu_t      fu;
    regbits_t rs1;
    regbits_t rs2;
    regbits_t rd;
    logic     uses_rs1;
    logic     uses_rs2;
    logic     writes_rd;
    word_t    imm;
    logic     is_load;
    logic     is_store;
    logic     is_branch;
    logic     is_jump;
    logic     br_invert;    // BNE rather than BEQ
    logic     op_a_is_pc;   // AUIPC, JAL
    logic     op_b_is_imm;
  } decoded_t;

// ------------------------------------------------ out-of-order payloads ---
  // One CDB broadcast. Every reservation station snoops this every cycle and
  // captures the value if the tag matches a source it is waiting on.
  typedef struct packed {
    logic    valid;
    robtag_t tag;
    word_t   data;
    logic    is_branch;
    logic    br_taken;
    word_t   br_target;
    logic    exception;
  } cdb_t;

  // One reservation station entry.
  typedef struct packed {
    logic    busy;
    aluop_t  aluop;
    robtag_t dest;        // ROB slot this result belongs to
    word_t   vj;          // operand 1 value, valid when qj == 0
    word_t   vk;          // operand 2 value, valid when qk == 0
    robtag_t qj;          // producer tag, 0 means vj is ready
    robtag_t qk;
    logic    qj_wait;     // explicit wait flags: tag 0 is a legal ROB slot,
    logic    qk_wait;     //   so a zero tag alone cannot mean "ready"
    word_t   pc;
    word_t   imm;
  } rs_entry_t;

  // One reorder buffer entry.
  typedef struct packed {
    logic     busy;
    logic     ready;        // result written back, awaiting commit
    logic     writes_rd;
    regbits_t rd;
    word_t    value;
    word_t    pc;
    word_t    instr;
    logic     is_store;
    logic     is_branch;
    logic     br_taken;
    word_t    br_target;
    logic     mispredict;
    logic     exception;
  } rob_entry_t;

  // Commit trace. This is the co-simulation contract: exactly one pulse per
  // architecturally retired instruction, in program order, compared against
  // Spike's next retirement.
  typedef struct packed {
    logic     valid;
    word_t    pc;
    word_t    instr;
    logic     rd_we;
    regbits_t rd_addr;
    word_t    rd_wdata;
  } commit_t;

// ----------------------------------------------------------- mem state ----
  typedef enum logic [1:0] { FREE, BUSY, ACCESS, ERROR } ramstate_t;

// ------------------------------------------------------ immediate decode --
  function automatic word_t get_imm(input word_t instr, input immsel_t sel);
    unique case (sel)
      IMM_I:   get_imm = {{20{instr[31]}}, instr[31:20]};
      IMM_S:   get_imm = {{20{instr[31]}}, instr[31:25], instr[11:7]};
      IMM_B:   get_imm = {{19{instr[31]}}, instr[31], instr[7],
                          instr[30:25], instr[11:8], 1'b0};
      IMM_U:   get_imm = {instr[31:12], 12'b0};
      IMM_J:   get_imm = {{11{instr[31]}}, instr[31], instr[19:12],
                          instr[20], instr[30:21], 1'b0};
      default: get_imm = '0;
    endcase
  endfunction

// ------------------------------------------------------------- decoder ----
  // Pure combinational. valid=0 for anything outside the subset, so the
  // testbench flags an out-of-scope instruction instead of executing garbage.
  function automatic decoded_t decode(input word_t instr);
    decoded_t d;
    logic [OP_W-1:0]    opc;
    logic [FUNC3_W-1:0] f3;
    logic [FUNC7_W-1:0] f7;

    opc = instr[6:0];
    f3  = instr[14:12];
    f7  = instr[31:25];

    d          = '0;
    d.aluop    = ALU_NOP;
    d.fu       = FU_ALU;
    d.rs1      = instr[19:15];
    d.rs2      = instr[24:20];
    d.rd       = instr[11:7];

    unique case (opc)
      RTYPE: begin
        d.uses_rs1 = 1'b1; d.uses_rs2 = 1'b1; d.writes_rd = 1'b1;
        if (f7 == F7_MULDIV) begin
          d.fu = FU_MULDIV;
          unique case (f3)
            MUL: begin d.aluop = ALU_MUL; d.valid = 1'b1; end
            DIV: begin d.aluop = ALU_DIV; d.valid = 1'b1; end
            default: ;
          endcase
        end else begin
          unique case (f3)
            ADD_SUB: begin
              d.aluop = (f7 == F7_ALT) ? ALU_SUB : ALU_ADD;
              d.valid = (f7 == F7_ALT) || (f7 == F7_BASE);
            end
            XOR: begin d.aluop = ALU_XOR; d.valid = (f7 == F7_BASE); end
            AND: begin d.aluop = ALU_AND; d.valid = (f7 == F7_BASE); end
            SLT: begin d.aluop = ALU_SLT; d.valid = (f7 == F7_BASE); end
            default: ;
          endcase
        end
      end

      ITYPE: begin
        d.uses_rs1 = 1'b1; d.writes_rd = 1'b1; d.op_b_is_imm = 1'b1;
        d.imm = get_imm(instr, IMM_I);
        unique case (f3)
          ADDI: begin d.aluop = ALU_ADD; d.valid = 1'b1; end
          ANDI: begin d.aluop = ALU_AND; d.valid = 1'b1; end
          SLLI: begin
            d.aluop = ALU_SLL;
            d.imm   = {27'b0, instr[24:20]};   // shamt
            d.valid = (f7 == F7_BASE);
          end
          default: ;
        endcase
      end

      ITYPE_LW: begin
        d.uses_rs1 = 1'b1; d.writes_rd = 1'b1; d.op_b_is_imm = 1'b1;
        d.fu      = FU_LSU;
        d.aluop   = ALU_ADD;               // address = rs1 + imm
        d.imm     = get_imm(instr, IMM_I);
        d.is_load = 1'b1;
        d.valid   = (f3 == LW);
      end

      STYPE: begin
        d.uses_rs1 = 1'b1; d.uses_rs2 = 1'b1; d.op_b_is_imm = 1'b1;
        d.fu       = FU_LSU;
        d.aluop    = ALU_ADD;
        d.imm      = get_imm(instr, IMM_S);
        d.is_store = 1'b1;
        d.valid    = (f3 == SW);
      end

      BTYPE: begin
        d.uses_rs1  = 1'b1; d.uses_rs2 = 1'b1;
        d.fu        = FU_BRANCH;
        d.aluop     = ALU_SUB;
        d.imm       = get_imm(instr, IMM_B);
        d.is_branch = 1'b1;
        d.br_invert = (f3 == BNE);
        d.valid     = (f3 == BEQ) || (f3 == BNE);
      end

      JAL: begin
        d.writes_rd  = 1'b1; d.fu = FU_BRANCH; d.is_jump = 1'b1;
        d.op_a_is_pc = 1'b1; d.op_b_is_imm = 1'b1; d.aluop = ALU_ADD;
        d.imm        = get_imm(instr, IMM_J);
        d.valid      = 1'b1;
      end

      JALR: begin
        d.uses_rs1 = 1'b1; d.writes_rd = 1'b1; d.fu = FU_BRANCH;
        d.is_jump  = 1'b1; d.op_b_is_imm = 1'b1; d.aluop = ALU_ADD;
        d.imm      = get_imm(instr, IMM_I);
        d.valid    = (f3 == 3'h0);
      end

      LUI: begin
        d.writes_rd = 1'b1; d.op_b_is_imm = 1'b1; d.aluop = ALU_PASS_B;
        d.imm       = get_imm(instr, IMM_U);
        d.valid     = 1'b1;
      end

      AUIPC: begin
        d.writes_rd = 1'b1; d.op_a_is_pc = 1'b1; d.op_b_is_imm = 1'b1;
        d.aluop     = ALU_ADD;
        d.imm       = get_imm(instr, IMM_U);
        d.valid     = 1'b1;
      end

      default: ;
    endcase

    // x0 is never a real destination.
    if (d.rd == '0) d.writes_rd = 1'b0;

    // Assign to the function name rather than using `return`: Yosys 0.33 and
    // several other tools reject `return` inside a SystemVerilog function,
    // and this form is universally supported.
    decode = d;
  endfunction

endpackage
/* verilator lint_on UNUSEDSIGNAL */
/* verilator lint_on UNUSEDPARAM */
`endif //CPU_TYPES_PKG_VH
