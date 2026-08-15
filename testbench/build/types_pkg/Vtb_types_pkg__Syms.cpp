// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_types_pkg__pch.h"
#include "Vtb_types_pkg.h"
#include "Vtb_types_pkg___024root.h"
#include "Vtb_types_pkg_alu_if.h"

// FUNCTIONS
Vtb_types_pkg__Syms::~Vtb_types_pkg__Syms()
{
}

Vtb_types_pkg__Syms::Vtb_types_pkg__Syms(VerilatedContext* contextp, const char* namep, Vtb_types_pkg* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_types_pkg__DOT__aif{this, Verilated::catName(namep, "tb_types_pkg.aif")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_types_pkg__DOT__aif = &TOP__tb_types_pkg__DOT__aif;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_types_pkg__DOT__aif.__Vconfigure(true);
}
