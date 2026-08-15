// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_types_pkg.h for the primary calling header

#include "Vtb_types_pkg__pch.h"
#include "Vtb_types_pkg_alu_if.h"

std::string VL_TO_STRING(const Vtb_types_pkg_alu_if* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_types_pkg_alu_if::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
