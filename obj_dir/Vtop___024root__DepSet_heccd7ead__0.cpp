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
    QData/*63:0*/ top__DOT__core0__DOT__MEM__DOT__addr__out__en0;
    CData/*7:0*/ top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1;
    QData/*63:0*/ top__DOT__imem__DOT__data1_o__out__en0;
    SData/*11:0*/ __Vdlyvdim0__top__DOT__core0__DOT__CSR__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__core0__DOT__CSR__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__core0__DOT__CSR__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__core0__DOT__INT__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__core0__DOT__INT__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__core0__DOT__INT__v0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__core0__DOT__INT__v1;
    QData/*63:0*/ __Vdlyvval__top__DOT__core0__DOT__INT__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__core0__DOT__INT__v1;
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
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v4;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v4;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v5;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v5;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v6;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v6;
    SData/*12:0*/ __Vdlyvdim0__top__DOT__imem__DOT__flash__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__imem__DOT__flash__v7;
    CData/*0:0*/ __Vdlyvset__top__DOT__imem__DOT__flash__v7;
    VlWide<3>/*95:0*/ __Vtemp_h5e726cb9__0;
    VlWide<3>/*95:0*/ __Vtemp_h133d703f__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b386a44__0;
    VlWide<3>/*95:0*/ __Vtemp_h254586d5__0;
    VlWide<3>/*95:0*/ __Vtemp_h2b5f66cb__0;
    // Body
    __Vdlyvset__top__DOT__core0__DOT__CSR__v0 = 0U;
    __Vdlyvset__top__DOT__core0__DOT__INT__v0 = 0U;
    __Vdlyvset__top__DOT__core0__DOT__INT__v1 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v0 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v1 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v2 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v3 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v4 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v5 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v6 = 0U;
    __Vdlyvset__top__DOT__imem__DOT__flash__v7 = 0U;
    if (((3U != (vlSelf->top__DOT__i_data >> 0x1eU)) 
         & (((IData)(1U) << (0x1fU & (vlSelf->top__DOT__i_data 
                                      >> 2U))) >> 0x1cU))) {
        __Vdlyvval__top__DOT__core0__DOT__CSR__v0 = vlSelf->top__DOT__core0__DOT__csr_;
        __Vdlyvset__top__DOT__core0__DOT__CSR__v0 = 1U;
        __Vdlyvdim0__top__DOT__core0__DOT__CSR__v0 
            = (vlSelf->top__DOT__i_data >> 0x14U);
    }
    vlSelf->top__DOT__core0__DOT__PC = ((IData)(vlSelf->reset)
                                         ? vlSelf->top__DOT__core0__DOT__nextpc
                                         : 0ULL);
    if ((((0U != (0x1fU & (vlSelf->top__DOT__i_data 
                           >> 7U))) & (~ (((IData)(1U) 
                                           << (0x1fU 
                                               & (vlSelf->top__DOT__i_data 
                                                  >> 2U))) 
                                          >> 8U))) 
         & (~ (IData)(vlSelf->top__DOT__core0__DOT__branch_taken)))) {
        __Vdlyvval__top__DOT__core0__DOT__INT__v0 = vlSelf->top__DOT__core0__DOT__rd_;
        __Vdlyvset__top__DOT__core0__DOT__INT__v0 = 1U;
        __Vdlyvdim0__top__DOT__core0__DOT__INT__v0 
            = (0x1fU & (vlSelf->top__DOT__i_data >> 7U));
    }
    if (((0U != (0x1fU & (vlSelf->top__DOT__i_data 
                          >> 7U))) & (((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->top__DOT__i_data 
                                            >> 2U))) 
                                      >> 0x1cU))) {
        __Vdlyvval__top__DOT__core0__DOT__INT__v1 = 
            vlSelf->top__DOT__core0__DOT__CSR[(vlSelf->top__DOT__i_data 
                                               >> 0x14U)];
        __Vdlyvset__top__DOT__core0__DOT__INT__v1 = 1U;
        __Vdlyvdim0__top__DOT__core0__DOT__INT__v1 
            = (0x1fU & (vlSelf->top__DOT__i_data >> 7U));
    }
    if ((0x80U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v0 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 0x38U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v0 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v0 
            = (0x1fffU & ((IData)(7U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((0x40U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v1 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 0x30U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v1 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v1 
            = (0x1fffU & ((IData)(6U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((0x20U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v2 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 0x28U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v2 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v2 
            = (0x1fffU & ((IData)(5U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((0x10U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v3 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 0x20U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v3 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v3 
            = (0x1fffU & ((IData)(4U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((8U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v4 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 0x18U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v4 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v4 
            = (0x1fffU & ((IData)(3U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((4U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v5 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 0x10U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v5 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v5 
            = (0x1fffU & ((IData)(2U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((2U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v6 
            = (0xffU & (IData)((((((0x100U & ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))
                                    ? ((1U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? (QData)((IData)(
                                                          (0xffU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                        : ((2U & ((IData)(1U) 
                                                  << 
                                                  (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                            ? (QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                            : ((4U 
                                                & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xcU))))
                                                ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                                : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                    : 0ULL))))
                                    : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                 & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                >> 8U)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v6 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v6 
            = (0x1fffU & ((IData)(1U) + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)));
    }
    if ((1U & (IData)(vlSelf->top__DOT__wmask))) {
        __Vdlyvval__top__DOT__imem__DOT__flash__v7 
            = (0xffU & (((IData)(((0x100U & ((IData)(1U) 
                                             << (0x1fU 
                                                 & (vlSelf->top__DOT__i_data 
                                                    >> 2U))))
                                   ? ((1U & ((IData)(1U) 
                                             << (7U 
                                                 & (vlSelf->top__DOT__i_data 
                                                    >> 0xcU))))
                                       ? (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                       : ((2U & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                           ? (QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))))
                                           : ((4U & 
                                               ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->top__DOT__i_data 
                                                    >> 0xcU))))
                                               ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4))
                                               : ((8U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->top__DOT__i_data 
                                                          >> 0xcU))))
                                                   ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                   : 0ULL))))
                                   : 0ULL)) & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)) 
                        & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)));
        __Vdlyvset__top__DOT__imem__DOT__flash__v7 = 1U;
        __Vdlyvdim0__top__DOT__imem__DOT__flash__v7 
            = (0x1fffU & (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr));
    }
    if (__Vdlyvset__top__DOT__core0__DOT__CSR__v0) {
        vlSelf->top__DOT__core0__DOT__CSR[__Vdlyvdim0__top__DOT__core0__DOT__CSR__v0] 
            = __Vdlyvval__top__DOT__core0__DOT__CSR__v0;
    }
    if (__Vdlyvset__top__DOT__core0__DOT__INT__v0) {
        vlSelf->top__DOT__core0__DOT__INT[__Vdlyvdim0__top__DOT__core0__DOT__INT__v0] 
            = __Vdlyvval__top__DOT__core0__DOT__INT__v0;
    }
    if (__Vdlyvset__top__DOT__core0__DOT__INT__v1) {
        vlSelf->top__DOT__core0__DOT__INT[__Vdlyvdim0__top__DOT__core0__DOT__INT__v1] 
            = __Vdlyvval__top__DOT__core0__DOT__INT__v1;
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
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v4) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v4] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v4;
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v5) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v5] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v5;
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v6) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v6] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v6;
    }
    if (__Vdlyvset__top__DOT__imem__DOT__flash__v7) {
        vlSelf->top__DOT__imem__DOT__flash[__Vdlyvdim0__top__DOT__imem__DOT__flash__v7] 
            = __Vdlyvval__top__DOT__imem__DOT__flash__v7;
    }
    vlSelf->top__DOT__i_data = ((((0U == (0x1ffffU 
                                          & (IData)(
                                                    (vlSelf->top__DOT__core0__DOT__PC 
                                                     >> 0xfU))))
                                   ? ((vlSelf->top__DOT__imem__DOT__flash
                                       [(0x1fffU & 
                                         ((IData)(3U) 
                                          + (IData)(vlSelf->top__DOT__core0__DOT__PC)))] 
                                       << 0x18U) | 
                                      ((vlSelf->top__DOT__imem__DOT__flash
                                        [(0x1fffU & 
                                          ((IData)(2U) 
                                           + (IData)(vlSelf->top__DOT__core0__DOT__PC)))] 
                                        << 0x10U) | 
                                       ((vlSelf->top__DOT__imem__DOT__flash
                                         [(0x1fffU 
                                           & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__core0__DOT__PC)))] 
                                         << 8U) | vlSelf->top__DOT__imem__DOT__flash
                                        [(0x1fffU & (IData)(vlSelf->top__DOT__core0__DOT__PC))])))
                                   : 0U) & ((0U == 
                                             (0x1ffffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__core0__DOT__PC 
                                                         >> 0xfU))))
                                             ? 0xffffffffU
                                             : 0U)) 
                                & ((0U == (0x1ffffU 
                                           & (IData)(
                                                     (vlSelf->top__DOT__core0__DOT__PC 
                                                      >> 0xfU))))
                                    ? 0xffffffffU : 0U));
    vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2 
        = ((0x100U & ((IData)(1U) << (0x1fU & (vlSelf->top__DOT__i_data 
                                               >> 2U))))
            ? ((1U & ((IData)(1U) << (7U & (vlSelf->top__DOT__i_data 
                                            >> 0xcU))))
                ? 0xffULL : ((2U & ((IData)(1U) << 
                                    (7U & (vlSelf->top__DOT__i_data 
                                           >> 0xcU))))
                              ? 0xffffULL : ((4U & 
                                              ((IData)(1U) 
                                               << (7U 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xcU))))
                                              ? 0xffffffffULL
                                              : ((8U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->top__DOT__i_data 
                                                         >> 0xcU))))
                                                  ? 0xffffffffffffffffULL
                                                  : 0ULL))))
            : 0ULL);
    vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4 
        = vlSelf->top__DOT__core0__DOT__INT[(0x1fU 
                                             & (vlSelf->top__DOT__i_data 
                                                >> 0x14U))];
    vlSelf->top__DOT__core0__DOT__csr_ = ((4U & ((IData)(1U) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                           ? (vlSelf->top__DOT__core0__DOT__INT
                                              [(0x1fU 
                                                & (vlSelf->top__DOT__i_data 
                                                   >> 0xfU))] 
                                              | vlSelf->top__DOT__core0__DOT__CSR
                                              [(vlSelf->top__DOT__i_data 
                                                >> 0x14U)])
                                           : ((8U & 
                                               ((IData)(1U) 
                                                << 
                                                (7U 
                                                 & (vlSelf->top__DOT__i_data 
                                                    >> 0xcU))))
                                               ? ((~ 
                                                   vlSelf->top__DOT__core0__DOT__INT
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 0xfU))]) 
                                                  & vlSelf->top__DOT__core0__DOT__CSR
                                                  [
                                                  (vlSelf->top__DOT__i_data 
                                                   >> 0x14U)])
                                               : ((0x20U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (7U 
                                                       & (vlSelf->top__DOT__i_data 
                                                          >> 0xcU))))
                                                   ? (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->top__DOT__i_data 
                                                                         >> 0xfU))))
                                                   : 
                                                  ((0x40U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? 
                                                   (vlSelf->top__DOT__core0__DOT__CSR
                                                    [
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x14U)] 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->top__DOT__i_data 
                                                                          >> 0xfU)))))
                                                    : 
                                                   ((0x80U 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->top__DOT__i_data 
                                                            >> 0xcU))))
                                                     ? 
                                                    ((0xffffffffffffffe0ULL 
                                                      & vlSelf->top__DOT__core0__DOT__CSR
                                                      [
                                                      (vlSelf->top__DOT__i_data 
                                                       >> 0x14U)]) 
                                                     | (QData)((IData)(
                                                                       (0x1fU 
                                                                        & ((IData)(
                                                                                vlSelf->top__DOT__core0__DOT__CSR
                                                                                [
                                                                                (vlSelf->top__DOT__i_data 
                                                                                >> 0x14U)]) 
                                                                           & (~ 
                                                                              (vlSelf->top__DOT__i_data 
                                                                               >> 0xfU)))))))
                                                     : 
                                                    vlSelf->top__DOT__core0__DOT__INT
                                                    [
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__i_data 
                                                        >> 0xfU))])))));
    if ((1U & ((((IData)(1U) << (0x1fU & (vlSelf->top__DOT__i_data 
                                          >> 2U))) 
                >> 8U) | ((IData)(1U) << (0x1fU & (vlSelf->top__DOT__i_data 
                                                   >> 2U)))))) {
        top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1 
            = ((1U & ((IData)(1U) << (7U & (vlSelf->top__DOT__i_data 
                                            >> 0xcU))))
                ? 0xffU : ((2U & ((IData)(1U) << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                            ? 0xffU : ((4U & ((IData)(1U) 
                                              << (7U 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 0xcU))))
                                        ? 0xffU : (
                                                   (8U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? 0xffU
                                                    : 0U))));
        top__DOT__core0__DOT__MEM__DOT__addr__out__en0 = 0xffffffffffffffffULL;
    } else {
        top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1 = 0U;
        top__DOT__core0__DOT__MEM__DOT__addr__out__en0 = 0ULL;
    }
    vlSelf->top__DOT__core0__DOT__iimm = (((- (QData)((IData)(
                                                              (vlSelf->top__DOT__i_data 
                                                               >> 0x1fU)))) 
                                           << 0xbU) 
                                          | (QData)((IData)(
                                                            (0x7ffU 
                                                             & (vlSelf->top__DOT__i_data 
                                                                >> 0x14U)))));
    vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber7 
        = vlSelf->top__DOT__core0__DOT__INT[(0x1fU 
                                             & (vlSelf->top__DOT__i_data 
                                                >> 0xfU))];
    vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber6 
        = vlSelf->top__DOT__core0__DOT__INT[(0x1fU 
                                             & (vlSelf->top__DOT__i_data 
                                                >> 0x14U))];
    vlSelf->top__DOT__core0__DOT__st_mask = ((((1U 
                                                & ((((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__i_data 
                                                         >> 2U))) 
                                                    >> 8U) 
                                                   | ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__i_data 
                                                          >> 2U)))))
                                                ? (
                                                   (1U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? 1U
                                                    : 
                                                   ((2U 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->top__DOT__i_data 
                                                            >> 0xcU))))
                                                     ? 3U
                                                     : 
                                                    ((4U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->top__DOT__i_data 
                                                             >> 0xcU))))
                                                      ? 0xfU
                                                      : 
                                                     ((8U 
                                                       & ((IData)(1U) 
                                                          << 
                                                          (7U 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 0xcU))))
                                                       ? 0xffU
                                                       : 0U))))
                                                : 0U) 
                                              & (IData)(top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1)) 
                                             & (IData)(top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1));
    vlSelf->top__DOT__core0__DOT__EX__DOT__in1 = ((1U 
                                                   & (((((IData)(1U) 
                                                         << 
                                                         (0x1fU 
                                                          & (vlSelf->top__DOT__i_data 
                                                             >> 2U))) 
                                                        >> 0x19U) 
                                                       | (((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__i_data 
                                                               >> 2U))) 
                                                          >> 0x1bU)) 
                                                      | (((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 2U))) 
                                                         >> 5U)))
                                                   ? vlSelf->top__DOT__core0__DOT__PC
                                                   : 
                                                  ((0x2000U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 2U))))
                                                    ? 0ULL
                                                    : 
                                                   ((1U 
                                                     & ((((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 2U))) 
                                                         >> 6U) 
                                                        | (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT__i_data 
                                                                >> 2U))) 
                                                           >> 0xeU)))
                                                     ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber7))
                                                     : vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber7)));
    vlSelf->top__DOT__core0__DOT__EX__DOT__in2 = ((1U 
                                                   & ((((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__i_data 
                                                            >> 2U))) 
                                                       >> 0xcU) 
                                                      | (((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 2U))) 
                                                         >> 0x18U)))
                                                   ? vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber6
                                                   : 
                                                  ((0x100U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 2U))))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__i_data 
                                                                         >> 0x1fU)))) 
                                                     << 0xbU) 
                                                    | (QData)((IData)(
                                                                      ((0x7e0U 
                                                                        & (vlSelf->top__DOT__i_data 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->top__DOT__i_data 
                                                                             >> 7U))))))
                                                    : 
                                                   ((1U 
                                                     & ((((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 2U))) 
                                                         >> 5U) 
                                                        | (((IData)(1U) 
                                                            << 
                                                            (0x1fU 
                                                             & (vlSelf->top__DOT__i_data 
                                                                >> 2U))) 
                                                           >> 0xdU)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->top__DOT__i_data 
                                                                          >> 0x1fU)))) 
                                                      << 0x1fU) 
                                                     | (QData)((IData)(
                                                                       (0x7ffff000U 
                                                                        & vlSelf->top__DOT__i_data))))
                                                     : 
                                                    ((1U 
                                                      & ((((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__i_data 
                                                               >> 2U))) 
                                                          >> 0x19U) 
                                                         | (((IData)(1U) 
                                                             << 
                                                             (0x1fU 
                                                              & (vlSelf->top__DOT__i_data 
                                                                 >> 2U))) 
                                                            >> 0x1bU)))
                                                      ? 4ULL
                                                      : 
                                                     ((0x4000U 
                                                       & ((IData)(1U) 
                                                          << 
                                                          (0x1fU 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 2U))))
                                                       ? (QData)((IData)(vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber6))
                                                       : 
                                                      ((0x40U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__i_data 
                                                               >> 2U))))
                                                        ? (QData)((IData)(vlSelf->top__DOT__core0__DOT__iimm))
                                                        : vlSelf->top__DOT__core0__DOT__iimm))))));
    vlSelf->top__DOT__wmask = ((0x100U & ((IData)(1U) 
                                          << (0x1fU 
                                              & (vlSelf->top__DOT__i_data 
                                                 >> 2U))))
                                ? (0xffU & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                : 0U);
    __Vtemp_h5e726cb9__0[0U] = 1U;
    __Vtemp_h5e726cb9__0[1U] = 0U;
    __Vtemp_h5e726cb9__0[2U] = 0U;
    __Vtemp_h133d703f__0[0U] = (IData)((~ vlSelf->top__DOT__core0__DOT__EX__DOT__in2));
    __Vtemp_h133d703f__0[1U] = (IData)(((~ vlSelf->top__DOT__core0__DOT__EX__DOT__in2) 
                                        >> 0x20U));
    __Vtemp_h133d703f__0[2U] = 1U;
    VL_EXTEND_WQ(65,64, __Vtemp_h9b386a44__0, vlSelf->top__DOT__core0__DOT__EX__DOT__in1);
    VL_ADD_W(3, __Vtemp_h254586d5__0, __Vtemp_h133d703f__0, __Vtemp_h9b386a44__0);
    VL_ADD_W(3, __Vtemp_h2b5f66cb__0, __Vtemp_h5e726cb9__0, __Vtemp_h254586d5__0);
    vlSelf->top__DOT__core0__DOT__EX__DOT__subber[0U] 
        = __Vtemp_h2b5f66cb__0[0U];
    vlSelf->top__DOT__core0__DOT__EX__DOT__subber[1U] 
        = __Vtemp_h2b5f66cb__0[1U];
    vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U] 
        = (1U & __Vtemp_h2b5f66cb__0[2U]);
    vlSelf->top__DOT__core0__DOT__adder_result = (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                  + vlSelf->top__DOT__core0__DOT__EX__DOT__in2);
    vlSelf->top__DOT__core0__DOT__EX__DOT__lt = (1U 
                                                 & ((1U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                                 >> 0x1fU)) 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__core0__DOT__EX__DOT__in2 
                                                                   >> 0x1fU))))
                                                     ? (IData)(
                                                               (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                                >> 0x1fU))
                                                     : 
                                                    vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U]));
    vlSelf->top__DOT__core0__DOT__dmem_addr = ((((1U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 2U))) 
                                                      >> 8U) 
                                                     | ((IData)(1U) 
                                                        << 
                                                        (0x1fU 
                                                         & (vlSelf->top__DOT__i_data 
                                                            >> 2U)))))
                                                  ? vlSelf->top__DOT__core0__DOT__adder_result
                                                  : 0ULL) 
                                                & top__DOT__core0__DOT__MEM__DOT__addr__out__en0) 
                                               & top__DOT__core0__DOT__MEM__DOT__addr__out__en0);
    vlSelf->top__DOT__core0__DOT__branch_taken = (1U 
                                                  & ((((IData)(1U) 
                                                       << 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 2U))) 
                                                      >> 0x18U) 
                                                     & ((((((0xffU 
                                                             & (((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__i_data 
                                                                     >> 0xcU))) 
                                                                & (0ULL 
                                                                   == 
                                                                   (((QData)((IData)(
                                                                                vlSelf->top__DOT__core0__DOT__EX__DOT__subber[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->top__DOT__core0__DOT__EX__DOT__subber[0U])))))) 
                                                            | (0x7fU 
                                                               & ((((IData)(1U) 
                                                                    << 
                                                                    (7U 
                                                                     & (vlSelf->top__DOT__i_data 
                                                                        >> 0xcU))) 
                                                                   >> 1U) 
                                                                  & (0ULL 
                                                                     != 
                                                                     (((QData)((IData)(
                                                                                vlSelf->top__DOT__core0__DOT__EX__DOT__subber[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->top__DOT__core0__DOT__EX__DOT__subber[0U]))))))) 
                                                           | (0xfU 
                                                              & ((((IData)(1U) 
                                                                   << 
                                                                   (7U 
                                                                    & (vlSelf->top__DOT__i_data 
                                                                       >> 0xcU))) 
                                                                  >> 4U) 
                                                                 & (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt)))) 
                                                          | (7U 
                                                             & ((((IData)(1U) 
                                                                  << 
                                                                  (7U 
                                                                   & (vlSelf->top__DOT__i_data 
                                                                      >> 0xcU))) 
                                                                 >> 5U) 
                                                                & (~ (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt))))) 
                                                         | (3U 
                                                            & ((((IData)(1U) 
                                                                 << 
                                                                 (7U 
                                                                  & (vlSelf->top__DOT__i_data 
                                                                     >> 0xcU))) 
                                                                >> 6U) 
                                                               & vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U]))) 
                                                        | (1U 
                                                           & ((((IData)(1U) 
                                                                << 
                                                                (7U 
                                                                 & (vlSelf->top__DOT__i_data 
                                                                    >> 0xcU))) 
                                                               >> 7U) 
                                                              & (~ 
                                                                 vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U]))))));
    vlSelf->top__DOT__core0__DOT__alu_result = ((((
                                                   (((((1U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->top__DOT__i_data 
                                                               >> 0xcU))))
                                                        ? 
                                                       ((1U 
                                                         & ((vlSelf->top__DOT__i_data 
                                                             >> 0x1eU) 
                                                            & (((IData)(1U) 
                                                                << 
                                                                (0x1fU 
                                                                 & (vlSelf->top__DOT__i_data 
                                                                    >> 2U))) 
                                                               >> 0xcU)))
                                                         ? 
                                                        (((QData)((IData)(
                                                                          vlSelf->top__DOT__core0__DOT__EX__DOT__subber[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->top__DOT__core0__DOT__EX__DOT__subber[0U])))
                                                         : vlSelf->top__DOT__core0__DOT__adder_result)
                                                        : 0ULL) 
                                                      | ((2U 
                                                          & ((IData)(1U) 
                                                             << 
                                                             (7U 
                                                              & (vlSelf->top__DOT__i_data 
                                                                 >> 0xcU))))
                                                          ? 
                                                         (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                          << 
                                                          (0x1fU 
                                                           & (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__in2)))
                                                          : 0ULL)) 
                                                     | ((4U 
                                                         & ((IData)(1U) 
                                                            << 
                                                            (7U 
                                                             & (vlSelf->top__DOT__i_data 
                                                                >> 0xcU))))
                                                         ? (QData)((IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__lt))
                                                         : 0ULL)) 
                                                    | ((8U 
                                                        & ((IData)(1U) 
                                                           << 
                                                           (7U 
                                                            & (vlSelf->top__DOT__i_data 
                                                               >> 0xcU))))
                                                        ? (QData)((IData)(
                                                                          (1U 
                                                                           & vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U])))
                                                        : 0ULL)) 
                                                   | ((0x10U 
                                                       & ((IData)(1U) 
                                                          << 
                                                          (7U 
                                                           & (vlSelf->top__DOT__i_data 
                                                              >> 0xcU))))
                                                       ? 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       ^ vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                       : 0ULL)) 
                                                  | ((0x20U 
                                                      & ((IData)(1U) 
                                                         << 
                                                         (7U 
                                                          & (vlSelf->top__DOT__i_data 
                                                             >> 0xcU))))
                                                      ? 
                                                     ((0x40000000U 
                                                       & vlSelf->top__DOT__i_data)
                                                       ? 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       >> 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__in2)))
                                                       : 
                                                      (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                       >> 
                                                       (0x1fU 
                                                        & (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__in2))))
                                                      : 0ULL)) 
                                                 | ((0x40U 
                                                     & ((IData)(1U) 
                                                        << 
                                                        (7U 
                                                         & (vlSelf->top__DOT__i_data 
                                                            >> 0xcU))))
                                                     ? 
                                                    (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                     | vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                     : 0ULL)) 
                                                | ((0x80U 
                                                    & ((IData)(1U) 
                                                       << 
                                                       (7U 
                                                        & (vlSelf->top__DOT__i_data 
                                                           >> 0xcU))))
                                                    ? 
                                                   (vlSelf->top__DOT__core0__DOT__EX__DOT__in1 
                                                    & vlSelf->top__DOT__core0__DOT__EX__DOT__in2)
                                                    : 0ULL));
    top__DOT__imem__DOT__data1_o__out__en0 = ((1U & 
                                               ((0ULL 
                                                 != 
                                                 (0xffff8000ULL 
                                                  & vlSelf->top__DOT__core0__DOT__dmem_addr)) 
                                                | (~ 
                                                   ((IData)(1U) 
                                                    << 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__i_data 
                                                        >> 2U))))))
                                               ? 0ULL
                                               : 0xffffffffffffffffULL);
    vlSelf->top__DOT__rdata = ((((1U & ((0ULL != (0xffff8000ULL 
                                                  & vlSelf->top__DOT__core0__DOT__dmem_addr)) 
                                        | (~ ((IData)(1U) 
                                              << (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))))))
                                  ? 0ULL : (((QData)((IData)(
                                                             ((vlSelf->top__DOT__imem__DOT__flash
                                                               [
                                                               (0x1fffU 
                                                                & ((IData)(7U) 
                                                                   + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))] 
                                                               << 0x18U) 
                                                              | ((vlSelf->top__DOT__imem__DOT__flash
                                                                  [
                                                                  (0x1fffU 
                                                                   & ((IData)(6U) 
                                                                      + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->top__DOT__imem__DOT__flash
                                                                     [
                                                                     (0x1fffU 
                                                                      & ((IData)(5U) 
                                                                         + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))] 
                                                                     << 8U) 
                                                                    | vlSelf->top__DOT__imem__DOT__flash
                                                                    [
                                                                    (0x1fffU 
                                                                     & ((IData)(4U) 
                                                                        + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))]))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->top__DOT__imem__DOT__flash
                                                                [
                                                                (0x1fffU 
                                                                 & ((IData)(3U) 
                                                                    + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))] 
                                                                << 0x18U) 
                                                               | ((vlSelf->top__DOT__imem__DOT__flash
                                                                   [
                                                                   (0x1fffU 
                                                                    & ((IData)(2U) 
                                                                       + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))] 
                                                                   << 0x10U) 
                                                                  | ((vlSelf->top__DOT__imem__DOT__flash
                                                                      [
                                                                      (0x1fffU 
                                                                       & ((IData)(1U) 
                                                                          + (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr)))] 
                                                                      << 8U) 
                                                                     | vlSelf->top__DOT__imem__DOT__flash
                                                                     [
                                                                     (0x1fffU 
                                                                      & (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr))]))))))) 
                                & top__DOT__imem__DOT__data1_o__out__en0) 
                               & top__DOT__imem__DOT__data1_o__out__en0);
    vlSelf->top__DOT__core0__DOT__rd_ = ((1U & ((((
                                                   ((IData)(1U) 
                                                    << 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__i_data 
                                                        >> 2U))) 
                                                   >> 0xdU) 
                                                  | (((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__i_data 
                                                          >> 2U))) 
                                                     >> 5U)) 
                                                 | (((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__i_data 
                                                         >> 2U))) 
                                                    >> 0x19U)) 
                                                | (((IData)(1U) 
                                                    << 
                                                    (0x1fU 
                                                     & (vlSelf->top__DOT__i_data 
                                                        >> 2U))) 
                                                   >> 0x1bU)))
                                          ? vlSelf->top__DOT__core0__DOT__adder_result
                                          : ((1U & 
                                              ((((IData)(1U) 
                                                 << 
                                                 (0x1fU 
                                                  & (vlSelf->top__DOT__i_data 
                                                     >> 2U))) 
                                                >> 4U) 
                                               | (((IData)(1U) 
                                                   << 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__i_data 
                                                       >> 2U))) 
                                                  >> 0xcU)))
                                              ? vlSelf->top__DOT__core0__DOT__alu_result
                                              : ((1U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__i_data 
                                                         >> 2U))))
                                                  ? 
                                                 ((0x80U 
                                                   & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                                   ? vlSelf->top__DOT__rdata
                                                   : 
                                                  ((8U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                                    ? (QData)((IData)(vlSelf->top__DOT__rdata))
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                                     ? (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__rdata))))
                                                     : (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->top__DOT__rdata)))))))
                                                  : 0ULL)));
}

VL_INLINE_OPT void Vtop___024root___combo__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__core0__DOT__nextpc = ((IData)(vlSelf->reset)
                                             ? ((IData)(vlSelf->top__DOT__core0__DOT__branch_taken)
                                                 ? 
                                                (vlSelf->top__DOT__core0__DOT__PC 
                                                 + 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->top__DOT__i_data 
                                                                       >> 0x1fU)))) 
                                                   << 0xcU) 
                                                  | (QData)((IData)(
                                                                    ((0x800U 
                                                                      & (vlSelf->top__DOT__i_data 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__i_data 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__i_data 
                                                                              >> 7U))))))))
                                                 : 
                                                ((0x8000000U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->top__DOT__i_data 
                                                         >> 2U))))
                                                  ? 
                                                 (vlSelf->top__DOT__core0__DOT__PC 
                                                  + 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__i_data 
                                                                        >> 0x1fU)))) 
                                                    << 0x14U) 
                                                   | (QData)((IData)(
                                                                     ((0xff000U 
                                                                       & vlSelf->top__DOT__i_data) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__i_data 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__i_data 
                                                                               >> 0x14U))))))))
                                                  : 
                                                 ((0x2000000U 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__i_data 
                                                          >> 2U))))
                                                   ? 
                                                  vlSelf->top__DOT__core0__DOT__INT
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 0xfU))]
                                                   : 
                                                  (4ULL 
                                                   + vlSelf->top__DOT__core0__DOT__PC))))
                                             : 0ULL);
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
