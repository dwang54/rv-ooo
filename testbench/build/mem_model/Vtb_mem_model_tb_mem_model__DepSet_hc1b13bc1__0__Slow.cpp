// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_model.h for the primary calling header

#include "Vtb_mem_model__pch.h"
#include "Vtb_mem_model_tb_mem_model.h"

VL_ATTR_COLD void Vtb_mem_model_tb_mem_model___eval_static__TOP__tb_mem_model(Vtb_mem_model_tb_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_model_tb_mem_model___eval_static__TOP__tb_mem_model\n"); );
    // Body
    vlSelf->__PVT__clk = 0U;
    vlSelf->__PVT__rst_n = 0U;
    vlSelf->__PVT__errors = 0U;
    vlSelf->__PVT__cyc = 0U;
}

VL_ATTR_COLD void Vtb_mem_model_tb_mem_model___ctor_var_reset(Vtb_mem_model_tb_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_model_tb_mem_model___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_v = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_we = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rq_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rq_wd = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rq_be = VL_RAND_RESET_I(4);
    vlSelf->__PVT__errors = 0;
    vlSelf->__PVT__resp_ids.atDefault() = 0;
    vlSelf->__PVT__resp_data.atDefault() = VL_RAND_RESET_I(32);
    vlSelf->__PVT__cyc = 0;
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__req_cycle[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->__PVT__rsp_cycle[__Vi0] = 0;
    }
}
