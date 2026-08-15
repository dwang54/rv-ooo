// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_ordering.h for the primary calling header

#ifndef VERILATED_VTB_MEM_ORDERING___024ROOT_H_
#define VERILATED_VTB_MEM_ORDERING___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem_ordering_tb_mem_ordering;


class Vtb_mem_ordering__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_ordering___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mem_ordering_tb_mem_ordering* tb_mem_ordering;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_ordering____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_ordering____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_h6d7a56ff__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h00c6b81f__0;
    VlTriggerScheduler __VtrigSched_h00c6b712__0;
    VlTriggerScheduler __VtrigSched_hf94d8f91__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_mem_ordering__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_ordering___024root(Vtb_mem_ordering__Syms* symsp, const char* v__name);
    ~Vtb_mem_ordering___024root();
    VL_UNCOPYABLE(Vtb_mem_ordering___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
