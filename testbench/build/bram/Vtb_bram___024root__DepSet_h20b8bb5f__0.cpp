// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bram.h for the primary calling header

#include "Vtb_bram__pch.h"
#include "Vtb_bram___024root.h"

VlCoroutine Vtb_bram___024root___eval_initial__TOP__Vtiming__0(Vtb_bram___024root* vlSelf);
VlCoroutine Vtb_bram___024root___eval_initial__TOP__Vtiming__1(Vtb_bram___024root* vlSelf);
VlCoroutine Vtb_bram___024root___eval_initial__TOP__Vtiming__2(Vtb_bram___024root* vlSelf);

void Vtb_bram___024root___eval_initial(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_initial\n"); );
    // Body
    Vtb_bram___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_bram___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_bram___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_bram__DOT__clk__0 
        = vlSelf->tb_bram__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_bram__DOT__rst_n__0 
        = vlSelf->tb_bram__DOT__rst_n;
    vlSelf->__Vtrigprevexpr___TOP__tb_bram__DOT__dut__DOT__valid_q__0 
        = vlSelf->tb_bram__DOT__dut__DOT__valid_q;
}

VL_INLINE_OPT VlCoroutine Vtb_bram___024root___eval_initial__TOP__Vtiming__0(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__0__we;
    __Vtask_tb_bram__DOT__go__0__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__0__a;
    __Vtask_tb_bram__DOT__go__0__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__0__d;
    __Vtask_tb_bram__DOT__go__0__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__0__be;
    __Vtask_tb_bram__DOT__go__0__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__0__id;
    __Vtask_tb_bram__DOT__go__0__id = 0;
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__1__we;
    __Vtask_tb_bram__DOT__go__1__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__1__a;
    __Vtask_tb_bram__DOT__go__1__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__1__d;
    __Vtask_tb_bram__DOT__go__1__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__1__be;
    __Vtask_tb_bram__DOT__go__1__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__1__id;
    __Vtask_tb_bram__DOT__go__1__id = 0;
    std::string __Vtask_tb_bram__DOT__chk__2__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__2__ok;
    __Vtask_tb_bram__DOT__chk__2__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__2__d;
    std::string __Vtask_tb_bram__DOT__chk__3__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__3__ok;
    __Vtask_tb_bram__DOT__chk__3__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__3__d;
    std::string __Vtask_tb_bram__DOT__chk__4__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__4__ok;
    __Vtask_tb_bram__DOT__chk__4__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__4__d;
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__5__we;
    __Vtask_tb_bram__DOT__go__5__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__5__a;
    __Vtask_tb_bram__DOT__go__5__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__5__d;
    __Vtask_tb_bram__DOT__go__5__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__5__be;
    __Vtask_tb_bram__DOT__go__5__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__5__id;
    __Vtask_tb_bram__DOT__go__5__id = 0;
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__6__we;
    __Vtask_tb_bram__DOT__go__6__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__6__a;
    __Vtask_tb_bram__DOT__go__6__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__6__d;
    __Vtask_tb_bram__DOT__go__6__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__6__be;
    __Vtask_tb_bram__DOT__go__6__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__6__id;
    __Vtask_tb_bram__DOT__go__6__id = 0;
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__7__we;
    __Vtask_tb_bram__DOT__go__7__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__7__a;
    __Vtask_tb_bram__DOT__go__7__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__7__d;
    __Vtask_tb_bram__DOT__go__7__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__7__be;
    __Vtask_tb_bram__DOT__go__7__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__7__id;
    __Vtask_tb_bram__DOT__go__7__id = 0;
    std::string __Vtask_tb_bram__DOT__chk__8__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__8__ok;
    __Vtask_tb_bram__DOT__chk__8__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__8__d;
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__9__we;
    __Vtask_tb_bram__DOT__go__9__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__9__a;
    __Vtask_tb_bram__DOT__go__9__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__9__d;
    __Vtask_tb_bram__DOT__go__9__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__9__be;
    __Vtask_tb_bram__DOT__go__9__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__9__id;
    __Vtask_tb_bram__DOT__go__9__id = 0;
    std::string __Vtask_tb_bram__DOT__chk__10__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__10__ok;
    __Vtask_tb_bram__DOT__chk__10__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__10__d;
    CData/*0:0*/ __Vtask_tb_bram__DOT__go__11__we;
    __Vtask_tb_bram__DOT__go__11__we = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__11__a;
    __Vtask_tb_bram__DOT__go__11__a = 0;
    IData/*31:0*/ __Vtask_tb_bram__DOT__go__11__d;
    __Vtask_tb_bram__DOT__go__11__d = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__11__be;
    __Vtask_tb_bram__DOT__go__11__be = 0;
    CData/*3:0*/ __Vtask_tb_bram__DOT__go__11__id;
    __Vtask_tb_bram__DOT__go__11__id = 0;
    std::string __Vtask_tb_bram__DOT__chk__12__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__12__ok;
    __Vtask_tb_bram__DOT__chk__12__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__12__d;
    std::string __Vtask_tb_bram__DOT__chk__13__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__13__ok;
    __Vtask_tb_bram__DOT__chk__13__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__13__d;
    std::string __Vtask_tb_bram__DOT__chk__14__what;
    CData/*0:0*/ __Vtask_tb_bram__DOT__chk__14__ok;
    __Vtask_tb_bram__DOT__chk__14__ok = 0;
    std::string __Vtask_tb_bram__DOT__chk__14__d;
    // Body
    vlSelf->tb_bram__DOT__rq_v = 0U;
    vlSelf->tb_bram__DOT__rq_we = 0U;
    vlSelf->tb_bram__DOT__rq_a = 0U;
    vlSelf->tb_bram__DOT__rq_wd = 0U;
    vlSelf->tb_bram__DOT__rq_be = 0U;
    vlSelf->tb_bram__DOT__rq_id = 0U;
    vlSelf->tb_bram__DOT__rs_r = 1U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       54);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       54);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       54);
    vlSelf->tb_bram__DOT__rst_n = 1U;
    __Vtask_tb_bram__DOT__go__0__id = 1U;
    __Vtask_tb_bram__DOT__go__0__be = 0xfU;
    __Vtask_tb_bram__DOT__go__0__d = 0xdeadbeefU;
    __Vtask_tb_bram__DOT__go__0__a = 0x80000100U;
    __Vtask_tb_bram__DOT__go__0__we = 1U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__0__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__0__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__0__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__0__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__0__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__go__1__id = 2U;
    __Vtask_tb_bram__DOT__go__1__be = 0U;
    __Vtask_tb_bram__DOT__go__1__d = 0U;
    __Vtask_tb_bram__DOT__go__1__a = 0x80000100U;
    __Vtask_tb_bram__DOT__go__1__we = 0U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__1__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__1__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__1__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__1__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__1__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__chk__2__d = VL_SFORMATF_NX("got %x",
                                                     32,
                                                     vlSelf->tb_bram__DOT__dut__DOT__rdata_q) ;
    __Vtask_tb_bram__DOT__chk__2__ok = (0xdeadbeefU 
                                        == vlSelf->tb_bram__DOT__dut__DOT__rdata_q);
    __Vtask_tb_bram__DOT__chk__2__what = std::string{"write / read back"};
    if (__Vtask_tb_bram__DOT__chk__2__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__2__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__2__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__2__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__2__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    __Vtask_tb_bram__DOT__chk__3__d = VL_SFORMATF_NX("id=%0#",
                                                     4,
                                                     vlSelf->tb_bram__DOT__dut__DOT__id_q) ;
    __Vtask_tb_bram__DOT__chk__3__ok = (2U == (IData)(vlSelf->tb_bram__DOT__dut__DOT__id_q));
    __Vtask_tb_bram__DOT__chk__3__what = std::string{"id echoed"};
    if (__Vtask_tb_bram__DOT__chk__3__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__3__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__3__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__3__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__3__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    __Vtask_tb_bram__DOT__chk__4__d = VL_SFORMATF_NX("%0d cycles",
                                                     32,
                                                     (vlSelf->tb_bram__DOT__t_rsp 
                                                      - vlSelf->tb_bram__DOT__t_req)) ;
    __Vtask_tb_bram__DOT__chk__4__ok = (VL_GTES_III(32, 2U, 
                                                    (vlSelf->tb_bram__DOT__t_rsp 
                                                     - vlSelf->tb_bram__DOT__t_req)) 
                                        & VL_LTES_III(32, 1U, 
                                                      (vlSelf->tb_bram__DOT__t_rsp 
                                                       - vlSelf->tb_bram__DOT__t_req)));
    __Vtask_tb_bram__DOT__chk__4__what = std::string{"2-cycle read"};
    if (__Vtask_tb_bram__DOT__chk__4__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__4__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__4__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__4__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__4__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    __Vtask_tb_bram__DOT__go__5__id = 3U;
    __Vtask_tb_bram__DOT__go__5__be = 0xfU;
    __Vtask_tb_bram__DOT__go__5__d = 0xffffffffU;
    __Vtask_tb_bram__DOT__go__5__a = 0x80000200U;
    __Vtask_tb_bram__DOT__go__5__we = 1U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__5__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__5__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__5__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__5__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__5__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__go__6__id = 4U;
    __Vtask_tb_bram__DOT__go__6__be = 1U;
    __Vtask_tb_bram__DOT__go__6__d = 0x11U;
    __Vtask_tb_bram__DOT__go__6__a = 0x80000200U;
    __Vtask_tb_bram__DOT__go__6__we = 1U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__6__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__6__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__6__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__6__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__6__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__go__7__id = 5U;
    __Vtask_tb_bram__DOT__go__7__be = 0U;
    __Vtask_tb_bram__DOT__go__7__d = 0U;
    __Vtask_tb_bram__DOT__go__7__a = 0x80000200U;
    __Vtask_tb_bram__DOT__go__7__we = 0U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__7__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__7__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__7__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__7__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__7__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__chk__8__d = VL_SFORMATF_NX("got %x",
                                                     32,
                                                     vlSelf->tb_bram__DOT__dut__DOT__rdata_q) ;
    __Vtask_tb_bram__DOT__chk__8__ok = (0xffffff11U 
                                        == vlSelf->tb_bram__DOT__dut__DOT__rdata_q);
    __Vtask_tb_bram__DOT__chk__8__what = std::string{"byte enables"};
    if (__Vtask_tb_bram__DOT__chk__8__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__8__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__8__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__8__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__8__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    __Vtask_tb_bram__DOT__go__9__id = 6U;
    __Vtask_tb_bram__DOT__go__9__be = 0U;
    __Vtask_tb_bram__DOT__go__9__d = 0U;
    __Vtask_tb_bram__DOT__go__9__a = 0x90000000U;
    __Vtask_tb_bram__DOT__go__9__we = 0U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__9__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__9__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__9__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__9__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__9__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__chk__10__d = std::string{"resp_err asserted"};
    __Vtask_tb_bram__DOT__chk__10__ok = vlSelf->tb_bram__DOT__dut__DOT__err_q;
    __Vtask_tb_bram__DOT__chk__10__what = std::string{"out of range flags err"};
    if (__Vtask_tb_bram__DOT__chk__10__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__10__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__10__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__10__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__10__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    __Vtask_tb_bram__DOT__go__11__id = 7U;
    __Vtask_tb_bram__DOT__go__11__be = 0U;
    __Vtask_tb_bram__DOT__go__11__d = 0U;
    __Vtask_tb_bram__DOT__go__11__a = 4U;
    __Vtask_tb_bram__DOT__go__11__we = 0U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       45);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = __Vtask_tb_bram__DOT__go__11__we;
    vlSelf->tb_bram__DOT__rq_a = __Vtask_tb_bram__DOT__go__11__a;
    vlSelf->tb_bram__DOT__rq_wd = __Vtask_tb_bram__DOT__go__11__d;
    vlSelf->tb_bram__DOT__rq_be = __Vtask_tb_bram__DOT__go__11__be;
    vlSelf->tb_bram__DOT__rq_id = __Vtask_tb_bram__DOT__go__11__id;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       47);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           47);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       48);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)))) {
        co_await vlSelf->__VtrigSched_hfeae26d7__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb_bram.dut.valid_q)", 
                                                           "tb_bram.sv", 
                                                           49);
    }
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       49);
    __Vtask_tb_bram__DOT__chk__12__d = std::string{"resp_err asserted"};
    __Vtask_tb_bram__DOT__chk__12__ok = vlSelf->tb_bram__DOT__dut__DOT__err_q;
    __Vtask_tb_bram__DOT__chk__12__what = std::string{"below base flags err"};
    if (__Vtask_tb_bram__DOT__chk__12__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__12__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__12__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__12__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__12__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    vlSelf->tb_bram__DOT__rs_r = 0U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       76);
    vlSelf->tb_bram__DOT__rq_v = 1U;
    vlSelf->tb_bram__DOT__rq_we = 0U;
    vlSelf->tb_bram__DOT__rq_a = 0x80000100U;
    vlSelf->tb_bram__DOT__rq_id = 8U;
    co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       77);
    while ((1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)))) {
        co_await vlSelf->__VtrigSched_h6070df83__0.trigger(0U, 
                                                           nullptr, 
                                                           "@(posedge tb_bram.clk)", 
                                                           "tb_bram.sv", 
                                                           77);
    }
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       78);
    vlSelf->tb_bram__DOT__rq_v = 0U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       79);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       79);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       79);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       79);
    __Vtask_tb_bram__DOT__chk__13__d = std::string{"req_ready low while resp held"};
    __Vtask_tb_bram__DOT__chk__13__ok = (1U & (~ (IData)(vlSelf->tb_bram__DOT__rq_r)));
    __Vtask_tb_bram__DOT__chk__13__what = std::string{"single outstanding"};
    if (__Vtask_tb_bram__DOT__chk__13__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__13__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__13__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__13__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__13__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    vlSelf->tb_bram__DOT__rs_r = 1U;
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       81);
    co_await vlSelf->__VtrigSched_h6070e046__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(negedge tb_bram.clk)", 
                                                       "tb_bram.sv", 
                                                       81);
    __Vtask_tb_bram__DOT__chk__14__d = std::string{"req_ready restored"};
    __Vtask_tb_bram__DOT__chk__14__ok = vlSelf->tb_bram__DOT__rq_r;
    __Vtask_tb_bram__DOT__chk__14__what = std::string{"drains after ready"};
    if (__Vtask_tb_bram__DOT__chk__14__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__14__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__14__d));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_bram__DOT__chk__14__what),
                  -1,&(__Vtask_tb_bram__DOT__chk__14__d));
        vlSelf->tb_bram__DOT__errors = ((IData)(1U) 
                                        + vlSelf->tb_bram__DOT__errors);
    }
    VL_WRITEF("\n=== %s: %0d errors ===\n\n",64,((0U 
                                                  != vlSelf->tb_bram__DOT__errors)
                                                  ? 0x4641494c4544ULL
                                                  : 0x414c4c2050415353ULL),
              32,vlSelf->tb_bram__DOT__errors);
    VL_FINISH_MT("tb_bram.sv", 86, "");
}

VL_INLINE_OPT VlCoroutine Vtb_bram___024root___eval_initial__TOP__Vtiming__1(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    co_await vlSelf->__VdlySched.delay(0x186a0ULL, 
                                       nullptr, "tb_bram.sv", 
                                       88);
    VL_WRITEF("TIMEOUT\n");
    VL_FINISH_MT("tb_bram.sv", 88, "");
}

VL_INLINE_OPT VlCoroutine Vtb_bram___024root___eval_initial__TOP__Vtiming__2(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_initial__TOP__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(5ULL, nullptr, 
                                           "tb_bram.sv", 
                                           16);
        vlSelf->tb_bram__DOT__clk = (1U & (~ (IData)(vlSelf->tb_bram__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_bram___024root___act_comb__TOP__0(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_bram__DOT__dut__DOT__in_range = ((0x80000000U 
                                                 <= vlSelf->tb_bram__DOT__rq_a) 
                                                & (0x400U 
                                                   > 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (vlSelf->tb_bram__DOT__rq_a 
                                                                  - (IData)(0x80000000U)), 2U)));
    vlSelf->tb_bram__DOT__rq_r = ((IData)(vlSelf->tb_bram__DOT__rst_n) 
                                  & ((~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)) 
                                     | (IData)(vlSelf->tb_bram__DOT__rs_r)));
    vlSelf->tb_bram__DOT__dut__DOT__accept = ((IData)(vlSelf->tb_bram__DOT__rq_v) 
                                              & (IData)(vlSelf->tb_bram__DOT__rq_r));
}

void Vtb_bram___024root___eval_act(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_act\n"); );
    // Body
    if ((0xdULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_bram___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_bram___024root___nba_sequent__TOP__0(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__tb_bram__DOT__cyc;
    __Vdly__tb_bram__DOT__cyc = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v0;
    __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v0 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v0;
    __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v0 = 0;
    CData/*7:0*/ __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v0;
    __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v0;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v0 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v1;
    __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v1 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v1;
    __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v1 = 0;
    CData/*7:0*/ __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v1;
    __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v1 = 0;
    CData/*0:0*/ __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v1;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v1 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v2;
    __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v2 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v2;
    __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v2 = 0;
    CData/*7:0*/ __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v2;
    __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v2 = 0;
    CData/*0:0*/ __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v2;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v2 = 0;
    SData/*9:0*/ __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v3;
    __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v3 = 0;
    CData/*4:0*/ __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v3;
    __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v3 = 0;
    CData/*7:0*/ __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v3;
    __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v3 = 0;
    CData/*0:0*/ __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v3;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v3 = 0;
    // Body
    __Vdly__tb_bram__DOT__cyc = vlSelf->tb_bram__DOT__cyc;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v0 = 0U;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v1 = 0U;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v2 = 0U;
    __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v3 = 0U;
    if (vlSelf->tb_bram__DOT__dut__DOT__accept) {
        if (((IData)(vlSelf->tb_bram__DOT__rq_we) & (IData)(vlSelf->tb_bram__DOT__dut__DOT__in_range))) {
            if ((1U & (IData)(vlSelf->tb_bram__DOT__rq_be))) {
                __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v0 
                    = (0xffU & vlSelf->tb_bram__DOT__rq_wd);
                __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v0 = 1U;
                __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v0 = 0U;
                __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v0 
                    = (0x3ffU & ((vlSelf->tb_bram__DOT__rq_a 
                                  - (IData)(0x80000000U)) 
                                 >> 2U));
            }
            if ((2U & (IData)(vlSelf->tb_bram__DOT__rq_be))) {
                __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v1 
                    = (0xffU & (vlSelf->tb_bram__DOT__rq_wd 
                                >> 8U));
                __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v1 = 1U;
                __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v1 = 8U;
                __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v1 
                    = (0x3ffU & ((vlSelf->tb_bram__DOT__rq_a 
                                  - (IData)(0x80000000U)) 
                                 >> 2U));
            }
            if ((4U & (IData)(vlSelf->tb_bram__DOT__rq_be))) {
                __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v2 
                    = (0xffU & (vlSelf->tb_bram__DOT__rq_wd 
                                >> 0x10U));
                __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v2 = 1U;
                __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v2 = 0x10U;
                __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v2 
                    = (0x3ffU & ((vlSelf->tb_bram__DOT__rq_a 
                                  - (IData)(0x80000000U)) 
                                 >> 2U));
            }
            if ((8U & (IData)(vlSelf->tb_bram__DOT__rq_be))) {
                __Vdlyvval__tb_bram__DOT__dut__DOT__mem__v3 
                    = (vlSelf->tb_bram__DOT__rq_wd 
                       >> 0x18U);
                __Vdlyvset__tb_bram__DOT__dut__DOT__mem__v3 = 1U;
                __Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v3 = 0x18U;
                __Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v3 
                    = (0x3ffU & ((vlSelf->tb_bram__DOT__rq_a 
                                  - (IData)(0x80000000U)) 
                                 >> 2U));
            }
            vlSelf->tb_bram__DOT__dut__DOT__rdata_q = 0U;
        } else {
            vlSelf->tb_bram__DOT__dut__DOT__rdata_q 
                = vlSelf->tb_bram__DOT__dut__DOT__mem
                [(0x3ffU & ((vlSelf->tb_bram__DOT__rq_a 
                             - (IData)(0x80000000U)) 
                            >> 2U))];
        }
    }
    if (vlSelf->tb_bram__DOT__rst_n) {
        __Vdly__tb_bram__DOT__cyc = ((IData)(1U) + vlSelf->tb_bram__DOT__cyc);
        if (((IData)(vlSelf->tb_bram__DOT__rq_v) & (IData)(vlSelf->tb_bram__DOT__rq_r))) {
            vlSelf->tb_bram__DOT__t_req = vlSelf->tb_bram__DOT__cyc;
        }
        if (((IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q) 
             & (IData)(vlSelf->tb_bram__DOT__rs_r))) {
            vlSelf->tb_bram__DOT__t_rsp = vlSelf->tb_bram__DOT__cyc;
        }
    }
    if (__Vdlyvset__tb_bram__DOT__dut__DOT__mem__v0) {
        vlSelf->tb_bram__DOT__dut__DOT__mem[__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v0))) 
                & vlSelf->tb_bram__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_bram__DOT__dut__DOT__mem__v0) 
                                   << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v0))));
    }
    if (__Vdlyvset__tb_bram__DOT__dut__DOT__mem__v1) {
        vlSelf->tb_bram__DOT__dut__DOT__mem[__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v1))) 
                & vlSelf->tb_bram__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_bram__DOT__dut__DOT__mem__v1) 
                                   << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v1))));
    }
    if (__Vdlyvset__tb_bram__DOT__dut__DOT__mem__v2) {
        vlSelf->tb_bram__DOT__dut__DOT__mem[__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v2))) 
                & vlSelf->tb_bram__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_bram__DOT__dut__DOT__mem__v2) 
                                   << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v2))));
    }
    if (__Vdlyvset__tb_bram__DOT__dut__DOT__mem__v3) {
        vlSelf->tb_bram__DOT__dut__DOT__mem[__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v3))) 
                & vlSelf->tb_bram__DOT__dut__DOT__mem
                [__Vdlyvdim0__tb_bram__DOT__dut__DOT__mem__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__tb_bram__DOT__dut__DOT__mem__v3) 
                                   << (IData)(__Vdlyvlsb__tb_bram__DOT__dut__DOT__mem__v3))));
    }
    vlSelf->tb_bram__DOT__cyc = __Vdly__tb_bram__DOT__cyc;
}

VL_INLINE_OPT void Vtb_bram___024root___nba_sequent__TOP__1(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->tb_bram__DOT__rst_n) {
        if (vlSelf->tb_bram__DOT__dut__DOT__accept) {
            vlSelf->tb_bram__DOT__dut__DOT__id_q = vlSelf->tb_bram__DOT__rq_id;
            vlSelf->tb_bram__DOT__dut__DOT__err_q = 
                (1U & (~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__in_range)));
            vlSelf->tb_bram__DOT__dut__DOT__valid_q = 1U;
        } else if (((IData)(vlSelf->tb_bram__DOT__rs_v) 
                    & (IData)(vlSelf->tb_bram__DOT__rs_r))) {
            vlSelf->tb_bram__DOT__dut__DOT__valid_q = 0U;
        }
    } else {
        vlSelf->tb_bram__DOT__dut__DOT__id_q = 0U;
        vlSelf->tb_bram__DOT__dut__DOT__err_q = 0U;
        vlSelf->tb_bram__DOT__dut__DOT__valid_q = 0U;
    }
    vlSelf->tb_bram__DOT__rs_v = vlSelf->tb_bram__DOT__dut__DOT__valid_q;
}

VL_INLINE_OPT void Vtb_bram___024root___nba_comb__TOP__0(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_bram__DOT__dut__DOT__in_range = ((0x80000000U 
                                                 <= vlSelf->tb_bram__DOT__rq_a) 
                                                & (0x400U 
                                                   > 
                                                   VL_SHIFTR_III(32,32,32, 
                                                                 (vlSelf->tb_bram__DOT__rq_a 
                                                                  - (IData)(0x80000000U)), 2U)));
}

VL_INLINE_OPT void Vtb_bram___024root___nba_comb__TOP__1(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_bram__DOT__rq_r = ((IData)(vlSelf->tb_bram__DOT__rst_n) 
                                  & ((~ (IData)(vlSelf->tb_bram__DOT__dut__DOT__valid_q)) 
                                     | (IData)(vlSelf->tb_bram__DOT__rs_r)));
    vlSelf->tb_bram__DOT__dut__DOT__accept = ((IData)(vlSelf->tb_bram__DOT__rq_v) 
                                              & (IData)(vlSelf->tb_bram__DOT__rq_r));
}

void Vtb_bram___024root___eval_nba(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_bram___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_bram___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0xdULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_bram___024root___nba_comb__TOP__0(vlSelf);
    }
    if ((0xfULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_bram___024root___nba_comb__TOP__1(vlSelf);
    }
}

void Vtb_bram___024root___timing_resume(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6070e046__0.resume("@(negedge tb_bram.clk)");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h6070df83__0.resume("@(posedge tb_bram.clk)");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hfeae26d7__0.resume("@([changed] tb_bram.dut.valid_q)");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_bram___024root___timing_commit(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6070e046__0.commit("@(negedge tb_bram.clk)");
    }
    if ((! (1ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h6070df83__0.commit("@(posedge tb_bram.clk)");
    }
    if ((! (8ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hfeae26d7__0.commit("@([changed] tb_bram.dut.valid_q)");
    }
}

void Vtb_bram___024root___eval_triggers__act(Vtb_bram___024root* vlSelf);

bool Vtb_bram___024root___eval_phase__act(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_bram___024root___eval_triggers__act(vlSelf);
    Vtb_bram___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_bram___024root___timing_resume(vlSelf);
        Vtb_bram___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_bram___024root___eval_phase__nba(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_bram___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bram___024root___dump_triggers__nba(Vtb_bram___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bram___024root___dump_triggers__act(Vtb_bram___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_bram___024root___eval(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_bram___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_bram.sv", 12, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_bram___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_bram.sv", 12, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_bram___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_bram___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_bram___024root___eval_debug_assertions(Vtb_bram___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_bram__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bram___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
