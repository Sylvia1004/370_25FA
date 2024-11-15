// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vrisc_v_processor.h for the primary calling header

#include "Vrisc_v_processor__pch.h"
#include "Vrisc_v_processor__Syms.h"
#include "Vrisc_v_processor___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vrisc_v_processor___024root___dump_triggers__act(Vrisc_v_processor___024root* vlSelf);
#endif  // VL_DEBUG

void Vrisc_v_processor___024root___eval_triggers__act(Vrisc_v_processor___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vrisc_v_processor__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vrisc_v_processor___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((vlSelfRef.risc_v_processor__DOT__cur_pc 
                                        != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc__0) 
                                       | (vlSelfRef.risc_v_processor__DOT__generated_imm 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__generated_imm__0)));
    vlSelfRef.__VactTriggered.set(2U, ((vlSelfRef.risc_v_processor__DOT__instruction 
                                        != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__instruction__0) 
                                       | ((IData)(vlSelfRef.risc_v_processor__DOT__opcode) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__opcode__0))));
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.risc_v_processor__DOT__opcode) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__opcode__0)));
    vlSelfRef.__VactTriggered.set(4U, ((((IData)(vlSelfRef.risc_v_processor__DOT__ALU_control) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_control__0)) 
                                        | (vlSelfRef.risc_v_processor__DOT__rs1_data 
                                           != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_data__0)) 
                                       | (vlSelfRef.risc_v_processor__DOT__source2_data 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__source2_data__0)));
    vlSelfRef.__VactTriggered.set(5U, (vlSelfRef.risc_v_processor__DOT__ALU_result 
                                       != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0));
    vlSelfRef.__VactTriggered.set(6U, ((((IData)(vlSelfRef.risc_v_processor__DOT__rd_add) 
                                         != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rd_add__0)) 
                                        | ((IData)(vlSelfRef.risc_v_processor__DOT__reg_write) 
                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__reg_write__0))) 
                                       | (vlSelfRef.risc_v_processor__DOT__write_reg_data 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__write_reg_data__0)));
    vlSelfRef.__VactTriggered.set(7U, (((IData)(vlSelfRef.risc_v_processor__DOT__rs1_add) 
                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs1_add__0)) 
                                       | ((IData)(vlSelfRef.risc_v_processor__DOT__rs2_add) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_add__0))));
    vlSelfRef.__VactTriggered.set(8U, ((((vlSelfRef.risc_v_processor__DOT__ALU_result 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0) 
                                         | ((IData)(vlSelfRef.risc_v_processor__DOT__mem_read) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_read__0))) 
                                        | ((IData)(vlSelfRef.risc_v_processor__DOT__mem_write) 
                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_write__0))) 
                                       | (vlSelfRef.risc_v_processor__DOT__rs2_data 
                                          != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_data__0)));
    vlSelfRef.__VactTriggered.set(9U, (((vlSelfRef.risc_v_processor__DOT__ALU_result 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0) 
                                        | ((IData)(vlSelfRef.risc_v_processor__DOT__mem_read) 
                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_read__0))) 
                                       | ((IData)(vlSelfRef.risc_v_processor__DOT__mem_write) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_write__0))));
    vlSelfRef.__VactTriggered.set(0xaU, (((IData)(vlSelfRef.risc_v_processor__DOT__ALU_op) 
                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_op__0)) 
                                         | ((IData)(vlSelfRef.risc_v_processor__DOT__ins_for_ALU) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ins_for_ALU__0))));
    vlSelfRef.__VactTriggered.set(0xbU, (vlSelfRef.risc_v_processor__DOT__cur_pc 
                                         != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc__0));
    vlSelfRef.__VactTriggered.set(0xcU, (((vlSelfRef.risc_v_processor__DOT__ALU_result 
                                           != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_result__0) 
                                          | (vlSelfRef.risc_v_processor__DOT__mem_data 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_data__0)) 
                                         | ((IData)(vlSelfRef.risc_v_processor__DOT__mem_to_reg) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mem_to_reg__0))));
    vlSelfRef.__VactTriggered.set(0xdU, ((((IData)(vlSelfRef.risc_v_processor__DOT__ALU_src) 
                                           != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__ALU_src__0)) 
                                          | (vlSelfRef.risc_v_processor__DOT__generated_imm 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__generated_imm__0)) 
                                         | (vlSelfRef.risc_v_processor__DOT__rs2_data 
                                            != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__rs2_data__0)));
    vlSelfRef.__VactTriggered.set(0xeU, (((vlSelfRef.risc_v_processor__DOT__add_sum 
                                           != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__add_sum__0) 
                                          | (vlSelfRef.risc_v_processor__DOT__cur_pc_next 
                                             != vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__cur_pc_next__0)) 
                                         | ((IData)(vlSelfRef.risc_v_processor__DOT__mux) 
                                            != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__risc_v_processor__DOT__mux__0))));
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
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelfRef.__VactDidInit))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(2U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
        vlSelfRef.__VactTriggered.set(5U, 1U);
        vlSelfRef.__VactTriggered.set(6U, 1U);
        vlSelfRef.__VactTriggered.set(7U, 1U);
        vlSelfRef.__VactTriggered.set(8U, 1U);
        vlSelfRef.__VactTriggered.set(9U, 1U);
        vlSelfRef.__VactTriggered.set(0xaU, 1U);
        vlSelfRef.__VactTriggered.set(0xbU, 1U);
        vlSelfRef.__VactTriggered.set(0xcU, 1U);
        vlSelfRef.__VactTriggered.set(0xdU, 1U);
        vlSelfRef.__VactTriggered.set(0xeU, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vrisc_v_processor___024root___dump_triggers__act(vlSelf);
    }
#endif
}
