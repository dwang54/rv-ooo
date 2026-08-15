// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_TYPES_PKG__SYMS_H_
#define VERILATED_VTB_TYPES_PKG__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_types_pkg.h"

// INCLUDE MODULE CLASSES
#include "Vtb_types_pkg___024root.h"
#include "Vtb_types_pkg_alu_if.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_types_pkg__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_types_pkg* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_types_pkg___024root        TOP;
    Vtb_types_pkg_alu_if           TOP__tb_types_pkg__DOT__aif;

    // CONSTRUCTORS
    Vtb_types_pkg__Syms(VerilatedContext* contextp, const char* namep, Vtb_types_pkg* modelp);
    ~Vtb_types_pkg__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
