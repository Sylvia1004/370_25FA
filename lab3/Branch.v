`timescale 1 ns / 1 ps

module Branch(
    input jump,
    input zero,
    input branch,
    input [31:0] cur_pc_plus4,
    input [31:0] add_sum,
    input [31:0] ALU_result,
    output reg [31:0] next_pc
);

always@(*) begin
    if(branch == 1 && (zero ==  1 || jump == 1))
        next_pc = add_sum;
    else if(branch == 0 && jump == 1)
        next_pc = ALU_result;
    else
        next_pc = cur_pc_plus4;
end

endmodule
