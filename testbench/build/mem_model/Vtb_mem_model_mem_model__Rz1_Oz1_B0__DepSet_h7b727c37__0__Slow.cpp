// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_model.h for the primary calling header

#include "Vtb_mem_model__pch.h"
#include "Vtb_mem_model_mem_model__Rz1_Oz1_B0.h"

VL_ATTR_COLD void Vtb_mem_model_mem_model__Rz1_Oz1_B0___ctor_var_reset(Vtb_mem_model_mem_model__Rz1_Oz1_B0* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vtb_mem_model_mem_model__Rz1_Oz1_B0___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__req_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__req_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__req_be = VL_RAND_RESET_I(4);
    vlSelf->__PVT__req_wdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__resp_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__resp_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__resp_rdata = VL_RAND_RESET_I(32);
    vlSelf->__PVT__resp_err = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 16384; ++__Vi0) {
        vlSelf->__PVT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__e_busy[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__e_id[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__e_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__e_count[__Vi0] = VL_RAND_RESET_I(16);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->__PVT__e_age[__Vi0] = VL_RAND_RESET_I(16);
    }
    vlSelf->__PVT__age_ctr = VL_RAND_RESET_I(16);
    vlSelf->__PVT__have_free = VL_RAND_RESET_I(1);
    vlSelf->__PVT__free_idx = VL_RAND_RESET_I(3);
    vlSelf->__PVT__have_resp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__oldest_idx = VL_RAND_RESET_I(3);
    vlSelf->__PVT__unnamedblk8__DOT__off = VL_RAND_RESET_I(32);
    vlSelf->__PVT__unnamedblk8__DOT__widx = 0;
    vlSelf->__PVT__unnamedblk8__DOT__cur = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__e_id__v0 = 0;
    vlSelf->__Vdlyvval__e_id__v0 = VL_RAND_RESET_I(4);
    vlSelf->__Vdlyvset__e_id__v0 = 0;
    vlSelf->__Vdlyvset__e_err__v0 = 0;
    vlSelf->__Vdlyvdim0__e_rdata__v0 = 0;
    vlSelf->__Vdlyvdim0__e_rdata__v1 = 0;
    vlSelf->__Vdlyvset__e_rdata__v1 = 0;
    vlSelf->__Vdlyvdim0__e_rdata__v2 = 0;
    vlSelf->__Vdlyvval__e_rdata__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__e_rdata__v2 = 0;
}
