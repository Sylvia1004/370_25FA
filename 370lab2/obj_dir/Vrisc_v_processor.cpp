// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrisc_v_processor__pch.h"

//============================================================
// Constructors

Vrisc_v_processor::Vrisc_v_processor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrisc_v_processor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , cur_pc_op{vlSymsp->TOP.cur_pc_op}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vrisc_v_processor::Vrisc_v_processor(const char* _vcname__)
    : Vrisc_v_processor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrisc_v_processor::~Vrisc_v_processor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrisc_v_processor___024root___eval_debug_assertions(Vrisc_v_processor___024root* vlSelf);
#endif  // VL_DEBUG
void Vrisc_v_processor___024root___eval_static(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___eval_initial(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___eval_settle(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___eval(Vrisc_v_processor___024root* vlSelf);

void Vrisc_v_processor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrisc_v_processor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrisc_v_processor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrisc_v_processor___024root___eval_static(&(vlSymsp->TOP));
        Vrisc_v_processor___024root___eval_initial(&(vlSymsp->TOP));
        Vrisc_v_processor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrisc_v_processor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrisc_v_processor::eventsPending() { return false; }

uint64_t Vrisc_v_processor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vrisc_v_processor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrisc_v_processor___024root___eval_final(Vrisc_v_processor___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v_processor::final() {
    Vrisc_v_processor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrisc_v_processor::hierName() const { return vlSymsp->name(); }
const char* Vrisc_v_processor::modelName() const { return "Vrisc_v_processor"; }
unsigned Vrisc_v_processor::threads() const { return 1; }
void Vrisc_v_processor::prepareClone() const { contextp()->prepareClone(); }
void Vrisc_v_processor::atClone() const {
    contextp()->threadPoolpOnClone();
}
