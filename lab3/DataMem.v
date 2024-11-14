`timescale 1 ns / 1 ps

module DataMem(
    input clk,
    input [31:0] address,
    input [31:0] store_data,
    input mem_read,
    input mem_write,
    input [3:0] func3,
    output reg [31:0] load_data
);

    reg [7:0] data_memory [127:0];
    integer i;

    initial begin
        for (i = 0; i < 128; i++) 
            data_memory[i] = 0;
    end

    
    always@(posedge clk) begin
        if(mem_write && !mem_read) begin
            case(func3)
                4'b1000://sb)
                    data_memory[address] <= store_data[7:0];
                4'b0000://sb
                    data_memory[address] <= store_data[7:0];
                4'b1010://sw
                    {data_memory[address+3], data_memory[address+2], data_memory[address+1], data_memory[address]} <= store_data;
                4'b0010://sw
                    {data_memory[address+3], data_memory[address+2], data_memory[address+1], data_memory[address]} <= store_data;
                default:
                    {data_memory[address+3], data_memory[address+2], data_memory[address+1], data_memory[address]} <= store_data;
            endcase
        end
        else if(mem_read && !mem_write) begin
            case(func3)
                4'b1000://lb
                    begin
                        if(load_data[7] == 1)begin
                            load_data[31:8] <= 24'b111111111111111111111111;
                            load_data[7:0] <= data_memory[address];
                        end
                        else begin
                            load_data[31:8] <= 24'b000000000000000000000000;
                            load_data[7:0] <= data_memory[address];
                        end
                    end
                4'b0000://lb
                    begin
                        if(load_data[7] == 1)begin
                            load_data[31:8] <= 24'b111111111111111111111111;
                            load_data[7:0] <= data_memory[address];
                        end
                        else begin
                            load_data[31:8] <= 24'b000000000000000000000000;
                            load_data[7:0] <= data_memory[address];
                        end
                    end
                4'b1010://lw
                    load_data <= {data_memory[address+3], data_memory[address+2], data_memory[address+1], data_memory[address]};
                4'b0010://lw
                    load_data <= {data_memory[address+3], data_memory[address+2], data_memory[address+1], data_memory[address]};
                4'b1100://lbu
                    begin
                        load_data[31:8] <= 24'b000000000000000000000000;
                        load_data[7:0] <= data_memory[address];
                    end
                4'b0100://lbu
                    begin
                        load_data[31:8] <= 24'b000000000000000000000000;
                        load_data[7:0] <= data_memory[address];
                    end
                default:
                    load_data <= {data_memory[address+3], data_memory[address+2], data_memory[address+1], data_memory[address]};
            endcase
        end 
    end


endmodule