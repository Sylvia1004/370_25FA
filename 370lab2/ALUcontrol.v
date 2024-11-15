`timescale 1ns / 1ps
module ALUcontrol (
    input [9:0] ins_for_ALU,
    input [1:0] ALU_op,
    output reg [3:0] ALU_control);
    
    always@(ins_for_ALU, ALU_op) begin
        case(ALU_op)
            2'b00: 
                ALU_control <= 4'b0010;
            2'b01: 
                ALU_control <= 4'b0110;
            2'b10: begin
                case(ins_for_ALU)
                    10'b0000000000 : ALU_control <= 4'b0010;
                    10'b0100000000 : ALU_control <= 4'b0110;
                    10'b0000000111 : ALU_control <= 4'b0000;
                    10'b0000000110 : ALU_control <= 4'b0001;
                    default: ALU_control <= 4'b0010;
                endcase
            end
            default: 
                ALU_control <= 4'b0010;                
        endcase
    end
    
endmodule
