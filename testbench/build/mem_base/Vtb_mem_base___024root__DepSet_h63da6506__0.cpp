// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base__Syms.h"
#include "Vtb_mem_base___024root.h"

VlCoroutine Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__0(Vtb_mem_base_tb_mem_base* vlSelf);
VlCoroutine Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__1(Vtb_mem_base_tb_mem_base* vlSelf);
VlCoroutine Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__2(Vtb_mem_base_tb_mem_base* vlSelf);
void Vtb_mem_base_mem_model__L2___eval_initial__TOP__tb_mem_base__dut(Vtb_mem_base_mem_model__L2* vlSelf);

void Vtb_mem_base___024root___eval_initial(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_initial\n"); );
    // Body
    Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__0((&vlSymsp->TOP__tb_mem_base));
    Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__1((&vlSymsp->TOP__tb_mem_base));
    Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__2((&vlSymsp->TOP__tb_mem_base));
    Vtb_mem_base_mem_model__L2___eval_initial__TOP__tb_mem_base__dut((&vlSymsp->TOP__tb_mem_base__dut));
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__clk__0 
        = vlSymsp->TOP__tb_mem_base.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__rst_n__0 
        = vlSymsp->TOP__tb_mem_base.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr_h43526075__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                            & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                                 ? 
                                                vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                                [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                                 : 0U) 
                                               == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__0__id)));
    vlSelf->__Vtrigprevexpr_hab7a6e95__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                            & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                                 ? 
                                                vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                                [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                                 : 0U) 
                                               == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__1__id)));
    vlSelf->__Vtrigprevexpr_h7fd77bd7__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                            & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                                 ? 
                                                vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                                [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                                 : 0U) 
                                               == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__2__id)));
    vlSelf->__Vtrigprevexpr_hd1f63a12__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                            & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                                 ? 
                                                vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                                [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                                 : 0U) 
                                               == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__3__id)));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_base___024root___dump_triggers__act(Vtb_mem_base___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mem_base___024root___eval_triggers__act(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_triggers__act\n"); );
    // Body
    CData/*0:0*/ __Vtrigcurrexpr_h43526075__0;
    __Vtrigcurrexpr_h43526075__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hab7a6e95__0;
    __Vtrigcurrexpr_hab7a6e95__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_h7fd77bd7__0;
    __Vtrigcurrexpr_h7fd77bd7__0 = 0;
    CData/*0:0*/ __Vtrigcurrexpr_hd1f63a12__0;
    __Vtrigcurrexpr_hd1f63a12__0 = 0;
    __Vtrigcurrexpr_h43526075__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                    & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                         ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                        [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                         : 0U) == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__0__id)));
    __Vtrigcurrexpr_hab7a6e95__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                    & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                         ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                        [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                         : 0U) == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__1__id)));
    __Vtrigcurrexpr_h7fd77bd7__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                    & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                         ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                        [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                         : 0U) == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__2__id)));
    __Vtrigcurrexpr_hd1f63a12__0 = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                    & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                                         ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                                        [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                                         : 0U) == (IData)(vlSymsp->TOP__tb_mem_base.__Vtask_rd__3__id)));
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSymsp->TOP__tb_mem_base.__PVT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__clk__0))));
    vlSelf->__VactTriggered.set(1U, (((IData)(vlSymsp->TOP__tb_mem_base.__PVT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__clk__0))) 
                                     | ((~ (IData)(vlSymsp->TOP__tb_mem_base.__PVT__rst_n)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__rst_n__0))));
    vlSelf->__VactTriggered.set(2U, ((~ (IData)(vlSymsp->TOP__tb_mem_base.__PVT__clk)) 
                                     & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__clk__0)));
    vlSelf->__VactTriggered.set(3U, ((IData)(__Vtrigcurrexpr_h43526075__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h43526075__0)));
    vlSelf->__VactTriggered.set(4U, ((IData)(__Vtrigcurrexpr_hab7a6e95__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_hab7a6e95__0)));
    vlSelf->__VactTriggered.set(5U, ((IData)(__Vtrigcurrexpr_h7fd77bd7__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_h7fd77bd7__0)));
    vlSelf->__VactTriggered.set(6U, ((IData)(__Vtrigcurrexpr_hd1f63a12__0) 
                                     != (IData)(vlSelf->__Vtrigprevexpr_hd1f63a12__0)));
    vlSelf->__VactTriggered.set(7U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__clk__0 
        = vlSymsp->TOP__tb_mem_base.__PVT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_mem_base____PVT__rst_n__0 
        = vlSymsp->TOP__tb_mem_base.__PVT__rst_n;
    vlSelf->__Vtrigprevexpr_h43526075__0 = __Vtrigcurrexpr_h43526075__0;
    vlSelf->__Vtrigprevexpr_hab7a6e95__0 = __Vtrigcurrexpr_hab7a6e95__0;
    vlSelf->__Vtrigprevexpr_h7fd77bd7__0 = __Vtrigcurrexpr_h7fd77bd7__0;
    vlSelf->__Vtrigprevexpr_hd1f63a12__0 = __Vtrigcurrexpr_hd1f63a12__0;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(3U, 1U);
        vlSelf->__VactTriggered.set(4U, 1U);
        vlSelf->__VactTriggered.set(5U, 1U);
        vlSelf->__VactTriggered.set(6U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_base___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vtb_mem_base_mem_model__L2___act_comb__TOP__tb_mem_base__dut__0(Vtb_mem_base_mem_model__L2* vlSelf);

void Vtb_mem_base___024root___eval_act(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_act\n"); );
    // Body
    if ((0x7dULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_mem_base_mem_model__L2___act_comb__TOP__tb_mem_base__dut__0((&vlSymsp->TOP__tb_mem_base__dut));
    }
}

void Vtb_mem_base_mem_model__L2___nba_sequent__TOP__tb_mem_base__dut__0(Vtb_mem_base_mem_model__L2* vlSelf);
void Vtb_mem_base_tb_mem_base___nba_sequent__TOP__tb_mem_base__0(Vtb_mem_base_tb_mem_base* vlSelf);
void Vtb_mem_base_mem_model__L2___nba_sequent__TOP__tb_mem_base__dut__1(Vtb_mem_base_mem_model__L2* vlSelf);

void Vtb_mem_base___024root___eval_nba(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_nba\n"); );
    // Body
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_base_mem_model__L2___nba_sequent__TOP__tb_mem_base__dut__0((&vlSymsp->TOP__tb_mem_base__dut));
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_base_tb_mem_base___nba_sequent__TOP__tb_mem_base__0((&vlSymsp->TOP__tb_mem_base));
    }
    if ((0x7fULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_base_mem_model__L2___act_comb__TOP__tb_mem_base__dut__0((&vlSymsp->TOP__tb_mem_base__dut));
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_mem_base_mem_model__L2___nba_sequent__TOP__tb_mem_base__dut__1((&vlSymsp->TOP__tb_mem_base__dut));
    }
}
