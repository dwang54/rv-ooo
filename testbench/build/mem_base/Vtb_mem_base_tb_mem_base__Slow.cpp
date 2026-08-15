// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base__Syms.h"
#include "Vtb_mem_base_tb_mem_base.h"

void Vtb_mem_base_tb_mem_base___ctor_var_reset(Vtb_mem_base_tb_mem_base* vlSelf);

Vtb_mem_base_tb_mem_base::Vtb_mem_base_tb_mem_base(Vtb_mem_base__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mem_base_tb_mem_base___ctor_var_reset(this);
}

void Vtb_mem_base_tb_mem_base::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mem_base_tb_mem_base::~Vtb_mem_base_tb_mem_base() {
}
