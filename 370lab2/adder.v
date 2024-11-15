`timescale 1ns / 1ps
module adder (
    input [31:0] cur_pc,
    input [31:0] generated_imm,
    output reg [31:0] add_sum);
    
    //shift generated_imm left by 1 
    always@(cur_pc, generated_imm) 
        add_sum <= generated_imm * 2 + cur_pc;
    
endmodule
