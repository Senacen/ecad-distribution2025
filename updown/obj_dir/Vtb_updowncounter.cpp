// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_updowncounter__pch.h"

//============================================================
// Constructors

Vtb_updowncounter::Vtb_updowncounter(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_updowncounter__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , count{vlSymsp->TOP.count}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_updowncounter::Vtb_updowncounter(const char* _vcname__)
    : Vtb_updowncounter(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_updowncounter::~Vtb_updowncounter() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_updowncounter___024root___eval_debug_assertions(Vtb_updowncounter___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_updowncounter___024root___eval_static(Vtb_updowncounter___024root* vlSelf);
void Vtb_updowncounter___024root___eval_initial(Vtb_updowncounter___024root* vlSelf);
void Vtb_updowncounter___024root___eval_settle(Vtb_updowncounter___024root* vlSelf);
void Vtb_updowncounter___024root___eval(Vtb_updowncounter___024root* vlSelf);

void Vtb_updowncounter::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_updowncounter::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_updowncounter___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_updowncounter___024root___eval_static(&(vlSymsp->TOP));
        Vtb_updowncounter___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_updowncounter___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_updowncounter___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_updowncounter::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_updowncounter::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_updowncounter::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_updowncounter___024root___eval_final(Vtb_updowncounter___024root* vlSelf);

VL_ATTR_COLD void Vtb_updowncounter::final() {
    Vtb_updowncounter___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_updowncounter::hierName() const { return vlSymsp->name(); }
const char* Vtb_updowncounter::modelName() const { return "Vtb_updowncounter"; }
unsigned Vtb_updowncounter::threads() const { return 1; }
void Vtb_updowncounter::prepareClone() const { contextp()->prepareClone(); }
void Vtb_updowncounter::atClone() const {
    contextp()->threadPoolpOnClone();
}
