// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ top__DOT__core0__DOT__MEM__DOT__addr__out__en0;
    CData/*3:0*/ top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1;
    IData/*31:0*/ top__DOT__imem__DOT__data1_o__out__en0;
    // Body
    vlSelf->top__DOT__i_data = ((((0U == (vlSelf->top__DOT__core0__DOT__PC 
                                          >> 0xfU))
                                   ? (((QData)((IData)(
                                                       ((vlSelf->top__DOT__imem__DOT__flash
                                                         [
                                                         (0x1fffU 
                                                          & ((IData)(3U) 
                                                             + vlSelf->top__DOT__core0__DOT__PC))] 
                                                         << 0x18U) 
                                                        | ((vlSelf->top__DOT__imem__DOT__flash
                                                            [
                                                            (0x1fffU 
                                                             & ((IData)(2U) 
                                                                + vlSelf->top__DOT__core0__DOT__PC))] 
                                                            << 0x10U) 
                                                           | ((vlSelf->top__DOT__imem__DOT__flash
                                                               [
                                                               (0x1fffU 
                                                                & ((IData)(1U) 
                                                                   + vlSelf->top__DOT__core0__DOT__PC))] 
                                                               << 8U) 
                                                              | vlSelf->top__DOT__imem__DOT__flash
                                                              [
                                                              (0x1fffU 
                                                               & vlSelf->top__DOT__core0__DOT__PC)]))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((vlSelf->top__DOT__imem__DOT__flash
                                                                     [
                                                                     (0x1fffU 
                                                                      & ((IData)(7U) 
                                                                         + vlSelf->top__DOT__core0__DOT__PC))] 
                                                                     << 0x18U) 
                                                                    | ((vlSelf->top__DOT__imem__DOT__flash
                                                                        [
                                                                        (0x1fffU 
                                                                         & ((IData)(6U) 
                                                                            + vlSelf->top__DOT__core0__DOT__PC))] 
                                                                        << 0x10U) 
                                                                       | ((vlSelf->top__DOT__imem__DOT__flash
                                                                           [
                                                                           (0x1fffU 
                                                                            & ((IData)(5U) 
                                                                               + vlSelf->top__DOT__core0__DOT__PC))] 
                                                                           << 8U) 
                                                                          | vlSelf->top__DOT__imem__DOT__flash
                                                                          [
                                                                          (0x1fffU 
                                                                           & ((IData)(4U) 
                                                                              + vlSelf->top__DOT__core0__DOT__PC))]))))))
                                   : 0ULL) & ((0U == 
                                               (vlSelf->top__DOT__core0__DOT__PC 
                                                >> 0xfU))
                                               ? 0xffffffffffffffffULL
                                               : 0ULL)) 
                                & ((0U == (vlSelf->top__DOT__core0__DOT__PC 
                                           >> 0xfU))
                                    ? 0xffffffffffffffffULL
                                    : 0ULL));
    vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2 
        = ((0x100U & ((IData)(1U) << (0x1fU & (IData)(
                                                      (vlSelf->top__DOT__i_data 
                                                       >> 0x22U)))))
            ? ((1U & ((IData)(1U) << (7U & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x2cU)))))
                ? 0xffU : ((2U & ((IData)(1U) << (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x2cU)))))
                            ? 0xffffU : ((4U & ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x2cU)))))
                                          ? 0xffffffffU
                                          : 0U))) : 0U);
    vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4 
        = vlSelf->top__DOT__core0__DOT__INT[(0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x34U)))];
    vlSelf->top__DOT__core0__DOT__csr_ = ((4U & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x2cU)))))
                                           ? (vlSelf->top__DOT__core0__DOT__INT
                                              [(0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2fU)))] 
                                              | vlSelf->top__DOT__core0__DOT__CSR
                                              [(7U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x34U)))])
                                           : ((8U & 
                                               ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x2cU)))))
                                               ? ((~ 
                                                   vlSelf->top__DOT__core0__DOT__INT
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__i_data 
                                                               >> 0x2fU)))]) 
                                                  & vlSelf->top__DOT__core0__DOT__CSR
                                                  [
                                                  (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x34U)))])
                                               : ((0x20U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x2cU)))))
                                                   ? 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x2fU)))
                                                   : 
                                                  ((0x40U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x2cU)))))
                                                    ? 
                                                   (vlSelf->top__DOT__core0__DOT__CSR
                                                    [
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__i_data 
                                                                >> 0x34U)))] 
                                                    | (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x2fU))))
                                                    : 
                                                   ((0x80U 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x2cU)))))
                                                     ? 
                                                    ((0xffffffe0U 
                                                      & vlSelf->top__DOT__core0__DOT__CSR
                                                      [
                                                      (7U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x34U)))]) 
                                                     | (0x1fU 
                                                        & (vlSelf->top__DOT__core0__DOT__CSR
                                                           [
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__i_data 
                                                                       >> 0x34U)))] 
                                                           & (~ (IData)(
                                                                        (vlSelf->top__DOT__i_data 
                                                                         >> 0x2fU))))))
                                                     : 
                                                    vlSelf->top__DOT__core0__DOT__INT
                                                    [
                                                    (0x1fU 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__i_data 
                                                                >> 0x2fU)))])))));
    if ((1U & ((((IData)(1U) << (0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                  >> 0x22U)))) 
                >> 8U) | ((IData)(1U) << (0x1fU & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x22U))))))) {
        top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1 
            = ((1U & ((IData)(1U) << (7U & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x2cU)))))
                ? 0xfU : ((2U & ((IData)(1U) << (7U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x2cU)))))
                           ? 0xfU : ((4U & ((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2cU)))))
                                      ? 0xfU : 0U)));
        top__DOT__core0__DOT__MEM__DOT__addr__out__en0 = 0xffffffffU;
    } else {
        top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1 = 0U;
        top__DOT__core0__DOT__MEM__DOT__addr__out__en0 = 0U;
    }
    vlSelf->top__DOT__core0__DOT__EX__DOT__in2 = ((1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x22U)))) 
                                                       >> 0xcU) 
                                                      | (((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x22U)))) 
                                                         >> 0x18U)))
                                                   ? 
                                                  vlSelf->top__DOT__core0__DOT__INT
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x34U)))]
                                                   : 
                                                  ((0x100U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x22U)))))
                                                    ? 
                                                   (((- (IData)(
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
                                                                     >> 0x27U)))))
                                                    : 
                                                   ((1U 
                                                     & ((((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x22U)))) 
                                                         >> 5U) 
                                                        | (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__i_data 
                                                                        >> 0x22U)))) 
                                                           >> 0xdU)))
                                                     ? 
                                                    ((IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x2cU)) 
                                                     << 0xcU)
                                                     : 
                                                    ((1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__i_data 
                                                                       >> 0x22U)))) 
                                                          >> 0x19U) 
                                                         | (((IData)(1U) 
                                                             << 
                                                             (0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__i_data 
                                                                         >> 0x22U)))) 
                                                            >> 0x1bU)))
                                                      ? 4U
                                                      : 
                                                     (((- (IData)(
                                                                  (1U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__i_data 
                                                                              >> 0x3fU))))) 
                                                       << 0xbU) 
                                                      | (0x7ffU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x34U))))))));
    vlSelf->top__DOT__core0__DOT__EX__DOT__in1 = ((1U 
                                                   & (((((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x22U)))) 
                                                        >> 0x19U) 
                                                       | (((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__i_data 
                                                                       >> 0x22U)))) 
                                                          >> 0x1bU)) 
                                                      | (((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x22U)))) 
                                                         >> 5U)))
                                                   ? vlSelf->top__DOT__core0__DOT__PC
                                                   : 
                                                  ((0x2000U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x22U)))))
                                                    ? 0U
                                                    : 
                                                   vlSelf->top__DOT__core0__DOT__INT
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__i_data 
                                                               >> 0x2fU)))]));
    vlSelf->top__DOT__core0__DOT__st_mask = ((((1U 
                                                & ((((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__i_data 
                                                                 >> 0x22U)))) 
                                                    >> 8U) 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x22U))))))
                                                ? (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x2cU)))))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x2cU)))))
                                                     ? 3U
                                                     : 
                                                    ((4U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x2cU)))))
                                                      ? 0xfU
                                                      : 0U)))
                                                : 0U) 
                                              & (IData)(top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1)) 
                                             & (IData)(top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1));
    vlSelf->top__DOT__core0__DOT__adder_result = (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                  + vlSelf->top__DOT__core0__DOT__EX__DOT__in2);
    vlSelf->top__DOT__core0__DOT__EX__DOT__subber = 
        (0x1ffffffffULL & (1ULL + ((0x100000000ULL 
                                    | (QData)((IData)(
                                                      (~ vlSelf->top__DOT__core0__DOT__EX__DOT__in2)))) 
                                   + (QData)((IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__in1)))));
    vlSelf->top__DOT__wmask = ((0x100U & ((IData)(1U) 
                                          << (0x1fU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__i_data 
                                                         >> 0x22U)))))
                                ? (0xfU & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                : 0U);
    vlSelf->top__DOT__core0__DOT__dmem_addr = ((((1U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x22U)))) 
                                                      >> 8U) 
                                                     | ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x22U))))))
                                                  ? vlSelf->top__DOT__core0__DOT__adder_result
                                                  : 0U) 
                                                & top__DOT__core0__DOT__MEM__DOT__addr__out__en0) 
                                               & top__DOT__core0__DOT__MEM__DOT__addr__out__en0);
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
    top__DOT__imem__DOT__data1_o__out__en0 = ((1U & 
                                               ((~ 
                                                 ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U))))) 
                                                | (0U 
                                                   != 
                                                   (vlSelf->top__DOT__core0__DOT__dmem_addr 
                                                    >> 0xfU))))
                                               ? 0U
                                               : 0xffffffffU);
    vlSelf->top__DOT__core0__DOT__alu_result = ((((
                                                   (((((1U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__i_data 
                                                                       >> 0x2cU)))))
                                                        ? 
                                                       ((1U 
                                                         & ((IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x3eU)) 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__i_data 
                                                                            >> 0x22U)))) 
                                                               >> 0xcU)))
                                                         ? (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber)
                                                         : vlSelf->top__DOT__core0__DOT__adder_result)
                                                        : 0U) 
                                                      | ((2U 
                                                          & ((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__i_data 
                                                                         >> 0x2cU)))))
                                                          ? 
                                                         (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                          << 
                                                          (0x1fU 
                                                           & vlSelf->top__DOT__core0__DOT__EX__DOT__in2))
                                                          : 0U)) 
                                                     | ((4U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (IData)(
                                                                       (vlSelf->top__DOT__i_data 
                                                                        >> 0x2cU)))))
                                                         ? (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt)
                                                         : 0U)) 
                                                    | ((8U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__i_data 
                                                                       >> 0x2cU)))))
                                                        ? 
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                   >> 0x20U)))
                                                        : 0U)) 
                                                   | ((0x10U 
                                                       & ((IData)(1U) 
                                                          << 
                                                          (7U 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__i_data 
                                                                      >> 0x2cU)))))
                                                       ? 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       ^ vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                       : 0U)) 
                                                  | ((0x20U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__i_data 
                                                                     >> 0x2cU)))))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->top__DOT__i_data 
                                                                  >> 0x3eU)))
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
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__i_data 
                                                                    >> 0x2cU)))))
                                                     ? 
                                                    (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                     | vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                     : 0U)) 
                                                | ((0x80U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x2cU)))))
                                                    ? 
                                                   (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                    & vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                    : 0U));
    vlSelf->top__DOT__core0__DOT__branch_taken = (1U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__i_data 
                                                                   >> 0x22U)))) 
                                                      >> 0x18U) 
                                                     & ((((((0xffU 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__i_data 
                                                                             >> 0x2cU)))) 
                                                                & (0U 
                                                                   == (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber)))) 
                                                            | (0x7fU 
                                                               & ((((IData)(1U) 
                                                                    << 
                                                                    (7U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__i_data 
                                                                                >> 0x2cU)))) 
                                                                   >> 1U) 
                                                                  & (0U 
                                                                     != (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber))))) 
                                                           | (0xfU 
                                                              & ((((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__i_data 
                                                                               >> 0x2cU)))) 
                                                                  >> 4U) 
                                                                 & (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt)))) 
                                                          | (7U 
                                                             & ((((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (IData)(
                                                                             (vlSelf->top__DOT__i_data 
                                                                              >> 0x2cU)))) 
                                                                 >> 5U) 
                                                                & (~ (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt))))) 
                                                         | (3U 
                                                            & ((((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__i_data 
                                                                             >> 0x2cU)))) 
                                                                >> 6U) 
                                                               & (IData)(
                                                                         (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                          >> 0x20U))))) 
                                                        | (1U 
                                                           & ((((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (IData)(
                                                                           (vlSelf->top__DOT__i_data 
                                                                            >> 0x2cU)))) 
                                                               >> 7U) 
                                                              & (~ (IData)(
                                                                           (vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                                                            >> 0x20U))))))));
    vlSelf->top__DOT__rdata = ((((1U & ((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x22U))))) 
                                        | (0U != (vlSelf->top__DOT__core0__DOT__dmem_addr 
                                                  >> 0xfU))))
                                  ? 0U : ((vlSelf->top__DOT__imem__DOT__flash
                                           [(0x1fffU 
                                             & ((IData)(3U) 
                                                + vlSelf->top__DOT__core0__DOT__dmem_addr))] 
                                           << 0x18U) 
                                          | ((vlSelf->top__DOT__imem__DOT__flash
                                              [(0x1fffU 
                                                & ((IData)(2U) 
                                                   + vlSelf->top__DOT__core0__DOT__dmem_addr))] 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__imem__DOT__flash
                                                 [(0x1fffU 
                                                   & ((IData)(1U) 
                                                      + vlSelf->top__DOT__core0__DOT__dmem_addr))] 
                                                 << 8U) 
                                                | vlSelf->top__DOT__imem__DOT__flash
                                                [(0x1fffU 
                                                  & vlSelf->top__DOT__core0__DOT__dmem_addr)])))) 
                                & top__DOT__imem__DOT__data1_o__out__en0) 
                               & top__DOT__imem__DOT__data1_o__out__en0);
    vlSelf->top__DOT__core0__DOT__nextpc = ((IData)(vlSelf->reset)
                                             ? ((IData)(vlSelf->top__DOT__core0__DOT__branch_taken)
                                                 ? 
                                                (vlSelf->top__DOT__core0__DOT__PC 
                                                 + 
                                                 (((- (IData)(
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
                                                              << 1U))))))
                                                 : 
                                                ((0x8000000U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__i_data 
                                                                 >> 0x22U)))))
                                                  ? 
                                                 (vlSelf->top__DOT__core0__DOT__PC 
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
                                                  vlSelf->top__DOT__core0__DOT__INT
                                                  [
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x2fU)))]
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->top__DOT__core0__DOT__PC))))
                                             : 0U);
}

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__wmask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__i_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__core0__DOT__PC = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__nextpc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__csr_ = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__adder_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__alu_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__st_mask = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__core0__DOT__dmem_addr = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__core0__DOT__INT[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->top__DOT__core0__DOT__CSR[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__core0__DOT__EX__DOT__lt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__core0__DOT__EX__DOT__in1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__EX__DOT__in2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__core0__DOT__EX__DOT__subber = VL_RAND_RESET_Q(33);
    vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2 = 0;
    for (int __Vi0=0; __Vi0<8192; ++__Vi0) {
        vlSelf->top__DOT__imem__DOT__flash[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
