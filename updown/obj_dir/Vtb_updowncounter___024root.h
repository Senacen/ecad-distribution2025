// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_updowncounter.h for the primary calling header

#ifndef VERILATED_VTB_UPDOWNCOUNTER___024ROOT_H_
#define VERILATED_VTB_UPDOWNCOUNTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_updowncounter__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_updowncounter___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(clk,0,0);
    VL_OUT8(rst,0,0);
    VL_OUT8(count,3,0);
    CData/*0:0*/ tb_updowncounter__DOT__up;
    CData/*0:0*/ __VdlyVal__clk__v0;
    CData/*0:0*/ __VdlySet__clk__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_updowncounter__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_updowncounter___024root(Vtb_updowncounter__Syms* symsp, const char* v__name);
    ~Vtb_updowncounter___024root();
    VL_UNCOPYABLE(Vtb_updowncounter___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
