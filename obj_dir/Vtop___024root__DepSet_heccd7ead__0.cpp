// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__imem__DOT__data1_o__out__en0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__core0__DOT__int_p4__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__core0__DOT__int_p4__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__core0__DOT__int_p4__v0;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v0;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v1;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v2;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v2;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v3;
    // Body
    __Vdlyvset__top__DOT__core0__DOT__int_p4__v0 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v0 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v1 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v2 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v3 = 0U;
    vlSelf->top__DOT__core0__DOT__bimm_p1 = (((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x3fU))))) 
                                              << 0xcU) 
                                             | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x27U)) 
                                                    << 0xbU)) 
                                                | ((0x7e0U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__i_data 
                                                                >> 0x39U)) 
                                                       << 5U)) 
                                                   | (0x1eU 
                                                      & ((IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x28U)) 
                                                         << 1U)))));
    vlSelf->top__DOT__core0__DOT__funct7_p1 = (1U & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x3eU)));
    vlSelf->top__DOT__core0__DOT__simm_p1 = (((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x3fU))))) 
                                              << 0xbU) 
                                             | ((0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x39U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x27U)))));
    vlSelf->top__DOT__core0__DOT__iimm_p1 = (((- (IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x3fU))))) 
                                              << 0xbU) 
                                             | (0x7ffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x34U))));
    vlSelf->top__DOT__core0__DOT__uimm_p1 = ((IData)(
                                                     (vlSelf->top__DOT__i_data 
                                                      >> 0x2cU)) 
                                             << 0xcU);
    vlSelf->top__DOT__core0__DOT__pc_p1 = vlSelf->top__DOT__core0__DOT__pc_p0;
    if (((((0U != (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)) 
           & (~ (vlSelf->top__DOT__core0__DOT__opcode_p3 
                 >> 8U))) & (~ (IData)(vlSelf->top__DOT__core0__DOT__branch_taken_p3))) 
         & (~ (IData)(vlSelf->top__DOT__core0__DOT__stall_p3)))) {
        __Vdlyvval__top__DOT__core0__DOT__int_p4__v0 
            = ((IData)((0U != (0xa002020U & vlSelf->top__DOT__core0__DOT__opcode_p3)))
                ? vlSelf->top__DOT__core0__DOT__adder_result_p3
                : ((IData)((0U != (0x1010U & vlSelf->top__DOT__core0__DOT__opcode_p3)))
                    ? vlSelf->top__DOT__core0__DOT__alu_result_p3
                    : ((1U & vlSelf->top__DOT__core0__DOT__opcode_p3)
                        ? ((8U & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                            ? vlSelf->top__DOT__rdata
                            : ((2U & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                ? (0xffffU & vlSelf->top__DOT__rdata)
                                : (0xffU & vlSelf->top__DOT__rdata)))
                        : 0U)));
        __Vdlyvset__top__DOT__core0__DOT__int_p4__v0 = 1U;
        __Vdlyvdim0__top__DOT__core0__DOT__int_p4__v0 
            = vlSelf->top__DOT__core0__DOT__rd_p3;
    }
    if ((8U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v0 
            = (vlSelf->top__DOT__core0__DOT__st_data_p3 
               >> 0x18U);
        __Vdlyvset__top__DOT__imem__DOT__flash__v0 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v0 
            = (0x1fffU & ((IData)(3U) + vlSelf->top__DOT__core0__DOT__dmem_addr_p3));
    }
    if ((4U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v1 
            = (0xffU & (vlSelf->top__DOT__core0__DOT__st_data_p3 
                        >> 0x10U));
        __Vdlyvset__top__DOT__imem__DOT__flash__v1 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v1 
            = (0x1fffU & ((IData)(2U) + vlSelf->top__DOT__core0__DOT__dmem_addr_p3));
    }
    if ((2U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v2 
            = (0xffU & (vlSelf->top__DOT__core0__DOT__st_data_p3 
                        >> 8U));
        __Vdlyvset__top__DOT__imem__DOT__flash__v2 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v2 
            = (0x1fffU & ((IData)(1U) + vlSelf->top__DOT__core0__DOT__dmem_addr_p3));
    }
    if ((1U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v3 
            = (0xffU & vlSelf->top__DOT__core0__DOT__st_data_p3);
        __Vdlyvset__top__DOT__imem__DOT__flash__v3 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v3 
            = (0x1fffU & vlSelf->top__DOT__core0__DOT__dmem_addr_p3);
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v0) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v0] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v0;
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v1) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v1] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v1;
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v2) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v2] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v2;
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v3) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v3] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v3;
    }
    vlSelf->top__DOT__core0__DOT__pc_p0 = ((IData)(vlSelf->reset)
                                            ? vlSelf->top__DOT__core0__DOT__nextpc
                                            : 0U);
    vlSelf->top__DOT__core0__DOT__branch_taken_p3 = vlSelf->top__DOT__core0__DOT__branch_taken_p2;
    vlSelf->top__DOT__core0__DOT__stall_p3 = vlSelf->top__DOT__core0__DOT__stall_p2;
    vlSelf->top__DOT__core0__DOT__dmem_addr_p3 = ((
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x101U 
                                                              & vlSelf->top__DOT__core0__DOT__opcode_p2)))
                                                     ? vlSelf->top__DOT__core0__DOT__adder_result_p2
                                                     : 0U) 
                                                   & vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0) 
                                                  & vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0);
    vlSelf->top__DOT__core0__DOT__st_data_p3 = ((((0x100U 
                                                   & vlSelf->top__DOT__core0__DOT__opcode_p2)
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                    ? 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__core0__DOT__src2_p2)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                     ? 
                                                    (0xffffU 
                                                     & vlSelf->top__DOT__core0__DOT__src2_p2)
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                      ? vlSelf->top__DOT__core0__DOT__src2_p2
                                                      : 0U)))
                                                   : 0U) 
                                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                                & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2);
    vlSelf->top__DOT__core0__DOT__branch_taken_p2 = vlSelf->top__DOT__core0__DOT__branch_taken;
    vlSelf->top__DOT__core0__DOT__stall_p2 = vlSelf->top__DOT__core0__DOT__stall_p1;
    vlSelf->top__DOT__core0__DOT__src2_p2 = vlSelf->top__DOT__core0__DOT__src2_p1;
    vlSelf->top__DOT__core0__DOT__stall_p1 = vlSelf->top__DOT__core0__DOT__stall;
    vlSelf->top__DOT__core0__DOT__src2_p1 = ((vlSelf->top__DOT__core0__DOT__opcode_p3 
                                              & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x34U))) 
                                                 == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                              ? ((8U 
                                                  & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                  ? vlSelf->top__DOT__rdata
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__rdata)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__rdata)))
                                              : (((
                                                   (0U 
                                                    != (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0x9002020U 
                                                               & vlSelf->top__DOT__core0__DOT__opcode_p1)))) 
                                                  & ((0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__i_data 
                                                                 >> 0x34U))) 
                                                     == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)))
                                                  ? vlSelf->top__DOT__core0__DOT__adder_result
                                                  : 
                                                 ((((0U 
                                                     != (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x1010U 
                                                                & vlSelf->top__DOT__core0__DOT__opcode_p1)))) 
                                                   & ((0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x34U))) 
                                                      == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)))
                                                   ? vlSelf->top__DOT__core0__DOT__alu_result
                                                   : 
                                                  ((((0U 
                                                      != (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0x9002020U 
                                                                 & vlSelf->top__DOT__core0__DOT__opcode_p2)))) 
                                                    & ((0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x34U))) 
                                                       == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)))
                                                    ? vlSelf->top__DOT__core0__DOT__adder_result_p2
                                                    : 
                                                   ((((0U 
                                                       != (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1010U 
                                                                  & vlSelf->top__DOT__core0__DOT__opcode_p2)))) 
                                                     & ((0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x34U))) 
                                                        == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)))
                                                     ? vlSelf->top__DOT__core0__DOT__alu_result_p2
                                                     : 
                                                    ((((0U 
                                                        != (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x9002020U 
                                                                   & vlSelf->top__DOT__core0__DOT__opcode_p3)))) 
                                                      & ((0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x34U))) 
                                                         == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                                      ? vlSelf->top__DOT__core0__DOT__adder_result_p3
                                                      : 
                                                     ((((0U 
                                                         != (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1010U 
                                                                    & vlSelf->top__DOT__core0__DOT__opcode_p3)))) 
                                                       & ((0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x34U))) 
                                                          == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                                       ? vlSelf->top__DOT__core0__DOT__alu_result_p3
                                                       : 
                                                      vlSelf->top__DOT__core0__DOT__int_p4
                                                      [
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x34U)))])))))));
    vlSelf->top__DOT__core0__DOT__src1_p1 = ((vlSelf->top__DOT__core0__DOT__opcode_p3 
                                              & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x2fU))) 
                                                 == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                              ? ((8U 
                                                  & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                  ? vlSelf->top__DOT__rdata
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                   ? 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__rdata)
                                                   : 
                                                  (0xffU 
                                                   & vlSelf->top__DOT__rdata)))
                                              : (((
                                                   (0U 
                                                    != (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0x9002020U 
                                                               & vlSelf->top__DOT__core0__DOT__opcode_p1)))) 
                                                  & ((0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__i_data 
                                                                 >> 0x2fU))) 
                                                     == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)))
                                                  ? vlSelf->top__DOT__core0__DOT__adder_result
                                                  : 
                                                 ((((0U 
                                                     != (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0x1010U 
                                                                & vlSelf->top__DOT__core0__DOT__opcode_p1)))) 
                                                   & ((0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x2fU))) 
                                                      == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)))
                                                   ? vlSelf->top__DOT__core0__DOT__alu_result
                                                   : 
                                                  ((((0U 
                                                      != (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0x9002020U 
                                                                 & vlSelf->top__DOT__core0__DOT__opcode_p2)))) 
                                                    & ((0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x2fU))) 
                                                       == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)))
                                                    ? vlSelf->top__DOT__core0__DOT__adder_result_p2
                                                    : 
                                                   ((((0U 
                                                       != (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)) 
                                                      & (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1010U 
                                                                  & vlSelf->top__DOT__core0__DOT__opcode_p2)))) 
                                                     & ((0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x2fU))) 
                                                        == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)))
                                                     ? vlSelf->top__DOT__core0__DOT__alu_result_p2
                                                     : 
                                                    ((((0U 
                                                        != (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x9002020U 
                                                                   & vlSelf->top__DOT__core0__DOT__opcode_p3)))) 
                                                      & ((0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x2fU))) 
                                                         == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                                      ? vlSelf->top__DOT__core0__DOT__adder_result_p3
                                                      : 
                                                     ((((0U 
                                                         != (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)) 
                                                        & (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1010U 
                                                                    & vlSelf->top__DOT__core0__DOT__opcode_p3)))) 
                                                       & ((0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x2fU))) 
                                                          == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                                       ? vlSelf->top__DOT__core0__DOT__alu_result_p3
                                                       : 
                                                      vlSelf->top__DOT__core0__DOT__int_p4
                                                      [
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x2fU)))])))))));
    if (__Vdlyvset__top__DOT__core0__DOT__int_p4__v0) {
        vlSelf->top__DOT__core0__DOT__int_p4[__Vdlyvdim0__top__DOT__core0__DOT__int_p4__v0] 
            = __Vdlyvval__top__DOT__core0__DOT__int_p4__v0;
    }
    vlSelf->top__DOT__core0__DOT__adder_result_p3 = vlSelf->top__DOT__core0__DOT__adder_result_p2;
    vlSelf->top__DOT__core0__DOT__alu_result_p3 = vlSelf->top__DOT__core0__DOT__alu_result_p2;
    vlSelf->top__DOT__core0__DOT__rd_p3 = vlSelf->top__DOT__core0__DOT__rd_p2;
    vlSelf->top__DOT__core0__DOT__opcode_p3 = vlSelf->top__DOT__core0__DOT__opcode_p2;
    vlSelf->top__DOT__core0__DOT__st_mask_p3 = ((((IData)(
                                                          (0U 
                                                           != 
                                                           (0x101U 
                                                            & vlSelf->top__DOT__core0__DOT__opcode_p2)))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                     ? 3U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                      ? 0xfU
                                                      : 0U)))
                                                   : 0U) 
                                                 & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1)) 
                                                & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1));
    vlSelf->top__DOT__core0__DOT__adder_result_p2 = vlSelf->top__DOT__core0__DOT__adder_result;
    vlSelf->top__DOT__core0__DOT__alu_result_p2 = vlSelf->top__DOT__core0__DOT__alu_result;
    vlSelf->top__DOT__core0__DOT__rd_p2 = vlSelf->top__DOT__core0__DOT__rd_p1;
    top__DOT__imem__DOT__data1_o__out__en0 = ((1U & 
                                               ((~ vlSelf->top__DOT__core0__DOT__opcode_p3) 
                                                | (0U 
                                                   != 
                                                   (vlSelf->top__DOT__core0__DOT__dmem_addr_p3 
                                                    >> 0xfU))))
                                               ? 0U
                                               : 0xffffffffU);
    vlSelf->top__DOT__wmask = ((0x100U & vlSelf->top__DOT__core0__DOT__opcode_p3)
                                ? (0xfU & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                : 0U);
    vlSelf->top__DOT__core0__DOT__funct3_p2 = (7U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1));
    vlSelf->top__DOT__core0__DOT__opcode_p2 = vlSelf->top__DOT__core0__DOT__opcode_p1;
    vlSelf->top__DOT__rdata = ((((1U & ((~ vlSelf->top__DOT__core0__DOT__opcode_p3) 
                                        | (0U != (vlSelf->top__DOT__core0__DOT__dmem_addr_p3 
                                                  >> 0xfU))))
                                  ? 0U : ((vlSelf->top__DOT__imem__DOT__flash
                                           [(0x1fffU 
                                             & ((IData)(3U) 
                                                + vlSelf->top__DOT__core0__DOT__dmem_addr_p3))] 
                                           << 0x18U) 
                                          | ((vlSelf->top__DOT__imem__DOT__flash
                                              [(0x1fffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__core0__DOT__dmem_addr_p3))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__imem__DOT__flash
                                                 [(0x1fffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__core0__DOT__dmem_addr_p3))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__imem__DOT__flash
                                                [(0x1fffU 
                                                  & vlSelf->top__DOT__core0__DOT__dmem_addr_p3)])))) 
                                & top__DOT__imem__DOT__data1_o__out__en0) 
                               & top__DOT__imem__DOT__data1_o__out__en0);
    vlSelf->top__DOT__core0__DOT__rd_p1 = (0x1fU & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x27U)));
    vlSelf->top__DOT__core0__DOT__funct3_p1 = (0xffU 
                                               & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x2cU)))));
    if ((IData)((0U != (0x101U & vlSelf->top__DOT__core0__DOT__opcode_p2)))) {
        vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0 = 0xffffffffU;
        vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1 
            = ((1U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                ? 0xfU : ((2U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                           ? 0xfU : ((4U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                      ? 0xfU : 0U)));
    } else {
        vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0 = 0U;
        vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1 = 0U;
    }
    vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2 
        = ((0x100U & vlSelf->top__DOT__core0__DOT__opcode_p2)
            ? ((1U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                ? 0xffU : ((2U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                            ? 0xffffU : ((4U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                          ? 0xffffffffU
                                          : 0U))) : 0U);
    vlSelf->top__DOT__core0__DOT__opcode_p1 = ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U))));
    vlSelf->top__DOT__i_data = ((((0U == (vlSelf->top__DOT__core0__DOT__pc_p0 
                                          >> 0xfU))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->top__DOT__imem__DOT__flash
                                                         [
                                                         (0x1fffU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->top__DOT__core0__DOT__pc_p0))] 
                                                         << 0x18U) 
                                                        | ((vlSelf->top__DOT__imem__DOT__flash
                                                            [
                                                            (0x1fffU 
                                                             & ((IData)(2U) 
                                                                + vlSelf->top__DOT__core0__DOT__pc_p0))] 
                                                            << 0x10U) 
                                                           | ((vlSelf->top__DOT__imem__DOT__flash
                                                               [
                                                               (0x1fffU 
                                                                & ((IData)(1U) 
                                                                   + vlSelf->top__DOT__core0__DOT__pc_p0))] 
                                                               << 8U) 
                                                              | vlSelf->top__DOT__imem__DOT__flash
                                                              [
                                                              (0x1fffU 
                                                               & vlSelf->top__DOT__core0__DOT__pc_p0)]))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelf->top__DOT__imem__DOT__flash
                                                                     [
                                                                     (0x1fffU 
                                                                      & ((IData)(7U) 
                                                                         + vlSelf->top__DOT__core0__DOT__pc_p0))] 
                                                                     << 0x18U) 
                                                                    | ((vlSelf->top__DOT__imem__DOT__flash
                                                                        [
                                                                        (0x1fffU 
                                                                         & ((IData)(6U) 
                                                                            + vlSelf->top__DOT__core0__DOT__pc_p0))] 
                                                                        << 0x10U) 
                                                                       | ((vlSelf->top__DOT__imem__DOT__flash
                                                                           [
                                                                           (0x1fffU 
                                                                            & ((IData)(5U) 
                                                                               + vlSelf->top__DOT__core0__DOT__pc_p0))] 
                                                                           << 8U) 
                                                                          | vlSelf->top__DOT__imem__DOT__flash
                                                                          [
                                                                          (0x1fffU 
                                                                           & ((IData)(4U) 
                                                                              + vlSelf->top__DOT__core0__DOT__pc_p0))]))))))
                                   : 0ULL) & ((0U == 
                                               (vlSelf->top__DOT__core0__DOT__pc_p0 
                                                >> 0xfU))
                                               ? 0xffffffffffffffffULL
                                               : 0ULL)) 
                                & ((0U == (vlSelf->top__DOT__core0__DOT__pc_p0 
                                           >> 0xfU))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
    vlSelf->top__DOT__core0__DOT__stall = ((((vlSelf->top__DOT__core0__DOT__opcode_p1 
                                              & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x2fU))) 
                                                 == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1))) 
                                             | (vlSelf->top__DOT__core0__DOT__opcode_p2 
                                                & ((0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__i_data 
                                                               >> 0x2fU))) 
                                                   == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)))) 
                                            | (vlSelf->top__DOT__core0__DOT__opcode_p1 
                                               & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x34U))) 
                                                  == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)))) 
                                           | (vlSelf->top__DOT__core0__DOT__opcode_p2 
                                              & ((0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x34U))) 
                                                 == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2))));
    vlSelf->top__DOT__core0__DOT__EX__DOT__in1 = ((IData)(
                                                          (0U 
                                                           != 
                                                           (0xa000020U 
                                                            & vlSelf->top__DOT__core0__DOT__opcode_p1)))
                                                   ? vlSelf->top__DOT__core0__DOT__pc_p1
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->top__DOT__core0__DOT__opcode_p1)
                                                    ? 0U
                                                    : vlSelf->top__DOT__core0__DOT__src1_p1));
    vlSelf->top__DOT__core0__DOT__EX__DOT__in2 = ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x1001000U 
                                                            & vlSelf->top__DOT__core0__DOT__opcode_p1)))
                                                   ? vlSelf->top__DOT__core0__DOT__src2_p1
                                                   : 
                                                  ((0x100U 
                                                    & vlSelf->top__DOT__core0__DOT__opcode_p1)
                                                    ? vlSelf->top__DOT__core0__DOT__simm_p1
                                                    : 
                                                   ((IData)(
                                                            (0U 
                                                             != 
                                                             (0x2020U 
                                                              & vlSelf->top__DOT__core0__DOT__opcode_p1)))
                                                     ? vlSelf->top__DOT__core0__DOT__uimm_p1
                                                     : 
                                                    ((IData)(
                                                             (0U 
                                                              != 
                                                              (0xa000000U 
                                                               & vlSelf->top__DOT__core0__DOT__opcode_p1)))
                                                      ? 4U
                                                      : vlSelf->top__DOT__core0__DOT__iimm_p1))));
    vlSelf->top__DOT__core0__DOT__adder_result = (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                  + vlSelf->top__DOT__core0__DOT__EX__DOT__in2);
    vlSelf->top__DOT__core0__DOT__EX__DOT__subber = 
        (0x1ffffffffULL & (1ULL + ((0x100000000ULL 
                                    | (QData)((IData)(
                                                      (~ vlSelf->top__DOT__core0__DOT__EX__DOT__in2)))) 
                                   + (QData)((IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__in1)))));
    vlSelf->top__DOT__core0__DOT__EX__DOT__lt = (1U 
                                                 & (((vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                      & vlSelf->top__DOT__core0__DOT__EX__DOT__in2) 
                                                     >> 0x1fU)
                                                     ? 
                                                    (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                     >> 0x1fU)
                                                     : (IData)(
                                                               (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                >> 0x20U))));
    vlSelf->top__DOT__core0__DOT__branch_taken = (1U 
                                                  & ((vlSelf->top__DOT__core0__DOT__opcode_p1 
                                                      >> 0x18U) 
                                                     & (((((((IData)(vlSelf->top__DOT__core0__DOT__funct3_p1) 
                                                             & (0U 
                                                                == (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber))) 
                                                            | (((IData)(vlSelf->top__DOT__core0__DOT__funct3_p1) 
                                                                >> 1U) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber)))) 
                                                           | (((IData)(vlSelf->top__DOT__core0__DOT__funct3_p1) 
                                                               >> 4U) 
                                                              & (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt))) 
                                                          | (((IData)(vlSelf->top__DOT__core0__DOT__funct3_p1) 
                                                              >> 5U) 
                                                             & (~ (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt)))) 
                                                         | (((IData)(vlSelf->top__DOT__core0__DOT__funct3_p1) 
                                                             >> 6U) 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                       >> 0x20U)))) 
                                                        | (((IData)(vlSelf->top__DOT__core0__DOT__funct3_p1) 
                                                            >> 7U) 
                                                           & (~ (IData)(
                                                                        (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                         >> 0x20U)))))));
    vlSelf->top__DOT__core0__DOT__alu_result = ((((
                                                   (((((1U 
                                                        & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                        ? 
                                                       (((IData)(vlSelf->top__DOT__core0__DOT__funct7_p1) 
                                                         & (vlSelf->top__DOT__core0__DOT__opcode_p1 
                                                            >> 0xcU))
                                                         ? (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber)
                                                         : vlSelf->top__DOT__core0__DOT__adder_result)
                                                        : 0U) 
                                                      | ((2U 
                                                          & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                          ? 
                                                         (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                          << 
                                                          (0x1fU 
                                                           & vlSelf->top__DOT__core0__DOT__EX__DOT__in2))
                                                          : 0U)) 
                                                     | ((4U 
                                                         & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                         ? (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt)
                                                         : 0U)) 
                                                    | ((8U 
                                                        & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                        ? 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                   >> 0x20U)))
                                                        : 0U)) 
                                                   | ((0x10U 
                                                       & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                       ? 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       ^ vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                       : 0U)) 
                                                  | ((0x20U 
                                                      & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                      ? 
                                                     ((IData)(vlSelf->top__DOT__core0__DOT__funct7_p1)
                                                       ? 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__core0__DOT__EX__DOT__in2))
                                                       : 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->top__DOT__core0__DOT__EX__DOT__in2)))
                                                      : 0U)) 
                                                 | ((0x40U 
                                                     & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                     ? 
                                                    (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                     | vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                     : 0U)) 
                                                | ((0x80U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p1))
                                                    ? 
                                                   (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                    & vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                    : 0U));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__core0__DOT__nextpc = ((IData)(vlSelf->reset)
                                             ? ((IData)(vlSelf->top__DOT__core0__DOT__branch_taken)
                                                 ? 
                                                (vlSelf->top__DOT__core0__DOT__pc_p1 
                                                 + vlSelf->top__DOT__core0__DOT__bimm_p1)
                                                 : 
                                                ((0x8000000U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__i_data 
                                                                 >> 0x22U)))))
                                                  ? 
                                                 (vlSelf->top__DOT__core0__DOT__pc_p0 
                                                  + 
                                                  (((- (IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__i_data 
                                                                           >> 0x3fU))))) 
                                                    << 0x14U) 
                                                   | ((0xff000U 
                                                       & ((IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x2cU)) 
                                                          << 0xcU)) 
                                                      | ((0x800U 
                                                          & ((IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x34U)) 
                                                             << 0xbU)) 
                                                         | (0x7feU 
                                                            & ((IData)(
                                                                       (vlSelf->top__DOT__i_data 
                                                                        >> 0x35U)) 
                                                               << 1U))))))
                                                  : 
                                                 ((0x2000000U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x22U)))))
                                                   ? 
                                                  (((IData)(
                                                            (0U 
                                                             != 
                                                             (0x9003030U 
                                                              & vlSelf->top__DOT__core0__DOT__opcode_p1))) 
                                                    & ((0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x2fU))) 
                                                       == (IData)(vlSelf->top__DOT__core0__DOT__rd_p1)))
                                                    ? vlSelf->top__DOT__core0__DOT__alu_result
                                                    : 
                                                   (((IData)(
                                                             (0U 
                                                              != 
                                                              (0x9003030U 
                                                               & vlSelf->top__DOT__core0__DOT__opcode_p2))) 
                                                     & ((0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x2fU))) 
                                                        == (IData)(vlSelf->top__DOT__core0__DOT__rd_p2)))
                                                     ? vlSelf->top__DOT__core0__DOT__alu_result_p2
                                                     : 
                                                    (((IData)(
                                                              (0U 
                                                               != 
                                                               (0x9003030U 
                                                                & vlSelf->top__DOT__core0__DOT__opcode_p3))) 
                                                      & ((0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x2fU))) 
                                                         == (IData)(vlSelf->top__DOT__core0__DOT__rd_p3)))
                                                      ? vlSelf->top__DOT__core0__DOT__alu_result_p3
                                                      : 
                                                     vlSelf->top__DOT__core0__DOT__int_p4
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__i_data 
                                                                 >> 0x2fU)))])))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__core0__DOT__stall)
                                                    ? vlSelf->top__DOT__core0__DOT__pc_p0
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top__DOT__core0__DOT__pc_p0)))))
                                             : 0U);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vtop___024root___combo__TOP__0(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
