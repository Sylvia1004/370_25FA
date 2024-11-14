// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vpipeline_processor__pch.h"

//============================================================
// Constructors

Vpipeline_processor::Vpipeline_processor(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vpipeline_processor__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , sig{vlSymsp->TOP.sig}
    , ALU_con_op{vlSymsp->TOP.ALU_con_op}
    , ALUop_op{vlSymsp->TOP.ALUop_op}
    , func3_op{vlSymsp->TOP.func3_op}
    , rd_op{vlSymsp->TOP.rd_op}
    , reg_write_op{vlSymsp->TOP.reg_write_op}
    , mem_to_reg_op{vlSymsp->TOP.mem_to_reg_op}
    , ra_op{vlSymsp->TOP.ra_op}
    , t0_op{vlSymsp->TOP.t0_op}
    , t1_op{vlSymsp->TOP.t1_op}
    , t2_op{vlSymsp->TOP.t2_op}
    , t3_op{vlSymsp->TOP.t3_op}
    , t4_op{vlSymsp->TOP.t4_op}
    , ins_op{vlSymsp->TOP.ins_op}
    , data_2{vlSymsp->TOP.data_2}
    , regdata_op{vlSymsp->TOP.regdata_op}
    , cur_pc_op{vlSymsp->TOP.cur_pc_op}
    , data1_op{vlSymsp->TOP.data1_op}
    , add_sum_op{vlSymsp->TOP.add_sum_op}
    , write_reg_data_op{vlSymsp->TOP.write_reg_data_op}
    , mem_read_data_op{vlSymsp->TOP.mem_read_data_op}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vpipeline_processor::Vpipeline_processor(const char* _vcname__)
    : Vpipeline_processor(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vpipeline_processor::~Vpipeline_processor() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vpipeline_processor___024root___eval_debug_assertions(Vpipeline_processor___024root* vlSelf);
#endif  // VL_DEBUG
void Vpipeline_processor___024root___eval_static(Vpipeline_processor___024root* vlSelf);
void Vpipeline_processor___024root___eval_initial(Vpipeline_processor___024root* vlSelf);
void Vpipeline_processor___024root___eval_settle(Vpipeline_processor___024root* vlSelf);
void Vpipeline_processor___024root___eval(Vpipeline_processor___024root* vlSelf);

void Vpipeline_processor::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vpipeline_processor::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vpipeline_processor___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vpipeline_processor___024root___eval_static(&(vlSymsp->TOP));
        Vpipeline_processor___024root___eval_initial(&(vlSymsp->TOP));
        Vpipeline_processor___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vpipeline_processor___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vpipeline_processor::eventsPending() { return false; }

uint64_t Vpipeline_processor::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vpipeline_processor::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vpipeline_processor___024root___eval_final(Vpipeline_processor___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_processor::final() {
    Vpipeline_processor___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vpipeline_processor::hierName() const { return vlSymsp->name(); }
const char* Vpipeline_processor::modelName() const { return "Vpipeline_processor"; }
unsigned Vpipeline_processor::threads() const { return 1; }
void Vpipeline_processor::prepareClone() const { contextp()->prepareClone(); }
void Vpipeline_processor::atClone() const {
    contextp()->threadPoolpOnClone();
}
