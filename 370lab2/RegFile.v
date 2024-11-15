`timescale 1ns / 1ps
module RegFile(
    input [4:0] rs1_add,
    input [4:0] rs2_add,
    input reg_write, 
    input [4:0] rd_add,
    input [31:0] write_reg_data,
    output reg [31:0]  rs1_data,
    output reg [31:0]  rs2_data);
    
    reg [31:0] registers [31:0];
    integer i;

    initial begin
        for(i = 0; i < 32; i++)
            registers[i] = i;
    end
    
    always@(reg_write, write_reg_data, rd_add) begin
        if(reg_write)
            registers[rd_add] <= write_reg_data;
    end
    
    always@(rs1_add, rs2_add) begin
        rs1_data <= registers[rs1_add];
        rs2_data <= registers[rs2_add];
    end
    
endmodule
