// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mem_model__pch.h"
#include "Vtb_mem_model.h"
#include "Vtb_mem_model___024root.h"
#include "Vtb_mem_model_tb_mem_model.h"
#include "Vtb_mem_model_mem_model__Rz1_Oz1_B0.h"

// FUNCTIONS
Vtb_mem_model__Syms::~Vtb_mem_model__Syms()
{
}

Vtb_mem_model__Syms::Vtb_mem_model__Syms(VerilatedContext* contextp, const char* namep, Vtb_mem_model* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_mem_model{this, Verilated::catName(namep, "tb_mem_model")}
    , TOP__tb_mem_model__dut{this, Verilated::catName(namep, "tb_mem_model.dut")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_mem_model = &TOP__tb_mem_model;
    TOP__tb_mem_model.dut = &TOP__tb_mem_model__dut;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_mem_model.__Vconfigure(true);
    TOP__tb_mem_model__dut.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
