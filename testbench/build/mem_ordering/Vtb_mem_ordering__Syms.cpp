// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mem_ordering__pch.h"
#include "Vtb_mem_ordering.h"
#include "Vtb_mem_ordering___024root.h"
#include "Vtb_mem_ordering_tb_mem_ordering.h"
#include "Vtb_mem_ordering_mem_model__R1_Oz1_B0.h"

// FUNCTIONS
Vtb_mem_ordering__Syms::~Vtb_mem_ordering__Syms()
{
}

Vtb_mem_ordering__Syms::Vtb_mem_ordering__Syms(VerilatedContext* contextp, const char* namep, Vtb_mem_ordering* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_mem_ordering{this, Verilated::catName(namep, "tb_mem_ordering")}
    , TOP__tb_mem_ordering__dut{this, Verilated::catName(namep, "tb_mem_ordering.dut")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.tb_mem_ordering = &TOP__tb_mem_ordering;
    TOP__tb_mem_ordering.dut = &TOP__tb_mem_ordering__dut;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_mem_ordering.__Vconfigure(true);
    TOP__tb_mem_ordering__dut.__Vconfigure(true);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
