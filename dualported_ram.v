`timescale 1ns / 1ps
module dualported_ram(
	input clk,
	input [12:0] addr0,
	input [12:0] addr1,
	input cs0,
	input cs1,
	input oe,
	input [7:0] we,
	output [31:0] data0,
	output [63:0] data1_o,
	input [63:0] data1_i
);

reg [7:0] flash [0:8191];

initial	$readmemh("a.hex", flash);

always @(posedge clk) begin
	if (we[7])
		flash[addr1+7] <= data1_i[63:56];
	if (we[6])
		flash[addr1+6] <= data1_i[55:48];
	if (we[5])
		flash[addr1+5] <= data1_i[47:40];
	if (we[4])
		flash[addr1+4] <= data1_i[39:32];
	if (we[3])
		flash[addr1+3] <= data1_i[31:24];
	if (we[2])
		flash[addr1+2] <= data1_i[23:16];
	if (we[1])
		flash[addr1+1] <= data1_i[15:8];
	if (we[0])
		flash[addr1] <= data1_i[7:0];
end

assign data0 = ~cs0 ? 32'bz : {flash[addr0+3], flash[addr0+2], flash[addr0+1], flash[addr0]};
assign data1_o = ~oe | ~cs1 ? 64'bz : {flash[addr1+7], flash[addr1+6], flash[addr1+5], flash[addr1+4], flash[addr1+3], flash[addr1+2], flash[addr1+1], flash[addr1]};

endmodule
