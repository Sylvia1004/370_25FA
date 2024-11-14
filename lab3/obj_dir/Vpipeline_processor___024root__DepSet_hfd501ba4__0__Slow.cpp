// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_processor.h for the primary calling header

#include "Vpipeline_processor__pch.h"
#include "Vpipeline_processor___024root.h"

VL_ATTR_COLD void Vpipeline_processor___024root___eval_static__TOP(Vpipeline_processor___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_processor___024root___eval_static(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline_processor___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vpipeline_processor___024root___eval_static__TOP(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_static__TOP\n"); );
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
    // Body
    vlSelfRef.pipeline_processor__DOT__cur_pc = 0U;
    vlSelfRef.pipeline_processor__DOT__opcode = 0U;
    vlSelfRef.pipeline_processor__DOT__cur_pc_id = 0U;
    vlSelfRef.pipeline_processor__DOT__rs1 = 0U;
    vlSelfRef.pipeline_processor__DOT__rs2 = 0U;
    vlSelfRef.pipeline_processor__DOT__rd = 0U;
    vlSelfRef.pipeline_processor__DOT__ins = 0U;
    vlSelfRef.pipeline_processor__DOT__func3 = 0U;
    vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_id = 0U;
    vlSelfRef.pipeline_processor__DOT__ALUsrc = 0U;
    vlSelfRef.pipeline_processor__DOT__ALUop = 0U;
    vlSelfRef.pipeline_processor__DOT__branch = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_read = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_write = 0U;
    vlSelfRef.pipeline_processor__DOT__reg_write = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_to_reg = 0U;
    vlSelfRef.pipeline_processor__DOT__jump = 0U;
    vlSelfRef.pipeline_processor__DOT__ALUsrc_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__ALUop_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__branch_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_read_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_write_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__reg_write_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_to_reg_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__jump_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__cur_pc_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__rs1_data_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__rs2_data_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__generated_imm_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__func3_ex = 0U;
    vlSelfRef.pipeline_processor__DOT__rd_ex = 0U;
    pipeline_processor__DOT__myALU__DOT__sub = 0U;
    pipeline_processor__DOT__branch_mem = 0U;
    pipeline_processor__DOT__mem_read_mem = 0U;
    pipeline_processor__DOT__mem_write_mem = 0U;
    pipeline_processor__DOT__reg_write_mem = 0U;
    pipeline_processor__DOT__mem_to_reg_mem = 0U;
    pipeline_processor__DOT__jump_mem = 0U;
    pipeline_processor__DOT__cur_pc_plus4_mem = 0U;
    pipeline_processor__DOT__add_sum_mem = 0U;
    pipeline_processor__DOT__zero_mem = 0U;
    pipeline_processor__DOT__ALU_result_mem = 0U;
    pipeline_processor__DOT__rs2_data_mem = 0U;
    pipeline_processor__DOT__rd_mem = 0U;
    pipeline_processor__DOT__func3_mem = 0U;
    vlSelfRef.pipeline_processor__DOT__reg_write_wb = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_to_reg_wb = 0U;
    vlSelfRef.pipeline_processor__DOT__jump_wb = 0U;
    vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_wb = 0U;
    vlSelfRef.pipeline_processor__DOT__rd_wb = 0U;
    vlSelfRef.pipeline_processor__DOT__ALU_result_wb = 0U;
    vlSelfRef.pipeline_processor__DOT__mem_read_data_wb = 0U;
}

VL_ATTR_COLD void Vpipeline_processor___024root___eval_initial__TOP(Vpipeline_processor___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_processor___024root___eval_initial(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vpipeline_processor___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vpipeline_processor___024root___eval_initial__TOP(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ pipeline_processor__DOT__myInstrMem__DOT__i;
    pipeline_processor__DOT__myInstrMem__DOT__i = 0;
    IData/*31:0*/ pipeline_processor__DOT__myDataMem__DOT__i;
    pipeline_processor__DOT__myDataMem__DOT__i = 0;
    // Body
    pipeline_processor__DOT__myInstrMem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x1ffU, pipeline_processor__DOT__myInstrMem__DOT__i)) {
        vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT____Vlvbound_h919d4f68__0 = 0U;
        if (VL_LIKELY((0x137U >= (0x1ffU & pipeline_processor__DOT__myInstrMem__DOT__i)))) {
            vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[(0x1ffU 
                                                                     & pipeline_processor__DOT__myInstrMem__DOT__i)] 
                = vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT____Vlvbound_h919d4f68__0;
        }
        pipeline_processor__DOT__myInstrMem__DOT__i 
            = ((IData)(1U) + pipeline_processor__DOT__myInstrMem__DOT__i);
    }
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[3U] = 0x19U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[2U] = 0x30U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[1U] = 2U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0U] = 0x93U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[5U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[4U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xaU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[9U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[8U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xfU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xeU] = 0x52U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xdU] = 0x83U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xcU] = 0x33U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x13U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x17U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x16U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x15U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x14U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x1bU] = 0x40U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x1aU] = 0x60U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x19U] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x18U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x1fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x1eU] = 0x62U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x1dU] = 0xfeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x1cU] = 0x33U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x23U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x22U] = 0x20U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x21U] = 0xeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x20U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x27U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x26U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x25U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x24U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x2bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x2aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x29U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x28U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x2fU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x2eU] = 0xc3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x2dU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x2cU] = 0x33U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x33U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x32U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x31U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x30U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x37U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x36U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x35U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x34U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x3bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x3aU] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x39U] = 0xe3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x38U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x3fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x3eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x3dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x3cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x43U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x42U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x41U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x40U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x47U] = 0x73U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x46U] = 0x23U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x45U] = 0xfeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x44U] = 0x93U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x4bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x4aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x49U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x48U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x4fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x4eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x4dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x4cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x53U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x52U] = 0x5eU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x51U] = 0xdeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x50U] = 0x93U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x57U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x56U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x55U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x54U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x5bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x5aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x59U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x58U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x5fU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x5eU] = 0xc3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x5dU] = 0xd3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x5cU] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x63U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x62U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x61U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x60U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x67U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x66U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x65U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x64U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x6bU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x6aU] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x69U] = 0x93U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x68U] = 0x93U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x6fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x6eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x6dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x6cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x73U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x72U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x71U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x70U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x77U] = 0x41U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x76U] = 0xc3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x75U] = 0xd3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x74U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x7bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x7aU] = 0x62U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x79U] = 0x98U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x78U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x7fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x7eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x7dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x7cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x83U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x82U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x81U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x80U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x87U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x86U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x85U] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x84U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x8bU] = 2U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x8aU] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x89U] = 0x88U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x88U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x8fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x8eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x8dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x8cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x93U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x92U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x91U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x90U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x97U] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x96U] = 0xd3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x95U] = 0xd2U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x94U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x9bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x9aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x99U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x98U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x9fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x9eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x9dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x9cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa2U] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa1U] = 0x82U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa0U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa5U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa4U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xabU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xaaU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa9U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xa8U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xafU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xaeU] = 0xd3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xadU] = 0xc8U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xacU] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb2U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb1U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb0U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb5U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb4U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbbU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbaU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb9U] = 2U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xb8U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbfU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbeU] = 0x53U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbdU] = 0x9cU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xbcU] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc2U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc1U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc0U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc5U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc4U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xcbU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xcaU] = 0x53U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc9U] = 0x88U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xc8U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xcfU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xceU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xcdU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xccU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd2U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd1U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd0U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd5U] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd4U] = 0x33U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xdbU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xdaU] = 0xd3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd9U] = 0x4cU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xd8U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xdfU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xdeU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xddU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xdcU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe2U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe1U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe0U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe7U] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe6U] = 0xc3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe5U] = 0x58U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe4U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xebU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xeaU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe9U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xe8U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xefU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xeeU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xedU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xecU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf2U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf1U] = 0xeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf0U] = 0x33U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf5U] = 0xeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf4U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xfbU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xfaU] = 0x80U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf9U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xf8U] = 0xefU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xffU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xfeU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xfdU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0xfcU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x103U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x102U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x101U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x100U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x107U] = 2U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x106U] = 0x72U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x105U] = 0x88U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x104U] = 0x63U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x109U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x108U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x10cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x113U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x112U] = 0x51U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x111U] = 0x20U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x110U] = 0x23U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x117U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x116U] = 0x61U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x115U] = 2U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x114U] = 0x23U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11aU] = 1U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x119U] = 0x2eU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x118U] = 0x83U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11eU] = 0x41U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11dU] = 0xeU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x11cU] = 0x83U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x123U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x122U] = 0x41U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x121U] = 0x4eU;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x120U] = 0x83U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x127U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x126U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x125U] = 0x80U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x124U] = 0x67U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x129U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x128U] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12fU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x12cU] = 0x13U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x133U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x132U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x131U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x130U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x137U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x136U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x135U] = 3U;
    vlSelfRef.pipeline_processor__DOT__myInstrMem__DOT__rom[0x134U] = 0xb3U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[1U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[2U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[3U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[4U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[5U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[6U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[7U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[8U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[9U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0xaU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0xbU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0xcU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0xdU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0xeU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0xfU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x10U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x11U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x12U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x13U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x14U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x15U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x16U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x17U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x18U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x19U] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x1aU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x1bU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x1cU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x1dU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x1eU] = 0U;
    vlSelfRef.pipeline_processor__DOT__myRegFile__DOT__registers[0x1fU] = 0U;
    pipeline_processor__DOT__myDataMem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, pipeline_processor__DOT__myDataMem__DOT__i)) {
        vlSelfRef.pipeline_processor__DOT__myDataMem__DOT__data_memory[(0x7fU 
                                                                        & pipeline_processor__DOT__myDataMem__DOT__i)] = 0U;
        pipeline_processor__DOT__myDataMem__DOT__i 
            = ((IData)(1U) + pipeline_processor__DOT__myDataMem__DOT__i);
    }
}

VL_ATTR_COLD void Vpipeline_processor___024root___eval_final(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_processor___024root___dump_triggers__stl(Vpipeline_processor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vpipeline_processor___024root___eval_phase__stl(Vpipeline_processor___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_processor___024root___eval_settle(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_settle\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vpipeline_processor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("pipeline_processor.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vpipeline_processor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_processor___024root___dump_triggers__stl(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___dump_triggers__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipeline_processor___024root___stl_sequent__TOP__0(Vpipeline_processor___024root* vlSelf);

VL_ATTR_COLD void Vpipeline_processor___024root___eval_stl(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vpipeline_processor___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 64> Vpipeline_processor__ConstPool__TABLE_hdd130ed4_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_hd79b39d9_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h3534176c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h3056fe11_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h7fdaa79b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_h8198974f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_hfc58f03c_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vpipeline_processor__ConstPool__TABLE_hd02a2354_0;

VL_ATTR_COLD void Vpipeline_processor___024root___stl_sequent__TOP__0(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*3:0*/ pipeline_processor__DOT__ALU_con;
    pipeline_processor__DOT__ALU_con = 0;
    IData/*31:0*/ pipeline_processor__DOT__myALU__DOT__sub;
    pipeline_processor__DOT__myALU__DOT__sub = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
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
    vlSelfRef.ins_op = vlSelfRef.pipeline_processor__DOT__ins;
    vlSelfRef.sig = vlSelfRef.pipeline_processor__DOT__ALUsrc_ex;
    vlSelfRef.mem_read_data_op = vlSelfRef.pipeline_processor__DOT__mem_read_data_wb;
    vlSelfRef.cur_pc_op = vlSelfRef.pipeline_processor__DOT__cur_pc_id;
    vlSelfRef.ALUop_op = vlSelfRef.pipeline_processor__DOT__ALUop_ex;
    vlSelfRef.func3_op = vlSelfRef.pipeline_processor__DOT__func3_ex;
    vlSelfRef.data1_op = vlSelfRef.pipeline_processor__DOT__rs1_data_ex;
    vlSelfRef.rd_op = vlSelfRef.pipeline_processor__DOT__rd_wb;
    vlSelfRef.reg_write_op = vlSelfRef.pipeline_processor__DOT__reg_write_wb;
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
    vlSelfRef.add_sum_op = (vlSelfRef.pipeline_processor__DOT__cur_pc_ex 
                            + vlSelfRef.pipeline_processor__DOT__generated_imm_ex);
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
    vlSelfRef.regdata_op = ((IData)(vlSelfRef.pipeline_processor__DOT__jump_wb)
                             ? vlSelfRef.pipeline_processor__DOT__cur_pc_plus4_wb
                             : ((IData)(vlSelfRef.pipeline_processor__DOT__mem_to_reg_wb)
                                 ? vlSelfRef.pipeline_processor__DOT__mem_read_data_wb
                                 : vlSelfRef.pipeline_processor__DOT__ALU_result_wb));
    vlSelfRef.data_2 = ((IData)(vlSelfRef.pipeline_processor__DOT__ALUsrc_ex)
                         ? vlSelfRef.pipeline_processor__DOT__generated_imm_ex
                         : vlSelfRef.pipeline_processor__DOT__rs2_data_ex);
    __Vtableidx2 = (((IData)(vlSelfRef.pipeline_processor__DOT__func3_ex) 
                     << 2U) | (IData)(vlSelfRef.pipeline_processor__DOT__ALUop_ex));
    pipeline_processor__DOT__ALU_con = Vpipeline_processor__ConstPool__TABLE_hdd130ed4_0
        [__Vtableidx2];
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
    vlSelfRef.mem_to_reg_op = vlSelfRef.pipeline_processor__DOT__mem_to_reg;
}

VL_ATTR_COLD void Vpipeline_processor___024root___eval_triggers__stl(Vpipeline_processor___024root* vlSelf);

VL_ATTR_COLD bool Vpipeline_processor___024root___eval_phase__stl(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vpipeline_processor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vpipeline_processor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_processor___024root___dump_triggers__act(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vpipeline_processor___024root___dump_triggers__nba(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vpipeline_processor___024root___ctor_var_reset(Vpipeline_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vpipeline_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vpipeline_processor___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->ra_op = VL_RAND_RESET_I(32);
    vlSelf->t0_op = VL_RAND_RESET_I(32);
    vlSelf->t1_op = VL_RAND_RESET_I(32);
    vlSelf->t2_op = VL_RAND_RESET_I(32);
    vlSelf->t3_op = VL_RAND_RESET_I(32);
    vlSelf->t4_op = VL_RAND_RESET_I(32);
    vlSelf->ins_op = VL_RAND_RESET_I(32);
    vlSelf->data_2 = VL_RAND_RESET_I(32);
    vlSelf->regdata_op = VL_RAND_RESET_I(32);
    vlSelf->cur_pc_op = VL_RAND_RESET_I(32);
    vlSelf->sig = VL_RAND_RESET_I(1);
    vlSelf->ALU_con_op = VL_RAND_RESET_I(4);
    vlSelf->ALUop_op = VL_RAND_RESET_I(2);
    vlSelf->func3_op = VL_RAND_RESET_I(4);
    vlSelf->data1_op = VL_RAND_RESET_I(32);
    vlSelf->add_sum_op = VL_RAND_RESET_I(32);
    vlSelf->rd_op = VL_RAND_RESET_I(5);
    vlSelf->reg_write_op = VL_RAND_RESET_I(1);
    vlSelf->write_reg_data_op = VL_RAND_RESET_I(32);
    vlSelf->mem_read_data_op = VL_RAND_RESET_I(32);
    vlSelf->mem_to_reg_op = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__ALUsrc = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__jump = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__ALUsrc_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__branch_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_read_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_write_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__reg_write_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_to_reg_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__jump_ex = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__reg_write_wb = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__mem_to_reg_wb = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__jump_wb = VL_RAND_RESET_I(1);
    vlSelf->pipeline_processor__DOT__ALUop = VL_RAND_RESET_I(2);
    vlSelf->pipeline_processor__DOT__ALUop_ex = VL_RAND_RESET_I(2);
    vlSelf->pipeline_processor__DOT__func3 = VL_RAND_RESET_I(4);
    vlSelf->pipeline_processor__DOT__func3_ex = VL_RAND_RESET_I(4);
    vlSelf->pipeline_processor__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->pipeline_processor__DOT__rs2 = VL_RAND_RESET_I(5);
    vlSelf->pipeline_processor__DOT__rd = VL_RAND_RESET_I(5);
    vlSelf->pipeline_processor__DOT__rd_ex = VL_RAND_RESET_I(5);
    vlSelf->pipeline_processor__DOT__rd_wb = VL_RAND_RESET_I(5);
    vlSelf->pipeline_processor__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->pipeline_processor__DOT__cur_pc = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__cur_pc_id = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__ins = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__generated_imm = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__cur_pc_ex = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__cur_pc_plus4_id = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__cur_pc_plus4_ex = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__rs1_data_ex = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__rs2_data_ex = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__generated_imm_ex = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__ALU_result = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__mem_read_data = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__mem_read_data_wb = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__cur_pc_plus4_wb = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__ALU_result_wb = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 312; ++__Vi0) {
        vlSelf->pipeline_processor__DOT__myInstrMem__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->pipeline_processor__DOT__myInstrMem__DOT____Vlvbound_h919d4f68__0 = VL_RAND_RESET_I(8);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->pipeline_processor__DOT__myRegFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->pipeline_processor__DOT__myALU__DOT__n = VL_RAND_RESET_I(32);
    vlSelf->pipeline_processor__DOT__myALU__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->pipeline_processor__DOT__myDataMem__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}
