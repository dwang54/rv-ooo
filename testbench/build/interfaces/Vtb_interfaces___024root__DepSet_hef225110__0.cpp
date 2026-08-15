// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_interfaces.h for the primary calling header

#include "Vtb_interfaces__pch.h"
#include "Vtb_interfaces__Syms.h"
#include "Vtb_interfaces___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_interfaces___024root___dump_triggers__act(Vtb_interfaces___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_interfaces___024root___eval_triggers__act(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, vlSelf->__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_interfaces___024root___dump_triggers__act(vlSelf);
    }
#endif
}
