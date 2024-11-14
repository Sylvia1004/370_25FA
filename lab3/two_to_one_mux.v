`timescale 1ns / 1ps

module two_to_one_mux(
    input mux,
    input [31:0] input1,
    input [31:0] input2,
    output reg [31:0] op
);

    always@(*) begin
        if(mux == 1) op = input2;
        else op = input1;
    end

endmodule
