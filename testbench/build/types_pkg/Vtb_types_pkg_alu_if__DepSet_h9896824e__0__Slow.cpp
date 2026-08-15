// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_types_pkg.h for the primary calling header

#include "Vtb_types_pkg__pch.h"
#include "Vtb_types_pkg_alu_if.h"

VL_ATTR_COLD void Vtb_types_pkg_alu_if___ctor_var_reset(Vtb_types_pkg_alu_if* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_types_pkg__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_types_pkg_alu_if___ctor_var_reset\n"); );
    // Body
    vlSelf->aluop = VL_RAND_RESET_I(4);
    vlSelf->port_a = VL_RAND_RESET_I(32);
    vlSelf->port_b = VL_RAND_RESET_I(32);
    vlSelf->out = VL_RAND_RESET_I(32);
}
