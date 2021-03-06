`timescale 1ns / 1ps

module riscv_writeback(
	/* verilator lint_off UNUSED */
	input [31:0] opcode,
	/* verilator lint_on UNUSED */
	input [63:0] alu_result,
	input [63:0] adder_result,
	input ldoubleword,
	input lword,
	input lhalfword,
	input [63:0] ld_data,

	output [63:0] rd
);

assign rd	=	opcode[13] | opcode[5] | opcode[25] | opcode[27] ?	adder_result :
				opcode[4] | opcode[12]	? alu_result :
				opcode[0]				?  (ldoubleword ? ld_data :
											lword ? {32'b0, ld_data[31:0]} :
											lhalfword ? {48'b0,ld_data[15:0]} :
											{56'b0,ld_data[7:0]}) :
				64'b0;

endmodule
