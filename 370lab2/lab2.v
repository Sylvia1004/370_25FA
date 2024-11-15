module risc_v_processor (
    input clk,
    input reset,
    input [31:0] instruction,
    input [31:0] load_data,
    output reg [31:0] store_data,
    output reg [31:0] pc,
    output reg mem_write,
    output reg [31:0] alu_result
);

// ALU opcode definitions
localparam [3:0] ALU_ADD = 4'b0000;
localparam [3:0] ALU_SUB = 4'b0001;
localparam [3:0] ALU_AND = 4'b0010;
localparam [3:0] ALU_OR  = 4'b0011;

// Register file
reg [31:0] reg_file [0:31];
reg [31:0] rs1, rs2, rd;
reg [2:0] func3;
reg [6:0] opcode;
reg [31:0] imm;

// Instruction decoding variables
always @(*) begin
    opcode = instruction[6:0];
    rs1 = reg_file[instruction[19:15]];
    rs2 = reg_file[instruction[24:20]];
    func3 = instruction[14:12];
    imm = {{20{instruction[31]}}, instruction[31:20]}; // I-type immediate
end

// ALU operation
always @(*) begin
    case (opcode)
        7'b0110011: begin // R-type
            case (func3)
                3'b000: alu_result = (opcode[30] ? (rs1 - rs2) : (rs1 + rs2)); // add or sub
                3'b111: alu_result = rs1 & rs2; // and
                3'b110: alu_result = rs1 | rs2; // or
                default: alu_result = 32'hx; // undefined operation
            endcase
        end
        7'b0010011: begin // I-type
            case (func3)
                3'b000: alu_result = rs1 + imm; // addi
                default: alu_result = 32'hx; // undefined operation
            endcase
        end
        7'b0000011: begin // Load
            alu_result = rs1 + imm; // lw
        end
        7'b0100011: begin // Store
            store_data = rs2; // sw
        end
        7'b1100011: begin // Branch
            case (func3)
                3'b000: if (rs1 == rs2) pc = pc + imm; // beq
                3'b001: if (rs1 != rs2) pc = pc + imm; // bne
                default: pc = pc; // no branch
            endcase
        end
        default: alu_result = 32'hx; // undefined
    endcase
end


// Memory write logic
always @(*) begin
    case (opcode)
        7'b0100011: mem_write = 1; // sw
        default: mem_write = 0;
    endcase
end

// PC update logic
always @(posedge clk or posedge reset) begin
    if (reset) begin
        pc <= 0;
    end else begin
        pc <= pc + 4; // increment PC by 4 for next instruction
    end
end

// Register write back logic
always @(posedge clk) begin
    if (opcode == 7'b0110011 || opcode == 7'b0010011) begin
        reg_file[instruction[11:7]] <= alu_result; // Write to rd
    end else if (opcode == 7'b0000011) begin
        reg_file[instruction[11:7]] <= load_data; // Load data to rd
    end
end

endmodule