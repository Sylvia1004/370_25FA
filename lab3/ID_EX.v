`timescale 1 ns / 1 ps

module ID_EX(
    input clk, 
    input [31:0] cur_pc_id,
    input [31:0] cur_pc_plus4_id,
    input ALUsrc, 
    input [1:0] ALUop, 
    input branch, 
    input mem_read,
    input mem_write,
    input reg_write,
    input mem_to_reg,
    input jump,
    input [31:0] rs1_data,
    input [31:0] rs2_data,
    input [31:0] generated_imm,
    input [3:0] func3,
    input [4:0] rd, 
    output reg ALUsrc_ex = 0,
    output reg [1:0] ALUop_ex = 0,
    output reg branch_ex = 0,
    output reg mem_read_ex = 0,
    output reg mem_write_ex = 0,
    output reg reg_write_ex = 0,
    output reg mem_to_reg_ex = 0,
    output reg jump_ex = 0,
    output reg [31:0] cur_pc_ex = 0,
    output reg [31:0] cur_pc_plus4_ex = 0,
    output reg [31:0] rs1_data_ex = 0,
    output reg [31:0] rs2_data_ex = 0,
    output reg [31:0] generated_imm_ex = 0,
    output reg [3:0] func3_ex = 0,
    output reg [4:0] rd_ex = 0
);

    always @ (posedge clk) begin
        ALUsrc_ex = ALUsrc;
        ALUop_ex = ALUop;
        branch_ex = branch;
        mem_read_ex = mem_read;
        mem_write_ex = mem_write;
        reg_write_ex = reg_write;
        mem_to_reg_ex = mem_to_reg;
        jump_ex = jump;
        cur_pc_ex = cur_pc_id;
        cur_pc_plus4_ex = cur_pc_plus4_id;
        rs1_data_ex = rs1_data;
        rs2_data_ex = rs2_data;
        generated_imm_ex = generated_imm;
        func3_ex = func3;
        rd_ex = rd;
    end

endmodule
