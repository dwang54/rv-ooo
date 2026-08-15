// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_model.h for the primary calling header

#include "Vtb_mem_model__pch.h"
#include "Vtb_mem_model__Syms.h"
#include "Vtb_mem_model_mem_model__Rz1_Oz1_B0.h"

VL_ATTR_COLD void Vtb_mem_model_mem_model__Rz1_Oz1_B0___stl_sequent__TOP__tb_mem_model__dut__0(Vtb_mem_model_mem_model__Rz1_Oz1_B0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_model_mem_model__Rz1_Oz1_B0___stl_sequent__TOP__tb_mem_model__dut__0\n"); );
    // Init
    SData/*15:0*/ __PVT__oldest_age;
    __PVT__oldest_age = 0;
    CData/*0:0*/ __PVT__have_oldest;
    __PVT__have_oldest = 0;
    // Body
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
    vlSelf->__PVT__req_ready = ((IData)(vlSelf->__PVT__have_free) 
                                & (IData)(vlSymsp->TOP__tb_mem_model.__PVT__rst_n));
    vlSelf->__PVT__have_resp = ((IData)(__PVT__have_oldest) 
                                & (0U == vlSelf->__PVT__e_count
                                   [vlSelf->__PVT__oldest_idx]));
}
