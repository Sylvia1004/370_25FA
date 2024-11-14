`timescale 1 ns / 1 ps

module ALUcontrol(
    input [1:0] ALUop,
    input [3:0] func3,
    output reg [3:0] ALUcontrol
);

    always @ (*) begin
        case (ALUop) 
            2'b00: 
                ALUcontrol = 4'b0010;
            2'b01: begin
                case (func3)
                    4'b0000: //beq
                        ALUcontrol = 4'b0110;
                    4'b1000: //beq
                        ALUcontrol = 4'b0110;
                    4'b1001: //bne
                        ALUcontrol = 4'b0011;
                    4'b0001: //bne
                        ALUcontrol = 4'b0011;
                    4'b0100: //blt
                        ALUcontrol = 4'b1000;
                    4'b1100: //blt
                        ALUcontrol = 4'b1000;
                    4'b1101: //bge
                        ALUcontrol = 4'b0111;
                    4'b0101: //bge
                        ALUcontrol = 4'b0111;
                    default:
                        ALUcontrol = 4'b0010;
                endcase
            end
            2'b10: begin
                case (func3)
                    4'b0000: //add
                        ALUcontrol = 4'b0010;
                    4'b1000: //add
                        ALUcontrol = 4'b0110;
                    4'b0001: //slli
                        ALUcontrol = 4'b0100;
                    4'b0010: //slt
                        ALUcontrol = 4'b0111;
                    4'b0101: //srli, srl
                        ALUcontrol = 4'b1001;
                    4'b0110: //or
                        ALUcontrol = 4'b0001;
                    4'b0111: //and, andi
                        ALUcontrol = 4'b0000;
                    4'b1111: //and, andi
                        ALUcontrol = 4'b0000;
                    4'b1101: //sra
                        ALUcontrol = 4'b1100;
                    default: 
                        ALUcontrol = 4'b0010;
                endcase
            end
            2'b11: //add
                ALUcontrol = 4'b0010;
        endcase
    end

endmodule
