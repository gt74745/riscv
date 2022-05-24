`timescale 1ns / 1ps

module riscv_memaccess (
	input	is_st,
	input	is_ld,
	input	[3:0] funct3,
	input	[63:0] rs2,
	input	[63:0] adder_result,
	
	output	[63:0] st_data,
	output	[7:0] st_mask,
	output	[63:0] addr
);

assign st_data	=	is_st ? (	funct3[0] ? {56'bz, rs2[7:0]} :
								funct3[1] ? {48'bz, rs2[15:0]} :
								funct3[2] ? {32'bz, rs2[31:0]} :
								funct3[3] ? rs2 :
								64'bz ) :
					64'bz;

assign st_mask	=	is_st | is_ld ? (	funct3[0] ? 8'b1 :
								funct3[1] ? 8'b11 :
								funct3[2] ? 8'b1111 :
								funct3[3] ? 8'b11111111 :
								8'bz ) :
					8'bz;

assign addr		=	is_st | is_ld ? adder_result :
					64'bz;

endmodule
