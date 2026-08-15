// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ordering.h for the primary calling header

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering__Syms.h"
#include "Vtb_mem_ordering_mem_model__R1_Oz1_B0.h"

VL_INLINE_OPT void Vtb_mem_ordering_mem_model__R1_Oz1_B0___act_comb__TOP__tb_mem_ordering__dut__0(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_ordering_mem_model__R1_Oz1_B0___act_comb__TOP__tb_mem_ordering__dut__0\n"); );
    // Body
    vlSelf->__PVT__req_ready = ((IData)(vlSelf->__PVT__have_free) 
                                & (IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__rst_n));
}

VL_INLINE_OPT void Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__0(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_ordering_mem_model__R1_Oz1_B0___nba_sequent__TOP__tb_mem_ordering__dut__0\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__e_age__v0;
    __Vdlyvdim0__e_age__v0 = 0;
    SData/*15:0*/ __Vdlyvval__e_age__v0;
    __Vdlyvval__e_age__v0 = 0;
    CData/*0:0*/ __Vdlyvset__e_age__v0;
    __Vdlyvset__e_age__v0 = 0;
    CData/*0:0*/ __Vdlyvset__e_age__v1;
    __Vdlyvset__e_age__v1 = 0;
    CData/*2:0*/ __Vdlyvdim0__e_busy__v0;
    __Vdlyvdim0__e_busy__v0 = 0;
    CData/*0:0*/ __Vdlyvset__e_busy__v0;
    __Vdlyvset__e_busy__v0 = 0;
    CData/*2:0*/ __Vdlyvdim0__e_busy__v1;
    __Vdlyvdim0__e_busy__v1 = 0;
    CData/*0:0*/ __Vdlyvset__e_busy__v1;
    __Vdlyvset__e_busy__v1 = 0;
    CData/*0:0*/ __Vdlyvset__e_busy__v2;
    __Vdlyvset__e_busy__v2 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v0;
    __Vdlyvval__e_count__v0 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v0;
    __Vdlyvset__e_count__v0 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v1;
    __Vdlyvval__e_count__v1 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v1;
    __Vdlyvset__e_count__v1 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v2;
    __Vdlyvval__e_count__v2 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v2;
    __Vdlyvset__e_count__v2 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v3;
    __Vdlyvval__e_count__v3 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v3;
    __Vdlyvset__e_count__v3 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v4;
    __Vdlyvval__e_count__v4 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v4;
    __Vdlyvset__e_count__v4 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v5;
    __Vdlyvval__e_count__v5 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v5;
    __Vdlyvset__e_count__v5 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v6;
    __Vdlyvval__e_count__v6 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v6;
    __Vdlyvset__e_count__v6 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v7;
    __Vdlyvval__e_count__v7 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v7;
    __Vdlyvset__e_count__v7 = 0;
    CData/*2:0*/ __Vdlyvdim0__e_count__v8;
    __Vdlyvdim0__e_count__v8 = 0;
    SData/*15:0*/ __Vdlyvval__e_count__v8;
    __Vdlyvval__e_count__v8 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v8;
    __Vdlyvset__e_count__v8 = 0;
    CData/*0:0*/ __Vdlyvset__e_count__v9;
    __Vdlyvset__e_count__v9 = 0;
    // Body
    vlSelf->__Vdlyvset__e_id__v0 = 0U;
    __Vdlyvset__e_age__v0 = 0U;
    __Vdlyvset__e_age__v1 = 0U;
    __Vdlyvset__e_busy__v0 = 0U;
    __Vdlyvset__e_busy__v1 = 0U;
    __Vdlyvset__e_busy__v2 = 0U;
    __Vdlyvset__e_count__v0 = 0U;
    __Vdlyvset__e_count__v1 = 0U;
    __Vdlyvset__e_count__v2 = 0U;
    __Vdlyvset__e_count__v3 = 0U;
    __Vdlyvset__e_count__v4 = 0U;
    __Vdlyvset__e_count__v5 = 0U;
    __Vdlyvset__e_count__v6 = 0U;
    __Vdlyvset__e_count__v7 = 0U;
    __Vdlyvset__e_count__v8 = 0U;
    __Vdlyvset__e_count__v9 = 0U;
    if (vlSymsp->TOP__tb_mem_ordering.__PVT__rst_n) {
        if (((IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__rq_v) 
             & (IData)(vlSelf->__PVT__req_ready))) {
            vlSelf->__Vdlyvval__e_id__v0 = vlSymsp->TOP__tb_mem_ordering.__PVT__rq_id;
            vlSelf->__Vdlyvset__e_id__v0 = 1U;
            vlSelf->__Vdlyvdim0__e_id__v0 = vlSelf->__PVT__free_idx;
            __Vdlyvval__e_age__v0 = vlSelf->__PVT__age_ctr;
            __Vdlyvset__e_age__v0 = 1U;
            __Vdlyvdim0__e_age__v0 = vlSelf->__PVT__free_idx;
            vlSelf->__PVT__age_ctr = (0xffffU & ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__age_ctr)));
            __Vdlyvset__e_busy__v0 = 1U;
            __Vdlyvdim0__e_busy__v0 = vlSelf->__PVT__free_idx;
            vlSelf->__PVT__unnamedblk8__DOT__lat = 
                (0xffffU & ((IData)(VL_URANDOM_RANGE_I(0xcU, 1U)) 
                            - (IData)(1U)));
            __Vdlyvval__e_count__v8 = vlSelf->__PVT__unnamedblk8__DOT__lat;
            __Vdlyvset__e_count__v8 = 1U;
            __Vdlyvdim0__e_count__v8 = vlSelf->__PVT__free_idx;
        }
        if (((IData)(vlSelf->__PVT__have_resp) & (IData)(vlSymsp->TOP__tb_mem_ordering.__PVT__rs_r))) {
            __Vdlyvset__e_busy__v1 = 1U;
            __Vdlyvdim0__e_busy__v1 = vlSelf->__PVT__resp_idx;
        }
        if ((vlSelf->__PVT__e_busy[0U] & (0U != vlSelf->__PVT__e_count
                                          [0U]))) {
            __Vdlyvval__e_count__v0 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [0U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v0 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[1U] & (0U != vlSelf->__PVT__e_count
                                          [1U]))) {
            __Vdlyvval__e_count__v1 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [1U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v1 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[2U] & (0U != vlSelf->__PVT__e_count
                                          [2U]))) {
            __Vdlyvval__e_count__v2 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [2U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v2 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[3U] & (0U != vlSelf->__PVT__e_count
                                          [3U]))) {
            __Vdlyvval__e_count__v3 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [3U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v3 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[4U] & (0U != vlSelf->__PVT__e_count
                                          [4U]))) {
            __Vdlyvval__e_count__v4 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [4U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v4 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[5U] & (0U != vlSelf->__PVT__e_count
                                          [5U]))) {
            __Vdlyvval__e_count__v5 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [5U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v5 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[6U] & (0U != vlSelf->__PVT__e_count
                                          [6U]))) {
            __Vdlyvval__e_count__v6 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [6U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v6 = 1U;
        }
        if ((vlSelf->__PVT__e_busy[7U] & (0U != vlSelf->__PVT__e_count
                                          [7U]))) {
            __Vdlyvval__e_count__v7 = (0xffffU & (vlSelf->__PVT__e_count
                                                  [7U] 
                                                  - (IData)(1U)));
            __Vdlyvset__e_count__v7 = 1U;
        }
    } else {
        vlSelf->__PVT__age_ctr = 0U;
        __Vdlyvset__e_age__v1 = 1U;
        __Vdlyvset__e_busy__v2 = 1U;
        __Vdlyvset__e_count__v9 = 1U;
    }
    if (__Vdlyvset__e_age__v0) {
        vlSelf->__PVT__e_age[__Vdlyvdim0__e_age__v0] 
            = __Vdlyvval__e_age__v0;
    }
    if (__Vdlyvset__e_age__v1) {
        vlSelf->__PVT__e_age[0U] = 0U;
        vlSelf->__PVT__e_age[1U] = 0U;
        vlSelf->__PVT__e_age[2U] = 0U;
        vlSelf->__PVT__e_age[3U] = 0U;
        vlSelf->__PVT__e_age[4U] = 0U;
        vlSelf->__PVT__e_age[5U] = 0U;
        vlSelf->__PVT__e_age[6U] = 0U;
        vlSelf->__PVT__e_age[7U] = 0U;
    }
    if (__Vdlyvset__e_busy__v0) {
        vlSelf->__PVT__e_busy[__Vdlyvdim0__e_busy__v0] = 1U;
    }
    if (__Vdlyvset__e_busy__v1) {
        vlSelf->__PVT__e_busy[__Vdlyvdim0__e_busy__v1] = 0U;
    }
    if (__Vdlyvset__e_busy__v2) {
        vlSelf->__PVT__e_busy[0U] = 0U;
        vlSelf->__PVT__e_busy[1U] = 0U;
        vlSelf->__PVT__e_busy[2U] = 0U;
        vlSelf->__PVT__e_busy[3U] = 0U;
        vlSelf->__PVT__e_busy[4U] = 0U;
        vlSelf->__PVT__e_busy[5U] = 0U;
        vlSelf->__PVT__e_busy[6U] = 0U;
        vlSelf->__PVT__e_busy[7U] = 0U;
    }
    if (__Vdlyvset__e_count__v0) {
        vlSelf->__PVT__e_count[0U] = __Vdlyvval__e_count__v0;
    }
    if (__Vdlyvset__e_count__v1) {
        vlSelf->__PVT__e_count[1U] = __Vdlyvval__e_count__v1;
    }
    if (__Vdlyvset__e_count__v2) {
        vlSelf->__PVT__e_count[2U] = __Vdlyvval__e_count__v2;
    }
    if (__Vdlyvset__e_count__v3) {
        vlSelf->__PVT__e_count[3U] = __Vdlyvval__e_count__v3;
    }
    if (__Vdlyvset__e_count__v4) {
        vlSelf->__PVT__e_count[4U] = __Vdlyvval__e_count__v4;
    }
    if (__Vdlyvset__e_count__v5) {
        vlSelf->__PVT__e_count[5U] = __Vdlyvval__e_count__v5;
    }
    if (__Vdlyvset__e_count__v6) {
        vlSelf->__PVT__e_count[6U] = __Vdlyvval__e_count__v6;
    }
    if (__Vdlyvset__e_count__v7) {
        vlSelf->__PVT__e_count[7U] = __Vdlyvval__e_count__v7;
    }
    if (__Vdlyvset__e_count__v8) {
        vlSelf->__PVT__e_count[__Vdlyvdim0__e_count__v8] 
            = __Vdlyvval__e_count__v8;
    }
    if (__Vdlyvset__e_count__v9) {
        vlSelf->__PVT__e_count[0U] = 0U;
        vlSelf->__PVT__e_count[1U] = 0U;
        vlSelf->__PVT__e_count[2U] = 0U;
        vlSelf->__PVT__e_count[3U] = 0U;
        vlSelf->__PVT__e_count[4U] = 0U;
        vlSelf->__PVT__e_count[5U] = 0U;
        vlSelf->__PVT__e_count[6U] = 0U;
        vlSelf->__PVT__e_count[7U] = 0U;
    }
    vlSelf->__PVT__free_idx = 0U;
    if ((1U & (~ vlSelf->__PVT__e_busy[7U]))) {
        vlSelf->__PVT__free_idx = 7U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[6U]))) {
        vlSelf->__PVT__free_idx = 6U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[5U]))) {
        vlSelf->__PVT__free_idx = 5U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[4U]))) {
        vlSelf->__PVT__free_idx = 4U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[3U]))) {
        vlSelf->__PVT__free_idx = 3U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[2U]))) {
        vlSelf->__PVT__free_idx = 2U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[1U]))) {
        vlSelf->__PVT__free_idx = 1U;
    }
    vlSelf->__PVT__have_free = 0U;
    if ((1U & (~ vlSelf->__PVT__e_busy[7U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[6U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[5U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[4U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[3U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[2U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[1U]))) {
        vlSelf->__PVT__have_free = 1U;
    }
    if ((1U & (~ vlSelf->__PVT__e_busy[0U]))) {
        vlSelf->__PVT__free_idx = 0U;
        vlSelf->__PVT__have_free = 1U;
    }
}
