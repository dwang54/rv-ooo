// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_MEM_ORDERING__SYMS_H_
#define VERILATED_VTB_MEM_ORDERING__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_mem_ordering.h"

// INCLUDE MODULE CLASSES
#include "Vtb_mem_ordering___024root.h"
#include "Vtb_mem_ordering_tb_mem_ordering.h"
#include "Vtb_mem_ordering_mem_model__R1_Oz1_B0.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb_mem_ordering__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_mem_ordering* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_mem_ordering___024root     TOP;
    Vtb_mem_ordering_tb_mem_ordering TOP__tb_mem_ordering;
    Vtb_mem_ordering_mem_model__R1_Oz1_B0 TOP__tb_mem_ordering__dut;

    // CONSTRUCTORS
    Vtb_mem_ordering__Syms(VerilatedContext* contextp, const char* namep, Vtb_mem_ordering* modelp);
    ~Vtb_mem_ordering__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
