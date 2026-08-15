// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base_mem_model__L2.h"

VL_INLINE_OPT void Vtb_mem_base_mem_model__L2___eval_initial__TOP__tb_mem_base__dut(Vtb_mem_base_mem_model__L2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_base_mem_model__L2___eval_initial__TOP__tb_mem_base__dut\n"); );
    // Init
    IData/*31:0*/ __PVT__unnamedblk1__DOT__i;
    __PVT__unnamedblk1__DOT__i = 0;
    // Body
    __PVT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x4000U, __PVT__unnamedblk1__DOT__i)) {
        vlSelf->__PVT__mem[(0x3fffU & __PVT__unnamedblk1__DOT__i)] = 0U;
        __PVT__unnamedblk1__DOT__i = ((IData)(1U) + __PVT__unnamedblk1__DOT__i);
    }
}

VL_INLINE_OPT void Vtb_mem_base_mem_model__L2___nba_sequent__TOP__tb_mem_base__dut__1(Vtb_mem_base_mem_model__L2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_base_mem_model__L2___nba_sequent__TOP__tb_mem_base__dut__1\n"); );
    // Init
    SData/*15:0*/ __PVT__oldest_age;
    __PVT__oldest_age = 0;
    CData/*0:0*/ __PVT__have_oldest;
    __PVT__have_oldest = 0;
    // Body
    if (vlSelf->__Vdlyvset__e_err__v0) {
        vlSelf->__PVT__e_err[vlSelf->__Vdlyvdim0__e_err__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__e_err__v1) {
        vlSelf->__PVT__e_err[vlSelf->__Vdlyvdim0__e_err__v1] = 0U;
    }
    __PVT__have_oldest = 0U;
    __PVT__oldest_age = 0xffffU;
    vlSelf->__PVT__oldest_idx = 0U;
    if (vlSelf->__PVT__e_busy[0U]) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[0U];
        vlSelf->__PVT__oldest_idx = 0U;
    }
    if ((vlSelf->__PVT__e_busy[1U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [1U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[1U];
        vlSelf->__PVT__oldest_idx = 1U;
    }
    if ((vlSelf->__PVT__e_busy[2U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [2U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[2U];
        vlSelf->__PVT__oldest_idx = 2U;
    }
    if ((vlSelf->__PVT__e_busy[3U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [3U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[3U];
        vlSelf->__PVT__oldest_idx = 3U;
    }
    if ((vlSelf->__PVT__e_busy[4U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [4U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[4U];
        vlSelf->__PVT__oldest_idx = 4U;
    }
    if ((vlSelf->__PVT__e_busy[5U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [5U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[5U];
        vlSelf->__PVT__oldest_idx = 5U;
    }
    if ((vlSelf->__PVT__e_busy[6U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [6U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[6U];
        vlSelf->__PVT__oldest_idx = 6U;
    }
    if ((vlSelf->__PVT__e_busy[7U] & ((~ (IData)(__PVT__have_oldest)) 
                                      | (vlSelf->__PVT__e_age
                                         [7U] < (IData)(__PVT__oldest_age))))) {
        __PVT__have_oldest = 1U;
        __PVT__oldest_age = vlSelf->__PVT__e_age[7U];
        vlSelf->__PVT__oldest_idx = 7U;
    }
    vlSelf->__PVT__have_resp = ((IData)(__PVT__have_oldest) 
                                & (0U == vlSelf->__PVT__e_count
                                   [vlSelf->__PVT__oldest_idx]));
}
