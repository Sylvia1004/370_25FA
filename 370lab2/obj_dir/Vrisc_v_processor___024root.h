// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vrisc_v_processor.h for the primary calling header

#ifndef VERILATED_VRISC_V_PROCESSOR___024ROOT_H_
#define VERILATED_VRISC_V_PROCESSOR___024ROOT_H_  // guard

#include "verilated.h"


class Vrisc_v_processor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vrisc_v_processor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        CData/*0:0*/ risc_v_processor__DOT__mux;
        CData/*0:0*/ risc_v_processor__DOT__mem_read;
        CData/*0:0*/ risc_v_processor__DOT__mem_to_reg;
        CData/*0:0*/ risc_v_processor__DOT__mem_write;
        CData/*0:0*/ risc_v_processor__DOT__ALU_src;
        CData/*0:0*/ risc_v_processor__DOT__reg_write;
        VL_IN8(rst,0,0);
        CData/*6:0*/ risc_v_processor__DOT__opcode;
        CData/*4:0*/ risc_v_processor__DOT__rs1_add;
        CData/*4:0*/ risc_v_processor__DOT__rs2_add;
        CData/*4:0*/ risc_v_processor__DOT__rd_add;
        CData/*0:0*/ risc_v_processor__DOT__branch;
        CData/*0:0*/ risc_v_processor__DOT__zero;
        CData/*1:0*/ risc_v_processor__DOT__ALU_op;
        CData/*3:0*/ risc_v_processor__DOT__ALU_control;
        CData/*4:0*/ __VdlyDim0__risc_v_processor__DOT__my_RegFile__DOT__registers__v0;
        CData/*4:0*/ __VdlyDim0__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0;
        CData/*0:0*/ __VdlySet__risc_v_processor__DOT__my_RegFile__DOT__registers__v0;
        CData/*0:0*/ __VdlySet__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*6:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__opcode__0;
        CData/*3:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_control__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__rd_add__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__reg_write__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_add__0;
        CData/*4:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_add__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_read__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_write__0;
        CData/*1:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_op__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_to_reg__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_src__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__mux__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ risc_v_processor__DOT__ins_for_ALU;
        SData/*9:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__ins_for_ALU__0;
        VL_OUT(cur_pc_op,31,0);
        IData/*31:0*/ risc_v_processor__DOT__next_pc;
        IData/*31:0*/ risc_v_processor__DOT__cur_pc;
        IData/*31:0*/ risc_v_processor__DOT__instruction;
        IData/*31:0*/ risc_v_processor__DOT__add_sum;
        IData/*31:0*/ risc_v_processor__DOT__generated_imm;
        IData/*31:0*/ risc_v_processor__DOT__rs1_data;
        IData/*31:0*/ risc_v_processor__DOT__source2_data;
        IData/*31:0*/ risc_v_processor__DOT__ALU_result;
        IData/*31:0*/ risc_v_processor__DOT__write_reg_data;
        IData/*31:0*/ risc_v_processor__DOT__mem_data;
        IData/*31:0*/ risc_v_processor__DOT__rs2_data;
        IData/*31:0*/ risc_v_processor__DOT__cur_pc_next;
        IData/*31:0*/ risc_v_processor__DOT__my_DataMem__DOT____Vlvbound_hff55c7b1__0;
        IData/*31:0*/ __Vdly__risc_v_processor__DOT__add_sum;
        IData/*31:0*/ __VdlyVal__risc_v_processor__DOT__my_RegFile__DOT__registers__v0;
        IData/*31:0*/ __VdlyVal__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__generated_imm__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__instruction__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__source2_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__write_reg_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_data__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_data__0;
    };
    struct {
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__add_sum__0;
        IData/*31:0*/ __Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc_next__0;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<IData/*31:0*/, 32> risc_v_processor__DOT__my_RegFile__DOT__registers;
        VlUnpacked<IData/*31:0*/, 30> risc_v_processor__DOT__my_DataMem__DOT__data_memory;
        VlUnpacked<CData/*7:0*/, 128> risc_v_processor__DOT__my_InstrMem__DOT__rom;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<15> __VactTriggered;
    VlTriggerVec<15> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vrisc_v_processor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vrisc_v_processor___024root(Vrisc_v_processor__Syms* symsp, const char* v__name);
    ~Vrisc_v_processor___024root();
    VL_UNCOPYABLE(Vrisc_v_processor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
