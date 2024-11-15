#include <stdio.h>
#include <stdlib.h>

#include "VALUcontrol.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VALUcontrol* alu = new VALUcontrol{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  alu->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int ins_for_ALU, ALU_op;

        ALU_op = rand() % 4;
        if(cnt % 6 == 0)  ins_for_ALU = 0;
        if(cnt % 6 == 1)  ins_for_ALU = 2;
        if(cnt % 6 == 2)  ins_for_ALU = 10;
        if(cnt % 6 == 3)  ins_for_ALU = 8;
        if(cnt % 6 == 4)  ins_for_ALU = 6;
        if(cnt % 6 == 5)  ins_for_ALU = 7;

        alu->ins_for_ALU = ins_for_ALU;
        alu->ALU_op = ALU_op;

        alu->eval();
        printf("ins_for_ALU = %d\n, ALU_OP = %d\n, ALU_control = %d\n, \n", ins_for_ALU, ALU_op, alu->ALU_control);
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
