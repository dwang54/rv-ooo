// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_bram.h for the primary calling header

#ifndef VERILATED_VTB_BRAM___024ROOT_H_
#define VERILATED_VTB_BRAM___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_bram__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_bram___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_bram__DOT__clk;
    CData/*0:0*/ tb_bram__DOT__rst_n;
    CData/*0:0*/ tb_bram__DOT__rq_v;
    CData/*0:0*/ tb_bram__DOT__rq_r;
    CData/*0:0*/ tb_bram__DOT__rq_we;
    CData/*0:0*/ tb_bram__DOT__rs_v;
    CData/*0:0*/ tb_bram__DOT__rs_r;
    CData/*3:0*/ tb_bram__DOT__rq_id;
    CData/*3:0*/ tb_bram__DOT__rq_be;
    CData/*0:0*/ tb_bram__DOT__dut__DOT__in_range;
    CData/*0:0*/ tb_bram__DOT__dut__DOT__accept;
    CData/*3:0*/ tb_bram__DOT__dut__DOT__id_q;
    CData/*0:0*/ tb_bram__DOT__dut__DOT__err_q;
    CData/*0:0*/ tb_bram__DOT__dut__DOT__valid_q;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bram__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bram__DOT__rst_n__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_bram__DOT__dut__DOT__valid_q__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ tb_bram__DOT__rq_a;
    IData/*31:0*/ tb_bram__DOT__rq_wd;
    IData/*31:0*/ tb_bram__DOT__errors;
    IData/*31:0*/ tb_bram__DOT__cyc;
    IData/*31:0*/ tb_bram__DOT__t_req;
    IData/*31:0*/ tb_bram__DOT__t_rsp;
    IData/*31:0*/ tb_bram__DOT__dut__DOT__rdata_q;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> tb_bram__DOT__dut__DOT__mem;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h6070e046__0;
    VlTriggerScheduler __VtrigSched_h6070df83__0;
    VlTriggerScheduler __VtrigSched_hfeae26d7__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_bram__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_bram___024root(Vtb_bram__Syms* symsp, const char* v__name);
    ~Vtb_bram___024root();
    VL_UNCOPYABLE(Vtb_bram___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
