#include <stdio.h>
#include <stdlib.h>

#include "VControlUnit.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

  VerilatedContext* contextp = new VerilatedContext;
  contextp->commandArgs(argc, argv);
  VControlUnit* cu = new VControlUnit{contextp};
  

  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  cu->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

  int cnt = 0;
  while (!contextp->gotFinish()) {
    int opcode;

    if(cnt % 5 == 0)  opcode = 51;
    if(cnt % 5 == 1)  opcode = 19;
    if(cnt % 5 == 2)  opcode = 35;
    if(cnt % 5 == 3)  opcode = 3;
    if(cnt % 5 == 4)  opcode = 99;
  
    cu->opcode = opcode;
    
    cu->eval();
    printf("opcode = %d\n, branch = %d\n, mem_read = %d\n, mem_to_reg = %d\n, ALU_op = %d\n, mem_write = %d\n, ALU_src = %d\n, reg_write = %d\n, \n", opcode, cu->branch, cu->mem_read, cu->mem_to_reg, cu->ALU_op, cu->mem_write, cu->ALU_src, cu->reg_write);

    tfp->dump(contextp->time()); //dump wave
    contextp->timeInc(1); //推动仿真时间

    // assert(top->f == ~((a&b) | (~(c&d))));
    if(cnt ++ > 10){
      printf("simulation finish");
      break;
    }
  }
  delete cu;
  tfp->close();
  delete contextp;
  return 0;
}
