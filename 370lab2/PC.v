`timescale 1ns / 1ps
module PC (
    input clk,
    input rst,
    input [31:0] next_pc,
    output reg [31:0] cur_pc);
    
    always @(posedge clk) begin
        if(rst) cur_pc <= 0;
        cur_pc <= next_pc;
    end
    
endmodule