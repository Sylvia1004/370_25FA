#include <stdio.h>
#include <stdlib.h>

#include "VDataMem.h"  // create `top.v`,so use `Vtop.h`
#include "verilated.h"

#include "verilated_vcd_c.h" //可选，如果要导出vcd则需要加上

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    contextp->commandArgs(argc, argv);
    VDataMem* data = new VDataMem{contextp};


  VerilatedVcdC* tfp = new VerilatedVcdC; //初始化VCD对象指针
  contextp->traceEverOn(true); //打开追踪功能
  data->trace(tfp, 0); //
  tfp->open("wave.vcd"); //设置输出的文件wave.vcd

    int cnt = 0;
    
    while (!contextp->gotFinish()) {
        int address, store_data, mem_write, mem_read;

        address = rand() %10;
        store_data = rand();
        mem_write = rand() % 2;
        mem_read = rand() % 2;
        
        data->address = address;
        data->store_data = store_data;
        data->mem_write = mem_write;
        data->mem_read = mem_read;

        data->eval();
        printf("address = %d\n, store_data = %d\n, mem_write = %d\n, mem_read = %d\n, load_data = %d\n, \n", address, store_data, mem_write, mem_read, data->load_data);

        tfp->dump(contextp->time()); //dump wave
        contextp->timeInc(1); //推动仿真时间

        // assert(top->f == ~((a&b) | (~(c&d))));
        if(cnt ++ > 40){
        printf("simulation finish");
        break;
        }
    }
    delete data;
    tfp->close();
    delete contextp;
    return 0;
}
