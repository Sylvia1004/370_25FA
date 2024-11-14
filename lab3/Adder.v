`timescale 1 ns / 1 ps

module Adder(
    input [31:0] imm,
    input [31:0] pc,
    output [31:0] add_sum
    );

    assign add_sum = pc + imm;

endmodule
