// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_base.h for the primary calling header

#ifndef VERILATED_VTB_MEM_BASE___024ROOT_H_
#define VERILATED_VTB_MEM_BASE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem_base_tb_mem_base;


class Vtb_mem_base__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_base___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mem_base_tb_mem_base* tb_mem_base;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_base____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_base____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_h43526075__0;
    CData/*0:0*/ __Vtrigprevexpr_hab7a6e95__0;
    CData/*0:0*/ __Vtrigprevexpr_h7fd77bd7__0;
    CData/*0:0*/ __Vtrigprevexpr_hd1f63a12__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h7efea98e__0;
    VlTriggerScheduler __VtrigSched_h7efea9cb__0;
    VlTriggerScheduler __VtrigSched_ha3659703__0;
    VlTriggerScheduler __VtrigSched_h3b4da923__0;
    VlTriggerScheduler __VtrigSched_he7e0b3e9__0;
    VlTriggerScheduler __VtrigSched_h55c274b0__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_mem_base__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_base___024root(Vtb_mem_base__Syms* symsp, const char* v__name);
    ~Vtb_mem_base___024root();
    VL_UNCOPYABLE(Vtb_mem_base___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
