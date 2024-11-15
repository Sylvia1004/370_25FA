
`timescale 1ns / 1ps
module risc_v_processor(
    input clk,
    input rst,
    output [31:0] cur_pc_op
    );
    
    wire [31:0] next_pc, cur_pc, instruction, add_sum, generated_imm, rs1_data, source2_data, ALU_result, write_reg_data, mem_data, rs2_data, cur_pc_next;
    wire [6:0] opcode;
    wire [4:0] rs1_add, rs2_add, rd_add;
    wire mux, branch, mem_read, mem_to_reg, mem_write, ALU_src, reg_write, zero;
    // ALU_op derived from opcode
    wire [1:0] ALU_op;
    // ins_for_ALU comes directly from instruction
    wire [3:0] ALU_control;
    wire [9:0] ins_for_ALU;
    
    assign cur_pc_op = cur_pc;

    // program counter
    PC my_PC (clk, rst, next_pc, cur_pc);
    // mux from branching
    //BranchMux my_BranchMux (mux, cur_pc, add_sum, next_pc);
    // 32-bit adder for next program counting
    adder my_Add (cur_pc, generated_imm, add_sum);
    // decoder
    Decoder my_Decoder (instruction, opcode, rs1_add, rs2_add, rd_add, ins_for_ALU);
    // immediate generator, directly from instruction
    ImmGen my_ImmGen (instruction, opcode, generated_imm);
    // control unit, from opcode and generates control signals
    ControlUnit my_ControlUnit (opcode, branch, mem_read, mem_to_reg, ALU_op, mem_write, ALU_src, reg_write);
    // ALU, add, sub, and, or
    ALU my_ALU (rs1_data, source2_data, ALU_control, ALU_result, zero);
    // mux for ALU second source
    //ALUsrcMux my_ALUsrcMux (ALU_src, rs2_data, generated_imm, source2_data);
    // register file, no need to be clked, as it will output data as long as reg numbers are provided
    RegFile my_RegFile (rs1_add, rs2_add, reg_write, rd_add, write_reg_data, rs1_data, rs2_data);
    // data memory (How to implement ??)
    DataMem my_DataMem (ALU_result, rs2_data, mem_write, mem_read, mem_data);
    // mux for whether to write back from memory
    //MemtoRegMux my_MemtoRegMux (mem_data, ALU_result, mem_to_reg, write_reg_data);
    // check how exactly the alu control operates !!
    ALUcontrol my_ALUcontrol (ins_for_ALU, ALU_op, ALU_control);
    // instruction memory, given initialization
    InstrMem my_InstrMem (cur_pc, instruction);
    // mux
    two_to_one_Mux my_MemtoRegMux(mem_to_reg, ALU_result, mem_data, write_reg_data);
    two_to_one_Mux my_ALUsrcMux(ALU_src, rs2_data, generated_imm, source2_data);
    two_to_one_Mux my_BranchMux(mux, cur_pc_next, add_sum, next_pc);
    
    assign mux = branch & zero;
    assign cur_pc_next = cur_pc + 4;
    //assign cur_pc = 0;
    
    
endmodule
