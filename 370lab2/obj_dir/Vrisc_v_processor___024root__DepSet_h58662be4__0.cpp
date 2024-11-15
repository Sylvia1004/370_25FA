// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v_processor.h for the primary calling header

#include "Vrisc_v_processor__pch.h"
#include "Vrisc_v_processor___024root.h"

void Vrisc_v_processor___024root___eval_act(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Vrisc_v_processor___024root___nba_sequent__TOP__0(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__1(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__2(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__4(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__5(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__7(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__8(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__10(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__11(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__12(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__13(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__14(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__15(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__16(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__17(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__18(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__19(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__20(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__21(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_sequent__TOP__22(Vrisc_v_processor___024root* vlSelf);
void Vrisc_v_processor___024root___nba_comb__TOP__0(Vrisc_v_processor___024root* vlSelf);

void Vrisc_v_processor___024root___eval_nba(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((0x20ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__4(vlSelf);
    }
    if ((0x1000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__5(vlSelf);
    }
    if ((0x200ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__7(vlSelf);
    }
    if ((0x100ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__8(vlSelf);
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__10(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__11(vlSelf);
    }
    if ((0x400ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__12(vlSelf);
    }
    if ((0x2000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__13(vlSelf);
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__14(vlSelf);
    }
    if ((0x80ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__15(vlSelf);
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__16(vlSelf);
    }
    if ((0x40ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__17(vlSelf);
    }
    if ((0x800ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__18(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__19(vlSelf);
    }
    if ((0x4000ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__20(vlSelf);
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__21(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_sequent__TOP__22(vlSelf);
    }
    if ((0x28ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vrisc_v_processor___024root___nba_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__0(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vdly__risc_v_processor__DOT__add_sum 
        = vlSelfRef.risc_v_processor__DOT__add_sum;
    vlSelfRef.__Vdly__risc_v_processor__DOT__add_sum 
        = (VL_SHIFTL_III(32,32,32, vlSelfRef.risc_v_processor__DOT__generated_imm, 1U) 
           + vlSelfRef.risc_v_processor__DOT__cur_pc);
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__1(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 = 0U;
    if (((IData)(vlSelfRef.risc_v_processor__DOT__mem_write) 
         & (~ (IData)(vlSelfRef.risc_v_processor__DOT__mem_read)))) {
        vlSelfRef.risc_v_processor__DOT__my_DataMem__DOT____Vlvbound_hff55c7b1__0 
            = vlSelfRef.risc_v_processor__DOT__rs2_data;
        if ((0x1dU >= (0x1fU & vlSelfRef.risc_v_processor__DOT__ALU_result))) {
            vlSelfRef.__VdlyVal__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 
                = vlSelfRef.risc_v_processor__DOT__my_DataMem__DOT____Vlvbound_hff55c7b1__0;
            vlSelfRef.__VdlyDim0__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 
                = (0x1fU & vlSelfRef.risc_v_processor__DOT__ALU_result);
            vlSelfRef.__VdlySet__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0 = 1U;
        }
    }
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__2(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__2\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 = 0U;
    if (vlSelfRef.risc_v_processor__DOT__reg_write) {
        vlSelfRef.__VdlyVal__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 
            = vlSelfRef.risc_v_processor__DOT__write_reg_data;
        vlSelfRef.__VdlyDim0__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 
            = vlSelfRef.risc_v_processor__DOT__rd_add;
        vlSelfRef.__VdlySet__risc_v_processor__DOT__my_RegFile__DOT__registers__v0 = 1U;
    }
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__4(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__4\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__zero = (0U == vlSelfRef.risc_v_processor__DOT__ALU_result);
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__5(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__5\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__write_reg_data 
        = ((IData)(vlSelfRef.risc_v_processor__DOT__mem_to_reg)
            ? vlSelfRef.risc_v_processor__DOT__mem_data
            : vlSelfRef.risc_v_processor__DOT__ALU_result);
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__7(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__7\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__mem_data = (((IData)(vlSelfRef.risc_v_processor__DOT__mem_read) 
                                                  & (~ (IData)(vlSelfRef.risc_v_processor__DOT__mem_write)))
                                                  ? 
                                                 ((0x1dU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelfRef.risc_v_processor__DOT__ALU_result))
                                                   ? 
                                                  vlSelfRef.risc_v_processor__DOT__my_DataMem__DOT__data_memory
                                                  [
                                                  (0x1fU 
                                                   & vlSelfRef.risc_v_processor__DOT__ALU_result)]
                                                   : 0U)
                                                  : 0U);
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__8(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__8\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0) {
        vlSelfRef.risc_v_processor__DOT__my_DataMem__DOT__data_memory[vlSelfRef.__VdlyDim0__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0] 
            = vlSelfRef.__VdlyVal__risc_v_processor__DOT__my_DataMem__DOT__data_memory__v0;
    }
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__10(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__10\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__ALU_result = (
                                                   (8U 
                                                    & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                    ? 
                                                   (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                    + vlSelfRef.risc_v_processor__DOT__source2_data)
                                                    : 
                                                   ((4U 
                                                     & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                       ? 
                                                      (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                       + vlSelfRef.risc_v_processor__DOT__source2_data)
                                                       : 
                                                      (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                       - vlSelfRef.risc_v_processor__DOT__source2_data))
                                                      : 
                                                     (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                      + vlSelfRef.risc_v_processor__DOT__source2_data))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                       ? 
                                                      (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                       + vlSelfRef.risc_v_processor__DOT__source2_data)
                                                       : 
                                                      (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                       + vlSelfRef.risc_v_processor__DOT__source2_data))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelfRef.risc_v_processor__DOT__ALU_control))
                                                       ? 
                                                      (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                       | vlSelfRef.risc_v_processor__DOT__source2_data)
                                                       : 
                                                      (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                                       & vlSelfRef.risc_v_processor__DOT__source2_data)))));
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__11(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__11\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__rs1_data = vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers
        [vlSelfRef.risc_v_processor__DOT__rs1_add];
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__12(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__12\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__ALU_control = 
        ((0U == (IData)(vlSelfRef.risc_v_processor__DOT__ALU_op))
          ? 2U : ((1U == (IData)(vlSelfRef.risc_v_processor__DOT__ALU_op))
                   ? 6U : ((2U == (IData)(vlSelfRef.risc_v_processor__DOT__ALU_op))
                            ? ((0U == (IData)(vlSelfRef.risc_v_processor__DOT__ins_for_ALU))
                                ? 2U : ((0x100U == (IData)(vlSelfRef.risc_v_processor__DOT__ins_for_ALU))
                                         ? 6U : ((7U 
                                                  == (IData)(vlSelfRef.risc_v_processor__DOT__ins_for_ALU))
                                                  ? 0U
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelfRef.risc_v_processor__DOT__ins_for_ALU))
                                                   ? 1U
                                                   : 2U))))
                            : 2U)));
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__13(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__13\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__source2_data = 
        ((IData)(vlSelfRef.risc_v_processor__DOT__ALU_src)
          ? vlSelfRef.risc_v_processor__DOT__generated_imm
          : vlSelfRef.risc_v_processor__DOT__rs2_data);
}

extern const VlUnpacked<CData/*0:0*/, 128> Vrisc_v_processor__ConstPool__TABLE_h51fe0c58_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vrisc_v_processor__ConstPool__TABLE_h3534176c_0;
extern const VlUnpacked<CData/*1:0*/, 128> Vrisc_v_processor__ConstPool__TABLE_h0516e88f_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vrisc_v_processor__ConstPool__TABLE_h7fdaa79b_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vrisc_v_processor__ConstPool__TABLE_h15bfb2a1_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vrisc_v_processor__ConstPool__TABLE_hfc58f03c_0;

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__14(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__14\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelfRef.risc_v_processor__DOT__opcode;
    vlSelfRef.risc_v_processor__DOT__branch = Vrisc_v_processor__ConstPool__TABLE_h51fe0c58_0
        [__Vtableidx1];
    vlSelfRef.risc_v_processor__DOT__mem_read = Vrisc_v_processor__ConstPool__TABLE_h3534176c_0
        [__Vtableidx1];
    vlSelfRef.risc_v_processor__DOT__mem_to_reg = Vrisc_v_processor__ConstPool__TABLE_h3534176c_0
        [__Vtableidx1];
    vlSelfRef.risc_v_processor__DOT__ALU_op = Vrisc_v_processor__ConstPool__TABLE_h0516e88f_0
        [__Vtableidx1];
    vlSelfRef.risc_v_processor__DOT__mem_write = Vrisc_v_processor__ConstPool__TABLE_h7fdaa79b_0
        [__Vtableidx1];
    vlSelfRef.risc_v_processor__DOT__ALU_src = Vrisc_v_processor__ConstPool__TABLE_h15bfb2a1_0
        [__Vtableidx1];
    vlSelfRef.risc_v_processor__DOT__reg_write = Vrisc_v_processor__ConstPool__TABLE_hfc58f03c_0
        [__Vtableidx1];
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__15(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__15\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__rs2_data = vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers
        [vlSelfRef.risc_v_processor__DOT__rs2_add];
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__16(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__16\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x40U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
        if ((0x20U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
            if ((0x10U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
                vlSelfRef.risc_v_processor__DOT__generated_imm 
                    = (vlSelfRef.risc_v_processor__DOT__instruction 
                       >> 0x14U);
            } else if ((8U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
                vlSelfRef.risc_v_processor__DOT__generated_imm 
                    = (vlSelfRef.risc_v_processor__DOT__instruction 
                       >> 0x14U);
            } else if ((4U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
                vlSelfRef.risc_v_processor__DOT__generated_imm 
                    = (vlSelfRef.risc_v_processor__DOT__instruction 
                       >> 0x14U);
            } else if ((2U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
                if ((1U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))) {
                    vlSelfRef.risc_v_processor__DOT__generated_imm 
                        = ((0x7ffU & vlSelfRef.risc_v_processor__DOT__generated_imm) 
                           | (0x800U & (vlSelfRef.risc_v_processor__DOT__instruction 
                                        >> 0x14U)));
                    vlSelfRef.risc_v_processor__DOT__generated_imm 
                        = ((0xfffff800U & vlSelfRef.risc_v_processor__DOT__generated_imm) 
                           | ((0x400U & (vlSelfRef.risc_v_processor__DOT__instruction 
                                         << 3U)) | 
                              ((0x3f0U & (vlSelfRef.risc_v_processor__DOT__instruction 
                                          >> 0x15U)) 
                               | (0xfU & (vlSelfRef.risc_v_processor__DOT__instruction 
                                          >> 8U)))));
                } else {
                    vlSelfRef.risc_v_processor__DOT__generated_imm 
                        = (vlSelfRef.risc_v_processor__DOT__instruction 
                           >> 0x14U);
                }
            } else {
                vlSelfRef.risc_v_processor__DOT__generated_imm 
                    = (vlSelfRef.risc_v_processor__DOT__instruction 
                       >> 0x14U);
            }
        } else {
            vlSelfRef.risc_v_processor__DOT__generated_imm 
                = (vlSelfRef.risc_v_processor__DOT__instruction 
                   >> 0x14U);
        }
    } else {
        vlSelfRef.risc_v_processor__DOT__generated_imm 
            = ((0x20U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                ? ((0x10U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                    ? (vlSelfRef.risc_v_processor__DOT__instruction 
                       >> 0x14U) : ((8U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                     ? (vlSelfRef.risc_v_processor__DOT__instruction 
                                        >> 0x14U) : 
                                    ((4U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                      ? (vlSelfRef.risc_v_processor__DOT__instruction 
                                         >> 0x14U) : 
                                     ((2U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                       ? ((1U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                           ? ((0xfe0U 
                                               & (vlSelfRef.risc_v_processor__DOT__instruction 
                                                  >> 0x14U)) 
                                              | (0x1fU 
                                                 & (vlSelfRef.risc_v_processor__DOT__instruction 
                                                    >> 7U)))
                                           : (vlSelfRef.risc_v_processor__DOT__instruction 
                                              >> 0x14U))
                                       : (vlSelfRef.risc_v_processor__DOT__instruction 
                                          >> 0x14U)))))
                : ((0x10U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                    ? ((8U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                        ? (vlSelfRef.risc_v_processor__DOT__instruction 
                           >> 0x14U) : ((4U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                         ? (vlSelfRef.risc_v_processor__DOT__instruction 
                                            >> 0x14U)
                                         : ((2U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                                 ? 
                                                (vlSelfRef.risc_v_processor__DOT__instruction 
                                                 >> 0x14U)
                                                 : 
                                                (vlSelfRef.risc_v_processor__DOT__instruction 
                                                 >> 0x14U))
                                             : (vlSelfRef.risc_v_processor__DOT__instruction 
                                                >> 0x14U))))
                    : ((8U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                        ? (vlSelfRef.risc_v_processor__DOT__instruction 
                           >> 0x14U) : ((4U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                         ? (vlSelfRef.risc_v_processor__DOT__instruction 
                                            >> 0x14U)
                                         : ((2U & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.risc_v_processor__DOT__opcode))
                                                 ? 
                                                (vlSelfRef.risc_v_processor__DOT__instruction 
                                                 >> 0x14U)
                                                 : 
                                                (vlSelfRef.risc_v_processor__DOT__instruction 
                                                 >> 0x14U))
                                             : (vlSelfRef.risc_v_processor__DOT__instruction 
                                                >> 0x14U))))));
    }
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__17(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__17\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__risc_v_processor__DOT__my_RegFile__DOT__registers__v0) {
        vlSelfRef.risc_v_processor__DOT__my_RegFile__DOT__registers[vlSelfRef.__VdlyDim0__risc_v_processor__DOT__my_RegFile__DOT__registers__v0] 
            = vlSelfRef.__VdlyVal__risc_v_processor__DOT__my_RegFile__DOT__registers__v0;
    }
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__18(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__18\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__instruction = 
        ((vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom
          [(0x7fU & ((IData)(3U) + vlSelfRef.risc_v_processor__DOT__cur_pc))] 
          << 0x18U) | ((vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom
                        [(0x7fU & ((IData)(2U) + vlSelfRef.risc_v_processor__DOT__cur_pc))] 
                        << 0x10U) | ((vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom
                                      [(0x7fU & ((IData)(1U) 
                                                 + vlSelfRef.risc_v_processor__DOT__cur_pc))] 
                                      << 8U) | vlSelfRef.risc_v_processor__DOT__my_InstrMem__DOT__rom
                                     [(0x7fU & vlSelfRef.risc_v_processor__DOT__cur_pc)])));
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
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__19(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__19\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst) {
        vlSelfRef.risc_v_processor__DOT__cur_pc = 0U;
    }
    vlSelfRef.risc_v_processor__DOT__cur_pc = vlSelfRef.risc_v_processor__DOT__next_pc;
    vlSelfRef.cur_pc_op = vlSelfRef.risc_v_processor__DOT__cur_pc;
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__20(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__20\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__next_pc = ((IData)(vlSelfRef.risc_v_processor__DOT__mux)
                                                 ? vlSelfRef.risc_v_processor__DOT__add_sum
                                                 : vlSelfRef.risc_v_processor__DOT__cur_pc_next);
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__21(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__21\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__add_sum = vlSelfRef.__Vdly__risc_v_processor__DOT__add_sum;
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_sequent__TOP__22(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_sequent__TOP__22\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__cur_pc_next = 
        ((IData)(4U) + vlSelfRef.risc_v_processor__DOT__cur_pc);
}

VL_INLINE_OPT void Vrisc_v_processor___024root___nba_comb__TOP__0(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___nba_comb__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.risc_v_processor__DOT__mux = ((IData)(vlSelfRef.risc_v_processor__DOT__branch) 
                                            & (IData)(vlSelfRef.risc_v_processor__DOT__zero));
}

void Vrisc_v_processor___024root___eval_triggers__act(Vrisc_v_processor___024root* vlSelf);

bool Vrisc_v_processor___024root___eval_phase__act(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<15> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vrisc_v_processor___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vrisc_v_processor___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vrisc_v_processor___024root___eval_phase__nba(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vrisc_v_processor___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__nba(Vrisc_v_processor___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__act(Vrisc_v_processor___024root* vlSelf);
#endif  // VL_DEBUG

void Vrisc_v_processor___024root___eval(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval\n"); );
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
            Vrisc_v_processor___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("risc_v_processor.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vrisc_v_processor___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("risc_v_processor.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vrisc_v_processor___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vrisc_v_processor___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vrisc_v_processor___024root___eval_debug_assertions(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY((vlSelfRef.clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelfRef.rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
