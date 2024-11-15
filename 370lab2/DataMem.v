`timescale 1ns / 1ps
module DataMem (
    input [31:0] address,
    input [31:0] store_data,
    input mem_write,
    input mem_read,
    output reg [31:0] load_data);
    
    reg [31:0] data_memory [2^32 - 1:0];
    
    always@(address, store_data, mem_write, mem_read) begin
        if(mem_write && !mem_read)
            data_memory[address] <= store_data;
    end
    
    always@(address, mem_write, mem_read) begin
        if(mem_read && !mem_write)
            load_data <= data_memory[address];
        else load_data <= 0;
    end
    
endmodule
