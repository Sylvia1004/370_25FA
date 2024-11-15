`timescale 1ns / 1ps
module ControlUnit(
    input [6:0] opcode, 
    output reg branch, 
    output reg mem_read, 
    output reg mem_to_reg, 
    output reg [1:0] ALU_op, 
    output reg mem_write, 
    output reg ALU_src, 
    output reg reg_write);
    
    always@(opcode) begin
        case(opcode)
            7'b0110011:// add, sub, and, or
                begin
                    branch <= 1'b0;
                    mem_read <= 1'b0;
                    mem_to_reg <= 1'b0;
                    ALU_op <= 2'b10;
                    mem_write <= 1'b0;
                    ALU_src <= 1'b0;
                    reg_write <= 1'b1;
                end
            7'b0010011:// addi
                begin
                    branch <= 1'b0;
                    mem_read <= 1'b0;
                    mem_to_reg <= 1'b0;
                    ALU_op <= 2'b10;
                    mem_write <= 1'b0;
                    ALU_src <= 1'b1;
                    reg_write <= 1'b1;
                end
            7'b0100011:// sw
                begin
                    branch <= 1'b0;
                    mem_read <= 1'b0;
                    mem_to_reg <= 1'b0;
                    ALU_op <= 2'b00;
                    mem_write <= 1'b1;
                    ALU_src <= 1'b1;
                    reg_write <= 1'b0;
                end
            7'b0000011:// lw
                begin
                    branch <= 1'b0;
                    mem_read <= 1'b1;
                    mem_to_reg <= 1'b1;
                    ALU_op <= 2'b00;
                    mem_write <= 1'b0;
                    ALU_src <= 1'b1;
                    reg_write <= 1'b1;
                end
            7'b1100011:// beq, bne
                begin
                    branch <= 1'b1;
                    mem_read <= 1'b0;
                    mem_to_reg <= 1'b0;
                    ALU_op <= 2'b01;
                    mem_write <= 1'b0;
                    ALU_src <= 1'b0;
                    reg_write <= 1'b0;
                end
            default:// add, sub, and, or
                begin
                    branch <= 1'b0;
                    mem_read <= 1'b0;
                    mem_to_reg <= 1'b0;
                    ALU_op <= 2'b10;
                    mem_write <= 1'b0;
                    ALU_src <= 1'b0;
                    reg_write <= 1'b1;
                end
        endcase
    end
endmodule
