// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_updowncounter.h for the primary calling header

#include "Vtb_updowncounter__pch.h"
#include "Vtb_updowncounter__Syms.h"
#include "Vtb_updowncounter___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_updowncounter___024root___eval_initial__TOP__Vtiming__1(Vtb_updowncounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb_updowncounter.sv", 
                                             20);
        vlSelfRef.__VdlyVal__clk__v0 = (1U & (~ (IData)(vlSelfRef.clk)));
        vlSelfRef.__VdlySet__clk__v0 = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_updowncounter___024root___dump_triggers__act(Vtb_updowncounter___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_updowncounter___024root___eval_triggers__act(Vtb_updowncounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_updowncounter___024root___eval_triggers__act\n"); );
    Vtb_updowncounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((IData)(vlSelfRef.rst) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_updowncounter___024root___dump_triggers__act(vlSelf);
    }
#endif
}
