`timescale 1ns / 1ps
module two_to_one_Mux(
    input mux,
    input [31:0] input1,
    input [31:0] input2,
    output reg [31:0] op
    );
    
    always@(mux, input1, input2) begin
        case(mux)
            1'b1: op <= input2;
            1'b0: op <= input1;
            default: op <= input1;
        endcase
    end
    
    
endmodule
