// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ordering.h for the primary calling header

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering__Syms.h"
#include "Vtb_mem_ordering___024root.h"

VlCoroutine Vtb_mem_ordering_tb_mem_ordering___eval_initial__TOP__tb_mem_ordering__Vtiming__0(Vtb_mem_ordering_tb_mem_ordering* vlSelf);
VlCoroutine Vtb_mem_ordering_tb_mem_ordering___eval_initial__TOP__tb_mem_ordering__Vtiming__1(Vtb_mem_ordering_tb_mem_ordering* vlSelf);
VlCoroutine Vtb_mem_ordering_tb_mem_ordering___eval_initial__TOP__tb_mem_ordering__Vtiming__2(Vtb_mem_ordering_tb_mem_ordering* vlSelf);

void Vtb_mem_ordering___024root___eval_initial(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_initial\n"); );
    // Body
    Vtb_mem_ordering_tb_mem_ordering___eval_initial__TOP__tb_mem_ordering__Vtiming__0((&vlSymsp->TOP__tb_mem_ordering));
    Vtb_mem_ordering_tb_mem_ordering___eval_initial__TOP__tb_mem_ordering__Vtiming__1((&vlSymsp->TOP__tb_mem_ordering));
    Vtb_mem_ordering_tb_mem_ordering___eval_initial__TOP__tb_mem_ordering__Vtiming__2((&vlSymsp->TOP__tb_mem_ordering));
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__clk__0 
        = vlSymsp->TOP__tb_mem_ordering.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__rst_n__0 
        = vlSymsp->TOP__tb_mem_ordering.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr_h6d7a56ff__0 = (6U == vlSymsp->TOP__tb_mem_ordering.__PVT__order.size());
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_ordering___024root___dump_triggers__act(Vtb_mem_ordering___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mem_ordering___024root___eval_triggers__act(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h6d7a56ff__0;
    __Vtrigcurrexpr_h6d7a56ff__0 = 0;
    __Vtrigcurrexpr_h6d7a56ff__0 = (6U == vlSymsp->TOP__tb_mem_ordering.__PVT__order.size());
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__clk__0))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(__Vtrigcurrexpr_h6d7a56ff__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h6d7a56ff__0)));
    vlSelf->__VactTriggered.set(4U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__clk__0 
        = vlSymsp->TOP__tb_mem_ordering.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_ordering____PVT__rst_n__0 
        = vlSymsp->TOP__tb_mem_ordering.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr_h6d7a56ff__0 = __Vtrigcurrexpr_h6d7a56ff__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_ordering___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_mem_ordering_mem_model__R1_Oz1_B0___act_comb__TOP__tb_mem_ordering__dut__0(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf);

void Vtb_mem_ordering___024root___eval_act(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_act\n"); );
    // Body
    if ((0xdULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mem_ordering_mem_model__R1_Oz1_B0___act_comb__TOP__tb_mem_ordering__dut__0((&vlSymsp->TOP__tb_mem_ordering__dut));
    }
}

void Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__0(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf);
void Vtb_mem_ordering_tb_mem_ordering___nba_sequent__TOP__tb_mem_ordering__0(Vtb_mem_ordering_tb_mem_ordering* vlSelf);
void Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__1(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf);

void Vtb_mem_ordering___024root___eval_nba(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__0((&vlSymsp->TOP__tb_mem_ordering__dut));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_ordering_tb_mem_ordering___nba_sequent__TOP__tb_mem_ordering__0((&vlSymsp->TOP__tb_mem_ordering));
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_ordering_mem_model__R1_Oz1_B0___act_comb__TOP__tb_mem_ordering__dut__0((&vlSymsp->TOP__tb_mem_ordering__dut));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__1((&vlSymsp->TOP__tb_mem_ordering__dut));
    }
}
