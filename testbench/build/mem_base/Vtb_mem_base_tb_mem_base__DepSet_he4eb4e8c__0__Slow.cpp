// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base_tb_mem_base.h"

VL_ATTR_COLD void Vtb_mem_base_tb_mem_base___eval_static__TOP__tb_mem_base(Vtb_mem_base_tb_mem_base* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_base_tb_mem_base___eval_static__TOP__tb_mem_base\n"); );
    // Body
    vlSelf->__PVT__clk = 0U;
    vlSelf->__PVT__rst_n = 0U;
    vlSelf->__PVT__errors = 0U;
}

VL_ATTR_COLD void Vtb_mem_base_tb_mem_base___ctor_var_reset(Vtb_mem_base_tb_mem_base* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_base_tb_mem_base___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_v = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__rq_a = VL_RAND_RESET_I(32);
    vlSelf->__PVT__errors = 0;
    vlSelf->__PVT__seen_err = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_rd__0__id = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_rd__1__id = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_rd__2__id = VL_RAND_RESET_I(4);
    vlSelf->__Vtask_rd__3__id = VL_RAND_RESET_I(4);
}
