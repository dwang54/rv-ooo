// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ordering.h for the primary calling header

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering_tb_mem_ordering.h"

VL_ATTR_COLD void Vtb_mem_ordering_tb_mem_ordering___eval_static__TOP__tb_mem_ordering(Vtb_mem_ordering_tb_mem_ordering* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_ordering_tb_mem_ordering___eval_static__TOP__tb_mem_ordering\n"); );
    // Body
    vlSelf->__PVT__clk = 0U;
    vlSelf->__PVT__rst_n = 0U;
    vlSelf->__PVT__reorder_events = 0U;
    vlSelf->__PVT__rounds = 0U;
}

VL_ATTR_COLD void Vtb_mem_ordering_tb_mem_ordering___ctor_var_reset(Vtb_mem_ordering_tb_mem_ordering* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_ordering_tb_mem_ordering___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_v = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rs_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rq_id = VL_RAND_RESET_I(4);
    vlSelf->__PVT__order.atDefault() = 0;
    vlSelf->__PVT__reorder_events = 0;
    vlSelf->__PVT__rounds = 0;
}
