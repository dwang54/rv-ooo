// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_model.h for the primary calling header

#ifndef VERILATED_VTB_MEM_MODEL_TB_MEM_MODEL_H_
#define VERILATED_VTB_MEM_MODEL_TB_MEM_MODEL_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem_model_mem_model__Rz1_Oz1_B0;


class Vtb_mem_model__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_model_tb_mem_model final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mem_model_mem_model__Rz1_Oz1_B0* dut;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst_n;
    CData/*0:0*/ __PVT__rq_v;
    CData/*0:0*/ __PVT__rq_we;
    CData/*0:0*/ __PVT__rs_r;
    CData/*3:0*/ __PVT__rq_id;
    CData/*3:0*/ __PVT__rq_be;
    IData/*31:0*/ __PVT__rq_a;
    IData/*31:0*/ __PVT__rq_wd;
    IData/*31:0*/ __PVT__errors;
    IData/*31:0*/ __PVT__cyc;
    VlUnpacked<IData/*31:0*/, 16> __PVT__req_cycle;
    VlUnpacked<IData/*31:0*/, 16> __PVT__rsp_cycle;
    VlQueue<IData/*31:0*/> __PVT__resp_ids;
    VlQueue<IData/*31:0*/> __PVT__resp_data;

    // INTERNAL VARIABLES
    Vtb_mem_model__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_model_tb_mem_model(Vtb_mem_model__Syms* symsp, const char* v__name);
    ~Vtb_mem_model_tb_mem_model();
    VL_UNCOPYABLE(Vtb_mem_model_tb_mem_model);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
