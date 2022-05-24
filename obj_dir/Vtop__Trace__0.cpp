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
        tracep->chgQData(oldp+0,(vlSelf->top__DOT__core0__DOT__dmem_addr),64);
        tracep->chgQData(oldp+2,(vlSelf->top__DOT__rdata),64);
        tracep->chgQData(oldp+4,(((((0x100U & ((IData)(1U) 
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
                                                 : 
                                                ((8U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->top__DOT__i_data 
                                                         >> 0xcU))))
                                                  ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                                  : 0ULL))))
                                     : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                  & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)),64);
        tracep->chgCData(oldp+6,(vlSelf->top__DOT__wmask),8);
        tracep->chgQData(oldp+7,(vlSelf->top__DOT__core0__DOT__PC),64);
        tracep->chgIData(oldp+9,(vlSelf->top__DOT__i_data),32);
        tracep->chgBit(oldp+10,((1U & ((IData)(1U) 
                                       << (0x1fU & 
                                           (vlSelf->top__DOT__i_data 
                                            >> 2U))))));
        tracep->chgBit(oldp+11,((0U == (0x1ffffU & (IData)(
                                                           (vlSelf->top__DOT__core0__DOT__PC 
                                                            >> 0xfU))))));
        tracep->chgBit(oldp+12,((0U == (0x1ffffU & (IData)(
                                                           (vlSelf->top__DOT__core0__DOT__dmem_addr 
                                                            >> 0xfU))))));
        tracep->chgQData(oldp+13,((((- (QData)((IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x1fU)))) 
                                    << 0x1fU) | (QData)((IData)(
                                                                (0x7ffff000U 
                                                                 & vlSelf->top__DOT__i_data))))),64);
        tracep->chgQData(oldp+15,(vlSelf->top__DOT__core0__DOT__iimm),64);
        tracep->chgQData(oldp+17,((((- (QData)((IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x1fU)))) 
                                    << 0xbU) | (QData)((IData)(
                                                               ((0x7e0U 
                                                                 & (vlSelf->top__DOT__i_data 
                                                                    >> 0x14U)) 
                                                                | (0x1fU 
                                                                   & (vlSelf->top__DOT__i_data 
                                                                      >> 7U))))))),64);
        tracep->chgQData(oldp+19,((((- (QData)((IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x1fU)))) 
                                    << 0xcU) | (QData)((IData)(
                                                               ((0x800U 
                                                                 & (vlSelf->top__DOT__i_data 
                                                                    << 4U)) 
                                                                | ((0x7e0U 
                                                                    & (vlSelf->top__DOT__i_data 
                                                                       >> 0x14U)) 
                                                                   | (0x1eU 
                                                                      & (vlSelf->top__DOT__i_data 
                                                                         >> 7U)))))))),64);
        tracep->chgQData(oldp+21,((((- (QData)((IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x1fU)))) 
                                    << 0x14U) | (QData)((IData)(
                                                                ((0xff000U 
                                                                  & vlSelf->top__DOT__i_data) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->top__DOT__i_data 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSelf->top__DOT__i_data 
                                                                          >> 0x14U)))))))),64);
        tracep->chgBit(oldp+23,((1U & (vlSelf->top__DOT__i_data 
                                       >> 0x1eU))));
        tracep->chgSData(oldp+24,((vlSelf->top__DOT__i_data 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+25,((0x1fU & (vlSelf->top__DOT__i_data 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+26,((0x1fU & (vlSelf->top__DOT__i_data 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+27,((0xffU & ((IData)(1U) 
                                            << (7U 
                                                & (vlSelf->top__DOT__i_data 
                                                   >> 0xcU))))),8);
        tracep->chgCData(oldp+28,((0x1fU & (vlSelf->top__DOT__i_data 
                                            >> 7U))),5);
        tracep->chgIData(oldp+29,(((IData)(1U) << (0x1fU 
                                                   & (vlSelf->top__DOT__i_data 
                                                      >> 2U)))),32);
        tracep->chgBit(oldp+30,((IData)((3U == (3U 
                                                & vlSelf->top__DOT__i_data)))));
        tracep->chgQData(oldp+31,(vlSelf->top__DOT__core0__DOT__csr_),64);
        tracep->chgQData(oldp+33,(vlSelf->top__DOT__core0__DOT__adder_result),64);
        tracep->chgQData(oldp+35,(vlSelf->top__DOT__core0__DOT__alu_result),64);
        tracep->chgBit(oldp+37,(vlSelf->top__DOT__core0__DOT__branch_taken));
        tracep->chgCData(oldp+38,(vlSelf->top__DOT__core0__DOT__st_mask),8);
        tracep->chgQData(oldp+39,(vlSelf->top__DOT__core0__DOT__rd_),64);
        tracep->chgQData(oldp+41,(vlSelf->top__DOT__core0__DOT__INT[0]),64);
        tracep->chgQData(oldp+43,(vlSelf->top__DOT__core0__DOT__INT[1]),64);
        tracep->chgQData(oldp+45,(vlSelf->top__DOT__core0__DOT__INT[2]),64);
        tracep->chgQData(oldp+47,(vlSelf->top__DOT__core0__DOT__INT[3]),64);
        tracep->chgQData(oldp+49,(vlSelf->top__DOT__core0__DOT__INT[4]),64);
        tracep->chgQData(oldp+51,(vlSelf->top__DOT__core0__DOT__INT[5]),64);
        tracep->chgQData(oldp+53,(vlSelf->top__DOT__core0__DOT__INT[6]),64);
        tracep->chgQData(oldp+55,(vlSelf->top__DOT__core0__DOT__INT[7]),64);
        tracep->chgQData(oldp+57,(vlSelf->top__DOT__core0__DOT__INT[8]),64);
        tracep->chgQData(oldp+59,(vlSelf->top__DOT__core0__DOT__INT[9]),64);
        tracep->chgQData(oldp+61,(vlSelf->top__DOT__core0__DOT__INT[10]),64);
        tracep->chgQData(oldp+63,(vlSelf->top__DOT__core0__DOT__INT[11]),64);
        tracep->chgQData(oldp+65,(vlSelf->top__DOT__core0__DOT__INT[12]),64);
        tracep->chgQData(oldp+67,(vlSelf->top__DOT__core0__DOT__INT[13]),64);
        tracep->chgQData(oldp+69,(vlSelf->top__DOT__core0__DOT__INT[14]),64);
        tracep->chgQData(oldp+71,(vlSelf->top__DOT__core0__DOT__INT[15]),64);
        tracep->chgQData(oldp+73,(vlSelf->top__DOT__core0__DOT__INT[16]),64);
        tracep->chgQData(oldp+75,(vlSelf->top__DOT__core0__DOT__INT[17]),64);
        tracep->chgQData(oldp+77,(vlSelf->top__DOT__core0__DOT__INT[18]),64);
        tracep->chgQData(oldp+79,(vlSelf->top__DOT__core0__DOT__INT[19]),64);
        tracep->chgQData(oldp+81,(vlSelf->top__DOT__core0__DOT__INT[20]),64);
        tracep->chgQData(oldp+83,(vlSelf->top__DOT__core0__DOT__INT[21]),64);
        tracep->chgQData(oldp+85,(vlSelf->top__DOT__core0__DOT__INT[22]),64);
        tracep->chgQData(oldp+87,(vlSelf->top__DOT__core0__DOT__INT[23]),64);
        tracep->chgQData(oldp+89,(vlSelf->top__DOT__core0__DOT__INT[24]),64);
        tracep->chgQData(oldp+91,(vlSelf->top__DOT__core0__DOT__INT[25]),64);
        tracep->chgQData(oldp+93,(vlSelf->top__DOT__core0__DOT__INT[26]),64);
        tracep->chgQData(oldp+95,(vlSelf->top__DOT__core0__DOT__INT[27]),64);
        tracep->chgQData(oldp+97,(vlSelf->top__DOT__core0__DOT__INT[28]),64);
        tracep->chgQData(oldp+99,(vlSelf->top__DOT__core0__DOT__INT[29]),64);
        tracep->chgQData(oldp+101,(vlSelf->top__DOT__core0__DOT__INT[30]),64);
        tracep->chgQData(oldp+103,(vlSelf->top__DOT__core0__DOT__INT[31]),64);
        tracep->chgQData(oldp+105,(vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber6),64);
        tracep->chgQData(oldp+107,(vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber7),64);
        tracep->chgBit(oldp+109,(vlSelf->top__DOT__core0__DOT__EX__DOT__lt));
        tracep->chgBit(oldp+110,((0ULL == (((QData)((IData)(
                                                            vlSelf->top__DOT__core0__DOT__EX__DOT__subber[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->top__DOT__core0__DOT__EX__DOT__subber[0U]))))));
        tracep->chgBit(oldp+111,((1U & vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U])));
        tracep->chgQData(oldp+112,(vlSelf->top__DOT__core0__DOT__EX__DOT__in1),64);
        tracep->chgQData(oldp+114,(vlSelf->top__DOT__core0__DOT__EX__DOT__in2),64);
        tracep->chgWData(oldp+116,(vlSelf->top__DOT__core0__DOT__EX__DOT__subber),65);
        tracep->chgBit(oldp+119,((1U & (((IData)(1U) 
                                         << (0x1fU 
                                             & (vlSelf->top__DOT__i_data 
                                                >> 2U))) 
                                        >> 8U))));
        tracep->chgCData(oldp+120,((0xfU & ((IData)(1U) 
                                            << (7U 
                                                & (vlSelf->top__DOT__i_data 
                                                   >> 0xcU))))),4);
        tracep->chgQData(oldp+121,(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4),64);
        tracep->chgBit(oldp+123,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                        >> 7U))));
        tracep->chgBit(oldp+124,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                        >> 3U))));
        tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                        >> 1U))));
        tracep->chgSData(oldp+126,((0x1fffU & (IData)(vlSelf->top__DOT__core0__DOT__PC))),13);
        tracep->chgSData(oldp+127,((0x1fffU & (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr))),13);
    }
    tracep->chgBit(oldp+128,(vlSelf->clk));
    tracep->chgBit(oldp+129,(vlSelf->reset));
    tracep->chgQData(oldp+130,(((IData)(vlSelf->reset)
                                 ? ((IData)(vlSelf->top__DOT__core0__DOT__branch_taken)
                                     ? (vlSelf->top__DOT__core0__DOT__PC 
                                        + (((- (QData)((IData)(
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
                                     : ((0x8000000U 
                                         & ((IData)(1U) 
                                            << (0x1fU 
                                                & (vlSelf->top__DOT__i_data 
                                                   >> 2U))))
                                         ? (vlSelf->top__DOT__core0__DOT__PC 
                                            + (((- (QData)((IData)(
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
                                         : ((0x2000000U 
                                             & ((IData)(1U) 
                                                << 
                                                (0x1fU 
                                                 & (vlSelf->top__DOT__i_data 
                                                    >> 2U))))
                                             ? vlSelf->top__DOT__core0__DOT__INT
                                            [(0x1fU 
                                              & (vlSelf->top__DOT__i_data 
                                                 >> 0xfU))]
                                             : (4ULL 
                                                + vlSelf->top__DOT__core0__DOT__PC))))
                                 : 0ULL)),64);
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
