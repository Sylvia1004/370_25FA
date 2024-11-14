`timescale 1 ns / 1 ps

module MEM_WB(
    input clk,
    input reg_write_mem,
    input mem_to_reg_mem, 
    input jump_mem,
    input [31:0] cur_pc_plus4_mem,
    input [4:0] rd_mem,
    input [31:0] ALU_result_mem,
    input [31:0] mem_read_data,
    output reg reg_write_wb = 0,
    output reg mem_to_reg_wb = 0,
    output reg jump_wb = 0,
    output reg [31:0] cur_pc_plus4_wb = 0,
    output reg [4:0] rd_wb = 0,
    output reg [31:0] ALU_result_wb = 0,
    output reg [31:0] mem_read_data_wb = 0
);

    always @(posedge clk) begin
        reg_write_wb <= reg_write_mem;
        mem_to_reg_wb <= mem_to_reg_mem;
        jump_wb <= jump_mem;
        cur_pc_plus4_wb <= cur_pc_plus4_mem;
        rd_wb <= rd_mem;
        mem_read_data_wb <= mem_read_data;
        ALU_result_wb <= ALU_result_mem;
    end

endmodule 
