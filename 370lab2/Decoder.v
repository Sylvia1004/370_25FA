`timescale 1ns / 1ps
module Decoder(
    input [31:0] instruction,
    output reg [6:0] opcode = 0, 
    output reg [4:0] rs1_add = 0, 
    output reg [4:0] rs2_add = 0, 
    output reg [4:0] rd_add = 0,
    output reg [9:0] ins_for_ALU = 0);

    always @ (*) begin
        opcode = instruction[6:0];
        rs1_add = instruction[19:15];
        rs2_add = instruction[24:20];
        rd_add = instruction[11:7];
        ins_for_ALU = {instruction[31:25], instruction[14:12]};
    end
endmodule
