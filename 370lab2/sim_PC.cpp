#include <stdio.h>
#include <stdlib.h>

#include "VPC.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"


//#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VPC* pc = new VPC{contextp};


  //VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  //contextp->traceEverOn(true); //打开追踪功能
  //pc->trace(tfp, 0); //
  //tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int rst, clk, next_pc;

        if(cnt % 2 == 0) clk = 0;
        else clk = 1;

        if(cnt < 6)  rst = 1;
        if(cnt >= 6) rst = 0;

        next_pc = rand();
    
        pc->clk = clk;
        pc->rst = rst;
        pc->next_pc = next_pc;

        pc->eval();
        printf("clk = %d\n, rst = %d\n, next_pc = %d\n, current PC = %d\n, \n", clk, rst, next_pc, pc->cur_pc);

        //tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        if(cnt ++ > 10){
        printf("simulation finish");
        break;
        }
    }
    delete pc;
    //tfp->close();
    delete contextp;
    return 0;
}
