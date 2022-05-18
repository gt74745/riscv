`timescale 1ns / 1ps

module riscv_memaccess (
	input	is_st,
	input	is_ld,
	input	[2:0] funct3,
	input	[31:0] rs2,
	input	[31:0] adder_result,
	
	output	[31:0] st_data,
	output	[3:0] st_mask,
	output	[31:0] addr
);

assign st_data	=	is_st ? (	funct3[0] ? {24'bz, rs2[7:0]} :
								funct3[1] ? {16'bz, rs2[15:0]} :
								funct3[2] ? rs2 :
								32'bz ) :
					32'bz;

assign st_mask	=	is_st | is_ld ? (	funct3[0] ? 4'b1 :
								funct3[1] ? 4'b11 :
								funct3[2] ? 4'b1111 :
								4'bz ) :
					4'bz;

assign addr		=	is_st | is_ld ? adder_result :
					32'bz;

endmodule
