`timescale 1ns / 1ps

module riscv_alu(
	input	[63:0] PC,

	input	[63:0] i_imm,
	input	[63:0] s_imm,
	input	[63:0] u_imm,

	input	funct7,

	input	[63:0] rs2,
	input	[63:0] rs1,
	
	input	[7:0] funct3,

	/* verilator lint_off UNUSED */
	input	[31:0] opcode,
	/* verilator lint_on UNUSED */

	output	[63:0] adder,
	output	[63:0] result,
	output	branch_taken
);

wire lt;
wire eq;
wire ltu;

wire [63:0] in1 =	opcode[25] | opcode[27] | opcode[5] ? PC :
					opcode[13] ? 0 :
					opcode[6] | opcode[14] ? {32'b0, rs1[31:0]} :
					rs1;

wire [63:0] in2	=	opcode[12] | opcode[24] ? rs2 :
					opcode[8] ? s_imm :
					opcode[5] | opcode[13] ? u_imm :
					opcode[25] | opcode[27] ? 4 :
					opcode[14] ? {32'b0, rs2[31:0]} :
					opcode[6] ? {32'b0, i_imm[31:0]} :
					i_imm;

assign adder		= in1 + in2;
wire [64:0] subber	= {1'b1, ~in2} + {1'b0, in1} + 65'b1;

assign lt		= 	(in1[31] & in2[31]) ? in1[31] :
				subber[64];
				
assign ltu	=	subber[64];
assign eq		=	(subber[63:0] == 0);

assign result	=	(funct3[0] ? (funct7 & opcode[12]) ? subber[63:0] : adder		: 64'b0) |
					(funct3[1] ? in1 << in2[4:0]									: 64'b0) |
					(funct3[2] ? {63'b0, lt}										: 64'b0) |
					(funct3[3] ? {63'b0, ltu}										: 64'b0) |
					(funct3[4] ? in1 ^ in2											: 64'b0) |
					(funct3[5] ? funct7 ? in1 >>> in2[4:0] : in1 >> in2[4:0]		: 64'b0) |
					(funct3[6] ? in1 | in2											: 64'b0) |
					(funct3[7] ? in1 & in2											: 64'b0) ;

assign branch_taken =	opcode[24] & (	(funct3[0] & eq) |
										(funct3[1] & ~eq) |
										(funct3[4] & lt) |
										(funct3[5] & ~lt) |
										(funct3[6] & ltu) |
										(funct3[7] & ~ltu) );
endmodule
