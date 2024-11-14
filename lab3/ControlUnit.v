`timescale 1 ns / 1 ps

module ControlUnit(
    input [6:0] opcode,
    output reg ALUsrc = 0,
    output reg [1:0] ALUop = 0,
    output reg branch = 0,
    output reg mem_read = 0,
    output reg mem_write = 0, 
    output reg reg_write = 0,
    output reg mem_to_reg = 0,
    output reg jump = 0
);

    always@(*) begin
        case(opcode)
            7'b0110011: begin // R-type
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b10;
            mem_write = 0;
            ALUsrc = 0;
            reg_write = 1;
            jump = 0;
            end
        7'b0000011: begin // Load
            branch = 0;
            mem_read = 1;
            mem_to_reg = 1;
            ALUop = 2'b00;
            mem_write = 0;
            ALUsrc = 1;
            reg_write = 1;
            jump = 0;
            end
        7'b0010011: begin // immediate
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b10;
            mem_write = 0;
            ALUsrc = 1;
            reg_write = 1;
            jump = 0;
            end
        7'b0100011: begin // S-type
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b00;
            mem_write = 1;
            ALUsrc = 1;
            reg_write = 0;
            jump = 0;
            end
        7'b1100111: begin // jalr
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b11;
            mem_write = 0;
            ALUsrc = 1;
            reg_write = 1;
            jump = 1;
            end
        7'b1100011: begin // SB-type
            branch = 1;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b01;
            mem_write = 0;
            ALUsrc = 0;
            reg_write = 0;
            jump = 0;
        end
        7'b1101111: begin // UJ-type
            branch = 1;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b11;
            mem_write = 0;
            ALUsrc = 0;
            reg_write = 1;
            jump = 1;
        end
        default:begin // R-type
            branch = 0;
            mem_read = 0;
            mem_to_reg = 0;
            ALUop = 2'b10;
            mem_write = 0;
            ALUsrc = 0;
            reg_write = 1;
            jump = 0;
        end
        
        endcase
    end

endmodule
