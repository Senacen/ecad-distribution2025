// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_timer.h for the primary calling header

#include "Vtb_timer__pch.h"
#include "Vtb_timer__Syms.h"
#include "Vtb_timer___024root.h"

void Vtb_timer___024root___ctor_var_reset(Vtb_timer___024root* vlSelf);

Vtb_timer___024root::Vtb_timer___024root(Vtb_timer__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_timer___024root___ctor_var_reset(this);
}

void Vtb_timer___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_timer___024root::~Vtb_timer___024root() {
}
