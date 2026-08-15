// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_BRAM__SYMS_H_
#define VERILATED_VTB_BRAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_bram.h"

// INCLUDE MODULE CLASSES
#include "Vtb_bram___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_bram__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_bram* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_bram___024root             TOP;

    // CONSTRUCTORS
    Vtb_bram__Syms(VerilatedContext* contextp, const char* namep, Vtb_bram* modelp);
    ~Vtb_bram__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
