`timescale 1ns / 1ps
module ALU (
    input [31:0] rs1_data, 
    input [31:0] source2_data, 
    input [3:0] ALU_control, 
    output reg [31:0] ALU_result, 
    output reg zero);

    integer i;
    
    always@(rs1_data, source2_data, ALU_control) begin
        case(ALU_control)
            4'b0010:
                ALU_result <= rs1_data + source2_data;
            4'b0110: 
                ALU_result <= rs1_data - source2_data;
            4'b0000:
                ALU_result <= rs1_data & source2_data;
            4'b0001: begin
                for(i = 0; i < 32; i++)
                    ALU_result[i] <= rs1_data[i] || source2_data[i];
            end
            default: 
                ALU_result <= rs1_data + source2_data;
        endcase

    end
    always@(ALU_result) begin
        if(ALU_result == 0)
            zero <= 1'b1;
        else
            zero <= 1'b0; 
    end
    
endmodule
