`timescale 1 ns / 1 ps

module ImmGen(
    input [31:0] ins,
    input [6:0] opcode,
    output reg [31:0] imm
);

    always@(*)begin
        case (opcode)
            7'b0000011: begin // Load
                if (ins[31] == 1)
                    imm = {20'b1, ins[31:20]};
                else
                    imm = {20'b0, ins[31:20]};
            end
            7'b0010011: begin // immediate
                if (ins[31] == 1)
                    imm = {20'b1, ins[31:20]};
                else
                    imm = {20'b0, ins[31:20]};
            end
            7'b0100011: begin // S-type
                if (ins[31] == 1) 
                    imm = {20'b1, ins[31:25], ins[11:7]};
                else 
                    imm = {20'b0, ins[31:25], ins[11:7]};
            end
            7'b1100111: begin // jalr
                if (ins[31] == 1) 
                    imm = {20'b1, ins[31:20]};
                else 
                    imm = {20'b0, ins[31:20]};
            end
            7'b1100011: begin // SB-type
                if (ins[31] == 1) 
                    imm = {19'b1, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};
                else 
                    imm = {19'b0, ins[31], ins[7], ins[30:25], ins[11:8], 1'b0};
            end
            7'b1101111: begin // UJ-type
                if (ins[31] == 1) 
                    imm = {11'b1, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0};
                else 
                    imm = {11'b0, ins[31], ins[19:12], ins[20], ins[30:21], 1'b0};
            end
            default:
                imm = 32'b0;
        endcase
    end

endmodule
