// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__core0__DOT__dmem_addr),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__rdata),32);
        tracep->chgIData(oldp+2,(((((0x100U & ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))))
                                     ? ((1U & ((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x2cU)))))
                                         ? (0xffU & vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4)
                                         : ((2U & ((IData)(1U) 
                                                   << 
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__i_data 
                                                               >> 0x2cU)))))
                                             ? (0xffffU 
                                                & vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4)
                                             : ((4U 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (7U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__i_data 
                                                                >> 0x2cU)))))
                                                 ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                 : 0U)))
                                     : 0U) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                  & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)),32);
        tracep->chgCData(oldp+3,(vlSelf->top__DOT__wmask),4);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__core0__DOT__PC),32);
        tracep->chgQData(oldp+5,(vlSelf->top__DOT__i_data),64);
        tracep->chgBit(oldp+7,((1U & ((IData)(1U) << 
                                      (0x1fU & (IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x22U)))))));
        tracep->chgBit(oldp+8,((0U == (vlSelf->top__DOT__core0__DOT__PC 
                                       >> 0xfU))));
        tracep->chgBit(oldp+9,((0U == (vlSelf->top__DOT__core0__DOT__dmem_addr 
                                       >> 0xfU))));
        tracep->chgIData(oldp+10,((IData)((vlSelf->top__DOT__i_data 
                                           >> 0x20U))),32);
        tracep->chgIData(oldp+11,(((IData)((vlSelf->top__DOT__i_data 
                                            >> 0x2cU)) 
                                   << 0xcU)),32);
        tracep->chgIData(oldp+12,((((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x3fU))))) 
                                    << 0xbU) | (0x7ffU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x34U))))),32);
        tracep->chgIData(oldp+13,((((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x3fU))))) 
                                    << 0xbU) | ((0x7e0U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x39U)) 
                                                    << 5U)) 
                                                | (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x27U)))))),32);
        tracep->chgIData(oldp+14,((((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x3fU))))) 
                                    << 0xcU) | ((0x800U 
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
                                                         << 1U)))))),32);
        tracep->chgIData(oldp+15,((((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x3fU))))) 
                                    << 0x14U) | ((0xff000U 
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
                                                          << 1U)))))),32);
        tracep->chgBit(oldp+16,((1U & (IData)((vlSelf->top__DOT__i_data 
                                               >> 0x3eU)))));
        tracep->chgSData(oldp+17,((0xfffU & (IData)(
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x34U)))),12);
        tracep->chgCData(oldp+18,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x34U)))),5);
        tracep->chgCData(oldp+19,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x2fU)))),5);
        tracep->chgCData(oldp+20,((0xffU & ((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2cU)))))),8);
        tracep->chgCData(oldp+21,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x27U)))),5);
        tracep->chgIData(oldp+22,(((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U))))),32);
        tracep->chgBit(oldp+23,((IData)((0x300000000ULL 
                                         == (0x300000000ULL 
                                             & vlSelf->top__DOT__i_data)))));
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__core0__DOT__csr_),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__core0__DOT__adder_result),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__core0__DOT__alu_result),32);
        tracep->chgBit(oldp+27,(vlSelf->top__DOT__core0__DOT__branch_taken));
        tracep->chgCData(oldp+28,(vlSelf->top__DOT__core0__DOT__st_mask),4);
        tracep->chgIData(oldp+29,(((1U & ((((((IData)(1U) 
                                              << (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x22U)))) 
                                             >> 0xdU) 
                                            | (((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x22U)))) 
                                               >> 5U)) 
                                           | (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))) 
                                              >> 0x19U)) 
                                          | (((IData)(1U) 
                                              << (0x1fU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x22U)))) 
                                             >> 0x1bU)))
                                    ? vlSelf->top__DOT__core0__DOT__adder_result
                                    : ((1U & ((((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x22U)))) 
                                               >> 4U) 
                                              | (((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))) 
                                                 >> 0xcU)))
                                        ? vlSelf->top__DOT__core0__DOT__alu_result
                                        : ((1U & ((IData)(1U) 
                                                  << 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))))
                                            ? ((8U 
                                                & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                                ? vlSelf->top__DOT__rdata
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__rdata)
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__rdata)))
                                            : 0U)))),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__core0__DOT__INT[0]),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__core0__DOT__INT[1]),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__core0__DOT__INT[2]),32);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__core0__DOT__INT[3]),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__core0__DOT__INT[4]),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__core0__DOT__INT[5]),32);
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__core0__DOT__INT[6]),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__core0__DOT__INT[7]),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__core0__DOT__INT[8]),32);
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__core0__DOT__INT[9]),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__core0__DOT__INT[10]),32);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__core0__DOT__INT[11]),32);
        tracep->chgIData(oldp+42,(vlSelf->top__DOT__core0__DOT__INT[12]),32);
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__core0__DOT__INT[13]),32);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__core0__DOT__INT[14]),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__core0__DOT__INT[15]),32);
        tracep->chgIData(oldp+46,(vlSelf->top__DOT__core0__DOT__INT[16]),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__core0__DOT__INT[17]),32);
        tracep->chgIData(oldp+48,(vlSelf->top__DOT__core0__DOT__INT[18]),32);
        tracep->chgIData(oldp+49,(vlSelf->top__DOT__core0__DOT__INT[19]),32);
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__core0__DOT__INT[20]),32);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__core0__DOT__INT[21]),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__core0__DOT__INT[22]),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__core0__DOT__INT[23]),32);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__core0__DOT__INT[24]),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__core0__DOT__INT[25]),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__core0__DOT__INT[26]),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__core0__DOT__INT[27]),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__core0__DOT__INT[28]),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__core0__DOT__INT[29]),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__core0__DOT__INT[30]),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__core0__DOT__INT[31]),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__core0__DOT__CSR[0]),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__core0__DOT__CSR[1]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__core0__DOT__CSR[2]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__core0__DOT__CSR[3]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__core0__DOT__CSR[4]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__core0__DOT__CSR[5]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__core0__DOT__CSR[6]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__core0__DOT__CSR[7]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__core0__DOT__INT
                                  [(0x1fU & (IData)(
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x34U)))]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__core0__DOT__INT
                                  [(0x1fU & (IData)(
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x2fU)))]),32);
        tracep->chgBit(oldp+72,(vlSelf->top__DOT__core0__DOT__EX__DOT__lt));
        tracep->chgBit(oldp+73,((0U == (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber))));
        tracep->chgBit(oldp+74,((1U & (IData)((vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                               >> 0x20U)))));
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__core0__DOT__EX__DOT__in1),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__core0__DOT__EX__DOT__in2),32);
        tracep->chgQData(oldp+77,(vlSelf->top__DOT__core0__DOT__EX__DOT__subber),33);
        tracep->chgBit(oldp+79,((1U & (((IData)(1U) 
                                        << (0x1fU & (IData)(
                                                            (vlSelf->top__DOT__i_data 
                                                             >> 0x22U)))) 
                                       >> 8U))));
        tracep->chgCData(oldp+80,((7U & ((IData)(1U) 
                                         << (7U & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2cU)))))),3);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4),32);
        tracep->chgBit(oldp+82,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                       >> 3U))));
        tracep->chgBit(oldp+83,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                       >> 1U))));
        tracep->chgSData(oldp+84,((0x1fffU & vlSelf->top__DOT__core0__DOT__PC)),13);
        tracep->chgSData(oldp+85,((0x1fffU & vlSelf->top__DOT__core0__DOT__dmem_addr)),13);
    }
    tracep->chgBit(oldp+86,(vlSelf->clk));
    tracep->chgBit(oldp+87,(vlSelf->reset));
    tracep->chgIData(oldp+88,(((IData)(vlSelf->reset)
                                ? ((IData)(vlSelf->top__DOT__core0__DOT__branch_taken)
                                    ? (vlSelf->top__DOT__core0__DOT__PC 
                                       + (((- (IData)(
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
                                    : ((0x8000000U 
                                        & ((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__i_data 
                                                          >> 0x22U)))))
                                        ? (vlSelf->top__DOT__core0__DOT__PC 
                                           + (((- (IData)(
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
                                        : ((0x2000000U 
                                            & ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))))
                                            ? vlSelf->top__DOT__core0__DOT__INT
                                           [(0x1fU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x2fU)))]
                                            : ((IData)(4U) 
                                               + vlSelf->top__DOT__core0__DOT__PC))))
                                : 0U)),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
