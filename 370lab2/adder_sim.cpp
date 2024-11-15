#include <stdio.h>
#include <stdlib.h>

#include "Vadder.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vadder* adder = new Vadder{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  adder->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int cur_pc, generated_imm;

        cur_pc = rand();
        generated_imm = rand();

        adder->cur_pc = cur_pc;
        adder->generated_imm = generated_imm;

        adder->eval();
        printf("cur_pc = %d\n, generated_imm = %d\n, add_sum = %d\n, \n", cur_pc, generated_imm, adder->add_sum);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 10){
        printf("simulation finish");
        break;
        }
    }
    delete adder;
    tfp->close();
    delete contextp;
    return 0;
}
