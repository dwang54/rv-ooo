// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base__Syms.h"
#include "Vtb_mem_base___024root.h"

VL_ATTR_COLD void Vtb_mem_base_tb_mem_base___eval_static__TOP__tb_mem_base(Vtb_mem_base_tb_mem_base* vlSelf);

VL_ATTR_COLD void Vtb_mem_base___024root___eval_static(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_static\n"); );
    // Body
    Vtb_mem_base_tb_mem_base___eval_static__TOP__tb_mem_base((&vlSymsp->TOP__tb_mem_base));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_base___024root___dump_triggers__stl(Vtb_mem_base___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mem_base___024root___eval_triggers__stl(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_base___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_mem_base_mem_model__L2___stl_sequent__TOP__tb_mem_base__dut__0(Vtb_mem_base_mem_model__L2* vlSelf);

VL_ATTR_COLD void Vtb_mem_base___024root___eval_stl(Vtb_mem_base___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_base___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mem_base_mem_model__L2___stl_sequent__TOP__tb_mem_base__dut__0((&vlSymsp->TOP__tb_mem_base__dut));
    }
}
