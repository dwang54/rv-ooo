// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_types_pkg.h for the primary calling header

#ifndef VERILATED_VTB_TYPES_PKG___024ROOT_H_
#define VERILATED_VTB_TYPES_PKG___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_types_pkg_alu_if;


class Vtb_types_pkg__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_types_pkg___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_types_pkg_alu_if* __PVT__tb_types_pkg__DOT__aif;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_types_pkg__DOT__clk;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_types_pkg__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_types_pkg__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_types_pkg___024root(Vtb_types_pkg__Syms* symsp, const char* v__name);
    ~Vtb_types_pkg___024root();
    VL_UNCOPYABLE(Vtb_types_pkg___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
