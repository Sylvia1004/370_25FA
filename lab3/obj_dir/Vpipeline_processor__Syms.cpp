// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vpipeline_processor__pch.h"
#include "Vpipeline_processor.h"
#include "Vpipeline_processor___024root.h"

// FUNCTIONS
Vpipeline_processor__Syms::~Vpipeline_processor__Syms()
{
}

Vpipeline_processor__Syms::Vpipeline_processor__Syms(VerilatedContext* contextp, const char* namep, Vpipeline_processor* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(297);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
