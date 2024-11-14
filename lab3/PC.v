`timescale 1ns / 1ps

module PC(
    input clk,
    input [31:0] next_pc,
    output reg [31:0] cur_pc = 0
);

always @(posedge clk) 
    cur_pc <= next_pc;

endmodule