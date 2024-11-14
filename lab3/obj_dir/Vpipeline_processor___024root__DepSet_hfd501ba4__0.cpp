// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_processor.h for the primary calling header

#include "Vpipeline_processor__pch.h"
#include "Vpipeline_processor___024root.h"

void Vpipeline_processor___024root___eval_act(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vpipeline_processor___024root___nba_sequent__TOP__0(Vpipeline_processor___024root* vlSelf);

void Vpipeline_processor___024root___eval_nba(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vpipeline_processor___024root___nba_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_hd79b39d9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h3534176c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h3056fe11_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h7fdaa79b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h8198974f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_hfc58f03c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_hd02a2354_0;
extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline_processor__ConstPool__TABLE_hdd130ed4_0;

VL_INLINE_OPT void Vpipeline_processor___024root___nba_sequent__TOP__0(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ pipeline_processor__DOT__branch_mem;
    pipeline_processor__DOT__branch_mem = 0;
    CData/*0:0*/ pipeline_processor__DOT__mem_read_mem;
    pipeline_processor__DOT__mem_read_mem = 0;
    CData/*0:0*/ pipeline_processor__DOT__mem_write_mem;
    pipeline_processor__DOT__mem_write_mem = 0;
    CData/*0:0*/ pipeline_processor__DOT__reg_write_mem;
    pipeline_processor__DOT__reg_write_mem = 0;
    CData/*0:0*/ pipeline_processor__DOT__mem_to_reg_mem;
    pipeline_processor__DOT__mem_to_reg_mem = 0;
    CData/*0:0*/ pipeline_processor__DOT__jump_mem;
    pipeline_processor__DOT__jump_mem = 0;
    CData/*0:0*/ pipeline_processor__DOT__zero_mem;
    pipeline_processor__DOT__zero_mem = 0;
    CData/*3:0*/ pipeline_processor__DOT__func3_mem;
    pipeline_processor__DOT__func3_mem = 0;
    CData/*3:0*/ pipeline_processor__DOT__ALU_con;
    pipeline_processor__DOT__ALU_con = 0;
    CData/*4:0*/ pipeline_processor__DOT__rd_mem;
    pipeline_processor__DOT__rd_mem = 0;
    IData/*31:0*/ pipeline_processor__DOT__cur_pc_plus4_mem;
    pipeline_processor__DOT__cur_pc_plus4_mem = 0;
    IData/*31:0*/ pipeline_processor__DOT__add_sum_mem;
    pipeline_processor__DOT__add_sum_mem = 0;
    IData/*31:0*/ pipeline_processor__DOT__ALU_result_mem;
    pipeline_processor__DOT__ALU_result_mem = 0;
    IData/*31:0*/ pipeline_processor__DOT__rs2_data_mem;
    pipeline_processor__DOT__rs2_data_mem = 0;
    IData/*31:0*/ pipeline_processor__DOT__myALU__DOT__sub;
    pipeline_processor__DOT__myALU__DOT__sub = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32 = 0;
    CData/*7:0*/ __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33;
    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 = 0;
    CData/*6:0*/ __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33;
    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 = 0;
    IData/*31:0*/ __Vdly__pipeline_processor__DOT__mem_read_data;
    __Vdly__pipeline_processor__DOT__mem_read_data = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 = 0;
    CData/*0:0*/ __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 = 0;
    // Body
    __Vdly__pipeline_processor__DOT__mem_read_data 
        = vlSelfRef.pipeline_processor__DOT__mem_read_data;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 = 0U;
    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 = 0U;
    pipeline_processor__DOT__branch_mem = vlSelfRef.pipeline_processor__DOT__branch_ex;
    pipeline_processor__DOT__mem_read_mem = vlSelfRef.pipeline_processor__DOT__mem_read_ex;
    pipeline_processor__DOT__mem_write_mem = vlSelfRef.pipeline_processor__DOT__mem_write_ex;
    pipeline_processor__DOT__reg_write_mem = vlSelfRef.pipeline_processor__DOT__reg_write_ex;
    pipeline_processor__DOT__mem_to_reg_mem = vlSelfRef.pipeline_processor__DOT__mem_to_reg_ex;
    pipeline_processor__DOT__jump_mem = vlSelfRef.pipeline_processor__DOT__jump_ex;
    pipeline_processor__DOT__cur_pc_plus4_mem = vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_ex;
    pipeline_processor__DOT__rs2_data_mem = vlSelfRef.pipeline_processor__DOT__rs2_data_ex;
    pipeline_processor__DOT__rd_mem = vlSelfRef.pipeline_processor__DOT__rd_ex;
    pipeline_processor__DOT__func3_mem = vlSelfRef.pipeline_processor__DOT__func3_ex;
    pipeline_processor__DOT__add_sum_mem = vlSelfRef.add_sum_op;
    pipeline_processor__DOT__zero_mem = vlSelfRef.pipeline_processor__DOT__zero;
    pipeline_processor__DOT__ALU_result_mem = vlSelfRef.pipeline_processor__DOT__ALU_result;
    vlSelfRef.pipeline_processor__DOT__generated_imm_ex 
        = vlSelfRef.pipeline_processor__DOT__generated_imm;
    vlSelfRef.pipeline_processor__DOT__jump_ex = vlSelfRef.pipeline_processor__DOT__jump;
    vlSelfRef.pipeline_processor__DOT__mem_to_reg_ex 
        = vlSelfRef.pipeline_processor__DOT__mem_to_reg;
    vlSelfRef.pipeline_processor__DOT__reg_write_ex 
        = vlSelfRef.pipeline_processor__DOT__reg_write;
    vlSelfRef.pipeline_processor__DOT__mem_write_ex 
        = vlSelfRef.pipeline_processor__DOT__mem_write;
    vlSelfRef.pipeline_processor__DOT__mem_read_ex 
        = vlSelfRef.pipeline_processor__DOT__mem_read;
    vlSelfRef.pipeline_processor__DOT__branch_ex = vlSelfRef.pipeline_processor__DOT__branch;
    vlSelfRef.pipeline_processor__DOT__rd_ex = vlSelfRef.pipeline_processor__DOT__rd;
    vlSelfRef.pipeline_processor__DOT__opcode = (0x7fU 
                                                 & vlSelfRef.pipeline_processor__DOT__instruction);
    vlSelfRef.pipeline_processor__DOT__ALUsrc_ex = vlSelfRef.pipeline_processor__DOT__ALUsrc;
    vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
        = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [vlSelfRef.pipeline_processor__DOT__rs1];
    vlSelfRef.pipeline_processor__DOT__rs2_data_ex 
        = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [vlSelfRef.pipeline_processor__DOT__rs2];
    vlSelfRef.pipeline_processor__DOT__ALUop_ex = vlSelfRef.pipeline_processor__DOT__ALUop;
    vlSelfRef.pipeline_processor__DOT__func3_ex = vlSelfRef.pipeline_processor__DOT__func3;
    vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_ex 
        = vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_id;
    if (((0U != (IData)(vlSelfRef.pipeline_processor__DOT__rd_wb)) 
         & (IData)(vlSelfRef.pipeline_processor__DOT__reg_write_wb))) {
        vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[vlSelfRef.pipeline_processor__DOT__rd_wb] 
            = vlSelfRef.regdata_op;
    }
    vlSelfRef.pipeline_processor__DOT__cur_pc_ex = vlSelfRef.pipeline_processor__DOT__cur_pc_id;
    if ((1U & (~ ((IData)(pipeline_processor__DOT__mem_write_mem) 
                  & (~ (IData)(pipeline_processor__DOT__mem_read_mem)))))) {
        if (((IData)(pipeline_processor__DOT__mem_read_mem) 
             & (~ (IData)(pipeline_processor__DOT__mem_write_mem)))) {
            __Vdly__pipeline_processor__DOT__mem_read_data 
                = ((8U & (IData)(pipeline_processor__DOT__func3_mem))
                    ? ((4U & (IData)(pipeline_processor__DOT__func3_mem))
                        ? ((2U & (IData)(pipeline_processor__DOT__func3_mem))
                            ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                [(0x7fU & ((IData)(3U) 
                                           + pipeline_processor__DOT__ALU_result_mem))] 
                                << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                              [(0x7fU 
                                                & ((IData)(2U) 
                                                   + pipeline_processor__DOT__ALU_result_mem))] 
                                              << 0x10U) 
                                             | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                 [(0x7fU 
                                                   & ((IData)(1U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                 << 8U) 
                                                | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                [(0x7fU 
                                                  & pipeline_processor__DOT__ALU_result_mem)])))
                            : ((1U & (IData)(pipeline_processor__DOT__func3_mem))
                                ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)])))
                                : vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                               [(0x7fU & pipeline_processor__DOT__ALU_result_mem)]))
                        : ((2U & (IData)(pipeline_processor__DOT__func3_mem))
                            ? ((1U & (IData)(pipeline_processor__DOT__func3_mem))
                                ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)])))
                                : ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)]))))
                            : ((1U & (IData)(pipeline_processor__DOT__func3_mem))
                                ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)])))
                                : ((0x80U & vlSelfRef.pipeline_processor__DOT__mem_read_data)
                                    ? (0xffffff00U 
                                       | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                       [(0x7fU & pipeline_processor__DOT__ALU_result_mem)])
                                    : vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                   [(0x7fU & pipeline_processor__DOT__ALU_result_mem)]))))
                    : ((4U & (IData)(pipeline_processor__DOT__func3_mem))
                        ? ((2U & (IData)(pipeline_processor__DOT__func3_mem))
                            ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                [(0x7fU & ((IData)(3U) 
                                           + pipeline_processor__DOT__ALU_result_mem))] 
                                << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                              [(0x7fU 
                                                & ((IData)(2U) 
                                                   + pipeline_processor__DOT__ALU_result_mem))] 
                                              << 0x10U) 
                                             | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                 [(0x7fU 
                                                   & ((IData)(1U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                 << 8U) 
                                                | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                [(0x7fU 
                                                  & pipeline_processor__DOT__ALU_result_mem)])))
                            : ((1U & (IData)(pipeline_processor__DOT__func3_mem))
                                ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)])))
                                : vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                               [(0x7fU & pipeline_processor__DOT__ALU_result_mem)]))
                        : ((2U & (IData)(pipeline_processor__DOT__func3_mem))
                            ? ((1U & (IData)(pipeline_processor__DOT__func3_mem))
                                ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)])))
                                : ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)]))))
                            : ((1U & (IData)(pipeline_processor__DOT__func3_mem))
                                ? ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                    [(0x7fU & ((IData)(3U) 
                                               + pipeline_processor__DOT__ALU_result_mem))] 
                                    << 0x18U) | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                  [
                                                  (0x7fU 
                                                   & ((IData)(2U) 
                                                      + pipeline_processor__DOT__ALU_result_mem))] 
                                                  << 0x10U) 
                                                 | ((vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + pipeline_processor__DOT__ALU_result_mem))] 
                                                     << 8U) 
                                                    | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                                    [
                                                    (0x7fU 
                                                     & pipeline_processor__DOT__ALU_result_mem)])))
                                : ((0x80U & vlSelfRef.pipeline_processor__DOT__mem_read_data)
                                    ? (0xffffff00U 
                                       | vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                       [(0x7fU & pipeline_processor__DOT__ALU_result_mem)])
                                    : vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory
                                   [(0x7fU & pipeline_processor__DOT__ALU_result_mem)])))));
        }
    }
    if (((IData)(pipeline_processor__DOT__mem_write_mem) 
         & (~ (IData)(pipeline_processor__DOT__mem_read_mem)))) {
        if ((8U & (IData)(pipeline_processor__DOT__func3_mem))) {
            if ((4U & (IData)(pipeline_processor__DOT__func3_mem))) {
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 
                    = (pipeline_processor__DOT__rs2_data_mem 
                       >> 0x18U);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 
                    = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0 = 1U;
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 0x10U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1 
                    = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 8U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2 
                    = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3 
                    = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3 
                    = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
            } else if ((2U & (IData)(pipeline_processor__DOT__func3_mem))) {
                if ((1U & (IData)(pipeline_processor__DOT__func3_mem))) {
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 
                        = (pipeline_processor__DOT__rs2_data_mem 
                           >> 0x18U);
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 
                        = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
                    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4 = 1U;
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5 
                        = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                    >> 0x10U));
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5 
                        = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6 
                        = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                    >> 8U));
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6 
                        = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7 
                        = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7 
                        = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
                } else {
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 
                        = (pipeline_processor__DOT__rs2_data_mem 
                           >> 0x18U);
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 
                        = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
                    __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8 = 1U;
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9 
                        = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                    >> 0x10U));
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9 
                        = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10 
                        = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                    >> 8U));
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10 
                        = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
                    __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11 
                        = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                    __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11 
                        = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
                }
            } else if ((1U & (IData)(pipeline_processor__DOT__func3_mem))) {
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 
                    = (pipeline_processor__DOT__rs2_data_mem 
                       >> 0x18U);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 
                    = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12 = 1U;
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 0x10U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13 
                    = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 8U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14 
                    = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15 
                    = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15 
                    = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
            } else {
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 
                    = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 
                    = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
                __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16 = 1U;
            }
        } else if ((4U & (IData)(pipeline_processor__DOT__func3_mem))) {
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 
                = (pipeline_processor__DOT__rs2_data_mem 
                   >> 0x18U);
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 
                = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
            __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17 = 1U;
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18 
                = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                            >> 0x10U));
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18 
                = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19 
                = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                            >> 8U));
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19 
                = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20 
                = (0xffU & pipeline_processor__DOT__rs2_data_mem);
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20 
                = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
        } else if ((2U & (IData)(pipeline_processor__DOT__func3_mem))) {
            if ((1U & (IData)(pipeline_processor__DOT__func3_mem))) {
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 
                    = (pipeline_processor__DOT__rs2_data_mem 
                       >> 0x18U);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 
                    = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21 = 1U;
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 0x10U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22 
                    = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 8U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23 
                    = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24 
                    = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24 
                    = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
            } else {
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 
                    = (pipeline_processor__DOT__rs2_data_mem 
                       >> 0x18U);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 
                    = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25 = 1U;
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 0x10U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26 
                    = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27 
                    = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                                >> 8U));
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27 
                    = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
                __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28 
                    = (0xffU & pipeline_processor__DOT__rs2_data_mem);
                __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28 
                    = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
            }
        } else if ((1U & (IData)(pipeline_processor__DOT__func3_mem))) {
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 
                = (pipeline_processor__DOT__rs2_data_mem 
                   >> 0x18U);
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 
                = (0x7fU & ((IData)(3U) + pipeline_processor__DOT__ALU_result_mem));
            __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29 = 1U;
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30 
                = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                            >> 0x10U));
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30 
                = (0x7fU & ((IData)(2U) + pipeline_processor__DOT__ALU_result_mem));
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31 
                = (0xffU & (pipeline_processor__DOT__rs2_data_mem 
                            >> 8U));
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31 
                = (0x7fU & ((IData)(1U) + pipeline_processor__DOT__ALU_result_mem));
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32 
                = (0xffU & pipeline_processor__DOT__rs2_data_mem);
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32 
                = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
        } else {
            __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 
                = (0xffU & pipeline_processor__DOT__rs2_data_mem);
            __VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 
                = (0x7fU & pipeline_processor__DOT__ALU_result_mem);
            __VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33 = 1U;
        }
    }
    vlSelfRef.pipeline_processor__DOT__mem_to_reg_wb 
        = pipeline_processor__DOT__mem_to_reg_mem;
    vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_wb 
        = pipeline_processor__DOT__cur_pc_plus4_mem;
    vlSelfRef.pipeline_processor__DOT__jump_wb = pipeline_processor__DOT__jump_mem;
    vlSelfRef.pipeline_processor__DOT__ALU_result_wb 
        = pipeline_processor__DOT__ALU_result_mem;
    vlSelfRef.pipeline_processor__DOT__mem_read_data_wb 
        = vlSelfRef.pipeline_processor__DOT__mem_read_data;
    vlSelfRef.pipeline_processor__DOT__ins = vlSelfRef.pipeline_processor__DOT__instruction;
    if (vlSelfRef.pipeline_processor__DOT__ALUsrc_ex) {
        vlSelfRef.sig = 1U;
        vlSelfRef.data1_op = vlSelfRef.pipeline_processor__DOT__rs1_data_ex;
        vlSelfRef.data_2 = vlSelfRef.pipeline_processor__DOT__generated_imm_ex;
    } else {
        vlSelfRef.sig = 0U;
        vlSelfRef.data1_op = vlSelfRef.pipeline_processor__DOT__rs1_data_ex;
        vlSelfRef.data_2 = vlSelfRef.pipeline_processor__DOT__rs2_data_ex;
    }
    vlSelfRef.ALUop_op = vlSelfRef.pipeline_processor__DOT__ALUop_ex;
    __Vtableidx1 = vlSelfRef.pipeline_processor__DOT__opcode;
    vlSelfRef.pipeline_processor__DOT__branch = Vpipeline_processor__ConstPool__TABLE_hd79b39d9_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__mem_read = Vpipeline_processor__ConstPool__TABLE_h3534176c_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__mem_to_reg = 
        Vpipeline_processor__ConstPool__TABLE_h3534176c_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__ALUop = Vpipeline_processor__ConstPool__TABLE_h3056fe11_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__mem_write = 
        Vpipeline_processor__ConstPool__TABLE_h7fdaa79b_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__ALUsrc = Vpipeline_processor__ConstPool__TABLE_h8198974f_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__reg_write = 
        Vpipeline_processor__ConstPool__TABLE_hfc58f03c_0
        [__Vtableidx1];
    vlSelfRef.pipeline_processor__DOT__jump = Vpipeline_processor__ConstPool__TABLE_hd02a2354_0
        [__Vtableidx1];
    vlSelfRef.func3_op = vlSelfRef.pipeline_processor__DOT__func3_ex;
    __Vtableidx2 = (((IData)(vlSelfRef.pipeline_processor__DOT__func3_ex) 
                     << 2U) | (IData)(vlSelfRef.pipeline_processor__DOT__ALUop_ex));
    pipeline_processor__DOT__ALU_con = Vpipeline_processor__ConstPool__TABLE_hdd130ed4_0
        [__Vtableidx2];
    vlSelfRef.ra_op = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [1U];
    vlSelfRef.t0_op = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [5U];
    vlSelfRef.t1_op = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [6U];
    vlSelfRef.t2_op = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [7U];
    vlSelfRef.t3_op = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [0x1cU];
    vlSelfRef.t4_op = vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers
        [0x1dU];
    vlSelfRef.add_sum_op = (vlSelfRef.pipeline_processor__DOT__cur_pc_ex 
                            + vlSelfRef.pipeline_processor__DOT__generated_imm_ex);
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v0;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v1;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v2;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v3;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v4;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v5;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v6;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v7;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v8;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v9;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v10;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v11;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v12;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v13;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v14;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v15;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v16;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v17;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v18;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v19;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v20;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v21;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v22;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v23;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v24;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v25;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v26;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v27;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v28;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v29;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v30;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v31;
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v32;
    }
    if (__VdlySet__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[__VdlyDim0__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33] 
            = __VdlyVal__pipeline_processor__DOT__myDataMem__DOT__data_memory__v33;
    }
    vlSelfRef.pipeline_processor__DOT__rd = (0x1fU 
                                             & (vlSelfRef.pipeline_processor__DOT__instruction 
                                                >> 7U));
    vlSelfRef.pipeline_processor__DOT__mem_read_data 
        = __Vdly__pipeline_processor__DOT__mem_read_data;
    vlSelfRef.pipeline_processor__DOT__rs1 = (0x1fU 
                                              & (vlSelfRef.pipeline_processor__DOT__instruction 
                                                 >> 0xfU));
    vlSelfRef.pipeline_processor__DOT__rs2 = (0x1fU 
                                              & (vlSelfRef.pipeline_processor__DOT__instruction 
                                                 >> 0x14U));
    vlSelfRef.mem_to_reg_op = vlSelfRef.pipeline_processor__DOT__mem_to_reg;
    vlSelfRef.ALU_con_op = pipeline_processor__DOT__ALU_con;
    vlSelfRef.pipeline_processor__DOT__myALU__DOT__n 
        = ((0xffffffe0U & vlSelfRef.pipeline_processor__DOT__myALU__DOT__n) 
           | (0x1fU & vlSelfRef.data_2));
    pipeline_processor__DOT__myALU__DOT__sub = (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                                                - vlSelfRef.data_2);
    if ((8U & (IData)(pipeline_processor__DOT__ALU_con))) {
        if ((4U & (IData)(pipeline_processor__DOT__ALU_con))) {
            if ((2U & (IData)(pipeline_processor__DOT__ALU_con))) {
                vlSelfRef.pipeline_processor__DOT__ALU_result = 0U;
            } else if ((1U & (IData)(pipeline_processor__DOT__ALU_con))) {
                vlSelfRef.pipeline_processor__DOT__ALU_result = 0U;
            } else {
                vlSelfRef.pipeline_processor__DOT__myALU__DOT__i 
                    = ((IData)(0x1fU) - vlSelfRef.pipeline_processor__DOT__myALU__DOT__n);
                while (VL_LTS_III(32, 0U, vlSelfRef.pipeline_processor__DOT__myALU__DOT__i)) {
                    vlSelfRef.pipeline_processor__DOT__ALU_result 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelfRef.pipeline_processor__DOT__myALU__DOT__i))) 
                            & vlSelfRef.pipeline_processor__DOT__ALU_result) 
                           | (0xffffffffULL & ((1U 
                                                & (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                                                   >> 
                                                   (0x1fU 
                                                    & (vlSelfRef.pipeline_processor__DOT__myALU__DOT__i 
                                                       + vlSelfRef.pipeline_processor__DOT__myALU__DOT__n)))) 
                                               << (0x1fU 
                                                   & vlSelfRef.pipeline_processor__DOT__myALU__DOT__i))));
                    vlSelfRef.pipeline_processor__DOT__myALU__DOT__i 
                        = (vlSelfRef.pipeline_processor__DOT__myALU__DOT__i 
                           - (IData)(1U));
                }
                vlSelfRef.pipeline_processor__DOT__ALU_result 
                    = ((0xfffffffeU & vlSelfRef.pipeline_processor__DOT__ALU_result) 
                       | (1U & (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                                >> (0x1fU & vlSelfRef.pipeline_processor__DOT__myALU__DOT__n))));
                vlSelfRef.pipeline_processor__DOT__myALU__DOT__i = 0x1fU;
                while (VL_GTS_III(32, vlSelfRef.pipeline_processor__DOT__myALU__DOT__i, 
                                  ((IData)(0x1fU) - vlSelfRef.pipeline_processor__DOT__myALU__DOT__n))) {
                    vlSelfRef.pipeline_processor__DOT__ALU_result 
                        = (((~ ((IData)(1U) << (0x1fU 
                                                & vlSelfRef.pipeline_processor__DOT__myALU__DOT__i))) 
                            & vlSelfRef.pipeline_processor__DOT__ALU_result) 
                           | (0xffffffffULL & ((vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                                                >> 0x1fU) 
                                               << (0x1fU 
                                                   & vlSelfRef.pipeline_processor__DOT__myALU__DOT__i))));
                    vlSelfRef.pipeline_processor__DOT__myALU__DOT__i 
                        = (vlSelfRef.pipeline_processor__DOT__myALU__DOT__i 
                           - (IData)(1U));
                }
            }
        } else {
            vlSelfRef.pipeline_processor__DOT__ALU_result 
                = ((2U & (IData)(pipeline_processor__DOT__ALU_con))
                    ? 0U : ((1U & (IData)(pipeline_processor__DOT__ALU_con))
                             ? VL_SHIFTR_III(32,32,32, vlSelfRef.pipeline_processor__DOT__rs1_data_ex, vlSelfRef.pipeline_processor__DOT__myALU__DOT__n)
                             : ((pipeline_processor__DOT__myALU__DOT__sub 
                                 >> 0x1fU) ? 0U : 1U)));
        }
    } else {
        vlSelfRef.pipeline_processor__DOT__ALU_result 
            = ((4U & (IData)(pipeline_processor__DOT__ALU_con))
                ? ((2U & (IData)(pipeline_processor__DOT__ALU_con))
                    ? ((1U & (IData)(pipeline_processor__DOT__ALU_con))
                        ? ((pipeline_processor__DOT__myALU__DOT__sub 
                            >> 0x1fU) ? 1U : 0U) : 
                       (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                        - vlSelfRef.data_2)) : ((1U 
                                                 & (IData)(pipeline_processor__DOT__ALU_con))
                                                 ? 0U
                                                 : 
                                                VL_SHIFTL_III(32,32,32, vlSelfRef.pipeline_processor__DOT__rs1_data_ex, vlSelfRef.pipeline_processor__DOT__myALU__DOT__n)))
                : ((2U & (IData)(pipeline_processor__DOT__ALU_con))
                    ? ((1U & (IData)(pipeline_processor__DOT__ALU_con))
                        ? ((vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                            == vlSelfRef.data_2) ? 1U
                            : 0U) : (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                                     + vlSelfRef.data_2))
                    : ((1U & (IData)(pipeline_processor__DOT__ALU_con))
                        ? (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                           | vlSelfRef.data_2) : (vlSelfRef.pipeline_processor__DOT__rs1_data_ex 
                                                  & vlSelfRef.data_2))));
    }
    vlSelfRef.pipeline_processor__DOT__zero = (0U == vlSelfRef.pipeline_processor__DOT__ALU_result);
    vlSelfRef.pipeline_processor__DOT__func3 = ((8U 
                                                 & (vlSelfRef.pipeline_processor__DOT__instruction 
                                                    >> 0x1bU)) 
                                                | (7U 
                                                   & (vlSelfRef.pipeline_processor__DOT__instruction 
                                                      >> 0xcU)));
    vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_id 
        = ((IData)(4U) + vlSelfRef.pipeline_processor__DOT__cur_pc);
    vlSelfRef.pipeline_processor__DOT__rd_wb = pipeline_processor__DOT__rd_mem;
    vlSelfRef.pipeline_processor__DOT__reg_write_wb 
        = pipeline_processor__DOT__reg_write_mem;
    vlSelfRef.pipeline_processor__DOT__cur_pc_id = vlSelfRef.pipeline_processor__DOT__cur_pc;
    vlSelfRef.mem_read_data_op = vlSelfRef.pipeline_processor__DOT__mem_read_data_wb;
    vlSelfRef.regdata_op = ((IData)(vlSelfRef.pipeline_processor__DOT__jump_wb)
                             ? vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_wb
                             : ((IData)(vlSelfRef.pipeline_processor__DOT__mem_to_reg_wb)
                                 ? vlSelfRef.pipeline_processor__DOT__mem_read_data_wb
                                 : vlSelfRef.pipeline_processor__DOT__ALU_result_wb));
    vlSelfRef.ins_op = vlSelfRef.pipeline_processor__DOT__ins;
    vlSelfRef.pipeline_processor__DOT__generated_imm 
        = ((0x40U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
            ? ((0x20U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                    ? 0U : ((8U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                             ? ((4U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                 ? ((2U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                     ? ((1U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                         ? ((vlSelfRef.pipeline_processor__DOT__ins 
                                             >> 0x1fU)
                                             ? (0x200000U 
                                                | ((0x100000U 
                                                    & (vlSelfRef.pipeline_processor__DOT__ins 
                                                       >> 0xbU)) 
                                                   | ((0xff000U 
                                                       & vlSelfRef.pipeline_processor__DOT__ins) 
                                                      | ((0x800U 
                                                          & (vlSelfRef.pipeline_processor__DOT__ins 
                                                             >> 9U)) 
                                                         | (0x7feU 
                                                            & (vlSelfRef.pipeline_processor__DOT__ins 
                                                               >> 0x14U))))))
                                             : ((0x100000U 
                                                 & (vlSelfRef.pipeline_processor__DOT__ins 
                                                    >> 0xbU)) 
                                                | ((0xff000U 
                                                    & vlSelfRef.pipeline_processor__DOT__ins) 
                                                   | ((0x800U 
                                                       & (vlSelfRef.pipeline_processor__DOT__ins 
                                                          >> 9U)) 
                                                      | (0x7feU 
                                                         & (vlSelfRef.pipeline_processor__DOT__ins 
                                                            >> 0x14U))))))
                                         : 0U) : 0U)
                                 : 0U) : ((4U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                           ? ((2U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                   ? 
                                                  ((vlSelfRef.pipeline_processor__DOT__ins 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0x1000U 
                                                    | (vlSelfRef.pipeline_processor__DOT__ins 
                                                       >> 0x14U))
                                                    : 
                                                   (vlSelfRef.pipeline_processor__DOT__ins 
                                                    >> 0x14U))
                                                   : 0U)
                                               : 0U)
                                           : ((2U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                               ? ((1U 
                                                   & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                   ? 
                                                  ((vlSelfRef.pipeline_processor__DOT__ins 
                                                    >> 0x1fU)
                                                    ? 
                                                   (0x2000U 
                                                    | ((0x1000U 
                                                        & (vlSelfRef.pipeline_processor__DOT__ins 
                                                           >> 0x13U)) 
                                                       | ((0x800U 
                                                           & (vlSelfRef.pipeline_processor__DOT__ins 
                                                              << 4U)) 
                                                          | ((0x7e0U 
                                                              & (vlSelfRef.pipeline_processor__DOT__ins 
                                                                 >> 0x14U)) 
                                                             | (0x1eU 
                                                                & (vlSelfRef.pipeline_processor__DOT__ins 
                                                                   >> 7U))))))
                                                    : 
                                                   ((0x1000U 
                                                     & (vlSelfRef.pipeline_processor__DOT__ins 
                                                        >> 0x13U)) 
                                                    | ((0x800U 
                                                        & (vlSelfRef.pipeline_processor__DOT__ins 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelfRef.pipeline_processor__DOT__ins 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelfRef.pipeline_processor__DOT__ins 
                                                                >> 7U))))))
                                                   : 0U)
                                               : 0U))))
                : 0U) : ((0x20U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                          ? ((0x10U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                              ? 0U : ((8U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                       ? 0U : ((4U 
                                                & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                ? 0U
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                     ? 
                                                    ((vlSelfRef.pipeline_processor__DOT__ins 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0x1000U 
                                                      | ((0xfe0U 
                                                          & (vlSelfRef.pipeline_processor__DOT__ins 
                                                             >> 0x14U)) 
                                                         | (0x1fU 
                                                            & (vlSelfRef.pipeline_processor__DOT__ins 
                                                               >> 7U))))
                                                      : 
                                                     ((0xfe0U 
                                                       & (vlSelfRef.pipeline_processor__DOT__ins 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (vlSelfRef.pipeline_processor__DOT__ins 
                                                            >> 7U))))
                                                     : 0U)
                                                    : 0U))))
                          : ((0x10U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                              ? ((8U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                     ? 
                                                    ((vlSelfRef.pipeline_processor__DOT__ins 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0x1000U 
                                                      | (vlSelfRef.pipeline_processor__DOT__ins 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelfRef.pipeline_processor__DOT__ins 
                                                      >> 0x14U))
                                                     : 0U)
                                                    : 0U)))
                              : ((8U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                  ? 0U : ((4U & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                           ? 0U : (
                                                   (2U 
                                                    & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelfRef.pipeline_processor__DOT__opcode))
                                                     ? 
                                                    ((vlSelfRef.pipeline_processor__DOT__ins 
                                                      >> 0x1fU)
                                                      ? 
                                                     (0x1000U 
                                                      | (vlSelfRef.pipeline_processor__DOT__ins 
                                                         >> 0x14U))
                                                      : 
                                                     (vlSelfRef.pipeline_processor__DOT__ins 
                                                      >> 0x14U))
                                                     : 0U)
                                                    : 0U))))));
    vlSelfRef.rd_op = vlSelfRef.pipeline_processor__DOT__rd_wb;
    vlSelfRef.reg_write_op = vlSelfRef.pipeline_processor__DOT__reg_write_wb;
    vlSelfRef.cur_pc_op = vlSelfRef.pipeline_processor__DOT__cur_pc_id;
    vlSelfRef.pipeline_processor__DOT__cur_pc = (((IData)(pipeline_processor__DOT__branch_mem) 
                                                  & ((IData)(pipeline_processor__DOT__jump_mem) 
                                                     | (IData)(pipeline_processor__DOT__zero_mem)))
                                                  ? pipeline_processor__DOT__add_sum_mem
                                                  : 
                                                 (((~ (IData)(pipeline_processor__DOT__branch_mem)) 
                                                   & (IData)(pipeline_processor__DOT__jump_mem))
                                                   ? pipeline_processor__DOT__ALU_result_mem
                                                   : pipeline_processor__DOT__cur_pc_plus4_mem));
    vlSelfRef.pipeline_processor__DOT__instruction 
        = ((((0x137U >= (0x1ffU & ((IData)(3U) + vlSelfRef.pipeline_processor__DOT__cur_pc)))
              ? vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom
             [(0x1ffU & ((IData)(3U) + vlSelfRef.pipeline_processor__DOT__cur_pc))]
              : 0U) << 0x18U) | ((((0x137U >= (0x1ffU 
                                               & ((IData)(2U) 
                                                  + vlSelfRef.pipeline_processor__DOT__cur_pc)))
                                    ? vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom
                                   [(0x1ffU & ((IData)(2U) 
                                               + vlSelfRef.pipeline_processor__DOT__cur_pc))]
                                    : 0U) << 0x10U) 
                                 | ((((0x137U >= (0x1ffU 
                                                  & ((IData)(1U) 
                                                     + vlSelfRef.pipeline_processor__DOT__cur_pc)))
                                       ? vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom
                                      [(0x1ffU & ((IData)(1U) 
                                                  + vlSelfRef.pipeline_processor__DOT__cur_pc))]
                                       : 0U) << 8U) 
                                    | ((0x137U >= (0x1ffU 
                                                   & vlSelfRef.pipeline_processor__DOT__cur_pc))
                                        ? vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom
                                       [(0x1ffU & vlSelfRef.pipeline_processor__DOT__cur_pc)]
                                        : 0U))));
}

void Vpipeline_processor___024root___eval_triggers__act(Vpipeline_processor___024root* vlSelf);

bool Vpipeline_processor___024root___eval_phase__act(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vpipeline_processor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vpipeline_processor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vpipeline_processor___024root___eval_phase__nba(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vpipeline_processor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_processor___024root___dump_triggers__nba(Vpipeline_processor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_processor___024root___dump_triggers__act(Vpipeline_processor___024root* vlSelf);
#endif  // VL_DEBUG

void Vpipeline_processor___024root___eval(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vpipeline_processor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("pipeline_processor.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vpipeline_processor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("pipeline_processor.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vpipeline_processor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vpipeline_processor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vpipeline_processor___024root___eval_debug_assertions(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
}
#endif  // VL_DEBUG
