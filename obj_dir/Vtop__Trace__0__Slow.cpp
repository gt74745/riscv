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
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBit(c+88,"reset", false,-1);
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+2,"rdata", false,-1, 31,0);
    tracep->declBus(c+3,"wdata", false,-1, 31,0);
    tracep->declBus(c+4,"wmask", false,-1, 3,0);
    tracep->declBus(c+5,"i_addr", false,-1, 31,0);
    tracep->declQuad(c+6,"i_data", false,-1, 63,0);
    tracep->declBit(c+8,"rdflag", false,-1);
    tracep->declBit(c+9,"i_cs", false,-1);
    tracep->declBit(c+10,"cs", false,-1);
    tracep->declBit(c+90,"membusy", false,-1);
    tracep->pushNamePrefix("core0 ");
    tracep->declBit(c+87,"clk_i", false,-1);
    tracep->declBit(c+88,"rst_i_b", false,-1);
    tracep->declBus(c+1,"d_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"d_data_i", false,-1, 31,0);
    tracep->declBus(c+3,"d_data_o", false,-1, 31,0);
    tracep->declBus(c+4,"d_mask_o", false,-1, 3,0);
    tracep->declBus(c+5,"i_addr_o", false,-1, 31,0);
    tracep->declBus(c+11,"i_data_i", false,-1, 31,0);
    tracep->declBit(c+8,"d_rdflag_o", false,-1);
    tracep->declBit(c+90,"d_membusy_i", false,-1);
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+89,"nextpc", false,-1, 31,0);
    tracep->declBus(c+12,"uimm", false,-1, 31,0);
    tracep->declBus(c+13,"iimm", false,-1, 31,0);
    tracep->declBus(c+14,"simm", false,-1, 31,0);
    tracep->declBus(c+15,"bimm", false,-1, 31,0);
    tracep->declBus(c+16,"jimm", false,-1, 31,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+18,"csr", false,-1, 11,0);
    tracep->declBus(c+19,"rs2", false,-1, 4,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"funct3", false,-1, 7,0);
    tracep->declBus(c+22,"rd", false,-1, 4,0);
    tracep->declBus(c+23,"opcode", false,-1, 31,0);
    tracep->declBit(c+24,"is_legal", false,-1);
    tracep->declBus(c+25,"csr_", false,-1, 31,0);
    tracep->declBus(c+26,"adder_result", false,-1, 31,0);
    tracep->declBus(c+27,"alu_result", false,-1, 31,0);
    tracep->declBit(c+28,"branch_taken", false,-1);
    tracep->declBus(c+3,"st_data", false,-1, 31,0);
    tracep->declBus(c+29,"st_mask", false,-1, 3,0);
    tracep->declBus(c+1,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+30,"rd_", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+31+i*1,"INT", true,(i+0), 31,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+63+i*1,"CSR", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+5,"PC", false,-1, 31,0);
    tracep->declBus(c+13,"i_imm", false,-1, 31,0);
    tracep->declBus(c+14,"s_imm", false,-1, 31,0);
    tracep->declBus(c+12,"u_imm", false,-1, 31,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+71,"rs2", false,-1, 31,0);
    tracep->declBus(c+72,"rs1", false,-1, 31,0);
    tracep->declBus(c+21,"funct3", false,-1, 7,0);
    tracep->declBus(c+23,"opcode", false,-1, 31,0);
    tracep->declBus(c+26,"adder", false,-1, 31,0);
    tracep->declBus(c+27,"result", false,-1, 31,0);
    tracep->declBit(c+28,"branch_taken", false,-1);
    tracep->declBit(c+73,"lt", false,-1);
    tracep->declBit(c+74,"eq", false,-1);
    tracep->declBit(c+75,"ltu", false,-1);
    tracep->declBus(c+76,"in1", false,-1, 31,0);
    tracep->declBus(c+77,"in2", false,-1, 31,0);
    tracep->declQuad(c+78,"subber", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->declBus(c+12,"uimm", false,-1, 31,0);
    tracep->declBus(c+13,"iimm", false,-1, 31,0);
    tracep->declBus(c+14,"simm", false,-1, 31,0);
    tracep->declBus(c+15,"bimm", false,-1, 31,0);
    tracep->declBus(c+16,"jimm", false,-1, 31,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+18,"csr", false,-1, 11,0);
    tracep->declBus(c+19,"rs2", false,-1, 4,0);
    tracep->declBus(c+20,"rs1", false,-1, 4,0);
    tracep->declBus(c+21,"funct3", false,-1, 7,0);
    tracep->declBus(c+22,"rd", false,-1, 4,0);
    tracep->declBus(c+23,"opcode", false,-1, 31,0);
    tracep->declBit(c+24,"is_legal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+80,"is_st", false,-1);
    tracep->declBit(c+8,"is_ld", false,-1);
    tracep->declBus(c+81,"funct3", false,-1, 2,0);
    tracep->declBus(c+82,"rs2", false,-1, 31,0);
    tracep->declBus(c+26,"adder_result", false,-1, 31,0);
    tracep->declBus(c+3,"st_data", false,-1, 31,0);
    tracep->declBus(c+29,"st_mask", false,-1, 3,0);
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+23,"opcode", false,-1, 31,0);
    tracep->declBus(c+27,"alu_result", false,-1, 31,0);
    tracep->declBus(c+26,"adder_result", false,-1, 31,0);
    tracep->declBit(c+83,"lword", false,-1);
    tracep->declBit(c+84,"lhalfword", false,-1);
    tracep->declBus(c+2,"ld_data", false,-1, 31,0);
    tracep->declBus(c+30,"rd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+87,"clk", false,-1);
    tracep->declBus(c+85,"addr0", false,-1, 12,0);
    tracep->declBus(c+86,"addr1", false,-1, 12,0);
    tracep->declBit(c+9,"cs0", false,-1);
    tracep->declBit(c+10,"cs1", false,-1);
    tracep->declBit(c+8,"oe", false,-1);
    tracep->declBus(c+4,"we", false,-1, 3,0);
    tracep->declQuad(c+6,"data0", false,-1, 63,0);
    tracep->declBus(c+2,"data1_o", false,-1, 31,0);
    tracep->declBus(c+3,"data1_i", false,-1, 31,0);
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
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__core0__DOT__dmem_addr),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__rdata),32);
    tracep->fullIData(oldp+3,(((((0x100U & ((IData)(1U) 
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
                                          : ((4U & 
                                              ((IData)(1U) 
                                               << (7U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x2cU)))))
                                              ? vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4
                                              : 0U)))
                                  : 0U) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                               & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)),32);
    tracep->fullCData(oldp+4,(vlSelf->top__DOT__wmask),4);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__core0__DOT__PC),32);
    tracep->fullQData(oldp+6,(vlSelf->top__DOT__i_data),64);
    tracep->fullBit(oldp+8,((1U & ((IData)(1U) << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))))));
    tracep->fullBit(oldp+9,((0U == (vlSelf->top__DOT__core0__DOT__PC 
                                    >> 0xfU))));
    tracep->fullBit(oldp+10,((0U == (vlSelf->top__DOT__core0__DOT__dmem_addr 
                                     >> 0xfU))));
    tracep->fullIData(oldp+11,((IData)((vlSelf->top__DOT__i_data 
                                        >> 0x20U))),32);
    tracep->fullIData(oldp+12,(((IData)((vlSelf->top__DOT__i_data 
                                         >> 0x2cU)) 
                                << 0xcU)),32);
    tracep->fullIData(oldp+13,((((- (IData)((1U & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x3fU))))) 
                                 << 0xbU) | (0x7ffU 
                                             & (IData)(
                                                       (vlSelf->top__DOT__i_data 
                                                        >> 0x34U))))),32);
    tracep->fullIData(oldp+14,((((- (IData)((1U & (IData)(
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
    tracep->fullIData(oldp+15,((((- (IData)((1U & (IData)(
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
    tracep->fullIData(oldp+16,((((- (IData)((1U & (IData)(
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
    tracep->fullBit(oldp+17,((1U & (IData)((vlSelf->top__DOT__i_data 
                                            >> 0x3eU)))));
    tracep->fullSData(oldp+18,((0xfffU & (IData)((vlSelf->top__DOT__i_data 
                                                  >> 0x34U)))),12);
    tracep->fullCData(oldp+19,((0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                 >> 0x34U)))),5);
    tracep->fullCData(oldp+20,((0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                 >> 0x2fU)))),5);
    tracep->fullCData(oldp+21,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2cU)))))),8);
    tracep->fullCData(oldp+22,((0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                 >> 0x27U)))),5);
    tracep->fullIData(oldp+23,(((IData)(1U) << (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x22U))))),32);
    tracep->fullBit(oldp+24,((IData)((0x300000000ULL 
                                      == (0x300000000ULL 
                                          & vlSelf->top__DOT__i_data)))));
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__core0__DOT__csr_),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__core0__DOT__adder_result),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__core0__DOT__alu_result),32);
    tracep->fullBit(oldp+28,(vlSelf->top__DOT__core0__DOT__branch_taken));
    tracep->fullCData(oldp+29,(vlSelf->top__DOT__core0__DOT__st_mask),4);
    tracep->fullIData(oldp+30,(((1U & ((((((IData)(1U) 
                                           << (0x1fU 
                                               & (IData)(
                                                         (vlSelf->top__DOT__i_data 
                                                          >> 0x22U)))) 
                                          >> 0xdU) 
                                         | (((IData)(1U) 
                                             << (0x1fU 
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
                                             << (0x1fU 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__i_data 
                                                            >> 0x22U)))) 
                                            >> 4U) 
                                           | (((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))) 
                                              >> 0xcU)))
                                     ? vlSelf->top__DOT__core0__DOT__alu_result
                                     : ((1U & ((IData)(1U) 
                                               << (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__i_data 
                                                              >> 0x22U)))))
                                         ? ((8U & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                             ? vlSelf->top__DOT__rdata
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__core0__DOT__st_mask))
                                                 ? 
                                                (0xffffU 
                                                 & vlSelf->top__DOT__rdata)
                                                 : 
                                                (0xffU 
                                                 & vlSelf->top__DOT__rdata)))
                                         : 0U)))),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__core0__DOT__INT[0]),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__core0__DOT__INT[1]),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__core0__DOT__INT[2]),32);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__core0__DOT__INT[3]),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__core0__DOT__INT[4]),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__core0__DOT__INT[5]),32);
    tracep->fullIData(oldp+37,(vlSelf->top__DOT__core0__DOT__INT[6]),32);
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__core0__DOT__INT[7]),32);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__core0__DOT__INT[8]),32);
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__core0__DOT__INT[9]),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__core0__DOT__INT[10]),32);
    tracep->fullIData(oldp+42,(vlSelf->top__DOT__core0__DOT__INT[11]),32);
    tracep->fullIData(oldp+43,(vlSelf->top__DOT__core0__DOT__INT[12]),32);
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__core0__DOT__INT[13]),32);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__core0__DOT__INT[14]),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__core0__DOT__INT[15]),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__core0__DOT__INT[16]),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__core0__DOT__INT[17]),32);
    tracep->fullIData(oldp+49,(vlSelf->top__DOT__core0__DOT__INT[18]),32);
    tracep->fullIData(oldp+50,(vlSelf->top__DOT__core0__DOT__INT[19]),32);
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__core0__DOT__INT[20]),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__core0__DOT__INT[21]),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__core0__DOT__INT[22]),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__core0__DOT__INT[23]),32);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__core0__DOT__INT[24]),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__core0__DOT__INT[25]),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__core0__DOT__INT[26]),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__core0__DOT__INT[27]),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__core0__DOT__INT[28]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__core0__DOT__INT[29]),32);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__core0__DOT__INT[30]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__core0__DOT__INT[31]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__core0__DOT__CSR[0]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__core0__DOT__CSR[1]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__core0__DOT__CSR[2]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__core0__DOT__CSR[3]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__core0__DOT__CSR[4]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__core0__DOT__CSR[5]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__core0__DOT__CSR[6]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__core0__DOT__CSR[7]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__core0__DOT__INT
                               [(0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                  >> 0x34U)))]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__core0__DOT__INT
                               [(0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                  >> 0x2fU)))]),32);
    tracep->fullBit(oldp+73,(vlSelf->top__DOT__core0__DOT__EX__DOT__lt));
    tracep->fullBit(oldp+74,((0U == (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber))));
    tracep->fullBit(oldp+75,((1U & (IData)((vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                            >> 0x20U)))));
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__core0__DOT__EX__DOT__in1),32);
    tracep->fullIData(oldp+77,(vlSelf->top__DOT__core0__DOT__EX__DOT__in2),32);
    tracep->fullQData(oldp+78,(vlSelf->top__DOT__core0__DOT__EX__DOT__subber),33);
    tracep->fullBit(oldp+80,((1U & (((IData)(1U) << 
                                     (0x1fU & (IData)(
                                                      (vlSelf->top__DOT__i_data 
                                                       >> 0x22U)))) 
                                    >> 8U))));
    tracep->fullCData(oldp+81,((7U & ((IData)(1U) << 
                                      (7U & (IData)(
                                                    (vlSelf->top__DOT__i_data 
                                                     >> 0x2cU)))))),3);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__core0__DOT____Vcellinp__MEM____pinNumber4),32);
    tracep->fullBit(oldp+83,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                    >> 3U))));
    tracep->fullBit(oldp+84,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask) 
                                    >> 1U))));
    tracep->fullSData(oldp+85,((0x1fffU & vlSelf->top__DOT__core0__DOT__PC)),13);
    tracep->fullSData(oldp+86,((0x1fffU & vlSelf->top__DOT__core0__DOT__dmem_addr)),13);
    tracep->fullBit(oldp+87,(vlSelf->clk));
    tracep->fullBit(oldp+88,(vlSelf->reset));
    tracep->fullIData(oldp+89,(((IData)(vlSelf->reset)
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
                                                << 
                                                (0x1fU 
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
    tracep->fullBit(oldp+90,(0U));
}
