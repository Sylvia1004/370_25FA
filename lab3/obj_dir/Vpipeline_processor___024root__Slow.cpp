// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpipeline_processor.h for the primary calling header

#include "Vpipeline_processor__pch.h"
#include "Vpipeline_processor__Syms.h"
#include "Vpipeline_processor___024root.h"

void Vpipeline_processor___024root___ctor_var_reset(Vpipeline_processor___024root* vlSelf);

Vpipeline_processor___024root::Vpipeline_processor___024root(Vpipeline_processor__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vpipeline_processor___024root___ctor_var_reset(this);
}

void Vpipeline_processor___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vpipeline_processor___024root::~Vpipeline_processor___024root() {
}
