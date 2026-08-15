// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_model.h for the primary calling header

#ifndef VERILATED_VTB_MEM_MODEL_MEM_MODEL__RZ1_OZ1_B0_H_
#define VERILATED_VTB_MEM_MODEL_MEM_MODEL__RZ1_OZ1_B0_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_mem_model__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_model_mem_model__Rz1_Oz1_B0 final : public VerilatedModule {
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
    CData/*2:0*/ __PVT__oldest_idx;
    CData/*2:0*/ __Vdlyvdim0__e_id__v0;
    CData/*3:0*/ __Vdlyvval__e_id__v0;
    CData/*0:0*/ __Vdlyvset__e_id__v0;
    CData/*0:0*/ __Vdlyvset__e_err__v0;
    CData/*2:0*/ __Vdlyvdim0__e_rdata__v0;
    CData/*2:0*/ __Vdlyvdim0__e_rdata__v1;
    CData/*0:0*/ __Vdlyvset__e_rdata__v1;
    CData/*2:0*/ __Vdlyvdim0__e_rdata__v2;
    CData/*0:0*/ __Vdlyvset__e_rdata__v2;
    SData/*15:0*/ __PVT__age_ctr;
    VL_IN(__PVT__req_addr,31,0);
    VL_IN(__PVT__req_wdata,31,0);
    VL_OUT(__PVT__resp_rdata,31,0);
    IData/*31:0*/ __PVT__unnamedblk8__DOT__off;
    IData/*31:0*/ __PVT__unnamedblk8__DOT__widx;
    IData/*31:0*/ __PVT__unnamedblk8__DOT__cur;
    IData/*31:0*/ __Vdlyvval__e_rdata__v2;
    VlUnpacked<IData/*31:0*/, 16384> __PVT__mem;
    VlUnpacked<CData/*0:0*/, 8> __PVT__e_busy;
    VlUnpacked<CData/*3:0*/, 8> __PVT__e_id;
    VlUnpacked<IData/*31:0*/, 8> __PVT__e_rdata;
    VlUnpacked<SData/*15:0*/, 8> __PVT__e_count;
    VlUnpacked<SData/*15:0*/, 8> __PVT__e_age;

    // INTERNAL VARIABLES
    Vtb_mem_model__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_model_mem_model__Rz1_Oz1_B0(Vtb_mem_model__Syms* symsp, const char* v__name);
    ~Vtb_mem_model_mem_model__Rz1_Oz1_B0();
    VL_UNCOPYABLE(Vtb_mem_model_mem_model__Rz1_Oz1_B0);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
