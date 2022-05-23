`timescale 1ns / 1ps

module riscv(
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

reg [31:0] PC;

wire [31:0] nextpc =	~rst_i_b ? 0 :
						branch_taken ? PC + bimm :
						opcode[27] ? PC + jimm :
						opcode[25] ? INT[rs1] :
						PC + 4;

assign i_addr_o = PC;

always @(posedge clk_i)
	PC <= rst_i_b ? nextpc : 0;

/*====================*/
/*    DECODE Stage    */
/*====================*/

riscv_decode ID (
	i_data_i,

	uimm, iimm, simm, bimm, jimm,
	funct7,
	csr,
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

wire [11:0] csr;

wire [4:0] rs2;
wire [4:0] rs1;

wire [7:0] funct3;

wire [4:0] rd;

wire [31:0] opcode;

wire is_legal;

wire [31:0] csr_ =	funct3[2] ? INT[rs1] | CSR[csr[2:0]] :
					funct3[3] ? ~INT[rs1] & CSR[csr[2:0]] :
					funct3[5] ? {27'b0, i_data_i[19:15]} :
					funct3[6] ? CSR[csr[2:0]] | {27'b0, i_data_i[19:15]} :
					funct3[7] ? {CSR[csr[2:0]][31:5], CSR[csr[2:0]][4:0] & ~i_data_i[19:15]} :
					INT[rs1];

/*=====================*/
/*    EXECUTE Stage    */
/*=====================*/

riscv_alu EX (
	PC,
	iimm,
	simm,
	uimm,
	funct7,
	INT[rs2],
	INT[rs1],
	funct3,
	opcode,

	adder_result,
	alu_result,
	branch_taken
);

wire [31:0] adder_result;
wire [31:0] alu_result;
wire branch_taken;

/*=======================*/
/*    MEMACCESS Stage    */
/*=======================*/

riscv_memaccess MEM (
	opcode[8],
	opcode[0],
	funct3[2:0],
	INT[rs2],
	adder_result,

	st_data,
	st_mask,
	dmem_addr
);

wire [31:0] st_data;
wire [3:0] st_mask;
wire [31:0] dmem_addr;

assign d_data_o = st_data;
assign d_mask_o = opcode[8] ? st_mask : 0;
assign d_addr_o = dmem_addr;
assign d_rdflag_o = opcode[0];

/*=======================*/
/*    WRITEBACK Stage    */
/*=======================*/

riscv_writeback WB (
	opcode,
	alu_result,
	adder_result,
	st_mask[3],
	st_mask[1],
	d_data_i,

	rd_
);

wire [31:0] rd_;

reg [31:0] INT [0:31];
reg [31:0] CSR [0:7];

always @(posedge clk_i) begin
	if (rd != 0 & ~opcode[8] & ~branch_taken)
		INT[rd] <= rd_;
	if (rd != 0 & opcode[28])
		INT[rd] <= CSR[csr[2:0]];
	if (csr[11:10] != 2'b11 & opcode[28])
		CSR[csr[2:0]] <= csr_;
end

endmodule
