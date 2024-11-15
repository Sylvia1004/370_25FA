#include <stdio.h>
#include <stdlib.h>

#include "VRegFile.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VRegFile* rf = new VRegFile{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  rf->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int rs1_add, rs2_add, reg_write, rd_add, write_reg_data;

        rs1_add = rand() % 32;
        rs2_add = rand() % 32;
        reg_write = rand() % 2;
        rd_add = rand() % 32;
        write_reg_data = rand();

        rf->rs1_add = rs1_add;
        rf->rs2_add = rs2_add;
        rf->reg_write = reg_write;
        rf->rd_add = rd_add;
        rf->write_reg_data = write_reg_data;

        rf->eval();
        printf("rs1_add = %d\n, rs2_add = %d\n, reg_write = %d\n, rd_add = %d\n, write_reg_data = %d\n, rs1_data = %d\n, rs2_data = %d\n, \n", rs1_add, rs2_add, reg_write, rd_add, write_reg_data, rf->rs1_data, rf->rs2_data);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 10){
        printf("simulation finish");
        break;
        }
    }
    delete rf;
    tfp->close();
    delete contextp;
    return 0;
}
