#include <stdio.h>
#include <stdlib.h>

#include "VInstrMem.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VInstrMem* ins = new VInstrMem{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  ins->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int cur_pc;

        cur_pc = (rand() % 18) * 4;
        
        ins->cur_pc = cur_pc;

        ins->eval();
        printf("cur_pc = %d\n, instruction = %d\n, \n", cur_pc, ins->instruction);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 20){
        printf("simulation finish");
        break;
        }
    }
    delete ins;
    tfp->close();
    delete contextp;
    return 0;
}
