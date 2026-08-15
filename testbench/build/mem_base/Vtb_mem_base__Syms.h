// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MEM_BASE__SYMS_H_
#define VERILATED_VTB_MEM_BASE__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_mem_base.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mem_base___024root.h"
#include "Vtb_mem_base_tb_mem_base.h"
#include "Vtb_mem_base_mem_model__L2.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_mem_base__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mem_base* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mem_base___024root         TOP;
    Vtb_mem_base_tb_mem_base       TOP__tb_mem_base;
    Vtb_mem_base_mem_model__L2     TOP__tb_mem_base__dut;

    // CONSTRUCTORS
    Vtb_mem_base__Syms(VerilatedContext* contextp, const char* namep, Vtb_mem_base* modelp);
    ~Vtb_mem_base__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
