// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ordering.h for the primary calling header

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering_mem_model__R1_Oz1_B0.h"

VL_INLINE_OPT void Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__1(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__1\n"); );
    // Init
    SData/*15:0*/ __PVT__unnamedblk4__DOT__best;
    __PVT__unnamedblk4__DOT__best = 0;
    // Body
    if (vlSelf->__Vdlyvset__e_id__v0) {
        vlSelf->__PVT__e_id[vlSelf->__Vdlyvdim0__e_id__v0] 
            = vlSelf->__Vdlyvval__e_id__v0;
    }
    vlSelf->__PVT__have_resp = 0U;
    vlSelf->__PVT__resp_idx = 0U;
    __PVT__unnamedblk4__DOT__best = 0xffffU;
    if ((vlSelf->__PVT__e_busy[0U] & (0U == vlSelf->__PVT__e_count
                                      [0U]))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [0U];
        vlSelf->__PVT__resp_idx = 0U;
    }
    if (((vlSelf->__PVT__e_busy[1U] & (0U == vlSelf->__PVT__e_count
                                       [1U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [1U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [1U];
        vlSelf->__PVT__resp_idx = 1U;
    }
    if (((vlSelf->__PVT__e_busy[2U] & (0U == vlSelf->__PVT__e_count
                                       [2U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [2U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [2U];
        vlSelf->__PVT__resp_idx = 2U;
    }
    if (((vlSelf->__PVT__e_busy[3U] & (0U == vlSelf->__PVT__e_count
                                       [3U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [3U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [3U];
        vlSelf->__PVT__resp_idx = 3U;
    }
    if (((vlSelf->__PVT__e_busy[4U] & (0U == vlSelf->__PVT__e_count
                                       [4U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [4U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [4U];
        vlSelf->__PVT__resp_idx = 4U;
    }
    if (((vlSelf->__PVT__e_busy[5U] & (0U == vlSelf->__PVT__e_count
                                       [5U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [5U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [5U];
        vlSelf->__PVT__resp_idx = 5U;
    }
    if (((vlSelf->__PVT__e_busy[6U] & (0U == vlSelf->__PVT__e_count
                                       [6U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [6U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [6U];
        vlSelf->__PVT__resp_idx = 6U;
    }
    if (((vlSelf->__PVT__e_busy[7U] & (0U == vlSelf->__PVT__e_count
                                       [7U])) & ((~ (IData)(vlSelf->__PVT__have_resp)) 
                                                 | (vlSelf->__PVT__e_age
                                                    [7U] 
                                                    < (IData)(__PVT__unnamedblk4__DOT__best))))) {
        vlSelf->__PVT__have_resp = 1U;
        __PVT__unnamedblk4__DOT__best = vlSelf->__PVT__e_age
            [7U];
        vlSelf->__PVT__resp_idx = 7U;
    }
}
