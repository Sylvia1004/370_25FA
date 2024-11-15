// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRISC_V_PROCESSOR__SYMS_H_
#define VERILATED_VRISC_V_PROCESSOR__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vrisc_v_processor.h"

// INCLUDE MODULE CLASSES
#include "Vrisc_v_processor___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vrisc_v_processor__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vrisc_v_processor* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vrisc_v_processor___024root    TOP;

    // CONSTRUCTORS
    Vrisc_v_processor__Syms(VerilatedContext* contextp, const char* namep, Vrisc_v_processor* modelp);
    ~Vrisc_v_processor__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
