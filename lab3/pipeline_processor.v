
`timescale 1ns / 1ps
module pipeline_processor(
    input clk,
    output [31:0] ra_op,
    output [31:0] t0_op,
    output [31:0] t1_op,
    output [31:0] t2_op,
    output [31:0] t3_op,
    output [31:0] t4_op,
    output [31:0] ins_op,
    output [31:0] data_2,
    output [31:0] regdata_op,
    output [31:0] cur_pc_op,
    output sig,
    output [3:0] ALU_con_op,
    output [1:0] ALUop_op,
    output [3:0] func3_op,
    output [31:0] data1_op,
    output [31:0] add_sum_op,
    output [4:0] rd_op,
    output reg_write_op,
    output [31:0] write_reg_data_op,
    output [31:0] mem_read_data_op,
    output mem_to_reg_op
    );

    wire PCsrc,
            ALUsrc,
            reg_write, 
            branch, 
            mem_read, 
            mem_write,  
            mem_to_reg, 
            jump,
            ALUsrc_ex, 
            branch_ex, 
            mem_read_ex, 
            mem_write_ex, 
            reg_write_ex, 
            mem_to_reg_ex, 
            jump_ex,
            zero,
            branch_mem, 
            mem_read_mem, 
            mem_write_mem, 
            reg_write_mem, 
            mem_to_reg_mem, 
            jump_mem,
            zero_mem,
            reg_write_wb, 
            mem_to_reg_wb, 
            jump_wb;

    wire [1:0] ALUop,
                ALUop_ex;

    wire [3:0] func3,
                func3_ex,
                func3_mem,
                ALU_con;

    wire [4:0] rs1,
                rs2,
                rd,
                rd_ex,
                rd_wb,
                rd_mem;

    wire [6:0] opcode;

    wire [31:0] cur_pc,
                next_pc,
                cur_pc_plus4,
                instruction,
                cur_pc_id,
                ins,
                write_reg_data,
                write_reg_data_final,
                rs1_data,
                rs2_data,
                ra, t0, t1, t2, t3, t4,
                generated_imm,
                cur_pc_ex, 
                cur_pc_plus4_id,
                cur_pc_plus4_ex, 
                rs1_data_ex, 
                rs2_data_ex, 
                generated_imm_ex,
                add_sum,
                source2,
                ALU_result, 
                cur_pc_mem, 
                cur_pc_plus4_mem, 
                add_sum_mem, 
                ALU_result_mem, 
                rs2_data_mem,
                mem_read_data,
                mem_read_data_wb,
                cur_pc_plus4_wb,
                ALU_result_wb;

    assign ins_op = ins;
    assign regdata_op = write_reg_data_final;
    assign data_2 = source2;
    assign sig = ALUsrc_ex;
    assign cur_pc_op = cur_pc_id;
    assign ALU_con_op = ALU_con;
    assign ALUop_op = ALUop_ex;
    assign func3_op = func3_ex;
    assign data1_op = rs1_data_ex;
    assign add_sum_op = add_sum;

    assign rd_op = rd_wb;
    assign reg_write_op = reg_write_wb;
    assign mem_read_data_op = mem_read_data_wb;
    assign mem_to_reg_op = mem_to_reg;

    PC myPC(clk, next_pc, cur_pc);

    InstrMem myInstrMem(cur_pc, instruction);

    IF_ID myIF_ID(clk, cur_pc, cur_pc_plus4, instruction, opcode, cur_pc_id, rs1, rs2, rd, ins, func3, cur_pc_plus4_id);

    //two_to_one_mux nextpcMux(PCsrc, cur_pc_plus4, add_sum_mem, next_pc);

    RegFile myRegFile(clk, rs1, rs2, rd_wb, write_reg_data_final, reg_write_wb, rs1_data, rs2_data, ra, t0, t1, t2, t3, t4);

    ControlUnit myControlUnit(opcode, ALUsrc, ALUop, branch, mem_read, mem_write, reg_write, mem_to_reg, jump);

    ImmGen myImmGen(ins, opcode, generated_imm);

    ID_EX myID_EX(clk, cur_pc_id, cur_pc_plus4_id, ALUsrc, ALUop, branch, mem_read, mem_write, reg_write, mem_to_reg, jump, rs1_data, rs2_data, generated_imm, func3, rd, 
                    ALUsrc_ex, ALUop_ex, branch_ex, mem_read_ex, mem_write_ex, reg_write_ex, mem_to_reg_ex, jump_ex, cur_pc_ex, cur_pc_plus4_ex, rs1_data_ex, rs2_data_ex, generated_imm_ex, func3_ex, rd_ex);

    Adder myAdder(generated_imm_ex, cur_pc_ex, add_sum);

    two_to_one_mux ALUsrcMux(ALUsrc_ex, rs2_data_ex, generated_imm_ex, source2);

    ALU myALU(rs1_data_ex, source2, ALU_con, zero, ALU_result);

    ALUcontrol myALUcontrol(ALUop_ex, func3_ex, ALU_con);

    EX_MEM myEX_MEM(clk, branch_ex, mem_read_ex, mem_write_ex, reg_write_ex, mem_to_reg_ex, jump_ex, cur_pc_plus4_ex, add_sum, zero, ALU_result, rs2_data_ex, rd_ex, func3_ex,
                    branch_mem, mem_read_mem, mem_write_mem, reg_write_mem, mem_to_reg_mem, jump_mem, cur_pc_plus4_mem, add_sum_mem, zero_mem, ALU_result_mem, rs2_data_mem, rd_mem, func3_mem);

    Branch myBranch(jump_mem, zero_mem, branch_mem, cur_pc_plus4_mem, add_sum_mem, ALU_result_mem, next_pc);

    DataMem myDataMem(clk, ALU_result_mem, rs2_data_mem, mem_read_mem, mem_write_mem, func3_mem, mem_read_data);

    MEM_WB myMEM_WB(clk, reg_write_mem, mem_to_reg_mem, jump_mem, cur_pc_plus4_mem, rd_mem, ALU_result_mem, mem_read_data, reg_write_wb, mem_to_reg_wb, jump_wb, cur_pc_plus4_wb, rd_wb, ALU_result_wb, mem_read_data_wb);

    two_to_one_mux toRegMux(mem_to_reg_wb, ALU_result_wb, mem_read_data_wb, write_reg_data);

    two_to_one_mux regDataMux(jump_wb, write_reg_data, cur_pc_plus4_wb, write_reg_data_final);

    assign cur_pc_plus4 = cur_pc + 4;
    assign ra_op = ra;
    assign t0_op = t0;
    assign t1_op = t1;
    assign t2_op = t2;
    assign t3_op = t3;
    assign t4_op = t4;

endmodule
