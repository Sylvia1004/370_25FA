#include <stdio.h>
#include <stdlib.h>

#include "Vrisc_v_processor.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"
/*#include "adder.v"
#include "ALUcontrol.v"
#include "ALU.v"
#include "ControlUnit.v"
#include "DataMem.v"
#include "ImmGen.v"
#include "InstrMem.v"
#include "RegFile.v"
#include "two_to_one_Mux.v"
#include "PC.v"
#include "Decoder.v"*/

//#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vrisc_v_processor* top = new Vrisc_v_processor{contextp};


  //VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  //adder->trace(tfp, 0); //
  //tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int rst, clk;

        if(cnt % 2 == 0) clk = 0;
        else clk = 1;

        if(cnt == 0) rst = 1;
        else rst = 0;
    
        top->clk = clk;
        top->rst = rst;

        top->eval();
        printf("clk = %d\n, rst = %d\n, current_pc = %d\n, \n", clk, rst, top->cur_pc_op);

        //tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        if(cnt ++ > 150){
        printf("simulation finish");
        break;
        }
    }
    delete top;
    //tfp->close();
    delete contextp;
    return 0;
}
