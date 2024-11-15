// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vrisc_v_processor__pch.h"
#include "Vrisc_v_processor.h"
#include "Vrisc_v_processor___024root.h"

// FUNCTIONS
Vrisc_v_processor__Syms::~Vrisc_v_processor__Syms()
{
}

Vrisc_v_processor__Syms::Vrisc_v_processor__Syms(VerilatedContext* contextp, const char* namep, Vrisc_v_processor* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(26);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
