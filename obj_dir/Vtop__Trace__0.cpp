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
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__core0__DOT__dmem_addr_p3),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__rdata),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__core0__DOT__st_data_p3),32);
        tracep->chgCData(oldp+3,(vlSelf->top__DOT__wmask),4);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__core0__DOT__pc_p0),32);
        tracep->chgQData(oldp+5,(vlSelf->top__DOT__i_data),64);
        tracep->chgBit(oldp+7,((1U & vlSelf->top__DOT__core0__DOT__opcode_p3)));
        tracep->chgBit(oldp+8,((0U == (vlSelf->top__DOT__core0__DOT__pc_p0 
                                       >> 0xfU))));
        tracep->chgBit(oldp+9,((0U == (vlSelf->top__DOT__core0__DOT__dmem_addr_p3 
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
        tracep->chgCData(oldp+17,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x34U)))),5);
        tracep->chgCData(oldp+18,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x2fU)))),5);
        tracep->chgCData(oldp+19,((0xffU & ((IData)(1U) 
                                            << (7U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2cU)))))),8);
        tracep->chgCData(oldp+20,((0x1fU & (IData)(
                                                   (vlSelf->top__DOT__i_data 
                                                    >> 0x27U)))),5);
        tracep->chgIData(oldp+21,(((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U))))),32);
        tracep->chgBit(oldp+22,((IData)((0x300000000ULL 
                                         == (0x300000000ULL 
                                             & vlSelf->top__DOT__i_data)))));
        tracep->chgBit(oldp+23,(vlSelf->top__DOT__core0__DOT__stall));
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__core0__DOT__uimm_p1),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__core0__DOT__iimm_p1),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__core0__DOT__simm_p1),32);
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__core0__DOT__bimm_p1),32);
        tracep->chgBit(oldp+28,(vlSelf->top__DOT__core0__DOT__funct7_p1));
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__core0__DOT__src2_p1),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__core0__DOT__src1_p1),32);
        tracep->chgCData(oldp+31,(vlSelf->top__DOT__core0__DOT__funct3_p1),8);
        tracep->chgCData(oldp+32,(vlSelf->top__DOT__core0__DOT__rd_p1),5);
        tracep->chgIData(oldp+33,(vlSelf->top__DOT__core0__DOT__opcode_p1),32);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__core0__DOT__pc_p1),32);
        tracep->chgBit(oldp+35,(vlSelf->top__DOT__core0__DOT__stall_p1));
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__core0__DOT__adder_result),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__core0__DOT__alu_result),32);
        tracep->chgBit(oldp+38,(vlSelf->top__DOT__core0__DOT__branch_taken));
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__core0__DOT__adder_result_p2),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__core0__DOT__alu_result_p2),32);
        tracep->chgIData(oldp+41,(vlSelf->top__DOT__core0__DOT__opcode_p2),32);
        tracep->chgCData(oldp+42,(vlSelf->top__DOT__core0__DOT__funct3_p2),3);
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__core0__DOT__src2_p2),32);
        tracep->chgCData(oldp+44,(vlSelf->top__DOT__core0__DOT__rd_p2),5);
        tracep->chgBit(oldp+45,(vlSelf->top__DOT__core0__DOT__branch_taken_p2));
        tracep->chgBit(oldp+46,(vlSelf->top__DOT__core0__DOT__stall_p2));
        tracep->chgIData(oldp+47,(((((0x100U & vlSelf->top__DOT__core0__DOT__opcode_p2)
                                      ? ((1U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                          ? (0xffU 
                                             & vlSelf->top__DOT__core0__DOT__src2_p2)
                                          : ((2U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                              ? (0xffffU 
                                                 & vlSelf->top__DOT__core0__DOT__src2_p2)
                                              : ((4U 
                                                  & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                  ? vlSelf->top__DOT__core0__DOT__src2_p2
                                                  : 0U)))
                                      : 0U) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                   & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)),32);
        tracep->chgCData(oldp+48,(((((IData)((0U != 
                                              (0x101U 
                                               & vlSelf->top__DOT__core0__DOT__opcode_p2)))
                                      ? ((1U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                          ? 1U : ((2U 
                                                   & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                   ? 3U
                                                   : 
                                                  ((4U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                    ? 0xfU
                                                    : 0U)))
                                      : 0U) & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1)) 
                                   & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1))),4);
        tracep->chgIData(oldp+49,(((((IData)((0U != 
                                              (0x101U 
                                               & vlSelf->top__DOT__core0__DOT__opcode_p2)))
                                      ? vlSelf->top__DOT__core0__DOT__adder_result_p2
                                      : 0U) & vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0) 
                                   & vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0)),32);
        tracep->chgCData(oldp+50,(vlSelf->top__DOT__core0__DOT__st_mask_p3),4);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__core0__DOT__opcode_p3),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__core0__DOT__alu_result_p3),32);
        tracep->chgCData(oldp+53,(vlSelf->top__DOT__core0__DOT__rd_p3),5);
        tracep->chgBit(oldp+54,(vlSelf->top__DOT__core0__DOT__branch_taken_p3));
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__core0__DOT__adder_result_p3),32);
        tracep->chgBit(oldp+56,(vlSelf->top__DOT__core0__DOT__stall_p3));
        tracep->chgIData(oldp+57,(((IData)((0U != (0xa002020U 
                                                   & vlSelf->top__DOT__core0__DOT__opcode_p3)))
                                    ? vlSelf->top__DOT__core0__DOT__adder_result_p3
                                    : ((IData)((0U 
                                                != 
                                                (0x1010U 
                                                 & vlSelf->top__DOT__core0__DOT__opcode_p3)))
                                        ? vlSelf->top__DOT__core0__DOT__alu_result_p3
                                        : ((1U & vlSelf->top__DOT__core0__DOT__opcode_p3)
                                            ? ((8U 
                                                & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                ? vlSelf->top__DOT__rdata
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                    ? 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__rdata)
                                                    : 
                                                   (0xffU 
                                                    & vlSelf->top__DOT__rdata)))
                                            : 0U)))),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__core0__DOT__int_p4[0]),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__core0__DOT__int_p4[1]),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__core0__DOT__int_p4[2]),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__core0__DOT__int_p4[3]),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__core0__DOT__int_p4[4]),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__core0__DOT__int_p4[5]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__core0__DOT__int_p4[6]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__core0__DOT__int_p4[7]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__core0__DOT__int_p4[8]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__core0__DOT__int_p4[9]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__core0__DOT__int_p4[10]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__core0__DOT__int_p4[11]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__core0__DOT__int_p4[12]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__core0__DOT__int_p4[13]),32);
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__core0__DOT__int_p4[14]),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__core0__DOT__int_p4[15]),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__core0__DOT__int_p4[16]),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__core0__DOT__int_p4[17]),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__core0__DOT__int_p4[18]),32);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__core0__DOT__int_p4[19]),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__core0__DOT__int_p4[20]),32);
        tracep->chgIData(oldp+79,(vlSelf->top__DOT__core0__DOT__int_p4[21]),32);
        tracep->chgIData(oldp+80,(vlSelf->top__DOT__core0__DOT__int_p4[22]),32);
        tracep->chgIData(oldp+81,(vlSelf->top__DOT__core0__DOT__int_p4[23]),32);
        tracep->chgIData(oldp+82,(vlSelf->top__DOT__core0__DOT__int_p4[24]),32);
        tracep->chgIData(oldp+83,(vlSelf->top__DOT__core0__DOT__int_p4[25]),32);
        tracep->chgIData(oldp+84,(vlSelf->top__DOT__core0__DOT__int_p4[26]),32);
        tracep->chgIData(oldp+85,(vlSelf->top__DOT__core0__DOT__int_p4[27]),32);
        tracep->chgIData(oldp+86,(vlSelf->top__DOT__core0__DOT__int_p4[28]),32);
        tracep->chgIData(oldp+87,(vlSelf->top__DOT__core0__DOT__int_p4[29]),32);
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__core0__DOT__int_p4[30]),32);
        tracep->chgIData(oldp+89,(vlSelf->top__DOT__core0__DOT__int_p4[31]),32);
        tracep->chgBit(oldp+90,(vlSelf->top__DOT__core0__DOT__EX__DOT__lt));
        tracep->chgBit(oldp+91,((0U == (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber))));
        tracep->chgBit(oldp+92,((1U & (IData)((vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                               >> 0x20U)))));
        tracep->chgIData(oldp+93,(vlSelf->top__DOT__core0__DOT__EX__DOT__in1),32);
        tracep->chgIData(oldp+94,(vlSelf->top__DOT__core0__DOT__EX__DOT__in2),32);
        tracep->chgQData(oldp+95,(vlSelf->top__DOT__core0__DOT__EX__DOT__subber),33);
        tracep->chgBit(oldp+97,((1U & (vlSelf->top__DOT__core0__DOT__opcode_p2 
                                       >> 8U))));
        tracep->chgBit(oldp+98,((1U & vlSelf->top__DOT__core0__DOT__opcode_p2)));
        tracep->chgBit(oldp+99,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3) 
                                       >> 3U))));
        tracep->chgBit(oldp+100,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3) 
                                        >> 1U))));
        tracep->chgSData(oldp+101,((0x1fffU & vlSelf->top__DOT__core0__DOT__pc_p0)),13);
        tracep->chgSData(oldp+102,((0x1fffU & vlSelf->top__DOT__core0__DOT__dmem_addr_p3)),13);
    }
    tracep->chgBit(oldp+103,(vlSelf->clk));
    tracep->chgBit(oldp+104,(vlSelf->reset));
    tracep->chgIData(oldp+105,(vlSelf->top__DOT__core0__DOT__nextpc),32);
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
