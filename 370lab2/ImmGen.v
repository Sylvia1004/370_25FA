`timescale 1ns / 1ps
module ImmGen(
    input [31:0] instruction,
    input [6:0] opcode,
    output reg [31:0] generated_imm);
    
    //reg [31:0] ins = 0;
    
    always@(instruction, opcode) begin
        //ins <= instruction;
        case(opcode)
            7'b1100011:// bne, beq
                begin
                    generated_imm[31:12] <= 0;
                    generated_imm[11] <= instruction[31];
                    generated_imm[9:4] <= instruction[30:25];
                    generated_imm[10] <= instruction[7];
                    generated_imm[3:0] <= instruction[11:8];
                end
            7'b0000011:// lw
                begin
                    generated_imm[31:12] <= 0;
                    generated_imm[11:0] <= instruction[31:20];
                end
            7'b0100011:// sw
                begin
                    generated_imm[31:12] <= 0;
                    generated_imm[11:5] <= instruction[31:25];
                    generated_imm[4:0] <= instruction[11:7];
                end
            7'b0010011:// addi
                begin
                    generated_imm[31:12] <= 0;
                    generated_imm[11:0] <= instruction[31:20];
                end
            default:// addi
                begin
                    generated_imm[31:12] <= 0;
                    generated_imm[11:0] <= instruction[31:20];
                end
        endcase
    end
    
endmodule
