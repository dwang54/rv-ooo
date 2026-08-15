// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base___024root.h"

void Vtb_mem_base___024root___timing_resume(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7efea98e__0.resume("@(negedge tb_mem_base.clk)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h7efea9cb__0.resume("@(posedge tb_mem_base.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_ha3659703__0.resume("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__0__id)))");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h3b4da923__0.resume("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__1__id)))");
    }
    if ((0x20ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_he7e0b3e9__0.resume("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__2__id)))");
    }
    if ((0x40ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h55c274b0__0.resume("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__3__id)))");
    }
    if ((0x80ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_mem_base___024root___timing_commit(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7efea98e__0.commit("@(negedge tb_mem_base.clk)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h7efea9cb__0.commit("@(posedge tb_mem_base.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_ha3659703__0.commit("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__0__id)))");
    }
    if ((! (0x10ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h3b4da923__0.commit("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__1__id)))");
    }
    if ((! (0x20ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_he7e0b3e9__0.commit("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__2__id)))");
    }
    if ((! (0x40ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h55c274b0__0.commit("@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__3__id)))");
    }
}

void Vtb_mem_base___024root___eval_triggers__act(Vtb_mem_base___024root* vlSelf);
void Vtb_mem_base___024root___eval_act(Vtb_mem_base___024root* vlSelf);

bool Vtb_mem_base___024root___eval_phase__act(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<8> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_mem_base___024root___eval_triggers__act(vlSelf);
    Vtb_mem_base___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_mem_base___024root___timing_resume(vlSelf);
        Vtb_mem_base___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vtb_mem_base___024root___eval_nba(Vtb_mem_base___024root* vlSelf);

bool Vtb_mem_base___024root___eval_phase__nba(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_mem_base___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_base___024root___dump_triggers__nba(Vtb_mem_base___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_base___024root___dump_triggers__act(Vtb_mem_base___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mem_base___024root___eval(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_mem_base___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_mem_base.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_mem_base___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_mem_base.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_mem_base___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_mem_base___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_mem_base___024root___eval_debug_assertions(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
