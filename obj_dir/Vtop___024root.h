// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*3:0*/ top__DOT__wmask;
    CData/*0:0*/ top__DOT__core0__DOT__branch_taken;
    CData/*3:0*/ top__DOT__core0__DOT__st_mask;
    CData/*0:0*/ top__DOT__core0__DOT__EX__DOT__lt;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ top__DOT__rdata;
    IData/*31:0*/ top__DOT__core0__DOT__PC;
    IData/*31:0*/ top__DOT__core0__DOT__nextpc;
    IData/*31:0*/ top__DOT__core0__DOT__csr_;
    IData/*31:0*/ top__DOT__core0__DOT__adder_result;
    IData/*31:0*/ top__DOT__core0__DOT__alu_result;
    IData/*31:0*/ top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4;
    IData/*31:0*/ top__DOT__core0__DOT__dmem_addr;
    IData/*31:0*/ top__DOT__core0__DOT__EX__DOT__in1;
    IData/*31:0*/ top__DOT__core0__DOT__EX__DOT__in2;
    IData/*31:0*/ top__DOT__core0__DOT__MEM__DOT__st_data__out__en2;
    QData/*63:0*/ top__DOT__i_data;
    QData/*32:0*/ top__DOT__core0__DOT__EX__DOT__subber;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__core0__DOT__INT;
    VlUnpacked<IData/*31:0*/, 8> top__DOT__core0__DOT__CSR;
    VlUnpacked<CData/*7:0*/, 8192> top__DOT__imem__DOT__flash;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
