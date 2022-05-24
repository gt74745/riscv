// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBit(c+130,"reset", false,-1);
    tracep->declQuad(c+1,"addr", false,-1, 63,0);
    tracep->declQuad(c+3,"rdata", false,-1, 63,0);
    tracep->declQuad(c+5,"wdata", false,-1, 63,0);
    tracep->declBus(c+7,"wmask", false,-1, 7,0);
    tracep->declQuad(c+8,"i_addr", false,-1, 63,0);
    tracep->declBus(c+10,"i_data", false,-1, 31,0);
    tracep->declBit(c+11,"rdflag", false,-1);
    tracep->declBit(c+12,"i_cs", false,-1);
    tracep->declBit(c+13,"cs", false,-1);
    tracep->declBit(c+133,"membusy", false,-1);
    tracep->pushNamePrefix("core0 ");
    tracep->declBit(c+129,"clk_i", false,-1);
    tracep->declBit(c+130,"rst_i_b", false,-1);
    tracep->declQuad(c+1,"d_addr_o", false,-1, 63,0);
    tracep->declQuad(c+3,"d_data_i", false,-1, 63,0);
    tracep->declQuad(c+5,"d_data_o", false,-1, 63,0);
    tracep->declBus(c+7,"d_mask_o", false,-1, 7,0);
    tracep->declQuad(c+8,"i_addr_o", false,-1, 63,0);
    tracep->declBus(c+10,"i_data_i", false,-1, 31,0);
    tracep->declBit(c+11,"d_rdflag_o", false,-1);
    tracep->declBit(c+133,"d_membusy_i", false,-1);
    tracep->declQuad(c+8,"PC", false,-1, 63,0);
    tracep->declQuad(c+131,"nextpc", false,-1, 63,0);
    tracep->declQuad(c+14,"uimm", false,-1, 63,0);
    tracep->declQuad(c+16,"iimm", false,-1, 63,0);
    tracep->declQuad(c+18,"simm", false,-1, 63,0);
    tracep->declQuad(c+20,"bimm", false,-1, 63,0);
    tracep->declQuad(c+22,"jimm", false,-1, 63,0);
    tracep->declBit(c+24,"funct7", false,-1);
    tracep->declBus(c+25,"csr", false,-1, 11,0);
    tracep->declBus(c+26,"rs2", false,-1, 4,0);
    tracep->declBus(c+27,"rs1", false,-1, 4,0);
    tracep->declBus(c+28,"funct3", false,-1, 7,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"opcode", false,-1, 31,0);
    tracep->declBit(c+31,"is_legal", false,-1);
    tracep->declQuad(c+32,"csr_", false,-1, 63,0);
    tracep->declQuad(c+34,"adder_result", false,-1, 63,0);
    tracep->declQuad(c+36,"alu_result", false,-1, 63,0);
    tracep->declBit(c+38,"branch_taken", false,-1);
    tracep->declQuad(c+5,"st_data", false,-1, 63,0);
    tracep->declBus(c+39,"st_mask", false,-1, 7,0);
    tracep->declQuad(c+1,"dmem_addr", false,-1, 63,0);
    tracep->declQuad(c+40,"rd_", false,-1, 63,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declQuad(c+42+i*2,"INT", true,(i+0), 63,0);
    }
    tracep->pushNamePrefix("EX ");
    tracep->declQuad(c+8,"PC", false,-1, 63,0);
    tracep->declQuad(c+16,"i_imm", false,-1, 63,0);
    tracep->declQuad(c+18,"s_imm", false,-1, 63,0);
    tracep->declQuad(c+14,"u_imm", false,-1, 63,0);
    tracep->declBit(c+24,"funct7", false,-1);
    tracep->declQuad(c+106,"rs2", false,-1, 63,0);
    tracep->declQuad(c+108,"rs1", false,-1, 63,0);
    tracep->declBus(c+28,"funct3", false,-1, 7,0);
    tracep->declBus(c+30,"opcode", false,-1, 31,0);
    tracep->declQuad(c+34,"adder", false,-1, 63,0);
    tracep->declQuad(c+36,"result", false,-1, 63,0);
    tracep->declBit(c+38,"branch_taken", false,-1);
    tracep->declBit(c+110,"lt", false,-1);
    tracep->declBit(c+111,"eq", false,-1);
    tracep->declBit(c+112,"ltu", false,-1);
    tracep->declQuad(c+113,"in1", false,-1, 63,0);
    tracep->declQuad(c+115,"in2", false,-1, 63,0);
    tracep->declArray(c+117,"subber", false,-1, 64,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+10,"instr", false,-1, 31,0);
    tracep->declQuad(c+14,"uimm", false,-1, 63,0);
    tracep->declQuad(c+16,"iimm", false,-1, 63,0);
    tracep->declQuad(c+18,"simm", false,-1, 63,0);
    tracep->declQuad(c+20,"bimm", false,-1, 63,0);
    tracep->declQuad(c+22,"jimm", false,-1, 63,0);
    tracep->declBit(c+24,"funct7", false,-1);
    tracep->declBus(c+25,"csr", false,-1, 11,0);
    tracep->declBus(c+26,"rs2", false,-1, 4,0);
    tracep->declBus(c+27,"rs1", false,-1, 4,0);
    tracep->declBus(c+28,"funct3", false,-1, 7,0);
    tracep->declBus(c+29,"rd", false,-1, 4,0);
    tracep->declBus(c+30,"opcode", false,-1, 31,0);
    tracep->declBit(c+31,"is_legal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+120,"is_st", false,-1);
    tracep->declBit(c+11,"is_ld", false,-1);
    tracep->declBus(c+121,"funct3", false,-1, 3,0);
    tracep->declQuad(c+122,"rs2", false,-1, 63,0);
    tracep->declQuad(c+34,"adder_result", false,-1, 63,0);
    tracep->declQuad(c+5,"st_data", false,-1, 63,0);
    tracep->declBus(c+39,"st_mask", false,-1, 7,0);
    tracep->declQuad(c+1,"addr", false,-1, 63,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+30,"opcode", false,-1, 31,0);
    tracep->declQuad(c+36,"alu_result", false,-1, 63,0);
    tracep->declQuad(c+34,"adder_result", false,-1, 63,0);
    tracep->declBit(c+124,"ldoubleword", false,-1);
    tracep->declBit(c+125,"lword", false,-1);
    tracep->declBit(c+126,"lhalfword", false,-1);
    tracep->declQuad(c+3,"ld_data", false,-1, 63,0);
    tracep->declQuad(c+40,"rd", false,-1, 63,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+129,"clk", false,-1);
    tracep->declBus(c+127,"addr0", false,-1, 12,0);
    tracep->declBus(c+128,"addr1", false,-1, 12,0);
    tracep->declBit(c+12,"cs0", false,-1);
    tracep->declBit(c+13,"cs1", false,-1);
    tracep->declBit(c+11,"oe", false,-1);
    tracep->declBus(c+7,"we", false,-1, 7,0);
    tracep->declBus(c+10,"data0", false,-1, 31,0);
    tracep->declQuad(c+3,"data1_o", false,-1, 63,0);
    tracep->declQuad(c+5,"data1_i", false,-1, 63,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullQData(oldp+1,(vlSelf->top__DOT__core0__DOT__dmem_addr),64);
    tracep->fullQData(oldp+3,(vlSelf->top__DOT__rdata),64);
    tracep->fullQData(oldp+5,(((((0x100U & ((IData)(1U) 
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
                                               << (7U 
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
                                  : 0ULL) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                               & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)),64);
    tracep->fullCData(oldp+7,(vlSelf->top__DOT__wmask),8);
    tracep->fullQData(oldp+8,(vlSelf->top__DOT__core0__DOT__PC),64);
    tracep->fullIData(oldp+10,(vlSelf->top__DOT__i_data),32);
    tracep->fullBit(oldp+11,((1U & ((IData)(1U) << 
                                    (0x1fU & (vlSelf->top__DOT__i_data 
                                              >> 2U))))));
    tracep->fullBit(oldp+12,((0U == (0x1ffffU & (IData)(
                                                        (vlSelf->top__DOT__core0__DOT__PC 
                                                         >> 0xfU))))));
    tracep->fullBit(oldp+13,((0U == (0x1ffffU & (IData)(
                                                        (vlSelf->top__DOT__core0__DOT__dmem_addr 
                                                         >> 0xfU))))));
    tracep->fullQData(oldp+14,((((- (QData)((IData)(
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x1fU)))) 
                                 << 0x1fU) | (QData)((IData)(
                                                             (0x7ffff000U 
                                                              & vlSelf->top__DOT__i_data))))),64);
    tracep->fullQData(oldp+16,(vlSelf->top__DOT__core0__DOT__iimm),64);
    tracep->fullQData(oldp+18,((((- (QData)((IData)(
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x1fU)))) 
                                 << 0xbU) | (QData)((IData)(
                                                            ((0x7e0U 
                                                              & (vlSelf->top__DOT__i_data 
                                                                 >> 0x14U)) 
                                                             | (0x1fU 
                                                                & (vlSelf->top__DOT__i_data 
                                                                   >> 7U))))))),64);
    tracep->fullQData(oldp+20,((((- (QData)((IData)(
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
    tracep->fullQData(oldp+22,((((- (QData)((IData)(
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
    tracep->fullBit(oldp+24,((1U & (vlSelf->top__DOT__i_data 
                                    >> 0x1eU))));
    tracep->fullSData(oldp+25,((vlSelf->top__DOT__i_data 
                                >> 0x14U)),12);
    tracep->fullCData(oldp+26,((0x1fU & (vlSelf->top__DOT__i_data 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+27,((0x1fU & (vlSelf->top__DOT__i_data 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+28,((0xffU & ((IData)(1U) 
                                         << (7U & (vlSelf->top__DOT__i_data 
                                                   >> 0xcU))))),8);
    tracep->fullCData(oldp+29,((0x1fU & (vlSelf->top__DOT__i_data 
                                         >> 7U))),5);
    tracep->fullIData(oldp+30,(((IData)(1U) << (0x1fU 
                                                & (vlSelf->top__DOT__i_data 
                                                   >> 2U)))),32);
    tracep->fullBit(oldp+31,((IData)((3U == (3U & vlSelf->top__DOT__i_data)))));
    tracep->fullQData(oldp+32,(vlSelf->top__DOT__core0__DOT__csr_),64);
    tracep->fullQData(oldp+34,(vlSelf->top__DOT__core0__DOT__adder_result),64);
    tracep->fullQData(oldp+36,(vlSelf->top__DOT__core0__DOT__alu_result),64);
    tracep->fullBit(oldp+38,(vlSelf->top__DOT__core0__DOT__branch_taken));
    tracep->fullCData(oldp+39,(vlSelf->top__DOT__core0__DOT__st_mask),8);
    tracep->fullQData(oldp+40,(vlSelf->top__DOT__core0__DOT__rd_),64);
    tracep->fullQData(oldp+42,(vlSelf->top__DOT__core0__DOT__INT[0]),64);
    tracep->fullQData(oldp+44,(vlSelf->top__DOT__core0__DOT__INT[1]),64);
    tracep->fullQData(oldp+46,(vlSelf->top__DOT__core0__DOT__INT[2]),64);
    tracep->fullQData(oldp+48,(vlSelf->top__DOT__core0__DOT__INT[3]),64);
    tracep->fullQData(oldp+50,(vlSelf->top__DOT__core0__DOT__INT[4]),64);
    tracep->fullQData(oldp+52,(vlSelf->top__DOT__core0__DOT__INT[5]),64);
    tracep->fullQData(oldp+54,(vlSelf->top__DOT__core0__DOT__INT[6]),64);
    tracep->fullQData(oldp+56,(vlSelf->top__DOT__core0__DOT__INT[7]),64);
    tracep->fullQData(oldp+58,(vlSelf->top__DOT__core0__DOT__INT[8]),64);
    tracep->fullQData(oldp+60,(vlSelf->top__DOT__core0__DOT__INT[9]),64);
    tracep->fullQData(oldp+62,(vlSelf->top__DOT__core0__DOT__INT[10]),64);
    tracep->fullQData(oldp+64,(vlSelf->top__DOT__core0__DOT__INT[11]),64);
    tracep->fullQData(oldp+66,(vlSelf->top__DOT__core0__DOT__INT[12]),64);
    tracep->fullQData(oldp+68,(vlSelf->top__DOT__core0__DOT__INT[13]),64);
    tracep->fullQData(oldp+70,(vlSelf->top__DOT__core0__DOT__INT[14]),64);
    tracep->fullQData(oldp+72,(vlSelf->top__DOT__core0__DOT__INT[15]),64);
    tracep->fullQData(oldp+74,(vlSelf->top__DOT__core0__DOT__INT[16]),64);
    tracep->fullQData(oldp+76,(vlSelf->top__DOT__core0__DOT__INT[17]),64);
    tracep->fullQData(oldp+78,(vlSelf->top__DOT__core0__DOT__INT[18]),64);
    tracep->fullQData(oldp+80,(vlSelf->top__DOT__core0__DOT__INT[19]),64);
    tracep->fullQData(oldp+82,(vlSelf->top__DOT__core0__DOT__INT[20]),64);
    tracep->fullQData(oldp+84,(vlSelf->top__DOT__core0__DOT__INT[21]),64);
    tracep->fullQData(oldp+86,(vlSelf->top__DOT__core0__DOT__INT[22]),64);
    tracep->fullQData(oldp+88,(vlSelf->top__DOT__core0__DOT__INT[23]),64);
    tracep->fullQData(oldp+90,(vlSelf->top__DOT__core0__DOT__INT[24]),64);
    tracep->fullQData(oldp+92,(vlSelf->top__DOT__core0__DOT__INT[25]),64);
    tracep->fullQData(oldp+94,(vlSelf->top__DOT__core0__DOT__INT[26]),64);
    tracep->fullQData(oldp+96,(vlSelf->top__DOT__core0__DOT__INT[27]),64);
    tracep->fullQData(oldp+98,(vlSelf->top__DOT__core0__DOT__INT[28]),64);
    tracep->fullQData(oldp+100,(vlSelf->top__DOT__core0__DOT__INT[29]),64);
    tracep->fullQData(oldp+102,(vlSelf->top__DOT__core0__DOT__INT[30]),64);
    tracep->fullQData(oldp+104,(vlSelf->top__DOT__core0__DOT__INT[31]),64);
    tracep->fullQData(oldp+106,(vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber6),64);
    tracep->fullQData(oldp+108,(vlSelf->top__DOT__core0__DOT____Vcellinp__EX____pinNumber7),64);
    tracep->fullBit(oldp+110,(vlSelf->top__DOT__core0__DOT__EX__DOT__lt));
    tracep->fullBit(oldp+111,((0ULL == (((QData)((IData)(
                                                         vlSelf->top__DOT__core0__DOT__EX__DOT__subber[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->top__DOT__core0__DOT__EX__DOT__subber[0U]))))));
    tracep->fullBit(oldp+112,((1U & vlSelf->top__DOT__core0__DOT__EX__DOT__subber[2U])));
    tracep->fullQData(oldp+113,(vlSelf->top__DOT__core0__DOT__EX__DOT__in1),64);
    tracep->fullQData(oldp+115,(vlSelf->top__DOT__core0__DOT__EX__DOT__in2),64);
    tracep->fullWData(oldp+117,(vlSelf->top__DOT__core0__DOT__EX__DOT__subber),65);
    tracep->fullBit(oldp+120,((1U & (((IData)(1U) << 
                                      (0x1fU & (vlSelf->top__DOT__i_data 
                                                >> 2U))) 
                                     >> 8U))));
    tracep->fullCData(oldp+121,((0xfU & ((IData)(1U) 
                                         << (7U & (vlSelf->top__DOT__i_data 
                                                   >> 0xcU))))),4);
    tracep->fullQData(oldp+122,(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4),64);
    tracep->fullBit(oldp+124,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                     >> 7U))));
    tracep->fullBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                     >> 3U))));
    tracep->fullBit(oldp+126,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                     >> 1U))));
    tracep->fullSData(oldp+127,((0x1fffU & (IData)(vlSelf->top__DOT__core0__DOT__PC))),13);
    tracep->fullSData(oldp+128,((0x1fffU & (IData)(vlSelf->top__DOT__core0__DOT__dmem_addr))),13);
    tracep->fullBit(oldp+129,(vlSelf->clk));
    tracep->fullBit(oldp+130,(vlSelf->reset));
    tracep->fullQData(oldp+131,(((IData)(vlSelf->reset)
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
    tracep->fullBit(oldp+133,(0U));
}
