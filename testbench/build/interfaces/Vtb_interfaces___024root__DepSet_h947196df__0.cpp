// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_interfaces.h for the primary calling header

#include "Vtb_interfaces__pch.h"
#include "Vtb_interfaces___024root.h"

VlCoroutine Vtb_interfaces___024root___eval_initial__TOP__Vtiming__0(Vtb_interfaces___024root* vlSelf);

void Vtb_interfaces___024root___eval_initial(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_initial\n"); );
    // Body
    Vtb_interfaces___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_interfaces___024root___eval_initial__TOP__Vtiming__0(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Init
    std::string __Vtask_tb_interfaces__DOT__chk__0__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__0__ok;
    __Vtask_tb_interfaces__DOT__chk__0__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__0__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__1__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__1__ok;
    __Vtask_tb_interfaces__DOT__chk__1__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__1__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__2__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__2__ok;
    __Vtask_tb_interfaces__DOT__chk__2__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__2__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__3__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__3__ok;
    __Vtask_tb_interfaces__DOT__chk__3__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__3__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__4__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__4__ok;
    __Vtask_tb_interfaces__DOT__chk__4__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__4__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__5__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__5__ok;
    __Vtask_tb_interfaces__DOT__chk__5__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__5__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__6__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__6__ok;
    __Vtask_tb_interfaces__DOT__chk__6__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__6__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__7__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__7__ok;
    __Vtask_tb_interfaces__DOT__chk__7__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__7__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__8__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__8__ok;
    __Vtask_tb_interfaces__DOT__chk__8__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__8__detail;
    std::string __Vtask_tb_interfaces__DOT__chk__9__what;
    CData/*0:0*/ __Vtask_tb_interfaces__DOT__chk__9__ok;
    __Vtask_tb_interfaces__DOT__chk__9__ok = 0;
    std::string __Vtask_tb_interfaces__DOT__chk__9__detail;
    // Body
    co_await vlSelf->__VdlySched.delay(1ULL, nullptr, 
                                       "tb_interfaces.sv", 
                                       98);
    __Vtask_tb_interfaces__DOT__chk__0__detail = std::string{"20 files instantiated"};
    __Vtask_tb_interfaces__DOT__chk__0__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__0__what = std::string{"all interfaces elaborate"};
    if (__Vtask_tb_interfaces__DOT__chk__0__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__0__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__0__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__0__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__0__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__1__detail = std::string{"word_t"};
    __Vtask_tb_interfaces__DOT__chk__1__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__1__what = std::string{"pc_if width"};
    if (__Vtask_tb_interfaces__DOT__chk__1__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__1__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__1__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__1__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__1__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__2__detail = std::string{"regbits_t"};
    __Vtask_tb_interfaces__DOT__chk__2__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__2__what = std::string{"regfile_if width"};
    if (__Vtask_tb_interfaces__DOT__chk__2__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__2__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__2__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__2__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__2__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__3__detail = std::string{"one bit per byte"};
    __Vtask_tb_interfaces__DOT__chk__3__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__3__what = std::string{"mem_if be width"};
    if (__Vtask_tb_interfaces__DOT__chk__3__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__3__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__3__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__3__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__3__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__4__detail = std::string{"clog2(DEPTH+1) for 4"};
    __Vtask_tb_interfaces__DOT__chk__4__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__4__what = std::string{"rs_if count"};
    if (__Vtask_tb_interfaces__DOT__chk__4__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__4__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__4__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__4__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__4__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__5__detail = std::string{"N_FU=4"};
    __Vtask_tb_interfaces__DOT__chk__5__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__5__what = std::string{"cdb_if fans out"};
    if (__Vtask_tb_interfaces__DOT__chk__5__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__5__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__5__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__5__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__5__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__6__detail = std::string{"tag width from pkg"};
    __Vtask_tb_interfaces__DOT__chk__6__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__6__what = std::string{"lsq_if param"};
    if (__Vtask_tb_interfaces__DOT__chk__6__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__6__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__6__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__6__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__6__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__7__detail = std::string{"64-bit"};
    __Vtask_tb_interfaces__DOT__chk__7__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__7__what = std::string{"perf_if counters"};
    if (__Vtask_tb_interfaces__DOT__chk__7__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__7__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__7__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__7__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__7__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__8__detail = std::string{"64 bits"};
    __Vtask_tb_interfaces__DOT__chk__8__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__8__what = std::string{"decoded_t in latch"};
    if (__Vtask_tb_interfaces__DOT__chk__8__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__8__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__8__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__8__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__8__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    __Vtask_tb_interfaces__DOT__chk__9__detail = std::string{"enum distinct"};
    __Vtask_tb_interfaces__DOT__chk__9__ok = 1U;
    __Vtask_tb_interfaces__DOT__chk__9__what = std::string{"fwdsel_t defined"};
    if (__Vtask_tb_interfaces__DOT__chk__9__ok) {
        VL_WRITEF("  PASS  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__9__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__9__detail));
    } else {
        VL_WRITEF("  FAIL  %-24@ %@\n",-1,&(__Vtask_tb_interfaces__DOT__chk__9__what),
                  -1,&(__Vtask_tb_interfaces__DOT__chk__9__detail));
        vlSelf->tb_interfaces__DOT__errors = ((IData)(1U) 
                                              + vlSelf->tb_interfaces__DOT__errors);
    }
    VL_WRITEF("\n=== %s: %0d errors ===\n\n",64,((0U 
                                                  != vlSelf->tb_interfaces__DOT__errors)
                                                  ? 0x4641494c4544ULL
                                                  : 0x414c4c2050415353ULL),
              32,vlSelf->tb_interfaces__DOT__errors);
    VL_FINISH_MT("tb_interfaces.sv", 114, "");
}

void Vtb_interfaces___024root___eval_act(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_act\n"); );
}

void Vtb_interfaces___024root___eval_nba(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_nba\n"); );
}

void Vtb_interfaces___024root___timing_resume(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___timing_resume\n"); );
    // Body
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_interfaces___024root___eval_triggers__act(Vtb_interfaces___024root* vlSelf);

bool Vtb_interfaces___024root___eval_phase__act(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_interfaces___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_interfaces___024root___timing_resume(vlSelf);
        Vtb_interfaces___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_interfaces___024root___eval_phase__nba(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_interfaces___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_interfaces___024root___dump_triggers__nba(Vtb_interfaces___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_interfaces___024root___dump_triggers__act(Vtb_interfaces___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_interfaces___024root___eval(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_interfaces___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_interfaces.sv", 35, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_interfaces___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_interfaces.sv", 35, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_interfaces___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_interfaces___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_interfaces___024root___eval_debug_assertions(Vtb_interfaces___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_interfaces__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_interfaces___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
