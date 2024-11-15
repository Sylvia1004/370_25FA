#include <stdio.h>
#include <stdlib.h>

#include "Vtwo_to_one_Mux.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vtwo_to_one_Mux* mux_21 = new Vtwo_to_one_Mux{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  mux_21->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int mux, input1, input2;

        mux = rand() % 2;
        input1 = rand();
        input2 = rand();

        mux_21->mux = mux;
        mux_21->input1 = input1;
        mux_21->input2 = input2;

        mux_21->eval();
        printf("mux = %d\n, input1 = %d\n, input2 = %d\n, op = %d\n, \n", mux, input1, input2, mux_21->op);
        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 10){
        printf("simulation finish");
        break;
        }
    }
    delete mux_21;
    tfp->close();
    delete contextp;
    return 0;
}
