// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_types_pkg__pch.h"

//============================================================
// Constructors

Vtb_types_pkg::Vtb_types_pkg(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_types_pkg__Syms(contextp(), _vcname__, this)}
    , __PVT__tb_types_pkg__DOT__aif{vlSymsp->TOP.__PVT__tb_types_pkg__DOT__aif}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_types_pkg::Vtb_types_pkg(const char* _vcname__)
    : Vtb_types_pkg(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_types_pkg::~Vtb_types_pkg() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_types_pkg___024root___eval_debug_assertions(Vtb_types_pkg___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_types_pkg___024root___eval_static(Vtb_types_pkg___024root* vlSelf);
void Vtb_types_pkg___024root___eval_initial(Vtb_types_pkg___024root* vlSelf);
void Vtb_types_pkg___024root___eval_settle(Vtb_types_pkg___024root* vlSelf);
void Vtb_types_pkg___024root___eval(Vtb_types_pkg___024root* vlSelf);

void Vtb_types_pkg::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_types_pkg::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_types_pkg___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_types_pkg___024root___eval_static(&(vlSymsp->TOP));
        Vtb_types_pkg___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_types_pkg___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_types_pkg___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_types_pkg::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_types_pkg::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_types_pkg::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_types_pkg___024root___eval_final(Vtb_types_pkg___024root* vlSelf);

VL_ATTR_COLD void Vtb_types_pkg::final() {
    Vtb_types_pkg___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_types_pkg::hierName() const { return vlSymsp->name(); }
const char* Vtb_types_pkg::modelName() const { return "Vtb_types_pkg"; }
unsigned Vtb_types_pkg::threads() const { return 1; }
void Vtb_types_pkg::prepareClone() const { contextp()->prepareClone(); }
void Vtb_types_pkg::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_types_pkg::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_types_pkg::trace()' called on model that was Verilated without --trace option");
}
