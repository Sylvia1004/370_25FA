`timescale 1 ns / 1 ps

module EX_MEM(
    input clk,
    input branch_ex, 
    input mem_read_ex,
    input mem_write_ex,
    input reg_write_ex,
    input mem_to_reg_ex,
    input jump_ex,
    input [31:0] cur_pc_plus4_ex,
    input [31:0] add_sum,
    input zero,
    input [31:0] ALU_result,
    input [31:0] rs2_data_ex,
    input [4:0] rd_ex, 
    input [3:0] func3_ex,
    output reg branch_mem = 0,
    output reg mem_read_mem = 0,
    output reg mem_write_mem = 0,
    output reg reg_write_mem = 0,
    output reg mem_to_reg_mem = 0,
    output reg jump_mem = 0,
    output reg [31:0] cur_pc_plus4_mem = 0,
    output reg [31:0] add_sum_mem = 0,
    output reg zero_mem = 0,
    output reg [31:0] ALU_result_mem = 0,
    output reg [31:0] rs2_data_mem = 0,
    output reg [4:0] rd_mem = 0,
    output reg [3:0] func3_mem = 0
);

    always @(posedge clk) begin
        branch_mem = branch_ex;
        mem_read_mem = mem_read_ex;
        mem_write_mem = mem_write_ex;
        reg_write_mem = reg_write_ex;
        mem_to_reg_mem = mem_to_reg_ex;
        jump_mem = jump_ex;
        cur_pc_plus4_mem = cur_pc_plus4_ex;
        add_sum_mem = add_sum;
        zero_mem = zero;
        ALU_result_mem = ALU_result;
        rs2_data_mem = rs2_data_ex;
        rd_mem = rd_ex;
        func3_mem = func3_ex;
    end

endmodule
