#include <stdio.h>
#include <stdlib.h>

#include "VImmGen.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VImmGen* imm = new VImmGen{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  imm->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int instruction, opcode;

        instruction = rand();

        if(cnt % 5 == 0)  opcode = 99;
        if(cnt % 5 == 1)  opcode = 3;
        if(cnt % 5 == 2)  opcode = 35;
        if(cnt % 5 == 3)  opcode = 19;
        if(cnt % 5 == 4)  opcode = 19;

        imm->instruction = instruction;
        imm->opcode = opcode;

        imm->eval();
        printf("instruction= %d\n, opcode = %d\n, generated_imm = %d\n, \n", instruction, opcode, imm->generated_imm);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 10){
        printf("simulation finish");
        break;
        }
    }
    delete imm;
    tfp->close();
    delete contextp;
    return 0;
}
