// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vpipeline_processor.h for the primary calling header

#ifndef VERILATED_VPIPELINE_PROCESSOR___024ROOT_H_
#define VERILATED_VPIPELINE_PROCESSOR___024ROOT_H_  // guard

#include "verilated.h"


class Vpipeline_processor__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vpipeline_processor___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_OUT8(sig,0,0);
        VL_OUT8(ALU_con_op,3,0);
        VL_OUT8(ALUop_op,1,0);
        VL_OUT8(func3_op,3,0);
        VL_OUT8(rd_op,4,0);
        VL_OUT8(reg_write_op,0,0);
        VL_OUT8(mem_to_reg_op,0,0);
        CData/*0:0*/ pipeline_processor__DOT__ALUsrc;
        CData/*0:0*/ pipeline_processor__DOT__reg_write;
        CData/*0:0*/ pipeline_processor__DOT__branch;
        CData/*0:0*/ pipeline_processor__DOT__mem_read;
        CData/*0:0*/ pipeline_processor__DOT__mem_write;
        CData/*0:0*/ pipeline_processor__DOT__mem_to_reg;
        CData/*0:0*/ pipeline_processor__DOT__jump;
        CData/*0:0*/ pipeline_processor__DOT__ALUsrc_ex;
        CData/*0:0*/ pipeline_processor__DOT__branch_ex;
        CData/*0:0*/ pipeline_processor__DOT__mem_read_ex;
        CData/*0:0*/ pipeline_processor__DOT__mem_write_ex;
        CData/*0:0*/ pipeline_processor__DOT__reg_write_ex;
        CData/*0:0*/ pipeline_processor__DOT__mem_to_reg_ex;
        CData/*0:0*/ pipeline_processor__DOT__jump_ex;
        CData/*0:0*/ pipeline_processor__DOT__zero;
        CData/*0:0*/ pipeline_processor__DOT__reg_write_wb;
        CData/*0:0*/ pipeline_processor__DOT__mem_to_reg_wb;
        CData/*0:0*/ pipeline_processor__DOT__jump_wb;
        CData/*1:0*/ pipeline_processor__DOT__ALUop;
        CData/*1:0*/ pipeline_processor__DOT__ALUop_ex;
        CData/*3:0*/ pipeline_processor__DOT__func3;
        CData/*3:0*/ pipeline_processor__DOT__func3_ex;
        CData/*4:0*/ pipeline_processor__DOT__rs1;
        CData/*4:0*/ pipeline_processor__DOT__rs2;
        CData/*4:0*/ pipeline_processor__DOT__rd;
        CData/*4:0*/ pipeline_processor__DOT__rd_ex;
        CData/*4:0*/ pipeline_processor__DOT__rd_wb;
        CData/*6:0*/ pipeline_processor__DOT__opcode;
        CData/*7:0*/ pipeline_processor__DOT__myInstrMem__DOT____Vlvbound_h919d4f68__0;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __VactContinue;
        VL_OUT(ra_op,31,0);
        VL_OUT(t0_op,31,0);
        VL_OUT(t1_op,31,0);
        VL_OUT(t2_op,31,0);
        VL_OUT(t3_op,31,0);
        VL_OUT(t4_op,31,0);
        VL_OUT(ins_op,31,0);
        VL_OUT(data_2,31,0);
        VL_OUT(regdata_op,31,0);
        VL_OUT(cur_pc_op,31,0);
        VL_OUT(data1_op,31,0);
        VL_OUT(add_sum_op,31,0);
        VL_OUT(write_reg_data_op,31,0);
        VL_OUT(mem_read_data_op,31,0);
        IData/*31:0*/ pipeline_processor__DOT__cur_pc;
        IData/*31:0*/ pipeline_processor__DOT__instruction;
        IData/*31:0*/ pipeline_processor__DOT__cur_pc_id;
        IData/*31:0*/ pipeline_processor__DOT__ins;
        IData/*31:0*/ pipeline_processor__DOT__generated_imm;
        IData/*31:0*/ pipeline_processor__DOT__cur_pc_ex;
        IData/*31:0*/ pipeline_processor__DOT__cur_pc_plus4_id;
        IData/*31:0*/ pipeline_processor__DOT__cur_pc_plus4_ex;
        IData/*31:0*/ pipeline_processor__DOT__rs1_data_ex;
        IData/*31:0*/ pipeline_processor__DOT__rs2_data_ex;
    };
    struct {
        IData/*31:0*/ pipeline_processor__DOT__generated_imm_ex;
        IData/*31:0*/ pipeline_processor__DOT__ALU_result;
        IData/*31:0*/ pipeline_processor__DOT__mem_read_data;
        IData/*31:0*/ pipeline_processor__DOT__mem_read_data_wb;
        IData/*31:0*/ pipeline_processor__DOT__cur_pc_plus4_wb;
        IData/*31:0*/ pipeline_processor__DOT__ALU_result_wb;
        IData/*31:0*/ pipeline_processor__DOT__myALU__DOT__n;
        IData/*31:0*/ pipeline_processor__DOT__myALU__DOT__i;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*7:0*/, 312> pipeline_processor__DOT__myInstrMem__DOT__rom;
        VlUnpacked<IData/*31:0*/, 32> pipeline_processor__DOT__myRegFile__DOT__registers;
        VlUnpacked<CData/*7:0*/, 128> pipeline_processor__DOT__myDataMem__DOT__data_memory;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vpipeline_processor__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vpipeline_processor___024root(Vpipeline_processor__Syms* symsp, const char* v__name);
    ~Vpipeline_processor___024root();
    VL_UNCOPYABLE(Vpipeline_processor___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
