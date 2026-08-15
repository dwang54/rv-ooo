// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_mem_ordering__pch.h"

//============================================================
// Constructors

Vtb_mem_ordering::Vtb_mem_ordering(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_mem_ordering__Syms(contextp(), _vcname__, this)}
    , tb_mem_ordering{vlSymsp->TOP.tb_mem_ordering}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_mem_ordering::Vtb_mem_ordering(const char* _vcname__)
    : Vtb_mem_ordering(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_mem_ordering::~Vtb_mem_ordering() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_mem_ordering___024root___eval_debug_assertions(Vtb_mem_ordering___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mem_ordering___024root___eval_static(Vtb_mem_ordering___024root* vlSelf);
void Vtb_mem_ordering___024root___eval_initial(Vtb_mem_ordering___024root* vlSelf);
void Vtb_mem_ordering___024root___eval_settle(Vtb_mem_ordering___024root* vlSelf);
void Vtb_mem_ordering___024root___eval(Vtb_mem_ordering___024root* vlSelf);

void Vtb_mem_ordering::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_mem_ordering::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_mem_ordering___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_mem_ordering___024root___eval_static(&(vlSymsp->TOP));
        Vtb_mem_ordering___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_mem_ordering___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_mem_ordering___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_mem_ordering::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_mem_ordering::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_mem_ordering::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_mem_ordering___024root___eval_final(Vtb_mem_ordering___024root* vlSelf);

VL_ATTR_COLD void Vtb_mem_ordering::final() {
    Vtb_mem_ordering___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_mem_ordering::hierName() const { return vlSymsp->name(); }
const char* Vtb_mem_ordering::modelName() const { return "Vtb_mem_ordering"; }
unsigned Vtb_mem_ordering::threads() const { return 1; }
void Vtb_mem_ordering::prepareClone() const { contextp()->prepareClone(); }
void Vtb_mem_ordering::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_mem_ordering::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_mem_ordering::trace()' called on model that was Verilated without --trace option");
}
