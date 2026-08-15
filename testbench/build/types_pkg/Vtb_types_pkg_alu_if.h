// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_types_pkg.h for the primary calling header

#ifndef VERILATED_VTB_TYPES_PKG_ALU_IF_H_
#define VERILATED_VTB_TYPES_PKG_ALU_IF_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_types_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_types_pkg_alu_if final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ aluop;
    IData/*31:0*/ port_a;
    IData/*31:0*/ port_b;
    IData/*31:0*/ out;

    // INTERNAL VARIABLES
    Vtb_types_pkg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_types_pkg_alu_if(Vtb_types_pkg__Syms* symsp, const char* v__name);
    ~Vtb_types_pkg_alu_if();
    VL_UNCOPYABLE(Vtb_types_pkg_alu_if);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtb_types_pkg_alu_if* obj);

#endif  // guard
