// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v_processor.h for the primary calling header

#include "Vrisc_v_processor__pch.h"
#include "Vrisc_v_processor___024root.h"

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_static__TOP(Vrisc_v_processor___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_static(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_static\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrisc_v_processor___024root___eval_static__TOP(vlSelf);
}

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_static__TOP(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_static__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__opcode = 0U;
    vlSelfRef.risc_v_processor__DOT__rs1_add = 0U;
    vlSelfRef.risc_v_processor__DOT__rs2_add = 0U;
    vlSelfRef.risc_v_processor__DOT__rd_add = 0U;
    vlSelfRef.risc_v_processor__DOT__ins_for_ALU = 0U;
}

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_initial__TOP(Vrisc_v_processor___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_initial(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vrisc_v_processor___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc__0 
        = vlSelfRef.risc_v_processor__DOT__cur_pc;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__generated_imm__0 
        = vlSelfRef.risc_v_processor__DOT__generated_imm;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__instruction__0 
        = vlSelfRef.risc_v_processor__DOT__instruction;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__opcode__0 
        = vlSelfRef.risc_v_processor__DOT__opcode;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_control__0 
        = vlSelfRef.risc_v_processor__DOT__ALU_control;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_data__0 
        = vlSelfRef.risc_v_processor__DOT__rs1_data;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__source2_data__0 
        = vlSelfRef.risc_v_processor__DOT__source2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0 
        = vlSelfRef.risc_v_processor__DOT__ALU_result;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rd_add__0 
        = vlSelfRef.risc_v_processor__DOT__rd_add;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__reg_write__0 
        = vlSelfRef.risc_v_processor__DOT__reg_write;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__write_reg_data__0 
        = vlSelfRef.risc_v_processor__DOT__write_reg_data;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_add__0 
        = vlSelfRef.risc_v_processor__DOT__rs1_add;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_add__0 
        = vlSelfRef.risc_v_processor__DOT__rs2_add;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_read__0 
        = vlSelfRef.risc_v_processor__DOT__mem_read;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_write__0 
        = vlSelfRef.risc_v_processor__DOT__mem_write;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_data__0 
        = vlSelfRef.risc_v_processor__DOT__rs2_data;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_op__0 
        = vlSelfRef.risc_v_processor__DOT__ALU_op;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ins_for_ALU__0 
        = vlSelfRef.risc_v_processor__DOT__ins_for_ALU;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_data__0 
        = vlSelfRef.risc_v_processor__DOT__mem_data;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_to_reg__0 
        = vlSelfRef.risc_v_processor__DOT__mem_to_reg;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_src__0 
        = vlSelfRef.risc_v_processor__DOT__ALU_src;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__add_sum__0 
        = vlSelfRef.risc_v_processor__DOT__add_sum;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc_next__0 
        = vlSelfRef.risc_v_processor__DOT__cur_pc_next;
    vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mux__0 
        = vlSelfRef.risc_v_processor__DOT__mux;
}

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_initial__TOP(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ risc_v_processor__DOT__my_InstrMem__DOT__i;
    risc_v_processor__DOT__my_InstrMem__DOT__i = 0;
    // Body
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[1U] = 1U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[2U] = 2U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[3U] = 3U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[4U] = 4U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[5U] = 5U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[6U] = 6U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[7U] = 7U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[8U] = 8U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[9U] = 9U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0xaU] = 0xaU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0xbU] = 0xbU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0xcU] = 0xcU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0xdU] = 0xdU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0xeU] = 0xeU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0xfU] = 0xfU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x10U] = 0x10U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x11U] = 0x11U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x12U] = 0x12U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x13U] = 0x13U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x14U] = 0x14U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x15U] = 0x15U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x16U] = 0x16U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x17U] = 0x17U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x18U] = 0x18U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x19U] = 0x19U;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x1aU] = 0x1aU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x1bU] = 0x1bU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x1cU] = 0x1cU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x1dU] = 0x1dU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x1eU] = 0x1eU;
    vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[0x1fU] = 0x1fU;
    risc_v_processor__DOT__my_InstrMem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x80U, risc_v_processor__DOT__my_InstrMem__DOT__i)) {
        vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[(0x7fU 
                                                                & risc_v_processor__DOT__my_InstrMem__DOT__i)] = 0U;
        risc_v_processor__DOT__my_InstrMem__DOT__i 
            = ((IData)(1U) + risc_v_processor__DOT__my_InstrMem__DOT__i);
    }
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[3U] = 0xffU;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[2U] = 0x60U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[1U] = 2U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0U] = 0x93U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[7U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[6U] = 0x52U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[5U] = 0x83U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[4U] = 0x33U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0xbU] = 0x40U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0xaU] = 0x62U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[9U] = 0x83U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[8U] = 0xb3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0xfU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0xeU] = 3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0xdU] = 0x7eU;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0xcU] = 0x33U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x13U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x12U] = 0x53U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x11U] = 0x6eU;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x10U] = 0xb3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x17U] = 1U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x16U] = 0xd0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x15U] = 0x20U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x14U] = 0x23U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x1bU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x1aU] = 0x50U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x19U] = 0x22U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x18U] = 0x23U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x1fU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x1eU] = 2U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x1dU] = 0x84U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x1cU] = 0x63U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x23U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x22U] = 3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x21U] = 0xeU;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x20U] = 0xb3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x27U] = 1U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x26U] = 0xd3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x25U] = 0x14U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x24U] = 0x63U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x2bU] = 1U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x2aU] = 0xc3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x29U] = 0x14U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x28U] = 0x63U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x2fU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x2eU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x2dU] = 3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x2cU] = 0xb3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x33U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x32U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x31U] = 0x24U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x30U] = 3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x37U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x36U] = 0x40U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x35U] = 0x24U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x34U] = 0x83U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x3bU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x3aU] = 0x84U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x39U] = 0x84U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x38U] = 0x93U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x3fU] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x3eU] = 0x94U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x3dU] = 4U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x3cU] = 0x63U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x43U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x42U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x41U] = 3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x40U] = 0xb3U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x47U] = 0U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x46U] = 0x73U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x45U] = 0x83U;
    vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom[0x44U] = 0xb3U;
}

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_final(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_final\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__stl(Vrisc_v_processor___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vrisc_v_processor___024root___eval_phase__stl(Vrisc_v_processor___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_settle(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_settle\n"); );
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
            Vrisc_v_processor___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("risc_v_processor.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vrisc_v_processor___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__stl(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___dump_triggers__stl\n"); );
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

VL_ATTR_COLD void Vrisc_v_processor___024root___stl_sequent__TOP__0(Vrisc_v_processor___024root* vlSelf);

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_stl(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vrisc_v_processor___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void Vrisc_v_processor___024root___stl_sequent__TOP__0(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___stl_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__opcode = (0x7fU 
                                               & vlSelfRef.risc_v_processor__DOT__instruction);
    vlSelfRef.risc_v_processor__DOT__rs1_add = (0x1fU 
                                                & (vlSelfRef.risc_v_processor__DOT__instruction 
                                                   >> 0xfU));
    vlSelfRef.risc_v_processor__DOT__rs2_add = (0x1fU 
                                                & (vlSelfRef.risc_v_processor__DOT__instruction 
                                                   >> 0x14U));
    vlSelfRef.risc_v_processor__DOT__rd_add = (0x1fU 
                                               & (vlSelfRef.risc_v_processor__DOT__instruction 
                                                  >> 7U));
    vlSelfRef.risc_v_processor__DOT__ins_for_ALU = 
        ((0x3f8U & (vlSelfRef.risc_v_processor__DOT__instruction 
                    >> 0x16U)) | (7U & (vlSelfRef.risc_v_processor__DOT__instruction 
                                        >> 0xcU)));
    vlSelfRef.cur_pc_op = vlSelfRef.risc_v_processor__DOT__cur_pc;
    vlSelfRef.risc_v_processor__DOT__cur_pc_next = 
        ((IData)(4U) + vlSelfRef.risc_v_processor__DOT__cur_pc);
    vlSelfRef.risc_v_processor__DOT__mux = ((IData)(vlSelfRef.risc_v_processor__DOT__branch) 
                                            & (IData)(vlSelfRef.risc_v_processor__DOT__zero));
}

VL_ATTR_COLD void Vrisc_v_processor___024root___eval_triggers__stl(Vrisc_v_processor___024root* vlSelf);

VL_ATTR_COLD bool Vrisc_v_processor___024root___eval_phase__stl(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_phase__stl\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vrisc_v_processor___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vrisc_v_processor___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__act(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___dump_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([changed] risc_v_processor.cur_pc or [changed] risc_v_processor.generated_imm)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] risc_v_processor.instruction or [changed] risc_v_processor.opcode)\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @([changed] risc_v_processor.opcode)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @([changed] risc_v_processor.ALU_control or [changed] risc_v_processor.rs1_data or [changed] risc_v_processor.source2_data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 5 is active: @([changed] risc_v_processor.ALU_result)\n");
    }
    if ((0x40ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 6 is active: @([changed] risc_v_processor.rd_add or [changed] risc_v_processor.reg_write or [changed] risc_v_processor.write_reg_data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 7 is active: @([changed] risc_v_processor.rs1_add or [changed] risc_v_processor.rs2_add)\n");
    }
    if ((0x100ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 8 is active: @([changed] risc_v_processor.ALU_result or [changed] risc_v_processor.mem_read or [changed] risc_v_processor.mem_write or [changed] risc_v_processor.rs2_data)\n");
    }
    if ((0x200ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 9 is active: @([changed] risc_v_processor.ALU_result or [changed] risc_v_processor.mem_read or [changed] risc_v_processor.mem_write)\n");
    }
    if ((0x400ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 10 is active: @([changed] risc_v_processor.ALU_op or [changed] risc_v_processor.ins_for_ALU)\n");
    }
    if ((0x800ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 11 is active: @([changed] risc_v_processor.cur_pc)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 12 is active: @([changed] risc_v_processor.ALU_result or [changed] risc_v_processor.mem_data or [changed] risc_v_processor.mem_to_reg)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 13 is active: @([changed] risc_v_processor.ALU_src or [changed] risc_v_processor.generated_imm or [changed] risc_v_processor.rs2_data)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 14 is active: @([changed] risc_v_processor.add_sum or [changed] risc_v_processor.cur_pc_next or [changed] risc_v_processor.mux)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__nba(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___dump_triggers__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([changed] risc_v_processor.cur_pc or [changed] risc_v_processor.generated_imm)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] risc_v_processor.instruction or [changed] risc_v_processor.opcode)\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @([changed] risc_v_processor.opcode)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @([changed] risc_v_processor.ALU_control or [changed] risc_v_processor.rs1_data or [changed] risc_v_processor.source2_data)\n");
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 5 is active: @([changed] risc_v_processor.ALU_result)\n");
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 6 is active: @([changed] risc_v_processor.rd_add or [changed] risc_v_processor.reg_write or [changed] risc_v_processor.write_reg_data)\n");
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 7 is active: @([changed] risc_v_processor.rs1_add or [changed] risc_v_processor.rs2_add)\n");
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 8 is active: @([changed] risc_v_processor.ALU_result or [changed] risc_v_processor.mem_read or [changed] risc_v_processor.mem_write or [changed] risc_v_processor.rs2_data)\n");
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 9 is active: @([changed] risc_v_processor.ALU_result or [changed] risc_v_processor.mem_read or [changed] risc_v_processor.mem_write)\n");
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 10 is active: @([changed] risc_v_processor.ALU_op or [changed] risc_v_processor.ins_for_ALU)\n");
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 11 is active: @([changed] risc_v_processor.cur_pc)\n");
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 12 is active: @([changed] risc_v_processor.ALU_result or [changed] risc_v_processor.mem_data or [changed] risc_v_processor.mem_to_reg)\n");
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 13 is active: @([changed] risc_v_processor.ALU_src or [changed] risc_v_processor.generated_imm or [changed] risc_v_processor.rs2_data)\n");
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 14 is active: @([changed] risc_v_processor.add_sum or [changed] risc_v_processor.cur_pc_next or [changed] risc_v_processor.mux)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vrisc_v_processor___024root___ctor_var_reset(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->cur_pc_op = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__next_pc = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__cur_pc = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__instruction = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__add_sum = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__generated_imm = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__rs1_data = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__source2_data = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__ALU_result = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__write_reg_data = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__mem_data = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__rs2_data = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__cur_pc_next = VL_RAND_RESET_I(32);
    vlSelf->risc_v_processor__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->risc_v_processor__DOT__rs1_add = VL_RAND_RESET_I(5);
    vlSelf->risc_v_processor__DOT__rs2_add = VL_RAND_RESET_I(5);
    vlSelf->risc_v_processor__DOT__rd_add = VL_RAND_RESET_I(5);
    vlSelf->risc_v_processor__DOT__mux = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__branch = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__mem_read = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__mem_to_reg = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__mem_write = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__ALU_src = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__reg_write = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__zero = VL_RAND_RESET_I(1);
    vlSelf->risc_v_processor__DOT__ALU_op = VL_RAND_RESET_I(2);
    vlSelf->risc_v_processor__DOT__ALU_control = VL_RAND_RESET_I(4);
    vlSelf->risc_v_processor__DOT__ins_for_ALU = VL_RAND_RESET_I(10);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->risc_v_processor__DOT__my_RegFile__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 30; ++__Vi0) {
        vlSelf->risc_v_processor__DOT__my_DataMem__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->risc_v_processor__DOT__my_DataMem__DOT____Vlvbound_hff55c7b1__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->risc_v_processor__DOT__my_InstrMem__DOT__rom[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__risc_v_processor__DOT__add_sum = VL_RAND_RESET_I(32);
    vlSelf->__VdlyVal__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlyVal__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 = VL_RAND_RESET_I(32);
    vlSelf->__VdlyDim0__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 = VL_RAND_RESET_I(5);
    vlSelf->__VdlySet__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 = 0;
    vlSelf->__VdlySet__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__generated_imm__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__instruction__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__opcode__0 = VL_RAND_RESET_I(7);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_control__0 = VL_RAND_RESET_I(4);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_data__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__source2_data__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__rd_add__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__reg_write__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__write_reg_data__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_add__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_add__0 = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_read__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_write__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_data__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_op__0 = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__ins_for_ALU__0 = VL_RAND_RESET_I(10);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_data__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_to_reg__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_src__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__add_sum__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc_next__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__risc_v_processor__DOT__mux__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
}
