`timescale 1ns / 1ps

module riscv_decode (
	input	[31:0] instr,

	output	[31:0] uimm,
	output	[31:0] iimm,
	output	[31:0] simm,
	output	[31:0] bimm,
	output	[31:0] jimm,

	output	funct7,

	output	[11:0] csr,

	output	[4:0] rs2,
	output	[4:0] rs1,

	output	[7:0] funct3,

	output	[4:0] rd,

	output	[31:0] opcode,
	output	is_legal
);

assign uimm	= {instr[31], instr[30:12], 12'b0};
assign iimm	= {{21{instr[31]}}, instr[30:20]};
assign simm	= {{21{instr[31]}}, instr[30:25], instr[11:7]};
assign bimm	= {{20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0};
assign jimm	= {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};

assign funct7	= instr[30];

assign csr		= instr[31:20];

assign rs2		= instr[24:20];
assign rs1		= instr[19:15];

assign funct3	= 8'h1 << instr[14:12];

assign rd		= instr[11:7];

assign opcode	= 32'h1 << instr[6:2];

assign is_legal	= instr[1] & instr[0];

endmodule
