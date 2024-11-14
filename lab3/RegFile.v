`timescale 1 ns / 1 ps

module RegFile(
    input clk,
    input [4:0] rs1,
    input [4:0] rs2,
    input [4:0] rd_wb,
    input [31:0] write_reg_data,
    input reg_write,
    output [31:0] rs1_data,
    output [31:0] rs2_data,
    output [31:0] ra,
    output [31:0] t0, 
    output [31:0] t1,
    output [31:0] t2,
    output [31:0] t3,
    output [31:0] t4
);

    integer i;
    reg [31:0] registers [31:0];

    initial begin
        for(i = 0; i < 32; i++)
            registers[i] = 32'b0;
    end 

    always@(posedge clk) begin
        if(rd_wb != 5'b0 && reg_write)
            registers[rd_wb] = write_reg_data;
    end

    assign rs1_data = registers[rs1];
    assign rs2_data = registers[rs2];

    assign ra = registers[1];
    assign t0 = registers[5];
    assign t1 = registers[6];
    assign t2 = registers[7];
    assign t3 = registers[28];
    assign t4 = registers[29];
    
    

endmodule