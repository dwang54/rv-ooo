// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_ordering.h for the primary calling header

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering__Syms.h"
#include "Vtb_mem_ordering_tb_mem_ordering.h"

void Vtb_mem_ordering_tb_mem_ordering___ctor_var_reset(Vtb_mem_ordering_tb_mem_ordering* vlSelf);

Vtb_mem_ordering_tb_mem_ordering::Vtb_mem_ordering_tb_mem_ordering(Vtb_mem_ordering__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mem_ordering_tb_mem_ordering___ctor_var_reset(this);
}

void Vtb_mem_ordering_tb_mem_ordering::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mem_ordering_tb_mem_ordering::~Vtb_mem_ordering_tb_mem_ordering() {
}
