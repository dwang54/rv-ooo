// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ordering.h for the primary calling header

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering__Syms.h"
#include "Vtb_mem_ordering___024root.h"

VL_ATTR_COLD void Vtb_mem_ordering_tb_mem_ordering___eval_static__TOP__tb_mem_ordering(Vtb_mem_ordering_tb_mem_ordering* vlSelf);

VL_ATTR_COLD void Vtb_mem_ordering___024root___eval_static(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_static\n"); );
    // Body
    Vtb_mem_ordering_tb_mem_ordering___eval_static__TOP__tb_mem_ordering((&vlSymsp->TOP__tb_mem_ordering));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mem_ordering___024root___dump_triggers__stl(Vtb_mem_ordering___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mem_ordering___024root___eval_triggers__stl(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mem_ordering___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_mem_ordering_mem_model__R1_Oz1_B0___stl_sequent__TOP__tb_mem_ordering__dut__0(Vtb_mem_ordering_mem_model__R1_Oz1_B0* vlSelf);

VL_ATTR_COLD void Vtb_mem_ordering___024root___eval_stl(Vtb_mem_ordering___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_ordering__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mem_ordering___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtb_mem_ordering_mem_model__R1_Oz1_B0___stl_sequent__TOP__tb_mem_ordering__dut__0((&vlSymsp->TOP__tb_mem_ordering__dut));
    }
}
