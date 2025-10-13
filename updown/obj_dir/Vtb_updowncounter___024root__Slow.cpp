// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_updowncounter.h for the primary calling header

#include "Vtb_updowncounter__pch.h"
#include "Vtb_updowncounter__Syms.h"
#include "Vtb_updowncounter___024root.h"

void Vtb_updowncounter___024root___ctor_var_reset(Vtb_updowncounter___024root* vlSelf);

Vtb_updowncounter___024root::Vtb_updowncounter___024root(Vtb_updowncounter__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_updowncounter___024root___ctor_var_reset(this);
}

void Vtb_updowncounter___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_updowncounter___024root::~Vtb_updowncounter___024root() {
}
