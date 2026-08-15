// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bram.h for the primary calling header

#include "Vtb_bram__pch.h"
#include "Vtb_bram___024root.h"

VL_ATTR_COLD void Vtb_bram___024root___eval_static__TOP(Vtb_bram___024root* vlSelf);

VL_ATTR_COLD void Vtb_bram___024root___eval_static(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_static\n"); );
    // Body
    Vtb_bram___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vtb_bram___024root___eval_static__TOP(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->tb_bram__DOT__clk = 0U;
    vlSelf->tb_bram__DOT__rst_n = 0U;
    vlSelf->tb_bram__DOT__errors = 0U;
    vlSelf->tb_bram__DOT__cyc = 0U;
    vlSelf->tb_bram__DOT__t_req = 0U;
    vlSelf->tb_bram__DOT__t_rsp = 0U;
}

VL_ATTR_COLD void Vtb_bram___024root___eval_final(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bram___024root___dump_triggers__stl(Vtb_bram___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_bram___024root___eval_phase__stl(Vtb_bram___024root* vlSelf);

VL_ATTR_COLD void Vtb_bram___024root___eval_settle(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtb_bram___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("tb_bram.sv", 12, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtb_bram___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bram___024root___dump_triggers__stl(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bram___024root___stl_sequent__TOP__0(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_bram__DOT__rs_v = vlSelf->tb_bram__DOT__dut__DOT__valid_q;
    vlSelf->tb_bram__DOT__dut__DOT__in_range = ((0x80000000U 
                                                 <= vlSelf->tb_bram__DOT__rq_a) 
                                                & (0x400U 
                                                   > 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (vlSelf->tb_bram__DOT__rq_a 
                                                                  - (IData)(0x80000000U)), 2U)));
    vlSelf->tb_bram__DOT__rq_r = ((IData)(vlSelf->tb_bram__DOT__rst_n) 
                                  & ((~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)) 
                                     | (IData)(vlSelf->tb_bram__DOT__rs_r)));
    vlSelf->tb_bram__DOT__dut__DOT__accept = ((IData)(vlSelf->tb_bram__DOT__rq_v) 
                                              & (IData)(vlSelf->tb_bram__DOT__rq_r));
}

VL_ATTR_COLD void Vtb_bram___024root___eval_stl(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_bram___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vtb_bram___024root___eval_triggers__stl(Vtb_bram___024root* vlSelf);

VL_ATTR_COLD bool Vtb_bram___024root___eval_phase__stl(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtb_bram___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtb_bram___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bram___024root___dump_triggers__act(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_bram.clk)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge tb_bram.clk or negedge tb_bram.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_bram.clk)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] tb_bram.dut.valid_q)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bram___024root___dump_triggers__nba(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_bram.clk)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge tb_bram.clk or negedge tb_bram.rst_n)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_bram.clk)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] tb_bram.dut.valid_q)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_bram___024root___ctor_var_reset(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_bram__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rq_v = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rq_r = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rq_we = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rs_v = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rs_r = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__rq_id = VL_RAND_RESET_I(4);
    vlSelf->tb_bram__DOT__rq_a = VL_RAND_RESET_I(32);
    vlSelf->tb_bram__DOT__rq_wd = VL_RAND_RESET_I(32);
    vlSelf->tb_bram__DOT__rq_be = VL_RAND_RESET_I(4);
    vlSelf->tb_bram__DOT__errors = 0;
    vlSelf->tb_bram__DOT__cyc = 0;
    vlSelf->tb_bram__DOT__t_req = 0;
    vlSelf->tb_bram__DOT__t_rsp = 0;
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->tb_bram__DOT__dut__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->tb_bram__DOT__dut__DOT__in_range = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__dut__DOT__accept = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__dut__DOT__rdata_q = VL_RAND_RESET_I(32);
    vlSelf->tb_bram__DOT__dut__DOT__id_q = VL_RAND_RESET_I(4);
    vlSelf->tb_bram__DOT__dut__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->tb_bram__DOT__dut__DOT__valid_q = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_bram__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_bram__DOT__rst_n__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_bram__DOT__dut__DOT__valid_q__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
