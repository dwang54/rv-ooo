// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_model.h for the primary calling header

#ifndef VERILATED_VTB_MEM_MODEL___024ROOT_H_
#define VERILATED_VTB_MEM_MODEL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem_model_tb_mem_model;


class Vtb_mem_model__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_model___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mem_model_tb_mem_model* tb_mem_model;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_model____PVT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_mem_model____PVT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr_hfaec3017__0;
    CData/*0:0*/ __Vtrigprevexpr_hfaec4dfd__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6bb26006__0;
    VlTriggerScheduler __VtrigSched_h6bb25e43__0;
    VlTriggerScheduler __VtrigSched_h6adc66a9__0;
    VlTriggerScheduler __VtrigSched_h6adb888b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<6> __VactTriggered;
    VlTriggerVec<6> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_mem_model__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_model___024root(Vtb_mem_model__Syms* symsp, const char* v__name);
    ~Vtb_mem_model___024root();
    VL_UNCOPYABLE(Vtb_mem_model___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
