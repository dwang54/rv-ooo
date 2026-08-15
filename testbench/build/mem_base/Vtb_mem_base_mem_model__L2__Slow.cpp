// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base__Syms.h"
#include "Vtb_mem_base_mem_model__L2.h"

void Vtb_mem_base_mem_model__L2___ctor_var_reset(Vtb_mem_base_mem_model__L2* vlSelf);

Vtb_mem_base_mem_model__L2::Vtb_mem_base_mem_model__L2(Vtb_mem_base__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mem_base_mem_model__L2___ctor_var_reset(this);
}

void Vtb_mem_base_mem_model__L2::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mem_base_mem_model__L2::~Vtb_mem_base_mem_model__L2() {
}
