// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_interfaces__pch.h"

//============================================================
// Constructors

Vtb_interfaces::Vtb_interfaces(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_interfaces__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_interfaces::Vtb_interfaces(const char* _vcname__)
    : Vtb_interfaces(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_interfaces::~Vtb_interfaces() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_interfaces___024root___eval_debug_assertions(Vtb_interfaces___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_interfaces___024root___eval_static(Vtb_interfaces___024root* vlSelf);
void Vtb_interfaces___024root___eval_initial(Vtb_interfaces___024root* vlSelf);
void Vtb_interfaces___024root___eval_settle(Vtb_interfaces___024root* vlSelf);
void Vtb_interfaces___024root___eval(Vtb_interfaces___024root* vlSelf);

void Vtb_interfaces::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_interfaces::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_interfaces___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_interfaces___024root___eval_static(&(vlSymsp->TOP));
        Vtb_interfaces___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_interfaces___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_interfaces___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_interfaces::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_interfaces::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_interfaces::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_interfaces___024root___eval_final(Vtb_interfaces___024root* vlSelf);

VL_ATTR_COLD void Vtb_interfaces::final() {
    Vtb_interfaces___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_interfaces::hierName() const { return vlSymsp->name(); }
const char* Vtb_interfaces::modelName() const { return "Vtb_interfaces"; }
unsigned Vtb_interfaces::threads() const { return 1; }
void Vtb_interfaces::prepareClone() const { contextp()->prepareClone(); }
void Vtb_interfaces::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Vtb_interfaces::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_interfaces::trace()' called on model that was Verilated without --trace option");
}
