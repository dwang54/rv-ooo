// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mem_model.h for the primary calling header

#include "Vtb_mem_model__pch.h"
#include "Vtb_mem_model__Syms.h"
#include "Vtb_mem_model_tb_mem_model.h"

VL_INLINE_OPT VlCoroutine Vtb_mem_model_tb_mem_model___eval_initial__TOP__tb_mem_model__Vtiming__0(Vtb_mem_model_tb_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_model_tb_mem_model___eval_initial__TOP__tb_mem_model__Vtiming__0\n"); );
    // Init
    CData/*0:0*/ __Vtask_do_req__0__we;
    __Vtask_do_req__0__we = 0;
    IData/*31:0*/ __Vtask_do_req__0__a;
    __Vtask_do_req__0__a = 0;
    IData/*31:0*/ __Vtask_do_req__0__d;
    __Vtask_do_req__0__d = 0;
    CData/*3:0*/ __Vtask_do_req__0__id;
    __Vtask_do_req__0__id = 0;
    CData/*0:0*/ __Vtask_do_req__1__we;
    __Vtask_do_req__1__we = 0;
    IData/*31:0*/ __Vtask_do_req__1__a;
    __Vtask_do_req__1__a = 0;
    IData/*31:0*/ __Vtask_do_req__1__d;
    __Vtask_do_req__1__d = 0;
    CData/*3:0*/ __Vtask_do_req__1__id;
    __Vtask_do_req__1__id = 0;
    std::string __Vtask_chk__2__what;
    CData/*0:0*/ __Vtask_chk__2__ok;
    __Vtask_chk__2__ok = 0;
    std::string __Vtask_chk__2__detail;
    std::string __Vtask_chk__3__what;
    CData/*0:0*/ __Vtask_chk__3__ok;
    __Vtask_chk__3__ok = 0;
    std::string __Vtask_chk__3__detail;
    CData/*0:0*/ __Vtask_do_req__4__we;
    __Vtask_do_req__4__we = 0;
    IData/*31:0*/ __Vtask_do_req__4__a;
    __Vtask_do_req__4__a = 0;
    IData/*31:0*/ __Vtask_do_req__4__d;
    __Vtask_do_req__4__d = 0;
    CData/*3:0*/ __Vtask_do_req__4__id;
    __Vtask_do_req__4__id = 0;
    CData/*0:0*/ __Vtask_do_req__5__we;
    __Vtask_do_req__5__we = 0;
    IData/*31:0*/ __Vtask_do_req__5__a;
    __Vtask_do_req__5__a = 0;
    IData/*31:0*/ __Vtask_do_req__5__d;
    __Vtask_do_req__5__d = 0;
    CData/*3:0*/ __Vtask_do_req__5__id;
    __Vtask_do_req__5__id = 0;
    CData/*0:0*/ __Vtask_do_req__6__we;
    __Vtask_do_req__6__we = 0;
    IData/*31:0*/ __Vtask_do_req__6__a;
    __Vtask_do_req__6__a = 0;
    IData/*31:0*/ __Vtask_do_req__6__d;
    __Vtask_do_req__6__d = 0;
    CData/*3:0*/ __Vtask_do_req__6__id;
    __Vtask_do_req__6__id = 0;
    std::string __Vtask_chk__7__what;
    CData/*0:0*/ __Vtask_chk__7__ok;
    __Vtask_chk__7__ok = 0;
    std::string __Vtask_chk__7__detail;
    std::string __Vtask_chk__8__what;
    CData/*0:0*/ __Vtask_chk__8__ok;
    __Vtask_chk__8__ok = 0;
    std::string __Vtask_chk__8__detail;
    CData/*0:0*/ __Vtask_do_req__9__we;
    __Vtask_do_req__9__we = 0;
    IData/*31:0*/ __Vtask_do_req__9__a;
    __Vtask_do_req__9__a = 0;
    IData/*31:0*/ __Vtask_do_req__9__d;
    __Vtask_do_req__9__d = 0;
    CData/*3:0*/ __Vtask_do_req__9__id;
    __Vtask_do_req__9__id = 0;
    CData/*0:0*/ __Vtask_do_req__10__we;
    __Vtask_do_req__10__we = 0;
    IData/*31:0*/ __Vtask_do_req__10__a;
    __Vtask_do_req__10__a = 0;
    IData/*31:0*/ __Vtask_do_req__10__d;
    __Vtask_do_req__10__d = 0;
    CData/*3:0*/ __Vtask_do_req__10__id;
    __Vtask_do_req__10__id = 0;
    std::string __Vtask_chk__11__what;
    CData/*0:0*/ __Vtask_chk__11__ok;
    __Vtask_chk__11__ok = 0;
    std::string __Vtask_chk__11__detail;
    CData/*0:0*/ __Vtask_do_req__12__we;
    __Vtask_do_req__12__we = 0;
    IData/*31:0*/ __Vtask_do_req__12__a;
    __Vtask_do_req__12__a = 0;
    IData/*31:0*/ __Vtask_do_req__12__d;
    __Vtask_do_req__12__d = 0;
    CData/*3:0*/ __Vtask_do_req__12__id;
    __Vtask_do_req__12__id = 0;
    std::string __Vtask_chk__13__what;
    CData/*0:0*/ __Vtask_chk__13__ok;
    __Vtask_chk__13__ok = 0;
    std::string __Vtask_chk__13__detail;
    std::string __Vtemp_4;
    // Body
    vlSelf->__PVT__rq_v = 0U;
    vlSelf->__PVT__rq_we = 0U;
    vlSelf->__PVT__rq_a = 0U;
    vlSelf->__PVT__rq_wd = 0U;
    vlSelf->__PVT__rq_be = 0U;
    vlSelf->__PVT__rq_id = 0U;
    vlSelf->__PVT__rs_r = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            55);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            55);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            55);
    vlSelf->__PVT__rst_n = 1U;
    __Vtask_do_req__0__id = 1U;
    __Vtask_do_req__0__d = 0xdeadbeefU;
    __Vtask_do_req__0__a = 0x100U;
    __Vtask_do_req__0__we = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__0__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__0__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__0__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__0__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adc66a9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh1 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                59);
    }
    vlSelf->__PVT__resp_ids.clear();
    vlSelf->__PVT__resp_data.clear();
    __Vtask_do_req__1__id = 2U;
    __Vtask_do_req__1__d = 0U;
    __Vtask_do_req__1__a = 0x100U;
    __Vtask_do_req__1__we = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__1__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__1__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__1__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__1__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adc66a9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh1 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                63);
    }
    __Vtask_chk__2__detail = VL_SFORMATF_NX("got %x",
                                            32,vlSelf->__PVT__resp_data.at(0U)) ;
    __Vtask_chk__2__ok = (0xdeadbeefU == vlSelf->__PVT__resp_data.at(0U));
    __Vtask_chk__2__what = std::string{"write/read-back"};
    if (__Vtask_chk__2__ok) {
        VL_WRITEF("  PASS  %@ %@\n",-1,&(__Vtask_chk__2__what),
                  -1,&(__Vtask_chk__2__detail));
    } else {
        VL_WRITEF("  FAIL  %@ %@\n",-1,&(__Vtask_chk__2__what),
                  -1,&(__Vtask_chk__2__detail));
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    __Vtask_chk__3__detail = VL_SFORMATF_NX("%0d cycles (LATENCY=4)",
                                            32,(vlSelf->__PVT__rsp_cycle
                                                [2U] 
                                                - vlSelf->__PVT__req_cycle
                                                [2U])) ;
    __Vtask_chk__3__ok = (4U == (vlSelf->__PVT__rsp_cycle
                                 [2U] - vlSelf->__PVT__req_cycle
                                 [2U]));
    __Vtask_chk__3__what = std::string{"fixed latency"};
    if (__Vtask_chk__3__ok) {
        VL_WRITEF("  PASS  %@ %@\n",-1,&(__Vtask_chk__3__what),
                  -1,&(__Vtask_chk__3__detail));
    } else {
        VL_WRITEF("  FAIL  %@ %@\n",-1,&(__Vtask_chk__3__what),
                  -1,&(__Vtask_chk__3__detail));
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    vlSelf->__PVT__resp_ids.clear();
    vlSelf->__PVT__resp_data.clear();
    vlSelf->__PVT__rs_r = 0U;
    __Vtask_do_req__4__id = 5U;
    __Vtask_do_req__4__d = 0U;
    __Vtask_do_req__4__a = 0x100U;
    __Vtask_do_req__4__we = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__4__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__4__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__4__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__4__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    __Vtask_do_req__5__id = 6U;
    __Vtask_do_req__5__d = 0U;
    __Vtask_do_req__5__a = 0x104U;
    __Vtask_do_req__5__we = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__5__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__5__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__5__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__5__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    __Vtask_do_req__6__id = 7U;
    __Vtask_do_req__6__d = 0U;
    __Vtask_do_req__6__a = 0x108U;
    __Vtask_do_req__6__we = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__6__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__6__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__6__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__6__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            75);
    __Vtask_chk__7__detail = VL_SFORMATF_NX("%0d responses leaked while resp_ready=0",
                                            32,vlSelf->__PVT__resp_ids.size()) ;
    __Vtask_chk__7__ok = (0U == vlSelf->__PVT__resp_ids.size());
    __Vtask_chk__7__what = std::string{"backpressure held"};
    if (__Vtask_chk__7__ok) {
        VL_WRITEF("  PASS  %@ %@\n",-1,&(__Vtask_chk__7__what),
                  -1,&(__Vtask_chk__7__detail));
    } else {
        VL_WRITEF("  FAIL  %@ %@\n",-1,&(__Vtask_chk__7__what),
                  -1,&(__Vtask_chk__7__detail));
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    vlSelf->__PVT__rs_r = 1U;
    while ((3U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adb888b__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh3 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                79);
    }
    __Vtemp_4 = VL_TO_STRING(vlSelf->__PVT__resp_ids);
    __Vtask_chk__8__detail = VL_SFORMATF_NX("order = %@",
                                            -1,&(__Vtemp_4)) ;
    __Vtask_chk__8__ok = (((5U == vlSelf->__PVT__resp_ids.at(0U)) 
                           & (6U == vlSelf->__PVT__resp_ids.at(1U))) 
                          & (7U == vlSelf->__PVT__resp_ids.at(2U)));
    __Vtask_chk__8__what = std::string{"in-order responses"};
    if (__Vtask_chk__8__ok) {
        VL_WRITEF("  PASS  %@ %@\n",-1,&(__Vtask_chk__8__what),
                  -1,&(__Vtask_chk__8__detail));
    } else {
        VL_WRITEF("  FAIL  %@ %@\n",-1,&(__Vtask_chk__8__what),
                  -1,&(__Vtask_chk__8__detail));
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    vlSelf->__PVT__resp_ids.clear();
    __Vtask_do_req__9__id = 8U;
    __Vtask_do_req__9__d = 0xffffffffU;
    __Vtask_do_req__9__a = 0x200U;
    __Vtask_do_req__9__we = 1U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__9__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__9__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__9__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__9__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adc66a9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh1 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                90);
    }
    vlSelf->__PVT__resp_ids.clear();
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            91);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = 1U;
    vlSelf->__PVT__rq_a = 0x200U;
    vlSelf->__PVT__rq_wd = 0x11U;
    vlSelf->__PVT__rq_be = 1U;
    vlSelf->__PVT__rq_id = 9U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            94);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                94);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            95);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adc66a9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh1 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                96);
    }
    vlSelf->__PVT__resp_ids.clear();
    vlSelf->__PVT__resp_data.clear();
    __Vtask_do_req__10__id = 0xaU;
    __Vtask_do_req__10__d = 0U;
    __Vtask_do_req__10__a = 0x200U;
    __Vtask_do_req__10__we = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__10__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__10__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__10__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__10__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adc66a9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh1 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                98);
    }
    __Vtask_chk__11__detail = VL_SFORMATF_NX("got %x expected FFFFFF11",
                                             32,vlSelf->__PVT__resp_data.at(0U)) ;
    __Vtask_chk__11__ok = (0xffffff11U == vlSelf->__PVT__resp_data.at(0U));
    __Vtask_chk__11__what = std::string{"byte enables"};
    if (__Vtask_chk__11__ok) {
        VL_WRITEF("  PASS  %@ %@\n",-1,&(__Vtask_chk__11__what),
                  -1,&(__Vtask_chk__11__detail));
    } else {
        VL_WRITEF("  FAIL  %@ %@\n",-1,&(__Vtask_chk__11__what),
                  -1,&(__Vtask_chk__11__detail));
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    vlSelf->__PVT__resp_ids.clear();
    vlSelf->__PVT__resp_data.clear();
    __Vtask_do_req__12__id = 0xbU;
    __Vtask_do_req__12__d = 0U;
    __Vtask_do_req__12__a = 0x1000000U;
    __Vtask_do_req__12__we = 0U;
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            40);
    vlSelf->__PVT__rq_v = 1U;
    vlSelf->__PVT__rq_we = __Vtask_do_req__12__we;
    vlSelf->__PVT__rq_a = __Vtask_do_req__12__a;
    vlSelf->__PVT__rq_wd = __Vtask_do_req__12__d;
    vlSelf->__PVT__rq_be = 0xfU;
    vlSelf->__PVT__rq_id = __Vtask_do_req__12__id;
    co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(posedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            42);
    while ((1U & (~ (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready)))) {
        co_await vlSymsp->TOP.__VtrigSched_h6bb25e43__0.trigger(0U, 
                                                                nullptr, 
                                                                "@(posedge tb_mem_model.clk)", 
                                                                "tb_mem_model.sv", 
                                                                43);
    }
    co_await vlSymsp->TOP.__VtrigSched_h6bb26006__0.trigger(0U, 
                                                            nullptr, 
                                                            "@(negedge tb_mem_model.clk)", 
                                                            "tb_mem_model.sv", 
                                                            44);
    vlSelf->__PVT__rq_v = 0U;
    while ((1U != vlSelf->__PVT__resp_ids.size())) {
        co_await vlSymsp->TOP.__VtrigSched_h6adc66a9__0.trigger(1U, 
                                                                nullptr, 
                                                                "@([changed] (32'sh1 == tb_mem_model.resp_ids.size()))", 
                                                                "tb_mem_model.sv", 
                                                                105);
    }
    __Vtask_chk__13__detail = std::string{"(resp_err path exercised)"};
    __Vtask_chk__13__ok = 1U;
    __Vtask_chk__13__what = std::string{"out-of-range error"};
    if (__Vtask_chk__13__ok) {
        VL_WRITEF("  PASS  %@ %@\n",-1,&(__Vtask_chk__13__what),
                  -1,&(__Vtask_chk__13__detail));
    } else {
        VL_WRITEF("  FAIL  %@ %@\n",-1,&(__Vtask_chk__13__what),
                  -1,&(__Vtask_chk__13__detail));
        vlSelf->__PVT__errors = ((IData)(1U) + vlSelf->__PVT__errors);
    }
    VL_WRITEF("\n=== %s: %0d errors ===\n\n",64,((0U 
                                                  != vlSelf->__PVT__errors)
                                                  ? 0x4641494c4544ULL
                                                  : 0x414c4c2050415353ULL),
              32,vlSelf->__PVT__errors);
    VL_FINISH_MT("tb_mem_model.sv", 109, "");
}

VL_INLINE_OPT VlCoroutine Vtb_mem_model_tb_mem_model___eval_initial__TOP__tb_mem_model__Vtiming__1(Vtb_mem_model_tb_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_model_tb_mem_model___eval_initial__TOP__tb_mem_model__Vtiming__1\n"); );
    // Body
    co_await vlSymsp->TOP.__VdlySched.delay(0x30d40ULL, 
                                            nullptr, 
                                            "tb_mem_model.sv", 
                                            112);
    VL_WRITEF("TIMEOUT\n");
    VL_FINISH_MT("tb_mem_model.sv", 112, "");
}

VL_INLINE_OPT VlCoroutine Vtb_mem_model_tb_mem_model___eval_initial__TOP__tb_mem_model__Vtiming__2(Vtb_mem_model_tb_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_model_tb_mem_model___eval_initial__TOP__tb_mem_model__Vtiming__2\n"); );
    // Body
    while (1U) {
        co_await vlSymsp->TOP.__VdlySched.delay(5ULL, 
                                                nullptr, 
                                                "tb_mem_model.sv", 
                                                3);
        vlSelf->__PVT__clk = (1U & (~ (IData)(vlSelf->__PVT__clk)));
    }
}

VL_INLINE_OPT void Vtb_mem_model_tb_mem_model___nba_sequent__TOP__tb_mem_model__0(Vtb_mem_model_tb_mem_model* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mem_model__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtb_mem_model_tb_mem_model___nba_sequent__TOP__tb_mem_model__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__cyc;
    __Vdly__cyc = 0;
    CData/*3:0*/ __Vdlyvdim0__req_cycle__v0;
    __Vdlyvdim0__req_cycle__v0 = 0;
    IData/*31:0*/ __Vdlyvval__req_cycle__v0;
    __Vdlyvval__req_cycle__v0 = 0;
    CData/*0:0*/ __Vdlyvset__req_cycle__v0;
    __Vdlyvset__req_cycle__v0 = 0;
    CData/*3:0*/ __Vdlyvdim0__rsp_cycle__v0;
    __Vdlyvdim0__rsp_cycle__v0 = 0;
    IData/*31:0*/ __Vdlyvval__rsp_cycle__v0;
    __Vdlyvval__rsp_cycle__v0 = 0;
    CData/*0:0*/ __Vdlyvset__rsp_cycle__v0;
    __Vdlyvset__rsp_cycle__v0 = 0;
    // Body
    __Vdly__cyc = vlSelf->__PVT__cyc;
    __Vdlyvset__rsp_cycle__v0 = 0U;
    __Vdlyvset__req_cycle__v0 = 0U;
    if (vlSelf->__PVT__rst_n) {
        __Vdly__cyc = ((IData)(1U) + vlSelf->__PVT__cyc);
        if (((IData)(vlSelf->__PVT__rq_v) & (IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__req_ready))) {
            __Vdlyvval__req_cycle__v0 = vlSelf->__PVT__cyc;
            __Vdlyvset__req_cycle__v0 = 1U;
            __Vdlyvdim0__req_cycle__v0 = vlSelf->__PVT__rq_id;
        }
        if (((IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__have_resp) 
             & (IData)(vlSelf->__PVT__rs_r))) {
            vlSelf->__PVT__resp_ids.push_back(((IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__have_resp)
                                                ? vlSymsp->TOP__tb_mem_model__dut.__PVT__e_id
                                               [vlSymsp->TOP__tb_mem_model__dut.__PVT__oldest_idx]
                                                : 0U));
            __Vdlyvval__rsp_cycle__v0 = vlSelf->__PVT__cyc;
            __Vdlyvset__rsp_cycle__v0 = 1U;
            __Vdlyvdim0__rsp_cycle__v0 = ((IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__have_resp)
                                           ? vlSymsp->TOP__tb_mem_model__dut.__PVT__e_id
                                          [vlSymsp->TOP__tb_mem_model__dut.__PVT__oldest_idx]
                                           : 0U);
            vlSelf->__PVT__resp_data.push_back(((IData)(vlSymsp->TOP__tb_mem_model__dut.__PVT__have_resp)
                                                 ? 
                                                vlSymsp->TOP__tb_mem_model__dut.__PVT__e_rdata
                                                [vlSymsp->TOP__tb_mem_model__dut.__PVT__oldest_idx]
                                                 : 0U));
        }
    }
    vlSelf->__PVT__cyc = __Vdly__cyc;
    if (__Vdlyvset__req_cycle__v0) {
        vlSelf->__PVT__req_cycle[__Vdlyvdim0__req_cycle__v0] 
            = __Vdlyvval__req_cycle__v0;
    }
    if (__Vdlyvset__rsp_cycle__v0) {
        vlSelf->__PVT__rsp_cycle[__Vdlyvdim0__rsp_cycle__v0] 
            = __Vdlyvval__rsp_cycle__v0;
    }
}
