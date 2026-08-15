// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_ordering.h for the primary calling header

#ifndef VERILATED_VTB_MEM_ORDERING_MEM_MODEL__R1_OZ1_B0_H_
#define VERILATED_VTB_MEM_ORDERING_MEM_MODEL__R1_OZ1_B0_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mem_ordering__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_ordering_mem_model__R1_Oz1_B0 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst_n,0,0);
    VL_IN8(__PVT__req_valid,0,0);
    VL_OUT8(__PVT__req_ready,0,0);
    VL_IN8(__PVT__req_id,3,0);
    VL_IN8(__PVT__req_we,0,0);
    VL_IN8(__PVT__req_be,3,0);
    VL_OUT8(__PVT__resp_valid,0,0);
    VL_IN8(__PVT__resp_ready,0,0);
    VL_OUT8(__PVT__resp_id,3,0);
    VL_OUT8(__PVT__resp_err,0,0);
    CData/*0:0*/ __PVT__have_free;
    CData/*2:0*/ __PVT__free_idx;
    CData/*0:0*/ __PVT__have_resp;
    CData/*2:0*/ __PVT__resp_idx;
    CData/*2:0*/ __Vdlyvdim0__e_id__v0;
    CData/*3:0*/ __Vdlyvval__e_id__v0;
    CData/*0:0*/ __Vdlyvset__e_id__v0;
    SData/*15:0*/ __PVT__age_ctr;
    SData/*15:0*/ __PVT__unnamedblk8__DOT__lat;
    VL_IN(__PVT__req_addr,31,0);
    VL_IN(__PVT__req_wdata,31,0);
    VL_OUT(__PVT__resp_rdata,31,0);
    VlUnpacked<CData/*0:0*/, 8> __PVT__e_busy;
    VlUnpacked<CData/*3:0*/, 8> __PVT__e_id;
    VlUnpacked<SData/*15:0*/, 8> __PVT__e_count;
    VlUnpacked<SData/*15:0*/, 8> __PVT__e_age;

    // INTERNAL VARIABLES
    Vtb_mem_ordering__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_ordering_mem_model__R1_Oz1_B0(Vtb_mem_ordering__Syms* symsp, const char* v__name);
    ~Vtb_mem_ordering_mem_model__R1_Oz1_B0();
    VL_UNCOPYABLE(Vtb_mem_ordering_mem_model__R1_Oz1_B0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
