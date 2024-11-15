`timescale 1ns / 1ps

module sim1;
parameter half_period =3;
reg clk;

risc_v_processor SCP(clk);

    initial begin
        #3 clk=0;
        forever #half_period clk = ~clk;
    end
    initial begin
        assign SCP.cur_pc = 0;
        forever #6 begin
                $display("time:",$time);
                $display("PC:%b",SCP.cur_pc);
                //$display("Inst:",SCP.my_InstrMem);
                $display("x5(t0):%b",SCP.my_RegFile.registers[5]);
                $display("x6(t1):%b",SCP.my_RegFile.registers[6]);
                $display("x7(t2):%b",SCP.my_RegFile.registers[7]);
                $display("x28(t3):%b",SCP.my_RegFile.registers[28]);
                $display("x29(t4):%b",SCP.my_RegFile.registers[29]);
                $display("x8(s0):%b",SCP.my_RegFile.registers[8]);
                $display("x9(s1):%b",SCP.my_RegFile.registers[9]);
                $display("Mem[0]:%b",{SCP.my_DataMem.data_memory[3],SCP.my_DataMem.data_memory[2],SCP.my_DataMem.data_memory[1],SCP.my_DataMem.data_memory[0]});
                $display("Mem[4]:%b",{SCP.my_DataMem.data_memory[7],SCP.my_DataMem.data_memory[6],SCP.my_DataMem.data_memory[5],SCP.my_DataMem.data_memory[4]});
        end
    end
    initial #110 $stop;
endmodule