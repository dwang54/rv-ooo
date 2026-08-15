// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_interfaces__pch.h"
#include "Vtb_interfaces.h"
#include "Vtb_interfaces___024root.h"
#include "Vtb_interfaces___024unit.h"

// FUNCTIONS
Vtb_interfaces__Syms::~Vtb_interfaces__Syms()
{
}

Vtb_interfaces__Syms::Vtb_interfaces__Syms(VerilatedContext* contextp, const char* namep, Vtb_interfaces* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
