`timescale 1 ns / 1 ps

module ALU(
    input [31:0] data1,
    input [31:0] data2,
    input [3:0] ALU_con,
    output reg zero,
    output reg [31:0] ALUresult
);

    integer n, i;
    reg [31:0] sub = 0;

    always @(*) begin
        n[4:0] = data2[4:0];
        sub = data1 - data2;
        case(ALU_con)
            4'b0000: // AND
                ALUresult = data1 & data2;
            4'b0001: // OR  
                ALUresult = data1 | data2;
            4'b0010: // ADD
                ALUresult = data1 + data2;
            4'b0011: // NEQ
                ALUresult = (data1 == data2) ? 1 : 0;
            4'b0100: // SLL
                ALUresult = data1 << n;
            4'b0110: // SUB
                ALUresult = data1 - data2;
            4'b0111: // SLT
                ALUresult = (sub[31] == 1) ? 1 : 0;
            4'b1000: // SGE
                ALUresult = (sub[31] == 1) ? 0 : 1;
            4'b1001: // SRL
                ALUresult = data1 >>> n;
            4'b1100: begin // SRA
                for(i = 31 - n; i > 0; i--)
                    ALUresult[i] = data1[i + n];
                ALUresult[0] = data1[n];
                for(i = 31; i > 31 - n; i--)
                    ALUresult[i] = data1[31];
            end
            default:
                ALUresult = 32'b0;
        endcase

    if (ALUresult == 0) zero = 1;
    else zero = 0;

    end

endmodule
