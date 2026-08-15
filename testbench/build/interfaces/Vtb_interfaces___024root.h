// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_interfaces.h for the primary calling header

#ifndef VERILATED_VTB_INTERFACES___024ROOT_H_
#define VERILATED_VTB_INTERFACES___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_interfaces__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_interfaces___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_interfaces__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_interfaces__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_interfaces___024root(Vtb_interfaces__Syms* symsp, const char* v__name);
    ~Vtb_interfaces___024root();
    VL_UNCOPYABLE(Vtb_interfaces___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
