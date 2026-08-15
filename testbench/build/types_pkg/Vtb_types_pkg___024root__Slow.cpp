// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_types_pkg.h for the primary calling header

#include "Vtb_types_pkg__pch.h"
#include "Vtb_types_pkg__Syms.h"
#include "Vtb_types_pkg___024root.h"

void Vtb_types_pkg___024root___ctor_var_reset(Vtb_types_pkg___024root* vlSelf);

Vtb_types_pkg___024root::Vtb_types_pkg___024root(Vtb_types_pkg__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_types_pkg___024root___ctor_var_reset(this);
}

void Vtb_types_pkg___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_types_pkg___024root::~Vtb_types_pkg___024root() {
}
