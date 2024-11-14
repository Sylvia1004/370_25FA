#include <stdio.h>
#include <stdlib.h>

#include "Vpipeline_processor.h" 
#include "verilated.h"

//#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    Vpipeline_processor* top = new Vpipeline_processor{contextp};


  //VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  //adder->trace(tfp, 0); //
  //tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int clk;

        /*rst = 0;
        if(cnt <= 3)
            rst = 1;*/

        if(cnt % 2 == 1) clk = 0;
        else clk = 1;

        top->clk = clk;
        //top->rst = rst;

        top->eval();
        printf("cnt = %d\n, clk = %d\n, cur_pc_id = %d\n, instruction = %b\n, ra = %x\n, t0 = %x\n, t1 = %x\n, t2 = %x\n, t3 = %x\n, t4 = %x\n, \n", 
                cnt, clk,top->cur_pc_op, top->ins_op, top->ra_op, top->t0_op, top->t1_op, top->t2_op, top->t3_op, top->t4_op);

        //tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        if(cnt++ > 370){
        printf("simulation finish");
        break;
        }
    }
    delete top;
    //tfp->close();
    delete contextp;
    return 0;
}
