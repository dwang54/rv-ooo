// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_base.h for the primary calling header

#ifndef VERILATED_VTB_MEM_BASE_TB_MEM_BASE_H_
#define VERILATED_VTB_MEM_BASE_TB_MEM_BASE_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem_base_mem_model__L2;


class Vtb_mem_base__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_base_tb_mem_base final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mem_base_mem_model__L2* dut;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst_n;
    CData/*0:0*/ __PVT__rq_v;
    CData/*0:0*/ __PVT__rs_r;
    CData/*3:0*/ __PVT__rq_id;
    CData/*0:0*/ __PVT__seen_err;
    CData/*3:0*/ __Vtask_rd__0__id;
    CData/*3:0*/ __Vtask_rd__1__id;
    CData/*3:0*/ __Vtask_rd__2__id;
    CData/*3:0*/ __Vtask_rd__3__id;
    IData/*31:0*/ __PVT__rq_a;
    IData/*31:0*/ __PVT__errors;

    // INTERNAL VARIABLES
    Vtb_mem_base__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_base_tb_mem_base(Vtb_mem_base__Syms* symsp, const char* v__name);
    ~Vtb_mem_base_tb_mem_base();
    VL_UNCOPYABLE(Vtb_mem_base_tb_mem_base);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
