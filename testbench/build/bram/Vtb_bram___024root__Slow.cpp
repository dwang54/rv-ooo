// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bram.h for the primary calling header

#include "Vtb_bram__pch.h"
#include "Vtb_bram__Syms.h"
#include "Vtb_bram___024root.h"

void Vtb_bram___024root___ctor_var_reset(Vtb_bram___024root* vlSelf);

Vtb_bram___024root::Vtb_bram___024root(Vtb_bram__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_bram___024root___ctor_var_reset(this);
}

void Vtb_bram___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_bram___024root::~Vtb_bram___024root() {
}
