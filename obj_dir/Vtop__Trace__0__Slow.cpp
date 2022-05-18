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
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBit(c+105,"reset", false,-1);
    tracep->declBus(c+1,"addr", false,-1, 31,0);
    tracep->declBus(c+2,"rdata", false,-1, 31,0);
    tracep->declBus(c+3,"wdata", false,-1, 31,0);
    tracep->declBus(c+4,"wmask", false,-1, 3,0);
    tracep->declBus(c+5,"i_addr", false,-1, 31,0);
    tracep->declQuad(c+6,"i_data", false,-1, 63,0);
    tracep->declBit(c+8,"rdflag", false,-1);
    tracep->declBit(c+9,"i_cs", false,-1);
    tracep->declBit(c+10,"cs", false,-1);
    tracep->declBit(c+107,"membusy", false,-1);
    tracep->pushNamePrefix("core0 ");
    tracep->declBit(c+104,"clk_i", false,-1);
    tracep->declBit(c+105,"rst_i_b", false,-1);
    tracep->declBus(c+1,"d_addr_o", false,-1, 31,0);
    tracep->declBus(c+2,"d_data_i", false,-1, 31,0);
    tracep->declBus(c+3,"d_data_o", false,-1, 31,0);
    tracep->declBus(c+4,"d_mask_o", false,-1, 3,0);
    tracep->declBus(c+5,"i_addr_o", false,-1, 31,0);
    tracep->declBus(c+11,"i_data_i", false,-1, 31,0);
    tracep->declBit(c+8,"d_rdflag_o", false,-1);
    tracep->declBit(c+107,"d_membusy_i", false,-1);
    tracep->declBus(c+5,"pc_p0", false,-1, 31,0);
    tracep->declBus(c+106,"nextpc", false,-1, 31,0);
    tracep->declBus(c+12,"uimm", false,-1, 31,0);
    tracep->declBus(c+13,"iimm", false,-1, 31,0);
    tracep->declBus(c+14,"simm", false,-1, 31,0);
    tracep->declBus(c+15,"bimm", false,-1, 31,0);
    tracep->declBus(c+16,"jimm", false,-1, 31,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+18,"rs2", false,-1, 4,0);
    tracep->declBus(c+19,"rs1", false,-1, 4,0);
    tracep->declBus(c+20,"funct3", false,-1, 7,0);
    tracep->declBus(c+21,"rd", false,-1, 4,0);
    tracep->declBus(c+22,"opcode", false,-1, 31,0);
    tracep->declBit(c+23,"is_legal", false,-1);
    tracep->declBit(c+24,"stall", false,-1);
    tracep->declBus(c+25,"uimm_p1", false,-1, 31,0);
    tracep->declBus(c+26,"iimm_p1", false,-1, 31,0);
    tracep->declBus(c+27,"simm_p1", false,-1, 31,0);
    tracep->declBus(c+28,"bimm_p1", false,-1, 31,0);
    tracep->declBit(c+29,"funct7_p1", false,-1);
    tracep->declBus(c+30,"src2_p1", false,-1, 31,0);
    tracep->declBus(c+31,"src1_p1", false,-1, 31,0);
    tracep->declBus(c+32,"funct3_p1", false,-1, 7,0);
    tracep->declBus(c+33,"rd_p1", false,-1, 4,0);
    tracep->declBus(c+34,"opcode_p1", false,-1, 31,0);
    tracep->declBus(c+35,"pc_p1", false,-1, 31,0);
    tracep->declBit(c+36,"stall_p1", false,-1);
    tracep->declBus(c+37,"adder_result", false,-1, 31,0);
    tracep->declBus(c+38,"alu_result", false,-1, 31,0);
    tracep->declBit(c+39,"branch_taken", false,-1);
    tracep->declBus(c+40,"adder_result_p2", false,-1, 31,0);
    tracep->declBus(c+41,"alu_result_p2", false,-1, 31,0);
    tracep->declBus(c+42,"opcode_p2", false,-1, 31,0);
    tracep->declBus(c+43,"funct3_p2", false,-1, 2,0);
    tracep->declBus(c+44,"src2_p2", false,-1, 31,0);
    tracep->declBus(c+45,"rd_p2", false,-1, 4,0);
    tracep->declBit(c+46,"branch_taken_p2", false,-1);
    tracep->declBit(c+47,"stall_p2", false,-1);
    tracep->declBus(c+48,"st_data", false,-1, 31,0);
    tracep->declBus(c+49,"st_mask", false,-1, 3,0);
    tracep->declBus(c+50,"dmem_addr", false,-1, 31,0);
    tracep->declBus(c+3,"st_data_p3", false,-1, 31,0);
    tracep->declBus(c+51,"st_mask_p3", false,-1, 3,0);
    tracep->declBus(c+1,"dmem_addr_p3", false,-1, 31,0);
    tracep->declBus(c+52,"opcode_p3", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result_p3", false,-1, 31,0);
    tracep->declBus(c+54,"rd_p3", false,-1, 4,0);
    tracep->declBit(c+55,"branch_taken_p3", false,-1);
    tracep->declBus(c+56,"adder_result_p3", false,-1, 31,0);
    tracep->declBit(c+57,"stall_p3", false,-1);
    tracep->declBus(c+58,"rd_", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+59+i*1,"int_p4", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("EX ");
    tracep->declBus(c+35,"PC", false,-1, 31,0);
    tracep->declBus(c+26,"i_imm", false,-1, 31,0);
    tracep->declBus(c+27,"s_imm", false,-1, 31,0);
    tracep->declBus(c+25,"u_imm", false,-1, 31,0);
    tracep->declBit(c+29,"funct7", false,-1);
    tracep->declBus(c+30,"rs2", false,-1, 31,0);
    tracep->declBus(c+31,"rs1", false,-1, 31,0);
    tracep->declBus(c+32,"funct3", false,-1, 7,0);
    tracep->declBus(c+34,"opcode", false,-1, 31,0);
    tracep->declBus(c+37,"adder", false,-1, 31,0);
    tracep->declBus(c+38,"result", false,-1, 31,0);
    tracep->declBit(c+39,"branch_taken", false,-1);
    tracep->declBit(c+91,"lt", false,-1);
    tracep->declBit(c+92,"eq", false,-1);
    tracep->declBit(c+93,"ltu", false,-1);
    tracep->declBus(c+94,"in1", false,-1, 31,0);
    tracep->declBus(c+95,"in2", false,-1, 31,0);
    tracep->declQuad(c+96,"subber", false,-1, 32,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ID ");
    tracep->declBus(c+11,"instr", false,-1, 31,0);
    tracep->declBus(c+12,"u_imm", false,-1, 31,0);
    tracep->declBus(c+13,"i_imm", false,-1, 31,0);
    tracep->declBus(c+14,"s_imm", false,-1, 31,0);
    tracep->declBus(c+15,"b_imm", false,-1, 31,0);
    tracep->declBus(c+16,"j_imm", false,-1, 31,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+18,"rs2", false,-1, 4,0);
    tracep->declBus(c+19,"rs1", false,-1, 4,0);
    tracep->declBus(c+20,"funct3", false,-1, 7,0);
    tracep->declBus(c+21,"rd", false,-1, 4,0);
    tracep->declBus(c+22,"opcode", false,-1, 31,0);
    tracep->declBit(c+23,"is_legal", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MEM ");
    tracep->declBit(c+98,"is_st", false,-1);
    tracep->declBit(c+99,"is_ld", false,-1);
    tracep->declBus(c+43,"funct3", false,-1, 2,0);
    tracep->declBus(c+44,"rs2", false,-1, 31,0);
    tracep->declBus(c+40,"adder_result", false,-1, 31,0);
    tracep->declBus(c+48,"st_data", false,-1, 31,0);
    tracep->declBus(c+49,"st_mask", false,-1, 3,0);
    tracep->declBus(c+50,"addr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("WB ");
    tracep->declBus(c+52,"opcode", false,-1, 31,0);
    tracep->declBus(c+53,"alu_result", false,-1, 31,0);
    tracep->declBus(c+56,"adder_result", false,-1, 31,0);
    tracep->declBit(c+100,"lword", false,-1);
    tracep->declBit(c+101,"lhalfword", false,-1);
    tracep->declBus(c+2,"ld_data", false,-1, 31,0);
    tracep->declBus(c+58,"rd", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem ");
    tracep->declBit(c+104,"clk", false,-1);
    tracep->declBus(c+102,"addr0", false,-1, 12,0);
    tracep->declBus(c+103,"addr1", false,-1, 12,0);
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
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__core0__DOT__dmem_addr_p3),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__rdata),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__core0__DOT__st_data_p3),32);
    tracep->fullCData(oldp+4,(vlSelf->top__DOT__wmask),4);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__core0__DOT__pc_p0),32);
    tracep->fullQData(oldp+6,(vlSelf->top__DOT__i_data),64);
    tracep->fullBit(oldp+8,((1U & vlSelf->top__DOT__core0__DOT__opcode_p3)));
    tracep->fullBit(oldp+9,((0U == (vlSelf->top__DOT__core0__DOT__pc_p0 
                                    >> 0xfU))));
    tracep->fullBit(oldp+10,((0U == (vlSelf->top__DOT__core0__DOT__dmem_addr_p3 
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
    tracep->fullCData(oldp+18,((0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                 >> 0x34U)))),5);
    tracep->fullCData(oldp+19,((0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                 >> 0x2fU)))),5);
    tracep->fullCData(oldp+20,((0xffU & ((IData)(1U) 
                                         << (7U & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x2cU)))))),8);
    tracep->fullCData(oldp+21,((0x1fU & (IData)((vlSelf->top__DOT__i_data 
                                                 >> 0x27U)))),5);
    tracep->fullIData(oldp+22,(((IData)(1U) << (0x1fU 
                                                & (IData)(
                                                          (vlSelf->top__DOT__i_data 
                                                           >> 0x22U))))),32);
    tracep->fullBit(oldp+23,((IData)((0x300000000ULL 
                                      == (0x300000000ULL 
                                          & vlSelf->top__DOT__i_data)))));
    tracep->fullBit(oldp+24,(vlSelf->top__DOT__core0__DOT__stall));
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__core0__DOT__uimm_p1),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__core0__DOT__iimm_p1),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__core0__DOT__simm_p1),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__core0__DOT__bimm_p1),32);
    tracep->fullBit(oldp+29,(vlSelf->top__DOT__core0__DOT__funct7_p1));
    tracep->fullIData(oldp+30,(vlSelf->top__DOT__core0__DOT__src2_p1),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__core0__DOT__src1_p1),32);
    tracep->fullCData(oldp+32,(vlSelf->top__DOT__core0__DOT__funct3_p1),8);
    tracep->fullCData(oldp+33,(vlSelf->top__DOT__core0__DOT__rd_p1),5);
    tracep->fullIData(oldp+34,(vlSelf->top__DOT__core0__DOT__opcode_p1),32);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__core0__DOT__pc_p1),32);
    tracep->fullBit(oldp+36,(vlSelf->top__DOT__core0__DOT__stall_p1));
    tracep->fullIData(oldp+37,(vlSelf->top__DOT__core0__DOT__adder_result),32);
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__core0__DOT__alu_result),32);
    tracep->fullBit(oldp+39,(vlSelf->top__DOT__core0__DOT__branch_taken));
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__core0__DOT__adder_result_p2),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__core0__DOT__alu_result_p2),32);
    tracep->fullIData(oldp+42,(vlSelf->top__DOT__core0__DOT__opcode_p2),32);
    tracep->fullCData(oldp+43,(vlSelf->top__DOT__core0__DOT__funct3_p2),3);
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__core0__DOT__src2_p2),32);
    tracep->fullCData(oldp+45,(vlSelf->top__DOT__core0__DOT__rd_p2),5);
    tracep->fullBit(oldp+46,(vlSelf->top__DOT__core0__DOT__branch_taken_p2));
    tracep->fullBit(oldp+47,(vlSelf->top__DOT__core0__DOT__stall_p2));
    tracep->fullIData(oldp+48,(((((0x100U & vlSelf->top__DOT__core0__DOT__opcode_p2)
                                   ? ((1U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                       ? (0xffU & vlSelf->top__DOT__core0__DOT__src2_p2)
                                       : ((2U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                           ? (0xffffU 
                                              & vlSelf->top__DOT__core0__DOT__src2_p2)
                                           : ((4U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                               ? vlSelf->top__DOT__core0__DOT__src2_p2
                                               : 0U)))
                                   : 0U) & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2) 
                                & vlSelf->top__DOT__core0__DOT__MEM__DOT__st_data__out__en2)),32);
    tracep->fullCData(oldp+49,(((((IData)((0U != (0x101U 
                                                  & vlSelf->top__DOT__core0__DOT__opcode_p2)))
                                   ? ((1U & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                       ? 1U : ((2U 
                                                & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                ? 3U
                                                : (
                                                   (4U 
                                                    & (IData)(vlSelf->top__DOT__core0__DOT__funct3_p2))
                                                    ? 0xfU
                                                    : 0U)))
                                   : 0U) & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1)) 
                                & (IData)(vlSelf->top__DOT__core0__DOT__MEM__DOT__st_mask__out__en1))),4);
    tracep->fullIData(oldp+50,(((((IData)((0U != (0x101U 
                                                  & vlSelf->top__DOT__core0__DOT__opcode_p2)))
                                   ? vlSelf->top__DOT__core0__DOT__adder_result_p2
                                   : 0U) & vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0) 
                                & vlSelf->top__DOT__core0__DOT__MEM__DOT__addr__out__en0)),32);
    tracep->fullCData(oldp+51,(vlSelf->top__DOT__core0__DOT__st_mask_p3),4);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__core0__DOT__opcode_p3),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__core0__DOT__alu_result_p3),32);
    tracep->fullCData(oldp+54,(vlSelf->top__DOT__core0__DOT__rd_p3),5);
    tracep->fullBit(oldp+55,(vlSelf->top__DOT__core0__DOT__branch_taken_p3));
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__core0__DOT__adder_result_p3),32);
    tracep->fullBit(oldp+57,(vlSelf->top__DOT__core0__DOT__stall_p3));
    tracep->fullIData(oldp+58,(((IData)((0U != (0xa002020U 
                                                & vlSelf->top__DOT__core0__DOT__opcode_p3)))
                                 ? vlSelf->top__DOT__core0__DOT__adder_result_p3
                                 : ((IData)((0U != 
                                             (0x1010U 
                                              & vlSelf->top__DOT__core0__DOT__opcode_p3)))
                                     ? vlSelf->top__DOT__core0__DOT__alu_result_p3
                                     : ((1U & vlSelf->top__DOT__core0__DOT__opcode_p3)
                                         ? ((8U & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                             ? vlSelf->top__DOT__rdata
                                             : ((2U 
                                                 & (IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3))
                                                 ? 
                                                (0xffffU 
                                                 & vlSelf->top__DOT__rdata)
                                                 : 
                                                (0xffU 
                                                 & vlSelf->top__DOT__rdata)))
                                         : 0U)))),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__core0__DOT__int_p4[0]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__core0__DOT__int_p4[1]),32);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__core0__DOT__int_p4[2]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__core0__DOT__int_p4[3]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__core0__DOT__int_p4[4]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__core0__DOT__int_p4[5]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__core0__DOT__int_p4[6]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__core0__DOT__int_p4[7]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__core0__DOT__int_p4[8]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__core0__DOT__int_p4[9]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__core0__DOT__int_p4[10]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__core0__DOT__int_p4[11]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__core0__DOT__int_p4[12]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__core0__DOT__int_p4[13]),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__core0__DOT__int_p4[14]),32);
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__core0__DOT__int_p4[15]),32);
    tracep->fullIData(oldp+75,(vlSelf->top__DOT__core0__DOT__int_p4[16]),32);
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__core0__DOT__int_p4[17]),32);
    tracep->fullIData(oldp+77,(vlSelf->top__DOT__core0__DOT__int_p4[18]),32);
    tracep->fullIData(oldp+78,(vlSelf->top__DOT__core0__DOT__int_p4[19]),32);
    tracep->fullIData(oldp+79,(vlSelf->top__DOT__core0__DOT__int_p4[20]),32);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__core0__DOT__int_p4[21]),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__core0__DOT__int_p4[22]),32);
    tracep->fullIData(oldp+82,(vlSelf->top__DOT__core0__DOT__int_p4[23]),32);
    tracep->fullIData(oldp+83,(vlSelf->top__DOT__core0__DOT__int_p4[24]),32);
    tracep->fullIData(oldp+84,(vlSelf->top__DOT__core0__DOT__int_p4[25]),32);
    tracep->fullIData(oldp+85,(vlSelf->top__DOT__core0__DOT__int_p4[26]),32);
    tracep->fullIData(oldp+86,(vlSelf->top__DOT__core0__DOT__int_p4[27]),32);
    tracep->fullIData(oldp+87,(vlSelf->top__DOT__core0__DOT__int_p4[28]),32);
    tracep->fullIData(oldp+88,(vlSelf->top__DOT__core0__DOT__int_p4[29]),32);
    tracep->fullIData(oldp+89,(vlSelf->top__DOT__core0__DOT__int_p4[30]),32);
    tracep->fullIData(oldp+90,(vlSelf->top__DOT__core0__DOT__int_p4[31]),32);
    tracep->fullBit(oldp+91,(vlSelf->top__DOT__core0__DOT__EX__DOT__lt));
    tracep->fullBit(oldp+92,((0U == (IData)(vlSelf->top__DOT__core0__DOT__EX__DOT__subber))));
    tracep->fullBit(oldp+93,((1U & (IData)((vlSelf->top__DOT__core0__DOT__EX__DOT__subber 
                                            >> 0x20U)))));
    tracep->fullIData(oldp+94,(vlSelf->top__DOT__core0__DOT__EX__DOT__in1),32);
    tracep->fullIData(oldp+95,(vlSelf->top__DOT__core0__DOT__EX__DOT__in2),32);
    tracep->fullQData(oldp+96,(vlSelf->top__DOT__core0__DOT__EX__DOT__subber),33);
    tracep->fullBit(oldp+98,((1U & (vlSelf->top__DOT__core0__DOT__opcode_p2 
                                    >> 8U))));
    tracep->fullBit(oldp+99,((1U & vlSelf->top__DOT__core0__DOT__opcode_p2)));
    tracep->fullBit(oldp+100,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3) 
                                     >> 3U))));
    tracep->fullBit(oldp+101,((1U & ((IData)(vlSelf->top__DOT__core0__DOT__st_mask_p3) 
                                     >> 1U))));
    tracep->fullSData(oldp+102,((0x1fffU & vlSelf->top__DOT__core0__DOT__pc_p0)),13);
    tracep->fullSData(oldp+103,((0x1fffU & vlSelf->top__DOT__core0__DOT__dmem_addr_p3)),13);
    tracep->fullBit(oldp+104,(vlSelf->clk));
    tracep->fullBit(oldp+105,(vlSelf->reset));
    tracep->fullIData(oldp+106,(vlSelf->top__DOT__core0__DOT__nextpc),32);
    tracep->fullBit(oldp+107,(0U));
}
