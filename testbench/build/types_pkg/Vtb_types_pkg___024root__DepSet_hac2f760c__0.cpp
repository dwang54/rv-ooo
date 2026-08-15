// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_types_pkg.h for the primary calling header

#include "Vtb_types_pkg__pch.h"
#include "Vtb_types_pkg__Syms.h"
#include "Vtb_types_pkg___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_types_pkg___024root___eval_initial__TOP__Vtiming__0(Vtb_types_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_types_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_types_pkg___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    QData/*63:0*/ tb_types_pkg__DOT__d;
    tb_types_pkg__DOT__d = 0;
    QData/*63:0*/ __Vfunc_decode__0__Vfuncout;
    __Vfunc_decode__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__0__instr;
    __Vfunc_decode__0__instr = 0;
    QData/*63:0*/ __Vfunc_decode__0__d;
    __Vfunc_decode__0__d = 0;
    CData/*6:0*/ __Vfunc_decode__0__opc;
    __Vfunc_decode__0__opc = 0;
    CData/*2:0*/ __Vfunc_decode__0__f3;
    __Vfunc_decode__0__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__0__f7;
    __Vfunc_decode__0__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__6__Vfuncout;
    __Vfunc_get_imm__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__6__instr;
    __Vfunc_get_imm__6__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__7__Vfuncout;
    __Vfunc_get_imm__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__7__instr;
    __Vfunc_get_imm__7__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__8__Vfuncout;
    __Vfunc_get_imm__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__8__instr;
    __Vfunc_get_imm__8__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__9__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__9__ok;
    __Vtask_tb_types_pkg__DOT__chk__9__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__9__detail;
    QData/*63:0*/ __Vfunc_decode__10__Vfuncout;
    __Vfunc_decode__10__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__10__instr;
    __Vfunc_decode__10__instr = 0;
    QData/*63:0*/ __Vfunc_decode__10__d;
    __Vfunc_decode__10__d = 0;
    CData/*6:0*/ __Vfunc_decode__10__opc;
    __Vfunc_decode__10__opc = 0;
    CData/*2:0*/ __Vfunc_decode__10__f3;
    __Vfunc_decode__10__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__10__f7;
    __Vfunc_decode__10__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__16__Vfuncout;
    __Vfunc_get_imm__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__16__instr;
    __Vfunc_get_imm__16__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__17__Vfuncout;
    __Vfunc_get_imm__17__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__17__instr;
    __Vfunc_get_imm__17__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__18__Vfuncout;
    __Vfunc_get_imm__18__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__18__instr;
    __Vfunc_get_imm__18__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__19__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__19__ok;
    __Vtask_tb_types_pkg__DOT__chk__19__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__19__detail;
    QData/*63:0*/ __Vfunc_decode__20__Vfuncout;
    __Vfunc_decode__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__20__instr;
    __Vfunc_decode__20__instr = 0;
    QData/*63:0*/ __Vfunc_decode__20__d;
    __Vfunc_decode__20__d = 0;
    CData/*6:0*/ __Vfunc_decode__20__opc;
    __Vfunc_decode__20__opc = 0;
    CData/*2:0*/ __Vfunc_decode__20__f3;
    __Vfunc_decode__20__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__20__f7;
    __Vfunc_decode__20__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__24__Vfuncout;
    __Vfunc_get_imm__24__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__24__instr;
    __Vfunc_get_imm__24__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__25__Vfuncout;
    __Vfunc_get_imm__25__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__25__instr;
    __Vfunc_get_imm__25__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__29__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__29__ok;
    __Vtask_tb_types_pkg__DOT__chk__29__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__29__detail;
    QData/*63:0*/ __Vfunc_decode__30__Vfuncout;
    __Vfunc_decode__30__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__30__instr;
    __Vfunc_decode__30__instr = 0;
    QData/*63:0*/ __Vfunc_decode__30__d;
    __Vfunc_decode__30__d = 0;
    CData/*6:0*/ __Vfunc_decode__30__opc;
    __Vfunc_decode__30__opc = 0;
    CData/*2:0*/ __Vfunc_decode__30__f3;
    __Vfunc_decode__30__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__30__f7;
    __Vfunc_decode__30__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__34__Vfuncout;
    __Vfunc_get_imm__34__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__34__instr;
    __Vfunc_get_imm__34__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__35__Vfuncout;
    __Vfunc_get_imm__35__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__35__instr;
    __Vfunc_get_imm__35__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__39__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__39__ok;
    __Vtask_tb_types_pkg__DOT__chk__39__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__39__detail;
    QData/*63:0*/ __Vfunc_decode__40__Vfuncout;
    __Vfunc_decode__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__40__instr;
    __Vfunc_decode__40__instr = 0;
    QData/*63:0*/ __Vfunc_decode__40__d;
    __Vfunc_decode__40__d = 0;
    CData/*6:0*/ __Vfunc_decode__40__opc;
    __Vfunc_decode__40__opc = 0;
    CData/*2:0*/ __Vfunc_decode__40__f3;
    __Vfunc_decode__40__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__40__f7;
    __Vfunc_decode__40__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__44__Vfuncout;
    __Vfunc_get_imm__44__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__44__instr;
    __Vfunc_get_imm__44__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__45__Vfuncout;
    __Vfunc_get_imm__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__45__instr;
    __Vfunc_get_imm__45__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__49__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__49__ok;
    __Vtask_tb_types_pkg__DOT__chk__49__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__49__detail;
    QData/*63:0*/ __Vfunc_decode__50__Vfuncout;
    __Vfunc_decode__50__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__50__instr;
    __Vfunc_decode__50__instr = 0;
    QData/*63:0*/ __Vfunc_decode__50__d;
    __Vfunc_decode__50__d = 0;
    CData/*6:0*/ __Vfunc_decode__50__opc;
    __Vfunc_decode__50__opc = 0;
    CData/*2:0*/ __Vfunc_decode__50__f3;
    __Vfunc_decode__50__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__50__f7;
    __Vfunc_decode__50__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__56__Vfuncout;
    __Vfunc_get_imm__56__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__56__instr;
    __Vfunc_get_imm__56__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__57__Vfuncout;
    __Vfunc_get_imm__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__57__instr;
    __Vfunc_get_imm__57__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__58__Vfuncout;
    __Vfunc_get_imm__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__58__instr;
    __Vfunc_get_imm__58__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__59__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__59__ok;
    __Vtask_tb_types_pkg__DOT__chk__59__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__59__detail;
    QData/*63:0*/ __Vfunc_decode__60__Vfuncout;
    __Vfunc_decode__60__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__60__instr;
    __Vfunc_decode__60__instr = 0;
    QData/*63:0*/ __Vfunc_decode__60__d;
    __Vfunc_decode__60__d = 0;
    CData/*6:0*/ __Vfunc_decode__60__opc;
    __Vfunc_decode__60__opc = 0;
    CData/*2:0*/ __Vfunc_decode__60__f3;
    __Vfunc_decode__60__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__60__f7;
    __Vfunc_decode__60__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__64__Vfuncout;
    __Vfunc_get_imm__64__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__64__instr;
    __Vfunc_get_imm__64__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__65__Vfuncout;
    __Vfunc_get_imm__65__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__65__instr;
    __Vfunc_get_imm__65__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__69__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__69__ok;
    __Vtask_tb_types_pkg__DOT__chk__69__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__69__detail;
    QData/*63:0*/ __Vfunc_decode__70__Vfuncout;
    __Vfunc_decode__70__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__70__instr;
    __Vfunc_decode__70__instr = 0;
    QData/*63:0*/ __Vfunc_decode__70__d;
    __Vfunc_decode__70__d = 0;
    CData/*6:0*/ __Vfunc_decode__70__opc;
    __Vfunc_decode__70__opc = 0;
    CData/*2:0*/ __Vfunc_decode__70__f3;
    __Vfunc_decode__70__f3 = 0;
    IData/*31:0*/ __Vfunc_get_imm__71__Vfuncout;
    __Vfunc_get_imm__71__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__71__instr;
    __Vfunc_get_imm__71__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__72__Vfuncout;
    __Vfunc_get_imm__72__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__72__instr;
    __Vfunc_get_imm__72__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__73__Vfuncout;
    __Vfunc_get_imm__73__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__73__instr;
    __Vfunc_get_imm__73__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__79__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__79__ok;
    __Vtask_tb_types_pkg__DOT__chk__79__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__79__detail;
    QData/*63:0*/ __Vfunc_decode__80__Vfuncout;
    __Vfunc_decode__80__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__80__instr;
    __Vfunc_decode__80__instr = 0;
    QData/*63:0*/ __Vfunc_decode__80__d;
    __Vfunc_decode__80__d = 0;
    CData/*6:0*/ __Vfunc_decode__80__opc;
    __Vfunc_decode__80__opc = 0;
    CData/*2:0*/ __Vfunc_decode__80__f3;
    __Vfunc_decode__80__f3 = 0;
    IData/*31:0*/ __Vfunc_get_imm__81__Vfuncout;
    __Vfunc_get_imm__81__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__81__instr;
    __Vfunc_get_imm__81__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__82__Vfuncout;
    __Vfunc_get_imm__82__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__82__instr;
    __Vfunc_get_imm__82__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__83__Vfuncout;
    __Vfunc_get_imm__83__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__83__instr;
    __Vfunc_get_imm__83__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__89__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__89__ok;
    __Vtask_tb_types_pkg__DOT__chk__89__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__89__detail;
    QData/*63:0*/ __Vfunc_decode__90__Vfuncout;
    __Vfunc_decode__90__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__90__instr;
    __Vfunc_decode__90__instr = 0;
    QData/*63:0*/ __Vfunc_decode__90__d;
    __Vfunc_decode__90__d = 0;
    CData/*6:0*/ __Vfunc_decode__90__opc;
    __Vfunc_decode__90__opc = 0;
    CData/*2:0*/ __Vfunc_decode__90__f3;
    __Vfunc_decode__90__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__90__f7;
    __Vfunc_decode__90__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__94__Vfuncout;
    __Vfunc_get_imm__94__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__94__instr;
    __Vfunc_get_imm__94__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__95__Vfuncout;
    __Vfunc_get_imm__95__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__95__instr;
    __Vfunc_get_imm__95__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__99__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__99__ok;
    __Vtask_tb_types_pkg__DOT__chk__99__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__99__detail;
    QData/*63:0*/ __Vfunc_decode__100__Vfuncout;
    __Vfunc_decode__100__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__100__instr;
    __Vfunc_decode__100__instr = 0;
    QData/*63:0*/ __Vfunc_decode__100__d;
    __Vfunc_decode__100__d = 0;
    CData/*6:0*/ __Vfunc_decode__100__opc;
    __Vfunc_decode__100__opc = 0;
    CData/*2:0*/ __Vfunc_decode__100__f3;
    __Vfunc_decode__100__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__100__f7;
    __Vfunc_decode__100__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__106__Vfuncout;
    __Vfunc_get_imm__106__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__106__instr;
    __Vfunc_get_imm__106__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__107__Vfuncout;
    __Vfunc_get_imm__107__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__107__instr;
    __Vfunc_get_imm__107__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__108__Vfuncout;
    __Vfunc_get_imm__108__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__108__instr;
    __Vfunc_get_imm__108__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__109__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__109__ok;
    __Vtask_tb_types_pkg__DOT__chk__109__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__109__detail;
    QData/*63:0*/ __Vfunc_decode__110__Vfuncout;
    __Vfunc_decode__110__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__110__instr;
    __Vfunc_decode__110__instr = 0;
    QData/*63:0*/ __Vfunc_decode__110__d;
    __Vfunc_decode__110__d = 0;
    CData/*6:0*/ __Vfunc_decode__110__opc;
    __Vfunc_decode__110__opc = 0;
    CData/*2:0*/ __Vfunc_decode__110__f3;
    __Vfunc_decode__110__f3 = 0;
    IData/*31:0*/ __Vfunc_get_imm__111__Vfuncout;
    __Vfunc_get_imm__111__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__111__instr;
    __Vfunc_get_imm__111__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__112__Vfuncout;
    __Vfunc_get_imm__112__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__112__instr;
    __Vfunc_get_imm__112__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__113__Vfuncout;
    __Vfunc_get_imm__113__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__113__instr;
    __Vfunc_get_imm__113__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__119__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__119__ok;
    __Vtask_tb_types_pkg__DOT__chk__119__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__119__detail;
    QData/*63:0*/ __Vfunc_decode__120__Vfuncout;
    __Vfunc_decode__120__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__120__instr;
    __Vfunc_decode__120__instr = 0;
    QData/*63:0*/ __Vfunc_decode__120__d;
    __Vfunc_decode__120__d = 0;
    CData/*6:0*/ __Vfunc_decode__120__opc;
    __Vfunc_decode__120__opc = 0;
    CData/*2:0*/ __Vfunc_decode__120__f3;
    __Vfunc_decode__120__f3 = 0;
    IData/*31:0*/ __Vfunc_get_imm__121__Vfuncout;
    __Vfunc_get_imm__121__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__121__instr;
    __Vfunc_get_imm__121__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__122__Vfuncout;
    __Vfunc_get_imm__122__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__122__instr;
    __Vfunc_get_imm__122__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__123__Vfuncout;
    __Vfunc_get_imm__123__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__123__instr;
    __Vfunc_get_imm__123__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__129__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__129__ok;
    __Vtask_tb_types_pkg__DOT__chk__129__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__129__detail;
    QData/*63:0*/ __Vfunc_decode__130__Vfuncout;
    __Vfunc_decode__130__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__130__instr;
    __Vfunc_decode__130__instr = 0;
    QData/*63:0*/ __Vfunc_decode__130__d;
    __Vfunc_decode__130__d = 0;
    CData/*6:0*/ __Vfunc_decode__130__opc;
    __Vfunc_decode__130__opc = 0;
    CData/*2:0*/ __Vfunc_decode__130__f3;
    __Vfunc_decode__130__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__130__f7;
    __Vfunc_decode__130__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__136__Vfuncout;
    __Vfunc_get_imm__136__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__136__instr;
    __Vfunc_get_imm__136__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__137__Vfuncout;
    __Vfunc_get_imm__137__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__137__instr;
    __Vfunc_get_imm__137__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__138__Vfuncout;
    __Vfunc_get_imm__138__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__138__instr;
    __Vfunc_get_imm__138__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__139__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__139__ok;
    __Vtask_tb_types_pkg__DOT__chk__139__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__139__detail;
    QData/*63:0*/ __Vfunc_decode__140__Vfuncout;
    __Vfunc_decode__140__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__140__instr;
    __Vfunc_decode__140__instr = 0;
    QData/*63:0*/ __Vfunc_decode__140__d;
    __Vfunc_decode__140__d = 0;
    CData/*6:0*/ __Vfunc_decode__140__opc;
    __Vfunc_decode__140__opc = 0;
    CData/*2:0*/ __Vfunc_decode__140__f3;
    __Vfunc_decode__140__f3 = 0;
    CData/*6:0*/ __Vfunc_decode__140__f7;
    __Vfunc_decode__140__f7 = 0;
    IData/*31:0*/ __Vfunc_get_imm__144__Vfuncout;
    __Vfunc_get_imm__144__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__144__instr;
    __Vfunc_get_imm__144__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__145__Vfuncout;
    __Vfunc_get_imm__145__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__145__instr;
    __Vfunc_get_imm__145__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__149__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__149__ok;
    __Vtask_tb_types_pkg__DOT__chk__149__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__149__detail;
    QData/*63:0*/ __Vfunc_decode__150__Vfuncout;
    __Vfunc_decode__150__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_decode__150__instr;
    __Vfunc_decode__150__instr = 0;
    QData/*63:0*/ __Vfunc_decode__150__d;
    __Vfunc_decode__150__d = 0;
    CData/*6:0*/ __Vfunc_decode__150__opc;
    __Vfunc_decode__150__opc = 0;
    CData/*2:0*/ __Vfunc_decode__150__f3;
    __Vfunc_decode__150__f3 = 0;
    IData/*31:0*/ __Vfunc_get_imm__151__Vfuncout;
    __Vfunc_get_imm__151__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__151__instr;
    __Vfunc_get_imm__151__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__152__Vfuncout;
    __Vfunc_get_imm__152__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__152__instr;
    __Vfunc_get_imm__152__instr = 0;
    IData/*31:0*/ __Vfunc_get_imm__153__Vfuncout;
    __Vfunc_get_imm__153__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_get_imm__153__instr;
    __Vfunc_get_imm__153__instr = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__159__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__159__ok;
    __Vtask_tb_types_pkg__DOT__chk__159__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__159__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__160__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__160__ok;
    __Vtask_tb_types_pkg__DOT__chk__160__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__160__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__161__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__161__ok;
    __Vtask_tb_types_pkg__DOT__chk__161__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__161__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__162__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__162__ok;
    __Vtask_tb_types_pkg__DOT__chk__162__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__162__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__163__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__163__ok;
    __Vtask_tb_types_pkg__DOT__chk__163__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__163__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__164__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__164__ok;
    __Vtask_tb_types_pkg__DOT__chk__164__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__164__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__165__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__165__ok;
    __Vtask_tb_types_pkg__DOT__chk__165__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__165__detail;
    std::string __Vtask_tb_types_pkg__DOT__chk__166__what;
    CData/*0:0*/ __Vtask_tb_types_pkg__DOT__chk__166__ok;
    __Vtask_tb_types_pkg__DOT__chk__166__ok = 0;
    std::string __Vtask_tb_types_pkg__DOT__chk__166__detail;
    // Body
    __Vfunc_decode__0__instr = 0x500293U;
    __Vfunc_decode__0__opc = 0x13U;
    __Vfunc_decode__0__f3 = 0U;
    __Vfunc_decode__0__f7 = 0U;
    __Vfunc_decode__0__d = 0ULL;
    __Vfunc_decode__0__d = (0x7802940000000000ULL | 
                            (0x800003ffffffffffULL 
                             & __Vfunc_decode__0__d));
    if ((0x10U & (IData)(__Vfunc_decode__0__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__0__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__0__opc))) {
                if ((2U & (IData)(__Vfunc_decode__0__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__0__opc))) {
                        __Vfunc_decode__0__d = (0x8000000000ULL 
                                                | __Vfunc_decode__0__d);
                        __Vfunc_decode__0__d = (3ULL 
                                                | __Vfunc_decode__0__d);
                        __Vfunc_decode__0__d = (0x1800000000000000ULL 
                                                | (0x87ffffffffffffffULL 
                                                   & __Vfunc_decode__0__d));
                        __Vfunc_get_imm__6__instr = __Vfunc_decode__0__instr;
                        __Vfunc_get_imm__6__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__6__instr);
                        __Vfunc_decode__0__d = ((0xffffff800000007fULL 
                                                 & __Vfunc_decode__0__d) 
                                                | ((QData)((IData)(__Vfunc_get_imm__6__Vfuncout)) 
                                                   << 7U));
                        __Vfunc_decode__0__d = (0x8000000000000000ULL 
                                                | __Vfunc_decode__0__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__0__opc))) {
                if ((1U & (IData)(__Vfunc_decode__0__opc))) {
                    __Vfunc_decode__0__d = (0x20000000000ULL 
                                            | __Vfunc_decode__0__d);
                    __Vfunc_decode__0__d = (0x8000000000ULL 
                                            | __Vfunc_decode__0__d);
                    __Vfunc_decode__0__d = (1ULL | __Vfunc_decode__0__d);
                    __Vfunc_get_imm__7__instr = __Vfunc_decode__0__instr;
                    __Vfunc_get_imm__7__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__7__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__7__instr 
                            >> 0x14U));
                    __Vfunc_decode__0__d = ((0xffffff800000007fULL 
                                             & __Vfunc_decode__0__d) 
                                            | ((QData)((IData)(__Vfunc_get_imm__7__Vfuncout)) 
                                               << 7U));
                    if ((0U == (IData)(__Vfunc_decode__0__f3))) {
                        __Vfunc_decode__0__d = (0x9800000000000000ULL 
                                                | (0x7ffffffffffffffULL 
                                                   & __Vfunc_decode__0__d));
                    } else if ((7U == (IData)(__Vfunc_decode__0__f3))) {
                        __Vfunc_decode__0__d = (0xa800000000000000ULL 
                                                | (0x7ffffffffffffffULL 
                                                   & __Vfunc_decode__0__d));
                    } else if ((1U == (IData)(__Vfunc_decode__0__f3))) {
                        __Vfunc_decode__0__d = (0x87ffffffffffffffULL 
                                                & __Vfunc_decode__0__d);
                        __Vfunc_decode__0__d = ((0xffffff800000007fULL 
                                                 & __Vfunc_decode__0__d) 
                                                | ((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (__Vfunc_decode__0__instr 
                                                                       >> 0x14U)))) 
                                                   << 7U));
                        __Vfunc_decode__0__d = ((0x7fffffffffffffffULL 
                                                 & __Vfunc_decode__0__d) 
                                                | ((QData)((IData)(
                                                                   (0U 
                                                                    == (IData)(__Vfunc_decode__0__f7)))) 
                                                   << 0x3fU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__0__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__0__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__0__opc))) {
                if ((1U & (IData)(__Vfunc_decode__0__opc))) {
                    __Vfunc_decode__0__d = (0x20000000000ULL 
                                            | __Vfunc_decode__0__d);
                    __Vfunc_decode__0__d = (0x8000000000ULL 
                                            | __Vfunc_decode__0__d);
                    __Vfunc_decode__0__d = (1ULL | __Vfunc_decode__0__d);
                    __Vfunc_decode__0__d = (0x1c00000000000000ULL 
                                            | (0x81ffffffffffffffULL 
                                               & __Vfunc_decode__0__d));
                    __Vfunc_get_imm__8__instr = __Vfunc_decode__0__instr;
                    __Vfunc_get_imm__8__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__8__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__8__instr 
                            >> 0x14U));
                    __Vfunc_decode__0__d = (0x40ULL 
                                            | ((0xffffff800000003fULL 
                                                & __Vfunc_decode__0__d) 
                                               | ((QData)((IData)(__Vfunc_get_imm__8__Vfuncout)) 
                                                  << 7U)));
                    __Vfunc_decode__0__d = ((0x7fffffffffffffffULL 
                                             & __Vfunc_decode__0__d) 
                                            | ((QData)((IData)(
                                                               (2U 
                                                                == (IData)(__Vfunc_decode__0__f3)))) 
                                               << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__0__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__0__d = (0xffffff7fffffffffULL 
                                & __Vfunc_decode__0__d);
    }
    __Vfunc_decode__0__Vfuncout = __Vfunc_decode__0__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__0__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__9__detail = std::string{"addi t0,x0,5"};
    __Vtask_tb_types_pkg__DOT__chk__9__ok = (IData)(
                                                    (0x9800148000000280ULL 
                                                     == 
                                                     (0xf8007cffffffff80ULL 
                                                      & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__9__what = std::string{"decode ADDI"};
    if (__Vtask_tb_types_pkg__DOT__chk__9__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__9__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__9__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__9__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__9__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__10__instr = 0xfce00293U;
    __Vfunc_decode__10__opc = 0x13U;
    __Vfunc_decode__10__f3 = 0U;
    __Vfunc_decode__10__f7 = 0x7eU;
    __Vfunc_decode__10__d = 0ULL;
    __Vfunc_decode__10__d = (0x7807140000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__10__d));
    if ((0x10U & (IData)(__Vfunc_decode__10__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__10__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__10__opc))) {
                if ((2U & (IData)(__Vfunc_decode__10__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__10__opc))) {
                        __Vfunc_decode__10__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__10__d);
                        __Vfunc_decode__10__d = (3ULL 
                                                 | __Vfunc_decode__10__d);
                        __Vfunc_decode__10__d = (0x1800000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__10__d));
                        __Vfunc_get_imm__16__instr 
                            = __Vfunc_decode__10__instr;
                        __Vfunc_get_imm__16__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__16__instr);
                        __Vfunc_decode__10__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__10__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__16__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__10__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__10__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__10__opc))) {
                if ((1U & (IData)(__Vfunc_decode__10__opc))) {
                    __Vfunc_decode__10__d = (0x20000000000ULL 
                                             | __Vfunc_decode__10__d);
                    __Vfunc_decode__10__d = (0x8000000000ULL 
                                             | __Vfunc_decode__10__d);
                    __Vfunc_decode__10__d = (1ULL | __Vfunc_decode__10__d);
                    __Vfunc_get_imm__17__instr = __Vfunc_decode__10__instr;
                    __Vfunc_get_imm__17__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__17__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__17__instr 
                            >> 0x14U));
                    __Vfunc_decode__10__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__10__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__17__Vfuncout)) 
                                                << 7U));
                    if ((0U == (IData)(__Vfunc_decode__10__f3))) {
                        __Vfunc_decode__10__d = (0x9800000000000000ULL 
                                                 | (0x7ffffffffffffffULL 
                                                    & __Vfunc_decode__10__d));
                    } else if ((7U == (IData)(__Vfunc_decode__10__f3))) {
                        __Vfunc_decode__10__d = (0xa800000000000000ULL 
                                                 | (0x7ffffffffffffffULL 
                                                    & __Vfunc_decode__10__d));
                    } else if ((1U == (IData)(__Vfunc_decode__10__f3))) {
                        __Vfunc_decode__10__d = (0x87ffffffffffffffULL 
                                                 & __Vfunc_decode__10__d);
                        __Vfunc_decode__10__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__10__d) 
                                                 | ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (__Vfunc_decode__10__instr 
                                                                        >> 0x14U)))) 
                                                    << 7U));
                        __Vfunc_decode__10__d = ((0x7fffffffffffffffULL 
                                                  & __Vfunc_decode__10__d) 
                                                 | ((QData)((IData)(
                                                                    (0U 
                                                                     == (IData)(__Vfunc_decode__10__f7)))) 
                                                    << 0x3fU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__10__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__10__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__10__opc))) {
                if ((1U & (IData)(__Vfunc_decode__10__opc))) {
                    __Vfunc_decode__10__d = (0x20000000000ULL 
                                             | __Vfunc_decode__10__d);
                    __Vfunc_decode__10__d = (0x8000000000ULL 
                                             | __Vfunc_decode__10__d);
                    __Vfunc_decode__10__d = (1ULL | __Vfunc_decode__10__d);
                    __Vfunc_decode__10__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__10__d));
                    __Vfunc_get_imm__18__instr = __Vfunc_decode__10__instr;
                    __Vfunc_get_imm__18__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__18__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__18__instr 
                            >> 0x14U));
                    __Vfunc_decode__10__d = (0x40ULL 
                                             | ((0xffffff800000003fULL 
                                                 & __Vfunc_decode__10__d) 
                                                | ((QData)((IData)(__Vfunc_get_imm__18__Vfuncout)) 
                                                   << 7U)));
                    __Vfunc_decode__10__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__10__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__10__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__10__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__10__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__10__d);
    }
    __Vfunc_decode__10__Vfuncout = __Vfunc_decode__10__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__10__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__19__detail = VL_SFORMATF_NX("imm=%x expected FFFFFFCE",
                                                                32,
                                                                (IData)(
                                                                        (tb_types_pkg__DOT__d 
                                                                         >> 7U))) ;
    __Vtask_tb_types_pkg__DOT__chk__19__ok = (0xffffffceU 
                                              == (IData)(
                                                         (tb_types_pkg__DOT__d 
                                                          >> 7U)));
    __Vtask_tb_types_pkg__DOT__chk__19__what = std::string{"ADDI sign extension"};
    if (__Vtask_tb_types_pkg__DOT__chk__19__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__19__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__19__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__19__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__19__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__20__instr = 0x6283b3U;
    __Vfunc_decode__20__opc = 0x33U;
    __Vfunc_decode__20__f3 = 0U;
    __Vfunc_decode__20__f7 = 0U;
    __Vfunc_decode__20__d = 0ULL;
    __Vfunc_decode__20__d = (0x78531c0000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__20__d));
    if ((0x10U & (IData)(__Vfunc_decode__20__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__20__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__20__opc))) {
                if ((2U & (IData)(__Vfunc_decode__20__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__20__opc))) {
                        __Vfunc_decode__20__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__20__d);
                        __Vfunc_decode__20__d = (1ULL 
                                                 | __Vfunc_decode__20__d);
                        __Vfunc_decode__20__d = (0x6000000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__20__d));
                        __Vfunc_get_imm__24__instr 
                            = __Vfunc_decode__20__instr;
                        __Vfunc_get_imm__24__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__24__instr);
                        __Vfunc_decode__20__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__20__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__24__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__20__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__20__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__20__opc))) {
                if ((1U & (IData)(__Vfunc_decode__20__opc))) {
                    __Vfunc_decode__20__d = (0x38000000000ULL 
                                             | __Vfunc_decode__20__d);
                    if ((1U == (IData)(__Vfunc_decode__20__f7))) {
                        __Vfunc_decode__20__d = (0x200000000000000ULL 
                                                 | (0xf9ffffffffffffffULL 
                                                    & __Vfunc_decode__20__d));
                        if ((0U == (IData)(__Vfunc_decode__20__f3))) {
                            __Vfunc_decode__20__d = 
                                (0xd000000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__20__d));
                        } else if ((4U == (IData)(__Vfunc_decode__20__f3))) {
                            __Vfunc_decode__20__d = 
                                (0xd800000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__20__d));
                        }
                    } else if ((4U & (IData)(__Vfunc_decode__20__f3))) {
                        if ((2U & (IData)(__Vfunc_decode__20__f3))) {
                            if ((1U & (IData)(__Vfunc_decode__20__f3))) {
                                __Vfunc_decode__20__d 
                                    = ((0x7ffffffffffffffULL 
                                        & __Vfunc_decode__20__d) 
                                       | ((QData)((IData)(
                                                          (5U 
                                                           | ((0U 
                                                               == (IData)(__Vfunc_decode__20__f7)) 
                                                              << 4U)))) 
                                          << 0x3bU));
                            }
                        } else if ((1U & (~ (IData)(__Vfunc_decode__20__f3)))) {
                            __Vfunc_decode__20__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__20__d) 
                                 | ((QData)((IData)(
                                                    (7U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__20__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((2U & (IData)(__Vfunc_decode__20__f3))) {
                        if ((1U & (~ (IData)(__Vfunc_decode__20__f3)))) {
                            __Vfunc_decode__20__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__20__d) 
                                 | ((QData)((IData)(
                                                    (8U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__20__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((1U & (~ (IData)(__Vfunc_decode__20__f3)))) {
                        __Vfunc_decode__20__d = ((0x7ffffffffffffffULL 
                                                  & __Vfunc_decode__20__d) 
                                                 | ((QData)((IData)(
                                                                    ((((0x20U 
                                                                        == (IData)(__Vfunc_decode__20__f7)) 
                                                                       | (0U 
                                                                          == (IData)(__Vfunc_decode__20__f7))) 
                                                                      << 4U) 
                                                                     | ((0x20U 
                                                                         == (IData)(__Vfunc_decode__20__f7))
                                                                         ? 4U
                                                                         : 3U)))) 
                                                    << 0x3bU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__20__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__20__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__20__opc))) {
                if ((1U & (IData)(__Vfunc_decode__20__opc))) {
                    __Vfunc_decode__20__d = (0x30000000000ULL 
                                             | __Vfunc_decode__20__d);
                    __Vfunc_decode__20__d = (1ULL | __Vfunc_decode__20__d);
                    __Vfunc_decode__20__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__20__d));
                    __Vfunc_get_imm__25__instr = __Vfunc_decode__20__instr;
                    __Vfunc_get_imm__25__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__25__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0xfe0U & (__Vfunc_get_imm__25__instr 
                                       >> 0x14U)) | 
                            (0x1fU & (__Vfunc_get_imm__25__instr 
                                      >> 7U))));
                    __Vfunc_decode__20__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__20__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__25__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__20__d = (0x20ULL 
                                             | __Vfunc_decode__20__d);
                    __Vfunc_decode__20__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__20__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__20__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__20__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__20__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__20__d);
    }
    __Vfunc_decode__20__Vfuncout = __Vfunc_decode__20__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__20__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__29__detail = std::string{"add t2,t0,t1"};
    __Vtask_tb_types_pkg__DOT__chk__29__ok = (IData)(
                                                     (0x9800030000000000ULL 
                                                      == 
                                                      (0xfe00030000000000ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__29__what = std::string{"decode ADD"};
    if (__Vtask_tb_types_pkg__DOT__chk__29__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__29__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__29__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__29__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__29__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__30__instr = 0x40628333U;
    __Vfunc_decode__30__opc = 0x33U;
    __Vfunc_decode__30__f3 = 0U;
    __Vfunc_decode__30__f7 = 0x20U;
    __Vfunc_decode__30__d = 0ULL;
    __Vfunc_decode__30__d = (0x7853180000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__30__d));
    if ((0x10U & (IData)(__Vfunc_decode__30__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__30__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__30__opc))) {
                if ((2U & (IData)(__Vfunc_decode__30__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__30__opc))) {
                        __Vfunc_decode__30__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__30__d);
                        __Vfunc_decode__30__d = (1ULL 
                                                 | __Vfunc_decode__30__d);
                        __Vfunc_decode__30__d = (0x6000000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__30__d));
                        __Vfunc_get_imm__34__instr 
                            = __Vfunc_decode__30__instr;
                        __Vfunc_get_imm__34__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__34__instr);
                        __Vfunc_decode__30__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__30__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__34__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__30__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__30__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__30__opc))) {
                if ((1U & (IData)(__Vfunc_decode__30__opc))) {
                    __Vfunc_decode__30__d = (0x38000000000ULL 
                                             | __Vfunc_decode__30__d);
                    if ((1U == (IData)(__Vfunc_decode__30__f7))) {
                        __Vfunc_decode__30__d = (0x200000000000000ULL 
                                                 | (0xf9ffffffffffffffULL 
                                                    & __Vfunc_decode__30__d));
                        if ((0U == (IData)(__Vfunc_decode__30__f3))) {
                            __Vfunc_decode__30__d = 
                                (0xd000000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__30__d));
                        } else if ((4U == (IData)(__Vfunc_decode__30__f3))) {
                            __Vfunc_decode__30__d = 
                                (0xd800000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__30__d));
                        }
                    } else if ((4U & (IData)(__Vfunc_decode__30__f3))) {
                        if ((2U & (IData)(__Vfunc_decode__30__f3))) {
                            if ((1U & (IData)(__Vfunc_decode__30__f3))) {
                                __Vfunc_decode__30__d 
                                    = ((0x7ffffffffffffffULL 
                                        & __Vfunc_decode__30__d) 
                                       | ((QData)((IData)(
                                                          (5U 
                                                           | ((0U 
                                                               == (IData)(__Vfunc_decode__30__f7)) 
                                                              << 4U)))) 
                                          << 0x3bU));
                            }
                        } else if ((1U & (~ (IData)(__Vfunc_decode__30__f3)))) {
                            __Vfunc_decode__30__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__30__d) 
                                 | ((QData)((IData)(
                                                    (7U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__30__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((2U & (IData)(__Vfunc_decode__30__f3))) {
                        if ((1U & (~ (IData)(__Vfunc_decode__30__f3)))) {
                            __Vfunc_decode__30__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__30__d) 
                                 | ((QData)((IData)(
                                                    (8U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__30__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((1U & (~ (IData)(__Vfunc_decode__30__f3)))) {
                        __Vfunc_decode__30__d = ((0x7ffffffffffffffULL 
                                                  & __Vfunc_decode__30__d) 
                                                 | ((QData)((IData)(
                                                                    ((((0x20U 
                                                                        == (IData)(__Vfunc_decode__30__f7)) 
                                                                       | (0U 
                                                                          == (IData)(__Vfunc_decode__30__f7))) 
                                                                      << 4U) 
                                                                     | ((0x20U 
                                                                         == (IData)(__Vfunc_decode__30__f7))
                                                                         ? 4U
                                                                         : 3U)))) 
                                                    << 0x3bU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__30__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__30__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__30__opc))) {
                if ((1U & (IData)(__Vfunc_decode__30__opc))) {
                    __Vfunc_decode__30__d = (0x30000000000ULL 
                                             | __Vfunc_decode__30__d);
                    __Vfunc_decode__30__d = (1ULL | __Vfunc_decode__30__d);
                    __Vfunc_decode__30__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__30__d));
                    __Vfunc_get_imm__35__instr = __Vfunc_decode__30__instr;
                    __Vfunc_get_imm__35__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__35__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0xfe0U & (__Vfunc_get_imm__35__instr 
                                       >> 0x14U)) | 
                            (0x1fU & (__Vfunc_get_imm__35__instr 
                                      >> 7U))));
                    __Vfunc_decode__30__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__30__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__35__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__30__d = (0x20ULL 
                                             | __Vfunc_decode__30__d);
                    __Vfunc_decode__30__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__30__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__30__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__30__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__30__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__30__d);
    }
    __Vfunc_decode__30__Vfuncout = __Vfunc_decode__30__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__30__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__39__detail = std::string{"funct7=0x20 -> SUB"};
    __Vtask_tb_types_pkg__DOT__chk__39__ok = (IData)(
                                                     (0xa000000000000000ULL 
                                                      == 
                                                      (0xf800000000000000ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__39__what = std::string{"decode SUB"};
    if (__Vtask_tb_types_pkg__DOT__chk__39__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__39__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__39__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__39__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__39__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__40__instr = 0x26283b3U;
    __Vfunc_decode__40__opc = 0x33U;
    __Vfunc_decode__40__f3 = 0U;
    __Vfunc_decode__40__f7 = 1U;
    __Vfunc_decode__40__d = 0ULL;
    __Vfunc_decode__40__d = (0x78531c0000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__40__d));
    if ((0x10U & (IData)(__Vfunc_decode__40__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__40__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__40__opc))) {
                if ((2U & (IData)(__Vfunc_decode__40__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__40__opc))) {
                        __Vfunc_decode__40__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__40__d);
                        __Vfunc_decode__40__d = (1ULL 
                                                 | __Vfunc_decode__40__d);
                        __Vfunc_decode__40__d = (0x6000000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__40__d));
                        __Vfunc_get_imm__44__instr 
                            = __Vfunc_decode__40__instr;
                        __Vfunc_get_imm__44__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__44__instr);
                        __Vfunc_decode__40__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__40__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__44__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__40__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__40__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__40__opc))) {
                if ((1U & (IData)(__Vfunc_decode__40__opc))) {
                    __Vfunc_decode__40__d = (0x38000000000ULL 
                                             | __Vfunc_decode__40__d);
                    if ((1U == (IData)(__Vfunc_decode__40__f7))) {
                        __Vfunc_decode__40__d = (0x200000000000000ULL 
                                                 | (0xf9ffffffffffffffULL 
                                                    & __Vfunc_decode__40__d));
                        if ((0U == (IData)(__Vfunc_decode__40__f3))) {
                            __Vfunc_decode__40__d = 
                                (0xd000000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__40__d));
                        } else if ((4U == (IData)(__Vfunc_decode__40__f3))) {
                            __Vfunc_decode__40__d = 
                                (0xd800000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__40__d));
                        }
                    } else if ((4U & (IData)(__Vfunc_decode__40__f3))) {
                        if ((2U & (IData)(__Vfunc_decode__40__f3))) {
                            if ((1U & (IData)(__Vfunc_decode__40__f3))) {
                                __Vfunc_decode__40__d 
                                    = ((0x7ffffffffffffffULL 
                                        & __Vfunc_decode__40__d) 
                                       | ((QData)((IData)(
                                                          (5U 
                                                           | ((0U 
                                                               == (IData)(__Vfunc_decode__40__f7)) 
                                                              << 4U)))) 
                                          << 0x3bU));
                            }
                        } else if ((1U & (~ (IData)(__Vfunc_decode__40__f3)))) {
                            __Vfunc_decode__40__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__40__d) 
                                 | ((QData)((IData)(
                                                    (7U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__40__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((2U & (IData)(__Vfunc_decode__40__f3))) {
                        if ((1U & (~ (IData)(__Vfunc_decode__40__f3)))) {
                            __Vfunc_decode__40__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__40__d) 
                                 | ((QData)((IData)(
                                                    (8U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__40__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((1U & (~ (IData)(__Vfunc_decode__40__f3)))) {
                        __Vfunc_decode__40__d = ((0x7ffffffffffffffULL 
                                                  & __Vfunc_decode__40__d) 
                                                 | ((QData)((IData)(
                                                                    ((((0x20U 
                                                                        == (IData)(__Vfunc_decode__40__f7)) 
                                                                       | (0U 
                                                                          == (IData)(__Vfunc_decode__40__f7))) 
                                                                      << 4U) 
                                                                     | ((0x20U 
                                                                         == (IData)(__Vfunc_decode__40__f7))
                                                                         ? 4U
                                                                         : 3U)))) 
                                                    << 0x3bU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__40__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__40__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__40__opc))) {
                if ((1U & (IData)(__Vfunc_decode__40__opc))) {
                    __Vfunc_decode__40__d = (0x30000000000ULL 
                                             | __Vfunc_decode__40__d);
                    __Vfunc_decode__40__d = (1ULL | __Vfunc_decode__40__d);
                    __Vfunc_decode__40__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__40__d));
                    __Vfunc_get_imm__45__instr = __Vfunc_decode__40__instr;
                    __Vfunc_get_imm__45__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__45__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0xfe0U & (__Vfunc_get_imm__45__instr 
                                       >> 0x14U)) | 
                            (0x1fU & (__Vfunc_get_imm__45__instr 
                                      >> 7U))));
                    __Vfunc_decode__40__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__40__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__45__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__40__d = (0x20ULL 
                                             | __Vfunc_decode__40__d);
                    __Vfunc_decode__40__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__40__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__40__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__40__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__40__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__40__d);
    }
    __Vfunc_decode__40__Vfuncout = __Vfunc_decode__40__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__40__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__49__detail = std::string{"steered to FU_MULDIV"};
    __Vtask_tb_types_pkg__DOT__chk__49__ok = (IData)(
                                                     (0xd200000000000000ULL 
                                                      == 
                                                      (0xfe00000000000000ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__49__what = std::string{"decode MUL"};
    if (__Vtask_tb_types_pkg__DOT__chk__49__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__49__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__49__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__49__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__49__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__50__instr = 0x2a283U;
    __Vfunc_decode__50__opc = 3U;
    __Vfunc_decode__50__f3 = 2U;
    __Vfunc_decode__50__f7 = 0U;
    __Vfunc_decode__50__d = 0ULL;
    __Vfunc_decode__50__d = (0x7850140000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__50__d));
    if ((0x10U & (IData)(__Vfunc_decode__50__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__50__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__50__opc))) {
                if ((2U & (IData)(__Vfunc_decode__50__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__50__opc))) {
                        __Vfunc_decode__50__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__50__d);
                        __Vfunc_decode__50__d = (3ULL 
                                                 | __Vfunc_decode__50__d);
                        __Vfunc_decode__50__d = (0x1800000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__50__d));
                        __Vfunc_get_imm__56__instr 
                            = __Vfunc_decode__50__instr;
                        __Vfunc_get_imm__56__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__56__instr);
                        __Vfunc_decode__50__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__50__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__56__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__50__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__50__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__50__opc))) {
                if ((1U & (IData)(__Vfunc_decode__50__opc))) {
                    __Vfunc_decode__50__d = (0x20000000000ULL 
                                             | __Vfunc_decode__50__d);
                    __Vfunc_decode__50__d = (0x8000000000ULL 
                                             | __Vfunc_decode__50__d);
                    __Vfunc_decode__50__d = (1ULL | __Vfunc_decode__50__d);
                    __Vfunc_get_imm__57__instr = __Vfunc_decode__50__instr;
                    __Vfunc_get_imm__57__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__57__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__57__instr 
                            >> 0x14U));
                    __Vfunc_decode__50__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__50__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__57__Vfuncout)) 
                                                << 7U));
                    if ((0U == (IData)(__Vfunc_decode__50__f3))) {
                        __Vfunc_decode__50__d = (0x9800000000000000ULL 
                                                 | (0x7ffffffffffffffULL 
                                                    & __Vfunc_decode__50__d));
                    } else if ((7U == (IData)(__Vfunc_decode__50__f3))) {
                        __Vfunc_decode__50__d = (0xa800000000000000ULL 
                                                 | (0x7ffffffffffffffULL 
                                                    & __Vfunc_decode__50__d));
                    } else if ((1U == (IData)(__Vfunc_decode__50__f3))) {
                        __Vfunc_decode__50__d = (0x87ffffffffffffffULL 
                                                 & __Vfunc_decode__50__d);
                        __Vfunc_decode__50__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__50__d) 
                                                 | ((QData)((IData)(
                                                                    (0x1fU 
                                                                     & (__Vfunc_decode__50__instr 
                                                                        >> 0x14U)))) 
                                                    << 7U));
                        __Vfunc_decode__50__d = ((0x7fffffffffffffffULL 
                                                  & __Vfunc_decode__50__d) 
                                                 | ((QData)((IData)(
                                                                    (0U 
                                                                     == (IData)(__Vfunc_decode__50__f7)))) 
                                                    << 0x3fU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__50__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__50__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__50__opc))) {
                if ((1U & (IData)(__Vfunc_decode__50__opc))) {
                    __Vfunc_decode__50__d = (0x20000000000ULL 
                                             | __Vfunc_decode__50__d);
                    __Vfunc_decode__50__d = (0x8000000000ULL 
                                             | __Vfunc_decode__50__d);
                    __Vfunc_decode__50__d = (1ULL | __Vfunc_decode__50__d);
                    __Vfunc_decode__50__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__50__d));
                    __Vfunc_get_imm__58__instr = __Vfunc_decode__50__instr;
                    __Vfunc_get_imm__58__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__58__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__58__instr 
                            >> 0x14U));
                    __Vfunc_decode__50__d = (0x40ULL 
                                             | ((0xffffff800000003fULL 
                                                 & __Vfunc_decode__50__d) 
                                                | ((QData)((IData)(__Vfunc_get_imm__58__Vfuncout)) 
                                                   << 7U)));
                    __Vfunc_decode__50__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__50__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__50__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__50__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__50__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__50__d);
    }
    __Vfunc_decode__50__Vfuncout = __Vfunc_decode__50__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__50__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__59__detail = std::string{"address = rs1 + imm"};
    __Vtask_tb_types_pkg__DOT__chk__59__ok = (IData)(
                                                     (0x9c00000000000040ULL 
                                                      == 
                                                      (0xfe00000000000040ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__59__what = std::string{"decode LW"};
    if (__Vtask_tb_types_pkg__DOT__chk__59__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__59__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__59__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__59__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__59__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__60__instr = 0x62a023U;
    __Vfunc_decode__60__opc = 0x23U;
    __Vfunc_decode__60__f3 = 2U;
    __Vfunc_decode__60__f7 = 0U;
    __Vfunc_decode__60__d = 0ULL;
    __Vfunc_decode__60__d = (0x7853000000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__60__d));
    if ((0x10U & (IData)(__Vfunc_decode__60__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__60__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__60__opc))) {
                if ((2U & (IData)(__Vfunc_decode__60__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__60__opc))) {
                        __Vfunc_decode__60__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__60__d);
                        __Vfunc_decode__60__d = (1ULL 
                                                 | __Vfunc_decode__60__d);
                        __Vfunc_decode__60__d = (0x6000000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__60__d));
                        __Vfunc_get_imm__64__instr 
                            = __Vfunc_decode__60__instr;
                        __Vfunc_get_imm__64__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__64__instr);
                        __Vfunc_decode__60__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__60__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__64__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__60__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__60__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__60__opc))) {
                if ((1U & (IData)(__Vfunc_decode__60__opc))) {
                    __Vfunc_decode__60__d = (0x38000000000ULL 
                                             | __Vfunc_decode__60__d);
                    if ((1U == (IData)(__Vfunc_decode__60__f7))) {
                        __Vfunc_decode__60__d = (0x200000000000000ULL 
                                                 | (0xf9ffffffffffffffULL 
                                                    & __Vfunc_decode__60__d));
                        if ((0U == (IData)(__Vfunc_decode__60__f3))) {
                            __Vfunc_decode__60__d = 
                                (0xd000000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__60__d));
                        } else if ((4U == (IData)(__Vfunc_decode__60__f3))) {
                            __Vfunc_decode__60__d = 
                                (0xd800000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__60__d));
                        }
                    } else if ((4U & (IData)(__Vfunc_decode__60__f3))) {
                        if ((2U & (IData)(__Vfunc_decode__60__f3))) {
                            if ((1U & (IData)(__Vfunc_decode__60__f3))) {
                                __Vfunc_decode__60__d 
                                    = ((0x7ffffffffffffffULL 
                                        & __Vfunc_decode__60__d) 
                                       | ((QData)((IData)(
                                                          (5U 
                                                           | ((0U 
                                                               == (IData)(__Vfunc_decode__60__f7)) 
                                                              << 4U)))) 
                                          << 0x3bU));
                            }
                        } else if ((1U & (~ (IData)(__Vfunc_decode__60__f3)))) {
                            __Vfunc_decode__60__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__60__d) 
                                 | ((QData)((IData)(
                                                    (7U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__60__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((2U & (IData)(__Vfunc_decode__60__f3))) {
                        if ((1U & (~ (IData)(__Vfunc_decode__60__f3)))) {
                            __Vfunc_decode__60__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__60__d) 
                                 | ((QData)((IData)(
                                                    (8U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__60__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((1U & (~ (IData)(__Vfunc_decode__60__f3)))) {
                        __Vfunc_decode__60__d = ((0x7ffffffffffffffULL 
                                                  & __Vfunc_decode__60__d) 
                                                 | ((QData)((IData)(
                                                                    ((((0x20U 
                                                                        == (IData)(__Vfunc_decode__60__f7)) 
                                                                       | (0U 
                                                                          == (IData)(__Vfunc_decode__60__f7))) 
                                                                      << 4U) 
                                                                     | ((0x20U 
                                                                         == (IData)(__Vfunc_decode__60__f7))
                                                                         ? 4U
                                                                         : 3U)))) 
                                                    << 0x3bU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__60__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__60__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__60__opc))) {
                if ((1U & (IData)(__Vfunc_decode__60__opc))) {
                    __Vfunc_decode__60__d = (0x30000000000ULL 
                                             | __Vfunc_decode__60__d);
                    __Vfunc_decode__60__d = (1ULL | __Vfunc_decode__60__d);
                    __Vfunc_decode__60__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__60__d));
                    __Vfunc_get_imm__65__instr = __Vfunc_decode__60__instr;
                    __Vfunc_get_imm__65__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__65__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0xfe0U & (__Vfunc_get_imm__65__instr 
                                       >> 0x14U)) | 
                            (0x1fU & (__Vfunc_get_imm__65__instr 
                                      >> 7U))));
                    __Vfunc_decode__60__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__60__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__65__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__60__d = (0x20ULL 
                                             | __Vfunc_decode__60__d);
                    __Vfunc_decode__60__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__60__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__60__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__60__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__60__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__60__d);
    }
    __Vfunc_decode__60__Vfuncout = __Vfunc_decode__60__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__60__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__69__detail = std::string{"no rd write"};
    __Vtask_tb_types_pkg__DOT__chk__69__ok = (IData)(
                                                     (0x8000000000000020ULL 
                                                      == 
                                                      (0x8000008000000020ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__69__what = std::string{"decode SW"};
    if (__Vtask_tb_types_pkg__DOT__chk__69__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__69__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__69__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__69__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__69__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__70__instr = 0x628463U;
    __Vfunc_decode__70__opc = 0x63U;
    __Vfunc_decode__70__f3 = 0U;
    __Vfunc_decode__70__d = 0ULL;
    __Vfunc_decode__70__d = (0x7853200000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__70__d));
    if ((1U & (~ ((IData)(__Vfunc_decode__70__opc) 
                  >> 4U)))) {
        if ((8U & (IData)(__Vfunc_decode__70__opc))) {
            if ((4U & (IData)(__Vfunc_decode__70__opc))) {
                if ((2U & (IData)(__Vfunc_decode__70__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__70__opc))) {
                        __Vfunc_decode__70__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__70__d);
                        __Vfunc_decode__70__d = (0x600000000000000ULL 
                                                 | __Vfunc_decode__70__d);
                        __Vfunc_decode__70__d = (8ULL 
                                                 | __Vfunc_decode__70__d);
                        __Vfunc_decode__70__d = (3ULL 
                                                 | __Vfunc_decode__70__d);
                        __Vfunc_decode__70__d = (0x1800000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__70__d));
                        __Vfunc_get_imm__71__instr 
                            = __Vfunc_decode__70__instr;
                        __Vfunc_get_imm__71__Vfuncout 
                            = (((- (IData)((__Vfunc_get_imm__71__instr 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (__Vfunc_get_imm__71__instr 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & __Vfunc_get_imm__71__instr) 
                                                | ((0x800U 
                                                    & (__Vfunc_get_imm__71__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (__Vfunc_get_imm__71__instr 
                                                         >> 0x14U))))));
                        __Vfunc_decode__70__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__70__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__71__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__70__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__70__d);
                    }
                }
            }
        } else if ((4U & (IData)(__Vfunc_decode__70__opc))) {
            if ((2U & (IData)(__Vfunc_decode__70__opc))) {
                if ((1U & (IData)(__Vfunc_decode__70__opc))) {
                    __Vfunc_decode__70__d = (0x20000000000ULL 
                                             | __Vfunc_decode__70__d);
                    __Vfunc_decode__70__d = (0x8000000000ULL 
                                             | __Vfunc_decode__70__d);
                    __Vfunc_decode__70__d = (0x600000000000000ULL 
                                             | __Vfunc_decode__70__d);
                    __Vfunc_decode__70__d = (8ULL | __Vfunc_decode__70__d);
                    __Vfunc_decode__70__d = (1ULL | __Vfunc_decode__70__d);
                    __Vfunc_decode__70__d = (0x1800000000000000ULL 
                                             | (0x87ffffffffffffffULL 
                                                & __Vfunc_decode__70__d));
                    __Vfunc_get_imm__72__instr = __Vfunc_decode__70__instr;
                    __Vfunc_get_imm__72__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__72__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__72__instr 
                            >> 0x14U));
                    __Vfunc_decode__70__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__70__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__72__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__70__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__70__d) 
                                             | ((QData)((IData)(
                                                                (0U 
                                                                 == (IData)(__Vfunc_decode__70__f3)))) 
                                                << 0x3fU));
                }
            }
        } else if ((2U & (IData)(__Vfunc_decode__70__opc))) {
            if ((1U & (IData)(__Vfunc_decode__70__opc))) {
                __Vfunc_decode__70__d = (0x30000000000ULL 
                                         | __Vfunc_decode__70__d);
                __Vfunc_decode__70__d = (0x2600000000000000ULL 
                                         | (0x81ffffffffffffffULL 
                                            & __Vfunc_decode__70__d));
                __Vfunc_get_imm__73__instr = __Vfunc_decode__70__instr;
                __Vfunc_get_imm__73__Vfuncout = (((- (IData)(
                                                             (__Vfunc_get_imm__73__instr 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & (__Vfunc_get_imm__73__instr 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (__Vfunc_get_imm__73__instr 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (__Vfunc_get_imm__73__instr 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (__Vfunc_get_imm__73__instr 
                                                                >> 7U))))));
                __Vfunc_decode__70__d = ((0xffffff800000007fULL 
                                          & __Vfunc_decode__70__d) 
                                         | ((QData)((IData)(__Vfunc_get_imm__73__Vfuncout)) 
                                            << 7U));
                __Vfunc_decode__70__d = (0x10ULL | __Vfunc_decode__70__d);
                __Vfunc_decode__70__d = ((0xfffffffffffffffbULL 
                                          & __Vfunc_decode__70__d) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             == (IData)(__Vfunc_decode__70__f3)))) 
                                            << 2U));
                __Vfunc_decode__70__d = ((0x7fffffffffffffffULL 
                                          & __Vfunc_decode__70__d) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(__Vfunc_decode__70__f3)) 
                                                             | (1U 
                                                                == (IData)(__Vfunc_decode__70__f3))))) 
                                            << 0x3fU));
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__70__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__70__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__70__d);
    }
    __Vfunc_decode__70__Vfuncout = __Vfunc_decode__70__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__70__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__79__detail = std::string{"br_invert=0"};
    __Vtask_tb_types_pkg__DOT__chk__79__ok = (IData)(
                                                     (0x8000000000000010ULL 
                                                      == 
                                                      (0x8000000000000014ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__79__what = std::string{"decode BEQ"};
    if (__Vtask_tb_types_pkg__DOT__chk__79__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__79__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__79__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__79__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__79__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__80__instr = 0x629463U;
    __Vfunc_decode__80__opc = 0x63U;
    __Vfunc_decode__80__f3 = 1U;
    __Vfunc_decode__80__d = 0ULL;
    __Vfunc_decode__80__d = (0x7853200000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__80__d));
    if ((1U & (~ ((IData)(__Vfunc_decode__80__opc) 
                  >> 4U)))) {
        if ((8U & (IData)(__Vfunc_decode__80__opc))) {
            if ((4U & (IData)(__Vfunc_decode__80__opc))) {
                if ((2U & (IData)(__Vfunc_decode__80__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__80__opc))) {
                        __Vfunc_decode__80__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__80__d);
                        __Vfunc_decode__80__d = (0x600000000000000ULL 
                                                 | __Vfunc_decode__80__d);
                        __Vfunc_decode__80__d = (8ULL 
                                                 | __Vfunc_decode__80__d);
                        __Vfunc_decode__80__d = (3ULL 
                                                 | __Vfunc_decode__80__d);
                        __Vfunc_decode__80__d = (0x1800000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__80__d));
                        __Vfunc_get_imm__81__instr 
                            = __Vfunc_decode__80__instr;
                        __Vfunc_get_imm__81__Vfuncout 
                            = (((- (IData)((__Vfunc_get_imm__81__instr 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (__Vfunc_get_imm__81__instr 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & __Vfunc_get_imm__81__instr) 
                                                | ((0x800U 
                                                    & (__Vfunc_get_imm__81__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (__Vfunc_get_imm__81__instr 
                                                         >> 0x14U))))));
                        __Vfunc_decode__80__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__80__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__81__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__80__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__80__d);
                    }
                }
            }
        } else if ((4U & (IData)(__Vfunc_decode__80__opc))) {
            if ((2U & (IData)(__Vfunc_decode__80__opc))) {
                if ((1U & (IData)(__Vfunc_decode__80__opc))) {
                    __Vfunc_decode__80__d = (0x20000000000ULL 
                                             | __Vfunc_decode__80__d);
                    __Vfunc_decode__80__d = (0x8000000000ULL 
                                             | __Vfunc_decode__80__d);
                    __Vfunc_decode__80__d = (0x600000000000000ULL 
                                             | __Vfunc_decode__80__d);
                    __Vfunc_decode__80__d = (8ULL | __Vfunc_decode__80__d);
                    __Vfunc_decode__80__d = (1ULL | __Vfunc_decode__80__d);
                    __Vfunc_decode__80__d = (0x1800000000000000ULL 
                                             | (0x87ffffffffffffffULL 
                                                & __Vfunc_decode__80__d));
                    __Vfunc_get_imm__82__instr = __Vfunc_decode__80__instr;
                    __Vfunc_get_imm__82__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__82__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | (__Vfunc_get_imm__82__instr 
                            >> 0x14U));
                    __Vfunc_decode__80__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__80__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__82__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__80__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__80__d) 
                                             | ((QData)((IData)(
                                                                (0U 
                                                                 == (IData)(__Vfunc_decode__80__f3)))) 
                                                << 0x3fU));
                }
            }
        } else if ((2U & (IData)(__Vfunc_decode__80__opc))) {
            if ((1U & (IData)(__Vfunc_decode__80__opc))) {
                __Vfunc_decode__80__d = (0x30000000000ULL 
                                         | __Vfunc_decode__80__d);
                __Vfunc_decode__80__d = (0x2600000000000000ULL 
                                         | (0x81ffffffffffffffULL 
                                            & __Vfunc_decode__80__d));
                __Vfunc_get_imm__83__instr = __Vfunc_decode__80__instr;
                __Vfunc_get_imm__83__Vfuncout = (((- (IData)(
                                                             (__Vfunc_get_imm__83__instr 
                                                              >> 0x1fU))) 
                                                  << 0xdU) 
                                                 | ((0x1000U 
                                                     & (__Vfunc_get_imm__83__instr 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (__Vfunc_get_imm__83__instr 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (__Vfunc_get_imm__83__instr 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (__Vfunc_get_imm__83__instr 
                                                                >> 7U))))));
                __Vfunc_decode__80__d = ((0xffffff800000007fULL 
                                          & __Vfunc_decode__80__d) 
                                         | ((QData)((IData)(__Vfunc_get_imm__83__Vfuncout)) 
                                            << 7U));
                __Vfunc_decode__80__d = (0x10ULL | __Vfunc_decode__80__d);
                __Vfunc_decode__80__d = ((0xfffffffffffffffbULL 
                                          & __Vfunc_decode__80__d) 
                                         | ((QData)((IData)(
                                                            (1U 
                                                             == (IData)(__Vfunc_decode__80__f3)))) 
                                            << 2U));
                __Vfunc_decode__80__d = ((0x7fffffffffffffffULL 
                                          & __Vfunc_decode__80__d) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(__Vfunc_decode__80__f3)) 
                                                             | (1U 
                                                                == (IData)(__Vfunc_decode__80__f3))))) 
                                            << 0x3fU));
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__80__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__80__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__80__d);
    }
    __Vfunc_decode__80__Vfuncout = __Vfunc_decode__80__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__80__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__89__detail = std::string{"br_invert=1"};
    __Vtask_tb_types_pkg__DOT__chk__89__ok = (IData)(
                                                     (0x8000000000000014ULL 
                                                      == 
                                                      (0x8000000000000014ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__89__what = std::string{"decode BNE"};
    if (__Vtask_tb_types_pkg__DOT__chk__89__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__89__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__89__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__89__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__89__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__90__instr = 0x123452b7U;
    __Vfunc_decode__90__opc = 0x37U;
    __Vfunc_decode__90__f3 = 5U;
    __Vfunc_decode__90__f7 = 9U;
    __Vfunc_decode__90__d = 0ULL;
    __Vfunc_decode__90__d = (0x7881940000000000ULL 
                             | (0x800003ffffffffffULL 
                                & __Vfunc_decode__90__d));
    if ((0x10U & (IData)(__Vfunc_decode__90__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__90__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__90__opc))) {
                if ((2U & (IData)(__Vfunc_decode__90__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__90__opc))) {
                        __Vfunc_decode__90__d = (0x8000000000ULL 
                                                 | __Vfunc_decode__90__d);
                        __Vfunc_decode__90__d = (1ULL 
                                                 | __Vfunc_decode__90__d);
                        __Vfunc_decode__90__d = (0x6000000000000000ULL 
                                                 | (0x87ffffffffffffffULL 
                                                    & __Vfunc_decode__90__d));
                        __Vfunc_get_imm__94__instr 
                            = __Vfunc_decode__90__instr;
                        __Vfunc_get_imm__94__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__94__instr);
                        __Vfunc_decode__90__d = ((0xffffff800000007fULL 
                                                  & __Vfunc_decode__90__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__94__Vfuncout)) 
                                                    << 7U));
                        __Vfunc_decode__90__d = (0x8000000000000000ULL 
                                                 | __Vfunc_decode__90__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__90__opc))) {
                if ((1U & (IData)(__Vfunc_decode__90__opc))) {
                    __Vfunc_decode__90__d = (0x38000000000ULL 
                                             | __Vfunc_decode__90__d);
                    if ((1U == (IData)(__Vfunc_decode__90__f7))) {
                        __Vfunc_decode__90__d = (0x200000000000000ULL 
                                                 | (0xf9ffffffffffffffULL 
                                                    & __Vfunc_decode__90__d));
                        if ((0U == (IData)(__Vfunc_decode__90__f3))) {
                            __Vfunc_decode__90__d = 
                                (0xd000000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__90__d));
                        } else if ((4U == (IData)(__Vfunc_decode__90__f3))) {
                            __Vfunc_decode__90__d = 
                                (0xd800000000000000ULL 
                                 | (0x7ffffffffffffffULL 
                                    & __Vfunc_decode__90__d));
                        }
                    } else if ((4U & (IData)(__Vfunc_decode__90__f3))) {
                        if ((2U & (IData)(__Vfunc_decode__90__f3))) {
                            if ((1U & (IData)(__Vfunc_decode__90__f3))) {
                                __Vfunc_decode__90__d 
                                    = ((0x7ffffffffffffffULL 
                                        & __Vfunc_decode__90__d) 
                                       | ((QData)((IData)(
                                                          (5U 
                                                           | ((0U 
                                                               == (IData)(__Vfunc_decode__90__f7)) 
                                                              << 4U)))) 
                                          << 0x3bU));
                            }
                        } else if ((1U & (~ (IData)(__Vfunc_decode__90__f3)))) {
                            __Vfunc_decode__90__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__90__d) 
                                 | ((QData)((IData)(
                                                    (7U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__90__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((2U & (IData)(__Vfunc_decode__90__f3))) {
                        if ((1U & (~ (IData)(__Vfunc_decode__90__f3)))) {
                            __Vfunc_decode__90__d = 
                                ((0x7ffffffffffffffULL 
                                  & __Vfunc_decode__90__d) 
                                 | ((QData)((IData)(
                                                    (8U 
                                                     | ((0U 
                                                         == (IData)(__Vfunc_decode__90__f7)) 
                                                        << 4U)))) 
                                    << 0x3bU));
                        }
                    } else if ((1U & (~ (IData)(__Vfunc_decode__90__f3)))) {
                        __Vfunc_decode__90__d = ((0x7ffffffffffffffULL 
                                                  & __Vfunc_decode__90__d) 
                                                 | ((QData)((IData)(
                                                                    ((((0x20U 
                                                                        == (IData)(__Vfunc_decode__90__f7)) 
                                                                       | (0U 
                                                                          == (IData)(__Vfunc_decode__90__f7))) 
                                                                      << 4U) 
                                                                     | ((0x20U 
                                                                         == (IData)(__Vfunc_decode__90__f7))
                                                                         ? 4U
                                                                         : 3U)))) 
                                                    << 0x3bU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__90__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__90__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__90__opc))) {
                if ((1U & (IData)(__Vfunc_decode__90__opc))) {
                    __Vfunc_decode__90__d = (0x30000000000ULL 
                                             | __Vfunc_decode__90__d);
                    __Vfunc_decode__90__d = (1ULL | __Vfunc_decode__90__d);
                    __Vfunc_decode__90__d = (0x1c00000000000000ULL 
                                             | (0x81ffffffffffffffULL 
                                                & __Vfunc_decode__90__d));
                    __Vfunc_get_imm__95__instr = __Vfunc_decode__90__instr;
                    __Vfunc_get_imm__95__Vfuncout = 
                        (((- (IData)((__Vfunc_get_imm__95__instr 
                                      >> 0x1fU))) << 0xcU) 
                         | ((0xfe0U & (__Vfunc_get_imm__95__instr 
                                       >> 0x14U)) | 
                            (0x1fU & (__Vfunc_get_imm__95__instr 
                                      >> 7U))));
                    __Vfunc_decode__90__d = ((0xffffff800000007fULL 
                                              & __Vfunc_decode__90__d) 
                                             | ((QData)((IData)(__Vfunc_get_imm__95__Vfuncout)) 
                                                << 7U));
                    __Vfunc_decode__90__d = (0x20ULL 
                                             | __Vfunc_decode__90__d);
                    __Vfunc_decode__90__d = ((0x7fffffffffffffffULL 
                                              & __Vfunc_decode__90__d) 
                                             | ((QData)((IData)(
                                                                (2U 
                                                                 == (IData)(__Vfunc_decode__90__f3)))) 
                                                << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__90__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__90__d = (0xffffff7fffffffffULL 
                                 & __Vfunc_decode__90__d);
    }
    __Vfunc_decode__90__Vfuncout = __Vfunc_decode__90__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__90__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__99__detail = VL_SFORMATF_NX("imm=%x",
                                                                32,
                                                                (IData)(
                                                                        (tb_types_pkg__DOT__d 
                                                                         >> 7U))) ;
    __Vtask_tb_types_pkg__DOT__chk__99__ok = (IData)(
                                                     (0xe00000091a280000ULL 
                                                      == 
                                                      (0xf800007fffffff80ULL 
                                                       & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__99__what = std::string{"decode LUI"};
    if (__Vtask_tb_types_pkg__DOT__chk__99__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__99__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__99__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__99__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__99__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__100__instr = 0x297U;
    __Vfunc_decode__100__opc = 0x17U;
    __Vfunc_decode__100__f3 = 0U;
    __Vfunc_decode__100__f7 = 0U;
    __Vfunc_decode__100__d = 0ULL;
    __Vfunc_decode__100__d = (0x7800140000000000ULL 
                              | (0x800003ffffffffffULL 
                                 & __Vfunc_decode__100__d));
    if ((0x10U & (IData)(__Vfunc_decode__100__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__100__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__100__opc))) {
                if ((2U & (IData)(__Vfunc_decode__100__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__100__opc))) {
                        __Vfunc_decode__100__d = (0x8000000000ULL 
                                                  | __Vfunc_decode__100__d);
                        __Vfunc_decode__100__d = (3ULL 
                                                  | __Vfunc_decode__100__d);
                        __Vfunc_decode__100__d = (0x1800000000000000ULL 
                                                  | (0x87ffffffffffffffULL 
                                                     & __Vfunc_decode__100__d));
                        __Vfunc_get_imm__106__instr 
                            = __Vfunc_decode__100__instr;
                        __Vfunc_get_imm__106__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__106__instr);
                        __Vfunc_decode__100__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__100__d) 
                                                  | ((QData)((IData)(__Vfunc_get_imm__106__Vfuncout)) 
                                                     << 7U));
                        __Vfunc_decode__100__d = (0x8000000000000000ULL 
                                                  | __Vfunc_decode__100__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__100__opc))) {
                if ((1U & (IData)(__Vfunc_decode__100__opc))) {
                    __Vfunc_decode__100__d = (0x20000000000ULL 
                                              | __Vfunc_decode__100__d);
                    __Vfunc_decode__100__d = (0x8000000000ULL 
                                              | __Vfunc_decode__100__d);
                    __Vfunc_decode__100__d = (1ULL 
                                              | __Vfunc_decode__100__d);
                    __Vfunc_get_imm__107__instr = __Vfunc_decode__100__instr;
                    __Vfunc_get_imm__107__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__107__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__107__instr 
                                        >> 0x14U));
                    __Vfunc_decode__100__d = ((0xffffff800000007fULL 
                                               & __Vfunc_decode__100__d) 
                                              | ((QData)((IData)(__Vfunc_get_imm__107__Vfuncout)) 
                                                 << 7U));
                    if ((0U == (IData)(__Vfunc_decode__100__f3))) {
                        __Vfunc_decode__100__d = (0x9800000000000000ULL 
                                                  | (0x7ffffffffffffffULL 
                                                     & __Vfunc_decode__100__d));
                    } else if ((7U == (IData)(__Vfunc_decode__100__f3))) {
                        __Vfunc_decode__100__d = (0xa800000000000000ULL 
                                                  | (0x7ffffffffffffffULL 
                                                     & __Vfunc_decode__100__d));
                    } else if ((1U == (IData)(__Vfunc_decode__100__f3))) {
                        __Vfunc_decode__100__d = (0x87ffffffffffffffULL 
                                                  & __Vfunc_decode__100__d);
                        __Vfunc_decode__100__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__100__d) 
                                                  | ((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (__Vfunc_decode__100__instr 
                                                                         >> 0x14U)))) 
                                                     << 7U));
                        __Vfunc_decode__100__d = ((0x7fffffffffffffffULL 
                                                   & __Vfunc_decode__100__d) 
                                                  | ((QData)((IData)(
                                                                     (0U 
                                                                      == (IData)(__Vfunc_decode__100__f7)))) 
                                                     << 0x3fU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__100__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__100__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__100__opc))) {
                if ((1U & (IData)(__Vfunc_decode__100__opc))) {
                    __Vfunc_decode__100__d = (0x20000000000ULL 
                                              | __Vfunc_decode__100__d);
                    __Vfunc_decode__100__d = (0x8000000000ULL 
                                              | __Vfunc_decode__100__d);
                    __Vfunc_decode__100__d = (1ULL 
                                              | __Vfunc_decode__100__d);
                    __Vfunc_decode__100__d = (0x1c00000000000000ULL 
                                              | (0x81ffffffffffffffULL 
                                                 & __Vfunc_decode__100__d));
                    __Vfunc_get_imm__108__instr = __Vfunc_decode__100__instr;
                    __Vfunc_get_imm__108__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__108__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__108__instr 
                                        >> 0x14U));
                    __Vfunc_decode__100__d = (0x40ULL 
                                              | ((0xffffff800000003fULL 
                                                  & __Vfunc_decode__100__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__108__Vfuncout)) 
                                                    << 7U)));
                    __Vfunc_decode__100__d = ((0x7fffffffffffffffULL 
                                               & __Vfunc_decode__100__d) 
                                              | ((QData)((IData)(
                                                                 (2U 
                                                                  == (IData)(__Vfunc_decode__100__f3)))) 
                                                 << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__100__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__100__d = (0xffffff7fffffffffULL 
                                  & __Vfunc_decode__100__d);
    }
    __Vfunc_decode__100__Vfuncout = __Vfunc_decode__100__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__100__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__109__detail = std::string{"operand A is PC"};
    __Vtask_tb_types_pkg__DOT__chk__109__ok = (IData)(
                                                      (0x8000000000000002ULL 
                                                       == 
                                                       (0x8000000000000002ULL 
                                                        & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__109__what = std::string{"decode AUIPC"};
    if (__Vtask_tb_types_pkg__DOT__chk__109__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__109__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__109__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__109__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__109__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__110__instr = 0x8000efU;
    __Vfunc_decode__110__opc = 0x6fU;
    __Vfunc_decode__110__f3 = 0U;
    __Vfunc_decode__110__d = 0ULL;
    __Vfunc_decode__110__d = (0x7804040000000000ULL 
                              | (0x800003ffffffffffULL 
                                 & __Vfunc_decode__110__d));
    if ((1U & (~ ((IData)(__Vfunc_decode__110__opc) 
                  >> 4U)))) {
        if ((8U & (IData)(__Vfunc_decode__110__opc))) {
            if ((4U & (IData)(__Vfunc_decode__110__opc))) {
                if ((2U & (IData)(__Vfunc_decode__110__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__110__opc))) {
                        __Vfunc_decode__110__d = (0x8000000000ULL 
                                                  | __Vfunc_decode__110__d);
                        __Vfunc_decode__110__d = (0x600000000000000ULL 
                                                  | __Vfunc_decode__110__d);
                        __Vfunc_decode__110__d = (8ULL 
                                                  | __Vfunc_decode__110__d);
                        __Vfunc_decode__110__d = (3ULL 
                                                  | __Vfunc_decode__110__d);
                        __Vfunc_decode__110__d = (0x1800000000000000ULL 
                                                  | (0x87ffffffffffffffULL 
                                                     & __Vfunc_decode__110__d));
                        __Vfunc_get_imm__111__instr 
                            = __Vfunc_decode__110__instr;
                        __Vfunc_get_imm__111__Vfuncout 
                            = (((- (IData)((__Vfunc_get_imm__111__instr 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (__Vfunc_get_imm__111__instr 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & __Vfunc_get_imm__111__instr) 
                                                | ((0x800U 
                                                    & (__Vfunc_get_imm__111__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (__Vfunc_get_imm__111__instr 
                                                         >> 0x14U))))));
                        __Vfunc_decode__110__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__110__d) 
                                                  | ((QData)((IData)(__Vfunc_get_imm__111__Vfuncout)) 
                                                     << 7U));
                        __Vfunc_decode__110__d = (0x8000000000000000ULL 
                                                  | __Vfunc_decode__110__d);
                    }
                }
            }
        } else if ((4U & (IData)(__Vfunc_decode__110__opc))) {
            if ((2U & (IData)(__Vfunc_decode__110__opc))) {
                if ((1U & (IData)(__Vfunc_decode__110__opc))) {
                    __Vfunc_decode__110__d = (0x20000000000ULL 
                                              | __Vfunc_decode__110__d);
                    __Vfunc_decode__110__d = (0x8000000000ULL 
                                              | __Vfunc_decode__110__d);
                    __Vfunc_decode__110__d = (0x600000000000000ULL 
                                              | __Vfunc_decode__110__d);
                    __Vfunc_decode__110__d = (8ULL 
                                              | __Vfunc_decode__110__d);
                    __Vfunc_decode__110__d = (1ULL 
                                              | __Vfunc_decode__110__d);
                    __Vfunc_decode__110__d = (0x1800000000000000ULL 
                                              | (0x87ffffffffffffffULL 
                                                 & __Vfunc_decode__110__d));
                    __Vfunc_get_imm__112__instr = __Vfunc_decode__110__instr;
                    __Vfunc_get_imm__112__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__112__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__112__instr 
                                        >> 0x14U));
                    __Vfunc_decode__110__d = ((0xffffff800000007fULL 
                                               & __Vfunc_decode__110__d) 
                                              | ((QData)((IData)(__Vfunc_get_imm__112__Vfuncout)) 
                                                 << 7U));
                    __Vfunc_decode__110__d = ((0x7fffffffffffffffULL 
                                               & __Vfunc_decode__110__d) 
                                              | ((QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(__Vfunc_decode__110__f3)))) 
                                                 << 0x3fU));
                }
            }
        } else if ((2U & (IData)(__Vfunc_decode__110__opc))) {
            if ((1U & (IData)(__Vfunc_decode__110__opc))) {
                __Vfunc_decode__110__d = (0x30000000000ULL 
                                          | __Vfunc_decode__110__d);
                __Vfunc_decode__110__d = (0x2600000000000000ULL 
                                          | (0x81ffffffffffffffULL 
                                             & __Vfunc_decode__110__d));
                __Vfunc_get_imm__113__instr = __Vfunc_decode__110__instr;
                __Vfunc_get_imm__113__Vfuncout = ((
                                                   (- (IData)(
                                                              (__Vfunc_get_imm__113__instr 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (__Vfunc_get_imm__113__instr 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_get_imm__113__instr 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_get_imm__113__instr 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_get_imm__113__instr 
                                                                 >> 7U))))));
                __Vfunc_decode__110__d = ((0xffffff800000007fULL 
                                           & __Vfunc_decode__110__d) 
                                          | ((QData)((IData)(__Vfunc_get_imm__113__Vfuncout)) 
                                             << 7U));
                __Vfunc_decode__110__d = (0x10ULL | __Vfunc_decode__110__d);
                __Vfunc_decode__110__d = ((0xfffffffffffffffbULL 
                                           & __Vfunc_decode__110__d) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              == (IData)(__Vfunc_decode__110__f3)))) 
                                             << 2U));
                __Vfunc_decode__110__d = ((0x7fffffffffffffffULL 
                                           & __Vfunc_decode__110__d) 
                                          | ((QData)((IData)(
                                                             ((0U 
                                                               == (IData)(__Vfunc_decode__110__f3)) 
                                                              | (1U 
                                                                 == (IData)(__Vfunc_decode__110__f3))))) 
                                             << 0x3fU));
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__110__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__110__d = (0xffffff7fffffffffULL 
                                  & __Vfunc_decode__110__d);
    }
    __Vfunc_decode__110__Vfuncout = __Vfunc_decode__110__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__110__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__119__detail = std::string{"jump, PC-relative"};
    __Vtask_tb_types_pkg__DOT__chk__119__ok = (IData)(
                                                      (0x800000000000000aULL 
                                                       == 
                                                       (0x800000000000000aULL 
                                                        & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__119__what = std::string{"decode JAL"};
    if (__Vtask_tb_types_pkg__DOT__chk__119__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__119__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__119__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__119__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__119__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__120__instr = 0x28067U;
    __Vfunc_decode__120__opc = 0x67U;
    __Vfunc_decode__120__f3 = 0U;
    __Vfunc_decode__120__d = 0ULL;
    __Vfunc_decode__120__d = (0x7850000000000000ULL 
                              | (0x800003ffffffffffULL 
                                 & __Vfunc_decode__120__d));
    if ((1U & (~ ((IData)(__Vfunc_decode__120__opc) 
                  >> 4U)))) {
        if ((8U & (IData)(__Vfunc_decode__120__opc))) {
            if ((4U & (IData)(__Vfunc_decode__120__opc))) {
                if ((2U & (IData)(__Vfunc_decode__120__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__120__opc))) {
                        __Vfunc_decode__120__d = (0x8000000000ULL 
                                                  | __Vfunc_decode__120__d);
                        __Vfunc_decode__120__d = (0x600000000000000ULL 
                                                  | __Vfunc_decode__120__d);
                        __Vfunc_decode__120__d = (8ULL 
                                                  | __Vfunc_decode__120__d);
                        __Vfunc_decode__120__d = (3ULL 
                                                  | __Vfunc_decode__120__d);
                        __Vfunc_decode__120__d = (0x1800000000000000ULL 
                                                  | (0x87ffffffffffffffULL 
                                                     & __Vfunc_decode__120__d));
                        __Vfunc_get_imm__121__instr 
                            = __Vfunc_decode__120__instr;
                        __Vfunc_get_imm__121__Vfuncout 
                            = (((- (IData)((__Vfunc_get_imm__121__instr 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (__Vfunc_get_imm__121__instr 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & __Vfunc_get_imm__121__instr) 
                                                | ((0x800U 
                                                    & (__Vfunc_get_imm__121__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (__Vfunc_get_imm__121__instr 
                                                         >> 0x14U))))));
                        __Vfunc_decode__120__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__120__d) 
                                                  | ((QData)((IData)(__Vfunc_get_imm__121__Vfuncout)) 
                                                     << 7U));
                        __Vfunc_decode__120__d = (0x8000000000000000ULL 
                                                  | __Vfunc_decode__120__d);
                    }
                }
            }
        } else if ((4U & (IData)(__Vfunc_decode__120__opc))) {
            if ((2U & (IData)(__Vfunc_decode__120__opc))) {
                if ((1U & (IData)(__Vfunc_decode__120__opc))) {
                    __Vfunc_decode__120__d = (0x20000000000ULL 
                                              | __Vfunc_decode__120__d);
                    __Vfunc_decode__120__d = (0x8000000000ULL 
                                              | __Vfunc_decode__120__d);
                    __Vfunc_decode__120__d = (0x600000000000000ULL 
                                              | __Vfunc_decode__120__d);
                    __Vfunc_decode__120__d = (8ULL 
                                              | __Vfunc_decode__120__d);
                    __Vfunc_decode__120__d = (1ULL 
                                              | __Vfunc_decode__120__d);
                    __Vfunc_decode__120__d = (0x1800000000000000ULL 
                                              | (0x87ffffffffffffffULL 
                                                 & __Vfunc_decode__120__d));
                    __Vfunc_get_imm__122__instr = __Vfunc_decode__120__instr;
                    __Vfunc_get_imm__122__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__122__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__122__instr 
                                        >> 0x14U));
                    __Vfunc_decode__120__d = ((0xffffff800000007fULL 
                                               & __Vfunc_decode__120__d) 
                                              | ((QData)((IData)(__Vfunc_get_imm__122__Vfuncout)) 
                                                 << 7U));
                    __Vfunc_decode__120__d = ((0x7fffffffffffffffULL 
                                               & __Vfunc_decode__120__d) 
                                              | ((QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(__Vfunc_decode__120__f3)))) 
                                                 << 0x3fU));
                }
            }
        } else if ((2U & (IData)(__Vfunc_decode__120__opc))) {
            if ((1U & (IData)(__Vfunc_decode__120__opc))) {
                __Vfunc_decode__120__d = (0x30000000000ULL 
                                          | __Vfunc_decode__120__d);
                __Vfunc_decode__120__d = (0x2600000000000000ULL 
                                          | (0x81ffffffffffffffULL 
                                             & __Vfunc_decode__120__d));
                __Vfunc_get_imm__123__instr = __Vfunc_decode__120__instr;
                __Vfunc_get_imm__123__Vfuncout = ((
                                                   (- (IData)(
                                                              (__Vfunc_get_imm__123__instr 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (__Vfunc_get_imm__123__instr 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_get_imm__123__instr 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_get_imm__123__instr 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_get_imm__123__instr 
                                                                 >> 7U))))));
                __Vfunc_decode__120__d = ((0xffffff800000007fULL 
                                           & __Vfunc_decode__120__d) 
                                          | ((QData)((IData)(__Vfunc_get_imm__123__Vfuncout)) 
                                             << 7U));
                __Vfunc_decode__120__d = (0x10ULL | __Vfunc_decode__120__d);
                __Vfunc_decode__120__d = ((0xfffffffffffffffbULL 
                                           & __Vfunc_decode__120__d) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              == (IData)(__Vfunc_decode__120__f3)))) 
                                             << 2U));
                __Vfunc_decode__120__d = ((0x7fffffffffffffffULL 
                                           & __Vfunc_decode__120__d) 
                                          | ((QData)((IData)(
                                                             ((0U 
                                                               == (IData)(__Vfunc_decode__120__f3)) 
                                                              | (1U 
                                                                 == (IData)(__Vfunc_decode__120__f3))))) 
                                             << 0x3fU));
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__120__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__120__d = (0xffffff7fffffffffULL 
                                  & __Vfunc_decode__120__d);
    }
    __Vfunc_decode__120__Vfuncout = __Vfunc_decode__120__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__120__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__129__detail = std::string{"indirect jump"};
    __Vtask_tb_types_pkg__DOT__chk__129__ok = (IData)(
                                                      (0x8000020000000008ULL 
                                                       == 
                                                       (0x8000020000000008ULL 
                                                        & tb_types_pkg__DOT__d)));
    __Vtask_tb_types_pkg__DOT__chk__129__what = std::string{"decode JALR"};
    if (__Vtask_tb_types_pkg__DOT__chk__129__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__129__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__129__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__129__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__129__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__130__instr = 0x500013U;
    __Vfunc_decode__130__opc = 0x13U;
    __Vfunc_decode__130__f3 = 0U;
    __Vfunc_decode__130__f7 = 0U;
    __Vfunc_decode__130__d = 0ULL;
    __Vfunc_decode__130__d = (0x7802800000000000ULL 
                              | (0x800003ffffffffffULL 
                                 & __Vfunc_decode__130__d));
    if ((0x10U & (IData)(__Vfunc_decode__130__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__130__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__130__opc))) {
                if ((2U & (IData)(__Vfunc_decode__130__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__130__opc))) {
                        __Vfunc_decode__130__d = (0x8000000000ULL 
                                                  | __Vfunc_decode__130__d);
                        __Vfunc_decode__130__d = (3ULL 
                                                  | __Vfunc_decode__130__d);
                        __Vfunc_decode__130__d = (0x1800000000000000ULL 
                                                  | (0x87ffffffffffffffULL 
                                                     & __Vfunc_decode__130__d));
                        __Vfunc_get_imm__136__instr 
                            = __Vfunc_decode__130__instr;
                        __Vfunc_get_imm__136__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__136__instr);
                        __Vfunc_decode__130__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__130__d) 
                                                  | ((QData)((IData)(__Vfunc_get_imm__136__Vfuncout)) 
                                                     << 7U));
                        __Vfunc_decode__130__d = (0x8000000000000000ULL 
                                                  | __Vfunc_decode__130__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__130__opc))) {
                if ((1U & (IData)(__Vfunc_decode__130__opc))) {
                    __Vfunc_decode__130__d = (0x20000000000ULL 
                                              | __Vfunc_decode__130__d);
                    __Vfunc_decode__130__d = (0x8000000000ULL 
                                              | __Vfunc_decode__130__d);
                    __Vfunc_decode__130__d = (1ULL 
                                              | __Vfunc_decode__130__d);
                    __Vfunc_get_imm__137__instr = __Vfunc_decode__130__instr;
                    __Vfunc_get_imm__137__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__137__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__137__instr 
                                        >> 0x14U));
                    __Vfunc_decode__130__d = ((0xffffff800000007fULL 
                                               & __Vfunc_decode__130__d) 
                                              | ((QData)((IData)(__Vfunc_get_imm__137__Vfuncout)) 
                                                 << 7U));
                    if ((0U == (IData)(__Vfunc_decode__130__f3))) {
                        __Vfunc_decode__130__d = (0x9800000000000000ULL 
                                                  | (0x7ffffffffffffffULL 
                                                     & __Vfunc_decode__130__d));
                    } else if ((7U == (IData)(__Vfunc_decode__130__f3))) {
                        __Vfunc_decode__130__d = (0xa800000000000000ULL 
                                                  | (0x7ffffffffffffffULL 
                                                     & __Vfunc_decode__130__d));
                    } else if ((1U == (IData)(__Vfunc_decode__130__f3))) {
                        __Vfunc_decode__130__d = (0x87ffffffffffffffULL 
                                                  & __Vfunc_decode__130__d);
                        __Vfunc_decode__130__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__130__d) 
                                                  | ((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (__Vfunc_decode__130__instr 
                                                                         >> 0x14U)))) 
                                                     << 7U));
                        __Vfunc_decode__130__d = ((0x7fffffffffffffffULL 
                                                   & __Vfunc_decode__130__d) 
                                                  | ((QData)((IData)(
                                                                     (0U 
                                                                      == (IData)(__Vfunc_decode__130__f7)))) 
                                                     << 0x3fU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__130__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__130__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__130__opc))) {
                if ((1U & (IData)(__Vfunc_decode__130__opc))) {
                    __Vfunc_decode__130__d = (0x20000000000ULL 
                                              | __Vfunc_decode__130__d);
                    __Vfunc_decode__130__d = (0x8000000000ULL 
                                              | __Vfunc_decode__130__d);
                    __Vfunc_decode__130__d = (1ULL 
                                              | __Vfunc_decode__130__d);
                    __Vfunc_decode__130__d = (0x1c00000000000000ULL 
                                              | (0x81ffffffffffffffULL 
                                                 & __Vfunc_decode__130__d));
                    __Vfunc_get_imm__138__instr = __Vfunc_decode__130__instr;
                    __Vfunc_get_imm__138__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__138__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__138__instr 
                                        >> 0x14U));
                    __Vfunc_decode__130__d = (0x40ULL 
                                              | ((0xffffff800000003fULL 
                                                  & __Vfunc_decode__130__d) 
                                                 | ((QData)((IData)(__Vfunc_get_imm__138__Vfuncout)) 
                                                    << 7U)));
                    __Vfunc_decode__130__d = ((0x7fffffffffffffffULL 
                                               & __Vfunc_decode__130__d) 
                                              | ((QData)((IData)(
                                                                 (2U 
                                                                  == (IData)(__Vfunc_decode__130__f3)))) 
                                                 << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__130__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__130__d = (0xffffff7fffffffffULL 
                                  & __Vfunc_decode__130__d);
    }
    __Vfunc_decode__130__Vfuncout = __Vfunc_decode__130__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__130__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__139__detail = std::string{"writes_rd forced low"};
    __Vtask_tb_types_pkg__DOT__chk__139__ok = (1U & 
                                               (~ (IData)(
                                                          (tb_types_pkg__DOT__d 
                                                           >> 0x27U))));
    __Vtask_tb_types_pkg__DOT__chk__139__what = std::string{"x0 never a destination"};
    if (__Vtask_tb_types_pkg__DOT__chk__139__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__139__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__139__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__139__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__139__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__140__instr = 0x62e2b3U;
    __Vfunc_decode__140__opc = 0x33U;
    __Vfunc_decode__140__f3 = 6U;
    __Vfunc_decode__140__f7 = 0U;
    __Vfunc_decode__140__d = 0ULL;
    __Vfunc_decode__140__d = (0x7853140000000000ULL 
                              | (0x800003ffffffffffULL 
                                 & __Vfunc_decode__140__d));
    if ((0x10U & (IData)(__Vfunc_decode__140__opc))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__140__opc) 
                      >> 3U)))) {
            if ((4U & (IData)(__Vfunc_decode__140__opc))) {
                if ((2U & (IData)(__Vfunc_decode__140__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__140__opc))) {
                        __Vfunc_decode__140__d = (0x8000000000ULL 
                                                  | __Vfunc_decode__140__d);
                        __Vfunc_decode__140__d = (1ULL 
                                                  | __Vfunc_decode__140__d);
                        __Vfunc_decode__140__d = (0x6000000000000000ULL 
                                                  | (0x87ffffffffffffffULL 
                                                     & __Vfunc_decode__140__d));
                        __Vfunc_get_imm__144__instr 
                            = __Vfunc_decode__140__instr;
                        __Vfunc_get_imm__144__Vfuncout 
                            = (0xfffff000U & __Vfunc_get_imm__144__instr);
                        __Vfunc_decode__140__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__140__d) 
                                                  | ((QData)((IData)(__Vfunc_get_imm__144__Vfuncout)) 
                                                     << 7U));
                        __Vfunc_decode__140__d = (0x8000000000000000ULL 
                                                  | __Vfunc_decode__140__d);
                    }
                }
            } else if ((2U & (IData)(__Vfunc_decode__140__opc))) {
                if ((1U & (IData)(__Vfunc_decode__140__opc))) {
                    __Vfunc_decode__140__d = (0x38000000000ULL 
                                              | __Vfunc_decode__140__d);
                    if ((1U == (IData)(__Vfunc_decode__140__f7))) {
                        __Vfunc_decode__140__d = (0x200000000000000ULL 
                                                  | (0xf9ffffffffffffffULL 
                                                     & __Vfunc_decode__140__d));
                        if ((0U == (IData)(__Vfunc_decode__140__f3))) {
                            __Vfunc_decode__140__d 
                                = (0xd000000000000000ULL 
                                   | (0x7ffffffffffffffULL 
                                      & __Vfunc_decode__140__d));
                        } else if ((4U == (IData)(__Vfunc_decode__140__f3))) {
                            __Vfunc_decode__140__d 
                                = (0xd800000000000000ULL 
                                   | (0x7ffffffffffffffULL 
                                      & __Vfunc_decode__140__d));
                        }
                    } else if ((4U & (IData)(__Vfunc_decode__140__f3))) {
                        if ((2U & (IData)(__Vfunc_decode__140__f3))) {
                            if ((1U & (IData)(__Vfunc_decode__140__f3))) {
                                __Vfunc_decode__140__d 
                                    = ((0x7ffffffffffffffULL 
                                        & __Vfunc_decode__140__d) 
                                       | ((QData)((IData)(
                                                          (5U 
                                                           | ((0U 
                                                               == (IData)(__Vfunc_decode__140__f7)) 
                                                              << 4U)))) 
                                          << 0x3bU));
                            }
                        } else if ((1U & (~ (IData)(__Vfunc_decode__140__f3)))) {
                            __Vfunc_decode__140__d 
                                = ((0x7ffffffffffffffULL 
                                    & __Vfunc_decode__140__d) 
                                   | ((QData)((IData)(
                                                      (7U 
                                                       | ((0U 
                                                           == (IData)(__Vfunc_decode__140__f7)) 
                                                          << 4U)))) 
                                      << 0x3bU));
                        }
                    } else if ((2U & (IData)(__Vfunc_decode__140__f3))) {
                        if ((1U & (~ (IData)(__Vfunc_decode__140__f3)))) {
                            __Vfunc_decode__140__d 
                                = ((0x7ffffffffffffffULL 
                                    & __Vfunc_decode__140__d) 
                                   | ((QData)((IData)(
                                                      (8U 
                                                       | ((0U 
                                                           == (IData)(__Vfunc_decode__140__f7)) 
                                                          << 4U)))) 
                                      << 0x3bU));
                        }
                    } else if ((1U & (~ (IData)(__Vfunc_decode__140__f3)))) {
                        __Vfunc_decode__140__d = ((0x7ffffffffffffffULL 
                                                   & __Vfunc_decode__140__d) 
                                                  | ((QData)((IData)(
                                                                     ((((0x20U 
                                                                         == (IData)(__Vfunc_decode__140__f7)) 
                                                                        | (0U 
                                                                           == (IData)(__Vfunc_decode__140__f7))) 
                                                                       << 4U) 
                                                                      | ((0x20U 
                                                                          == (IData)(__Vfunc_decode__140__f7))
                                                                          ? 4U
                                                                          : 3U)))) 
                                                     << 0x3bU));
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(__Vfunc_decode__140__opc) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(__Vfunc_decode__140__opc) 
                      >> 2U)))) {
            if ((2U & (IData)(__Vfunc_decode__140__opc))) {
                if ((1U & (IData)(__Vfunc_decode__140__opc))) {
                    __Vfunc_decode__140__d = (0x30000000000ULL 
                                              | __Vfunc_decode__140__d);
                    __Vfunc_decode__140__d = (1ULL 
                                              | __Vfunc_decode__140__d);
                    __Vfunc_decode__140__d = (0x1c00000000000000ULL 
                                              | (0x81ffffffffffffffULL 
                                                 & __Vfunc_decode__140__d));
                    __Vfunc_get_imm__145__instr = __Vfunc_decode__140__instr;
                    __Vfunc_get_imm__145__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__145__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | ((0xfe0U & (__Vfunc_get_imm__145__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (__Vfunc_get_imm__145__instr 
                                            >> 7U))));
                    __Vfunc_decode__140__d = ((0xffffff800000007fULL 
                                               & __Vfunc_decode__140__d) 
                                              | ((QData)((IData)(__Vfunc_get_imm__145__Vfuncout)) 
                                                 << 7U));
                    __Vfunc_decode__140__d = (0x20ULL 
                                              | __Vfunc_decode__140__d);
                    __Vfunc_decode__140__d = ((0x7fffffffffffffffULL 
                                               & __Vfunc_decode__140__d) 
                                              | ((QData)((IData)(
                                                                 (2U 
                                                                  == (IData)(__Vfunc_decode__140__f3)))) 
                                                 << 0x3fU));
                }
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__140__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__140__d = (0xffffff7fffffffffULL 
                                  & __Vfunc_decode__140__d);
    }
    __Vfunc_decode__140__Vfuncout = __Vfunc_decode__140__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__140__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__149__detail = std::string{"OR returns valid=0"};
    __Vtask_tb_types_pkg__DOT__chk__149__ok = (1U & 
                                               (~ (IData)(
                                                          (tb_types_pkg__DOT__d 
                                                           >> 0x3fU))));
    __Vtask_tb_types_pkg__DOT__chk__149__what = std::string{"out-of-subset rejected"};
    if (__Vtask_tb_types_pkg__DOT__chk__149__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__149__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__149__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__149__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__149__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vfunc_decode__150__instr = 0xffffffffU;
    __Vfunc_decode__150__opc = 0x7fU;
    __Vfunc_decode__150__f3 = 7U;
    __Vfunc_decode__150__d = 0ULL;
    __Vfunc_decode__150__d = (0x79fffc0000000000ULL 
                              | (0x800003ffffffffffULL 
                                 & __Vfunc_decode__150__d));
    if ((1U & (~ ((IData)(__Vfunc_decode__150__opc) 
                  >> 4U)))) {
        if ((8U & (IData)(__Vfunc_decode__150__opc))) {
            if ((4U & (IData)(__Vfunc_decode__150__opc))) {
                if ((2U & (IData)(__Vfunc_decode__150__opc))) {
                    if ((1U & (IData)(__Vfunc_decode__150__opc))) {
                        __Vfunc_decode__150__d = (0x8000000000ULL 
                                                  | __Vfunc_decode__150__d);
                        __Vfunc_decode__150__d = (0x600000000000000ULL 
                                                  | __Vfunc_decode__150__d);
                        __Vfunc_decode__150__d = (8ULL 
                                                  | __Vfunc_decode__150__d);
                        __Vfunc_decode__150__d = (3ULL 
                                                  | __Vfunc_decode__150__d);
                        __Vfunc_decode__150__d = (0x1800000000000000ULL 
                                                  | (0x87ffffffffffffffULL 
                                                     & __Vfunc_decode__150__d));
                        __Vfunc_get_imm__151__instr 
                            = __Vfunc_decode__150__instr;
                        __Vfunc_get_imm__151__Vfuncout 
                            = (((- (IData)((__Vfunc_get_imm__151__instr 
                                            >> 0x1fU))) 
                                << 0x15U) | ((0x100000U 
                                              & (__Vfunc_get_imm__151__instr 
                                                 >> 0xbU)) 
                                             | ((0xff000U 
                                                 & __Vfunc_get_imm__151__instr) 
                                                | ((0x800U 
                                                    & (__Vfunc_get_imm__151__instr 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (__Vfunc_get_imm__151__instr 
                                                         >> 0x14U))))));
                        __Vfunc_decode__150__d = ((0xffffff800000007fULL 
                                                   & __Vfunc_decode__150__d) 
                                                  | ((QData)((IData)(__Vfunc_get_imm__151__Vfuncout)) 
                                                     << 7U));
                        __Vfunc_decode__150__d = (0x8000000000000000ULL 
                                                  | __Vfunc_decode__150__d);
                    }
                }
            }
        } else if ((4U & (IData)(__Vfunc_decode__150__opc))) {
            if ((2U & (IData)(__Vfunc_decode__150__opc))) {
                if ((1U & (IData)(__Vfunc_decode__150__opc))) {
                    __Vfunc_decode__150__d = (0x20000000000ULL 
                                              | __Vfunc_decode__150__d);
                    __Vfunc_decode__150__d = (0x8000000000ULL 
                                              | __Vfunc_decode__150__d);
                    __Vfunc_decode__150__d = (0x600000000000000ULL 
                                              | __Vfunc_decode__150__d);
                    __Vfunc_decode__150__d = (8ULL 
                                              | __Vfunc_decode__150__d);
                    __Vfunc_decode__150__d = (1ULL 
                                              | __Vfunc_decode__150__d);
                    __Vfunc_decode__150__d = (0x1800000000000000ULL 
                                              | (0x87ffffffffffffffULL 
                                                 & __Vfunc_decode__150__d));
                    __Vfunc_get_imm__152__instr = __Vfunc_decode__150__instr;
                    __Vfunc_get_imm__152__Vfuncout 
                        = (((- (IData)((__Vfunc_get_imm__152__instr 
                                        >> 0x1fU))) 
                            << 0xcU) | (__Vfunc_get_imm__152__instr 
                                        >> 0x14U));
                    __Vfunc_decode__150__d = ((0xffffff800000007fULL 
                                               & __Vfunc_decode__150__d) 
                                              | ((QData)((IData)(__Vfunc_get_imm__152__Vfuncout)) 
                                                 << 7U));
                    __Vfunc_decode__150__d = ((0x7fffffffffffffffULL 
                                               & __Vfunc_decode__150__d) 
                                              | ((QData)((IData)(
                                                                 (0U 
                                                                  == (IData)(__Vfunc_decode__150__f3)))) 
                                                 << 0x3fU));
                }
            }
        } else if ((2U & (IData)(__Vfunc_decode__150__opc))) {
            if ((1U & (IData)(__Vfunc_decode__150__opc))) {
                __Vfunc_decode__150__d = (0x30000000000ULL 
                                          | __Vfunc_decode__150__d);
                __Vfunc_decode__150__d = (0x2600000000000000ULL 
                                          | (0x81ffffffffffffffULL 
                                             & __Vfunc_decode__150__d));
                __Vfunc_get_imm__153__instr = __Vfunc_decode__150__instr;
                __Vfunc_get_imm__153__Vfuncout = ((
                                                   (- (IData)(
                                                              (__Vfunc_get_imm__153__instr 
                                                               >> 0x1fU))) 
                                                   << 0xdU) 
                                                  | ((0x1000U 
                                                      & (__Vfunc_get_imm__153__instr 
                                                         >> 0x13U)) 
                                                     | ((0x800U 
                                                         & (__Vfunc_get_imm__153__instr 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (__Vfunc_get_imm__153__instr 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (__Vfunc_get_imm__153__instr 
                                                                 >> 7U))))));
                __Vfunc_decode__150__d = ((0xffffff800000007fULL 
                                           & __Vfunc_decode__150__d) 
                                          | ((QData)((IData)(__Vfunc_get_imm__153__Vfuncout)) 
                                             << 7U));
                __Vfunc_decode__150__d = (0x10ULL | __Vfunc_decode__150__d);
                __Vfunc_decode__150__d = ((0xfffffffffffffffbULL 
                                           & __Vfunc_decode__150__d) 
                                          | ((QData)((IData)(
                                                             (1U 
                                                              == (IData)(__Vfunc_decode__150__f3)))) 
                                             << 2U));
                __Vfunc_decode__150__d = ((0x7fffffffffffffffULL 
                                           & __Vfunc_decode__150__d) 
                                          | ((QData)((IData)(
                                                             ((0U 
                                                               == (IData)(__Vfunc_decode__150__f3)) 
                                                              | (1U 
                                                                 == (IData)(__Vfunc_decode__150__f3))))) 
                                             << 0x3fU));
            }
        }
    }
    if ((0U == (0x1fU & (IData)((__Vfunc_decode__150__d 
                                 >> 0x2aU))))) {
        __Vfunc_decode__150__d = (0xffffff7fffffffffULL 
                                  & __Vfunc_decode__150__d);
    }
    __Vfunc_decode__150__Vfuncout = __Vfunc_decode__150__d;
    tb_types_pkg__DOT__d = __Vfunc_decode__150__Vfuncout;
    __Vtask_tb_types_pkg__DOT__chk__159__detail = std::string{"all-ones returns valid=0"};
    __Vtask_tb_types_pkg__DOT__chk__159__ok = (1U & 
                                               (~ (IData)(
                                                          (tb_types_pkg__DOT__d 
                                                           >> 0x3fU))));
    __Vtask_tb_types_pkg__DOT__chk__159__what = std::string{"garbage rejected"};
    if (__Vtask_tb_types_pkg__DOT__chk__159__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__159__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__159__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__159__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__159__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop = 3U;
    vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a = 7U;
    vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b = 6U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_types_pkg.sv", 
                                       115);
    __Vtask_tb_types_pkg__DOT__chk__160__detail = VL_SFORMATF_NX("7+6=%0#",
                                                                 32,
                                                                 vlSymsp->TOP__tb_types_pkg__DOT__aif.out) ;
    __Vtask_tb_types_pkg__DOT__chk__160__ok = (0xdU 
                                               == vlSymsp->TOP__tb_types_pkg__DOT__aif.out);
    __Vtask_tb_types_pkg__DOT__chk__160__what = std::string{"alu_if modport"};
    if (__Vtask_tb_types_pkg__DOT__chk__160__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__160__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__160__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__160__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__160__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop = 8U;
    vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a = 0xffffffffU;
    vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b = 1U;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_types_pkg.sv", 
                                       118);
    __Vtask_tb_types_pkg__DOT__chk__161__detail = std::string{"-1 < 1"};
    __Vtask_tb_types_pkg__DOT__chk__161__ok = (1U == vlSymsp->TOP__tb_types_pkg__DOT__aif.out);
    __Vtask_tb_types_pkg__DOT__chk__161__what = std::string{"ALU_SLT is signed"};
    if (__Vtask_tb_types_pkg__DOT__chk__161__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__161__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__161__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__161__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__161__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop = 0U;
    vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a = 1U;
    vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b = 0x1fU;
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_types_pkg.sv", 
                                       121);
    __Vtask_tb_types_pkg__DOT__chk__162__detail = VL_SFORMATF_NX("out=%x",
                                                                 32,
                                                                 vlSymsp->TOP__tb_types_pkg__DOT__aif.out) ;
    __Vtask_tb_types_pkg__DOT__chk__162__ok = (0x80000000U 
                                               == vlSymsp->TOP__tb_types_pkg__DOT__aif.out);
    __Vtask_tb_types_pkg__DOT__chk__162__what = std::string{"ALU_SLL shift by 31"};
    if (__Vtask_tb_types_pkg__DOT__chk__162__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__162__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__162__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__162__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__162__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vtask_tb_types_pkg__DOT__chk__163__detail = std::string{"147 bits"};
    __Vtask_tb_types_pkg__DOT__chk__163__ok = 1U;
    __Vtask_tb_types_pkg__DOT__chk__163__what = std::string{"rs_entry_t packs"};
    if (__Vtask_tb_types_pkg__DOT__chk__163__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__163__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__163__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__163__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__163__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vtask_tb_types_pkg__DOT__chk__164__detail = std::string{"141 bits"};
    __Vtask_tb_types_pkg__DOT__chk__164__ok = 1U;
    __Vtask_tb_types_pkg__DOT__chk__164__what = std::string{"rob_entry_t packs"};
    if (__Vtask_tb_types_pkg__DOT__chk__164__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__164__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__164__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__164__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__164__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vtask_tb_types_pkg__DOT__chk__165__detail = std::string{"72 bits"};
    __Vtask_tb_types_pkg__DOT__chk__165__ok = 1U;
    __Vtask_tb_types_pkg__DOT__chk__165__what = std::string{"cdb_t packs"};
    if (__Vtask_tb_types_pkg__DOT__chk__165__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__165__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__165__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__165__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__165__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    __Vtask_tb_types_pkg__DOT__chk__166__detail = std::string{"103 bits"};
    __Vtask_tb_types_pkg__DOT__chk__166__ok = 1U;
    __Vtask_tb_types_pkg__DOT__chk__166__what = std::string{"commit_t packs"};
    if (__Vtask_tb_types_pkg__DOT__chk__166__ok) {
        VL_WRITEF("  PASS  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__166__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__166__detail));
    } else {
        VL_WRITEF("  FAIL  %-26@ %@\n",-1,&(__Vtask_tb_types_pkg__DOT__chk__166__what),
                  -1,&(__Vtask_tb_types_pkg__DOT__chk__166__detail));
        vlSelf->tb_types_pkg__DOT__errors = ((IData)(1U) 
                                             + vlSelf->tb_types_pkg__DOT__errors);
    }
    VL_WRITEF("\n=== %s: %0d errors ===\n\n",64,((0U 
                                                  != vlSelf->tb_types_pkg__DOT__errors)
                                                  ? 0x4641494c4544ULL
                                                  : 0x414c4c2050415353ULL),
              32,vlSelf->tb_types_pkg__DOT__errors);
    VL_FINISH_MT("tb_types_pkg.sv", 135, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_types_pkg___024root___dump_triggers__act(Vtb_types_pkg___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_types_pkg___024root___eval_triggers__act(Vtb_types_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_types_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_types_pkg___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_types_pkg___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_types_pkg___024root___act_sequent__TOP__0(Vtb_types_pkg___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_types_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_types_pkg___024root___act_sequent__TOP__0\n"); );
    // Body
    vlSymsp->TOP__tb_types_pkg__DOT__aif.out = ((8U 
                                                 & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                    ? 0U
                                                    : vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                    ? 0U
                                                    : 
                                                   VL_LTS_III(32, vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a, vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b))))
                                                 : 
                                                ((4U 
                                                  & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                    ? 
                                                   (vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a 
                                                    ^ vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b)
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                    ? 
                                                   (vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a 
                                                    & vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b)
                                                    : 
                                                   (vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a 
                                                    - vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                    ? 
                                                   (vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a 
                                                    + vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b)
                                                    : 0U)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSymsp->TOP__tb_types_pkg__DOT__aif.aluop))
                                                    ? 0U
                                                    : 
                                                   (vlSymsp->TOP__tb_types_pkg__DOT__aif.port_a 
                                                    << 
                                                    (0x1fU 
                                                     & vlSymsp->TOP__tb_types_pkg__DOT__aif.port_b))))));
}
