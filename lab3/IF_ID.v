`timescale 1 ns / 1ps

module IF_ID (
    input clk,
    input [31:0] cur_pc,
    input [31:0] cur_pc_plus4,
    input [31:0] instruction,
    output reg [6:0] opcode = 0,
    output reg [31:0] cur_pc_id = 0,
    output reg [4:0] rs1 = 0,
    output reg [4:0] rs2 = 0,
    output reg [4:0] rd = 0,
    output reg [31:0] ins = 0,
    output reg [3:0] func3 = 0,
    output reg [31:0] cur_pc_plus4_id = 0
);

    always@(posedge clk) begin
        cur_pc_id <= cur_pc;
        ins <= instruction;
        cur_pc_plus4_id <= cur_pc_plus4;

        opcode = instruction[6:0];
        rs1 <= instruction[19:15];
        rs2 <= instruction[24:20];
        rd <= instruction[11:7];
        func3 <= {instruction[30], instruction[14:12]};
    end

endmodule
