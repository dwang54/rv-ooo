// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_model.h for the primary calling header

#include "Vtb_mem_model__pch.h"
#include "Vtb_mem_model__Syms.h"
#include "Vtb_mem_model_tb_mem_model.h"

void Vtb_mem_model_tb_mem_model___ctor_var_reset(Vtb_mem_model_tb_mem_model* vlSelf);

Vtb_mem_model_tb_mem_model::Vtb_mem_model_tb_mem_model(Vtb_mem_model__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mem_model_tb_mem_model___ctor_var_reset(this);
}

void Vtb_mem_model_tb_mem_model::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mem_model_tb_mem_model::~Vtb_mem_model_tb_mem_model() {
}
