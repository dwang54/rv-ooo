// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_base.h for the primary calling header

#include "Vtb_mem_base__pch.h"
#include "Vtb_mem_base__Syms.h"
#include "Vtb_mem_base_tb_mem_base.h"

VL_INLINE_OPT VlCoroutine Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__0(Vtb_mem_base_tb_mem_base* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__0\n"); );
    // Init
    IData/*31:0*/ __Vtask_rd__0__a;
    __Vtask_rd__0__a = 0;
    IData/*31:0*/ __Vtask_rd__1__a;
    __Vtask_rd__1__a = 0;
    IData/*31:0*/ __Vtask_rd__2__a;
    __Vtask_rd__2__a = 0;
    IData/*31:0*/ __Vtask_rd__3__a;
    __Vtask_rd__3__a = 0;
    // Body
    vlSelf->__PVT__rq_v = 0U;
    vlSelf->__PVT__rq_a = 0U;
    vlSelf->__PVT__rq_id = 0U;
    vlSelf->__PVT__rs_r = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            19);
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            19);
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            19);
    vlSelf->__PVT__rst_n = 1U;
    vlSelf->__Vtask_rd__0__id = 1U;
    __Vtask_rd__0__a = 0x80000000U;
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            13);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_a = __Vtask_rd__0__a;
    vlSelf->__PVT__rq_id = vlSelf->__Vtask_rd__0__id;
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_base.clk)", 
                                                                "tb_mem_base.sv", 
                                                                14);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U & (~ ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                     & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                          ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                         [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                          : 0U) == (IData)(vlSelf->__Vtask_rd__0__id)))))) {
        co_await vlSymsp->TOP.__VtrigSched_ha3659703__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__0__id)))", 
                                                                "tb_mem_base.sv", 
                                                                15);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    if (vlSelf->__PVT__seen_err) {
        VL_WRITEF("  FAIL base address rejected\n");
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    } else {
        VL_WRITEF("  PASS 0x80000000 accepted (base of memory)\n");
    }
    vlSelf->__Vtask_rd__1__id = 2U;
    __Vtask_rd__1__a = 0x8000fffcU;
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            13);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_a = __Vtask_rd__1__a;
    vlSelf->__PVT__rq_id = vlSelf->__Vtask_rd__1__id;
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_base.clk)", 
                                                                "tb_mem_base.sv", 
                                                                14);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U & (~ ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                     & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                          ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                         [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                          : 0U) == (IData)(vlSelf->__Vtask_rd__1__id)))))) {
        co_await vlSymsp->TOP.__VtrigSched_h3b4da923__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__1__id)))", 
                                                                "tb_mem_base.sv", 
                                                                15);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    if (vlSelf->__PVT__seen_err) {
        VL_WRITEF("  FAIL top of memory rejected\n");
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    } else {
        VL_WRITEF("  PASS 0x8000FFFC accepted (top of 64KiB)\n");
    }
    vlSelf->__Vtask_rd__2__id = 3U;
    __Vtask_rd__2__a = 0x100U;
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            13);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_a = __Vtask_rd__2__a;
    vlSelf->__PVT__rq_id = vlSelf->__Vtask_rd__2__id;
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_base.clk)", 
                                                                "tb_mem_base.sv", 
                                                                14);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U & (~ ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                     & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                          ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                         [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                          : 0U) == (IData)(vlSelf->__Vtask_rd__2__id)))))) {
        co_await vlSymsp->TOP.__VtrigSched_he7e0b3e9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__2__id)))", 
                                                                "tb_mem_base.sv", 
                                                                15);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    if (vlSelf->__PVT__seen_err) {
        VL_WRITEF("  PASS 0x00000100 rejected (below base)\n");
    } else {
        VL_WRITEF("  FAIL low address NOT rejected -- aliasing bug\n");
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    vlSelf->__Vtask_rd__3__id = 4U;
    __Vtask_rd__3__a = 0x90000000U;
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            13);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_a = __Vtask_rd__3__a;
    vlSelf->__PVT__rq_id = vlSelf->__Vtask_rd__3__id;
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_base.clk)", 
                                                                "tb_mem_base.sv", 
                                                                14);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            14);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U & (~ ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                     & (((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)
                          ? vlSymsp->TOP__tb_mem_base__dut.__PVT__e_id
                         [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]
                          : 0U) == (IData)(vlSelf->__Vtask_rd__3__id)))))) {
        co_await vlSymsp->TOP.__VtrigSched_h55c274b0__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (tb_mem_base.dut.have_resp & ((tb_mem_base.dut.have_resp ? (tb_mem_base.dut.e_id[tb_mem_base.dut.oldest_idx]) : 4'h0) == tb_mem_base.__Vtask_rd__3__id)))", 
                                                                "tb_mem_base.sv", 
                                                                15);
    }
    co_await vlSymsp->TOP.__VtrigSched_h7efea9cb__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    co_await vlSymsp->TOP.__VtrigSched_h7efea98e__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_base.clk)", 
                                                            "tb_mem_base.sv", 
                                                            15);
    if (vlSelf->__PVT__seen_err) {
        VL_WRITEF("  PASS 0x90000000 rejected (past end)\n");
    } else {
        VL_WRITEF("  FAIL far address NOT rejected\n");
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    VL_WRITEF("=== %s ===\n",64,((0U != vlSelf->__PVT__errors)
                                  ? 0x4641494c4544ULL
                                  : 0x414c4c2050415353ULL));
    VL_FINISH_MT("tb_mem_base.sv", 33, "");
}

VL_INLINE_OPT VlCoroutine Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__1(Vtb_mem_base_tb_mem_base* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0xc350ULL, 
                                            nullptr, 
                                            "tb_mem_base.sv", 
                                            35);
    VL_WRITEF("TIMEOUT\n");
    VL_FINISH_MT("tb_mem_base.sv", 35, "");
}

VL_INLINE_OPT VlCoroutine Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__2(Vtb_mem_base_tb_mem_base* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_base_tb_mem_base___eval_initial__TOP__tb_mem_base__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VdlySched.delay(5ULL, 
                                                nullptr, 
                                                "tb_mem_base.sv", 
                                                2);
        vlSelf->__PVT__clk = (1U & (~ (IData)(vlSelf->__PVT__clk)));
    }
}

VL_INLINE_OPT void Vtb_mem_base_tb_mem_base___nba_sequent__TOP__tb_mem_base__0(Vtb_mem_base_tb_mem_base* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_base__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_base_tb_mem_base___nba_sequent__TOP__tb_mem_base__0\n"); );
    // Body
    if ((((IData)(vlSelf->__PVT__rst_n) & (IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp)) 
         & (IData)(vlSelf->__PVT__rs_r))) {
        vlSelf->__PVT__seen_err = ((IData)(vlSymsp->TOP__tb_mem_base__dut.__PVT__have_resp) 
                                   & vlSymsp->TOP__tb_mem_base__dut.__PVT__e_err
                                   [vlSymsp->TOP__tb_mem_base__dut.__PVT__oldest_idx]);
    }
}
