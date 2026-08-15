// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_interfaces.h for the primary calling header

#ifndef VERILATED_VTB_INTERFACES___024UNIT_H_
#define VERILATED_VTB_INTERFACES___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_interfaces__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_interfaces___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb_interfaces__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_interfaces___024unit(Vtb_interfaces__Syms* symsp, const char* v__name);
    ~Vtb_interfaces___024unit();
    VL_UNCOPYABLE(Vtb_interfaces___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
