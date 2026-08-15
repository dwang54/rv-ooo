// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base.h"
#include "Vtb_mem_base___024root.h"
#include "Vtb_mem_base_tb_mem_base.h"
#include "Vtb_mem_base_mem_model__L2.h"

// FUNCTIONS
Vtb_mem_base__Syms::~Vtb_mem_base__Syms()
{
}

Vtb_mem_base__Syms::Vtb_mem_base__Syms(VerilatedContext* contextp, const char* namep, Vtb_mem_base* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_mem_base{this, Verilated::catName(namep, "tb_mem_base")}
    , TOP__tb_mem_base__dut{this, Verilated::catName(namep, "tb_mem_base.dut")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_mem_base = &TOP__tb_mem_base;
    TOP__tb_mem_base.dut = &TOP__tb_mem_base__dut;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_mem_base.__Vconfigure(true);
    TOP__tb_mem_base__dut.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
