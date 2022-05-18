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
    CData/*0:0*/ top__DOT__core0__DOT__stall;
    CData/*0:0*/ top__DOT__core0__DOT__funct7_p1;
    CData/*7:0*/ top__DOT__core0__DOT__funct3_p1;
    CData/*4:0*/ top__DOT__core0__DOT__rd_p1;
    CData/*0:0*/ top__DOT__core0__DOT__stall_p1;
    CData/*0:0*/ top__DOT__core0__DOT__branch_taken;
    CData/*2:0*/ top__DOT__core0__DOT__funct3_p2;
    CData/*4:0*/ top__DOT__core0__DOT__rd_p2;
    CData/*0:0*/ top__DOT__core0__DOT__branch_taken_p2;
    CData/*0:0*/ top__DOT__core0__DOT__stall_p2;
    CData/*3:0*/ top__DOT__core0__DOT__st_mask_p3;
    CData/*4:0*/ top__DOT__core0__DOT__rd_p3;
    CData/*0:0*/ top__DOT__core0__DOT__branch_taken_p3;
    CData/*0:0*/ top__DOT__core0__DOT__stall_p3;
    CData/*0:0*/ top__DOT__core0__DOT__EX__DOT__lt;
    CData/*3:0*/ top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    IData/*31:0*/ top__DOT__rdata;
    IData/*31:0*/ top__DOT__core0__DOT__pc_p0;
    IData/*31:0*/ top__DOT__core0__DOT__nextpc;
    IData/*31:0*/ top__DOT__core0__DOT__uimm_p1;
    IData/*31:0*/ top__DOT__core0__DOT__iimm_p1;
    IData/*31:0*/ top__DOT__core0__DOT__simm_p1;
    IData/*31:0*/ top__DOT__core0__DOT__bimm_p1;
    IData/*31:0*/ top__DOT__core0__DOT__src2_p1;
    IData/*31:0*/ top__DOT__core0__DOT__src1_p1;
    IData/*31:0*/ top__DOT__core0__DOT__opcode_p1;
    IData/*31:0*/ top__DOT__core0__DOT__pc_p1;
    IData/*31:0*/ top__DOT__core0__DOT__adder_result;
    IData/*31:0*/ top__DOT__core0__DOT__alu_result;
    IData/*31:0*/ top__DOT__core0__DOT__adder_result_p2;
    IData/*31:0*/ top__DOT__core0__DOT__alu_result_p2;
    IData/*31:0*/ top__DOT__core0__DOT__opcode_p2;
    IData/*31:0*/ top__DOT__core0__DOT__src2_p2;
    IData/*31:0*/ top__DOT__core0__DOT__st_data_p3;
    IData/*31:0*/ top__DOT__core0__DOT__dmem_addr_p3;
    IData/*31:0*/ top__DOT__core0__DOT__opcode_p3;
    IData/*31:0*/ top__DOT__core0__DOT__alu_result_p3;
    IData/*31:0*/ top__DOT__core0__DOT__adder_result_p3;
    IData/*31:0*/ top__DOT__core0__DOT__EX__DOT__in1;
    IData/*31:0*/ top__DOT__core0__DOT__EX__DOT__in2;
    IData/*31:0*/ top__DOT__core0__DOT__MEM__DOT__addr__out__en0;
    IData/*31:0*/ top__DOT__core0__DOT__MEM__DOT__st_data__out__en2;
    QData/*63:0*/ top__DOT__i_data;
    QData/*32:0*/ top__DOT__core0__DOT__EX__DOT__subber;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__core0__DOT__int_p4;
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
