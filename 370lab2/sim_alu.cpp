#include <stdio.h>
#include <stdlib.h>

#include "VALU.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VALU* alu = new VALU{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  alu->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int rs1_data, source2_data, ALU_control;

        rs1_data = rand();
        source2_data = rand();
        ALU_control = rand() % 16;
        if(cnt % 5 == 0)  ALU_control = rand() % 7;
        if(cnt % 5 == 1)  ALU_control = 2;
        if(cnt % 5 == 2)  ALU_control = 6;
        if(cnt % 5 == 3)  ALU_control = 0;
        if(cnt % 5 == 4)  ALU_control = 1;

        alu->rs1_data = rs1_data;
        alu->source2_data = source2_data;
        alu->ALU_control = ALU_control;

        alu->eval();
        printf("rs1_data = %d\n, source2_data = %d\n, ALU_control = %d\n, ALU_result = %d\n, zero = %d\n, \n", rs1_data, source2_data, ALU_control, alu->ALU_result, alu->zero);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 10){
        printf("simulation finish");
        break;
        }
    }
    delete alu;
    tfp->close();
    delete contextp;
    return 0;
}
