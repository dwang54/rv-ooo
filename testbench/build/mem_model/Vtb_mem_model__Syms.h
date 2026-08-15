// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MEM_MODEL__SYMS_H_
#define VERILATED_VTB_MEM_MODEL__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_mem_model.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mem_model___024root.h"
#include "Vtb_mem_model_tb_mem_model.h"
#include "Vtb_mem_model_mem_model__Rz1_Oz1_B0.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_mem_model__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mem_model* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mem_model___024root        TOP;
    Vtb_mem_model_tb_mem_model     TOP__tb_mem_model;
    Vtb_mem_model_mem_model__Rz1_Oz1_B0 TOP__tb_mem_model__dut;

    // CONSTRUCTORS
    Vtb_mem_model__Syms(VerilatedContext* contextp, const char* namep, Vtb_mem_model* modelp);
    ~Vtb_mem_model__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
