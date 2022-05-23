`timescale 1ns / 1ps

module riscv_pipelined(
	input	clk_i,
	input	rst_i_b,

	output	[31:0] d_addr_o,
	input	[31:0] d_data_i,
	output	[31:0] d_data_o,
	output	[3:0] d_mask_o,

	output	[31:0] i_addr_o,
	input	[31:0] i_data_i,

	output	d_rdflag_o,
	
	input	d_membusy_i
);

initial begin
	$dumpfile("wave.vcd");
	$dumpvars(0, BitchRV32);
end

/*===================*/
/*    FETCH Stage    */
/*===================*/

reg [31:0] pc_p0;

wire [31:0] nextpc =	~rst_i_b ? 0 :
						
						branch_taken ? pc_p1 + bimm_p1 :
						opcode[27] ? pc_p0 + jimm :
						opcode[25] ? (	(opcode_p1[13] | opcode_p1[5] | opcode_p1[27] | opcode_p1[24] | opcode_p1[4] | opcode_p1[12]) & rs1 == rd_p1 ? alu_result :
												(opcode_p2[13] | opcode_p2[5] | opcode_p2[27] | opcode_p2[24] | opcode_p2[4] | opcode_p2[12]) & rs1 == rd_p2 ? alu_result_p2 :
												(opcode_p3[13] | opcode_p3[5] | opcode_p3[27] | opcode_p3[24] | opcode_p3[4] | opcode_p3[12]) & rs1 == rd_p3 ? alu_result_p3 :
												int_p4[rs1] ) :
						stall ? pc_p0 :
						pc_p0 + 4;

assign i_addr_o = pc_p0;

always @(posedge clk_i)
	pc_p0 <= rst_i_b ? nextpc : 0;

/*====================*/
/*    DECODE Stage    */
/*====================*/

riscv_decode ID (
	i_data_i,

	uimm, iimm, simm, bimm, jimm,
	funct7,
	rs2, rs1,
	funct3,
	rd,
	opcode,
	is_legal
);

wire [31:0] uimm;
wire [31:0] iimm;
wire [31:0] simm;
wire [31:0] bimm;
wire [31:0] jimm;

wire funct7;

wire [4:0] rs2;
wire [4:0] rs1;

wire [7:0] funct3;

wire [4:0] rd;

wire [31:0] opcode;

wire is_legal;

wire stall =	(opcode_p1[0] & rs1 == rd_p1) |
				(opcode_p2[0] & rs1 == rd_p2) |
				(opcode_p1[0] & rs2 == rd_p1) |
                (opcode_p2[0] & rs2 == rd_p2) |
				d_membusy_i;

reg [31:0] uimm_p1;
reg [31:0] iimm_p1;
reg [31:0] simm_p1;
reg [31:0] bimm_p1;
reg funct7_p1;

reg [31:0] src2_p1;
reg [31:0] src1_p1;

reg [7:0] funct3_p1;

reg [4:0] rd_p1;

reg [31:0] opcode_p1;

reg [31:0] pc_p1;

reg stall_p1;

always @(posedge clk_i) begin
	uimm_p1 <= uimm;
	iimm_p1 <= iimm;
	simm_p1 <= simm;
	bimm_p1 <= bimm;
	funct7_p1 <= funct7;

	src2_p1 <=	opcode_p3[0] & rs2 == rd_p3 ? (	st_mask_p3[3] ? d_data_i :
												st_mask_p3[1] ? {16'b0,d_data_i[15:0]} :
												{24'b0,d_data_i[7:0]} ) :
				rd_p1 != 0 & (opcode_p1[13] | opcode_p1[5] | opcode_p1[27] | opcode_p1[24]) & rs2 == rd_p1 ? adder_result :
				rd_p1 != 0 & (opcode_p1[4] | opcode_p1[12]) & rs2 == rd_p1 ? alu_result :
				rd_p2 != 0 & (opcode_p2[13] | opcode_p2[5] | opcode_p2[27] | opcode_p2[24]) & rs2 == rd_p2 ? adder_result_p2 :
				rd_p2 != 0 & (opcode_p2[4] | opcode_p2[12]) & rs2 == rd_p2 ? alu_result_p2 :
				rd_p3 != 0 & (opcode_p3[13] | opcode_p3[5] | opcode_p3[27] | opcode_p3[24]) & rs2 == rd_p3 ? adder_result_p3 :
				rd_p3 != 0 & (opcode_p3[4] | opcode_p3[12]) & rs2 == rd_p3 ? alu_result_p3 :
				int_p4[rs2];

	src1_p1 <=	opcode_p3[0] & rs1 == rd_p3 ? (	st_mask_p3[3] ? d_data_i :
												st_mask_p3[1] ? {16'b0,d_data_i[15:0]} :
												{24'b0,d_data_i[7:0]} ) :
				rd_p1 != 0 & (opcode_p1[13] | opcode_p1[5] | opcode_p1[27] | opcode_p1[24]) & rs1 == rd_p1 ? adder_result :
				rd_p1 != 0 & (opcode_p1[4] | opcode_p1[12]) & rs1 == rd_p1 ? alu_result :
				rd_p2 != 0 & (opcode_p2[13] | opcode_p2[5] | opcode_p2[27] | opcode_p2[24]) & rs1 == rd_p2 ? adder_result_p2 :
				rd_p2 != 0 & (opcode_p2[4] | opcode_p2[12]) & rs1 == rd_p2 ? alu_result_p2 :
				rd_p3 != 0 & (opcode_p3[13] | opcode_p3[5] | opcode_p3[27] | opcode_p3[24]) & rs1 == rd_p3 ? adder_result_p3 :
				rd_p3 != 0 & (opcode_p3[4] | opcode_p3[12]) & rs1 == rd_p3 ? alu_result_p3 :
				int_p4[rs1];

	funct3_p1 <= funct3;
	rd_p1 <= rd;
	opcode_p1 <= opcode;

	pc_p1 <= pc_p0;

	stall_p1 <= stall;
end

/*=====================*/
/*    EXECUTE Stage    */
/*=====================*/

riscv_alu EX (
	pc_p1,
	iimm_p1,
	simm_p1,
	uimm_p1,
	funct7_p1,
	src2_p1,
	src1_p1,
	funct3_p1,
	opcode_p1,

	adder_result,
	alu_result,
	branch_taken
);

wire [31:0] adder_result;
wire [31:0] alu_result;
wire branch_taken;

reg [31:0] adder_result_p2;
reg [31:0] alu_result_p2;

reg [31:0] opcode_p2;
reg [2:0] funct3_p2;
reg [31:0] src2_p2;
reg [4:0] rd_p2;

reg branch_taken_p2;
reg stall_p2;

always @(posedge clk_i) begin
	adder_result_p2 <= adder_result;
	alu_result_p2 <= alu_result;
	branch_taken_p2 <= branch_taken;

	opcode_p2 <= opcode_p1;
	funct3_p2 <= funct3_p1[2:0];
	src2_p2 <= src2_p1;
	rd_p2 <= rd_p1;
	stall_p2 <= stall_p1;
end

/*=======================*/
/*    MEMACCESS Stage    */
/*=======================*/

riscv_memaccess MEM (
	opcode_p2[8],
	opcode_p2[0],
	funct3_p2,
	src2_p2,
	adder_result_p2,

	st_data,
	st_mask,
	dmem_addr
);

wire [31:0] st_data;
wire [3:0] st_mask;
wire [31:0] dmem_addr;

reg [31:0] st_data_p3;
reg [3:0] st_mask_p3;
reg [31:0] dmem_addr_p3;

reg [31:0] opcode_p3;
reg [31:0] alu_result_p3;
reg [4:0] rd_p3;
reg branch_taken_p3;
reg [31:0] adder_result_p3;
reg stall_p3;

always @(posedge clk_i) begin
	st_data_p3 <= st_data;
	st_mask_p3 <= st_mask;
	dmem_addr_p3 <= dmem_addr;

	opcode_p3 <= opcode_p2;
	alu_result_p3 <= alu_result_p2;
	adder_result_p3 <= adder_result_p2;
	rd_p3 <= rd_p2;
	branch_taken_p3 <= branch_taken_p2;
	stall_p3 <= stall_p2;
end

assign d_data_o = st_data_p3;
assign d_mask_o = opcode_p3[8] ? st_mask_p3 : 0;
assign d_addr_o = dmem_addr_p3;
assign d_rdflag_o = opcode_p3[0];

/*=======================*/
/*    WRITEBACK Stage    */
/*=======================*/

riscv_writeback WB (
	opcode_p3,
	alu_result_p3,
	adder_result_p3,
	st_mask_p3[3],
	st_mask_p3[1],
	d_data_i,

	rd_
);

wire [31:0] rd_;

reg [31:0] int_p4 [0:31];

always @(posedge clk_i) begin
	if (rd_p3 != 0 & ~opcode_p3[8] & ~branch_taken_p3 & ~stall_p3)
		int_p4[rd_p3] <= rd_;
end

endmodule
