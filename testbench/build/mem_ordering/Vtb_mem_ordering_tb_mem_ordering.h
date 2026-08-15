// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_mem_ordering.h for the primary calling header

#ifndef VERILATED_VTB_MEM_ORDERING_TB_MEM_ORDERING_H_
#define VERILATED_VTB_MEM_ORDERING_TB_MEM_ORDERING_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_mem_ordering_mem_model__R1_Oz1_B0;


class Vtb_mem_ordering__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_mem_ordering_tb_mem_ordering final : public VerilatedModule {
  public:
    // CELLS
    Vtb_mem_ordering_mem_model__R1_Oz1_B0* dut;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __PVT__clk;
    CData/*0:0*/ __PVT__rst_n;
    CData/*0:0*/ __PVT__rq_v;
    CData/*0:0*/ __PVT__rs_r;
    CData/*3:0*/ __PVT__rq_id;
    IData/*31:0*/ __PVT__reorder_events;
    IData/*31:0*/ __PVT__rounds;
    VlQueue<IData/*31:0*/> __PVT__order;

    // INTERNAL VARIABLES
    Vtb_mem_ordering__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_mem_ordering_tb_mem_ordering(Vtb_mem_ordering__Syms* symsp, const char* v__name);
    ~Vtb_mem_ordering_tb_mem_ordering();
    VL_UNCOPYABLE(Vtb_mem_ordering_tb_mem_ordering);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
