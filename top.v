`timescale 1ns / 1ps
module top (
	input clk,
	input reset
);

wire [31:0] addr;
wire [31:0] rdata;
wire [31:0] wdata;
wire [3:0] wmask;

wire [31:0] i_addr;
wire [63:0] i_data;

wire rdflag;

wire i_cs = (i_addr[31:15] == 17'b00000000000000000);
wire cs = (addr[31:15] == 17'b00000000000000000);

wire membusy = 0;

riscv core0 (
	clk,
	reset,

	addr,
	rdata,
	wdata,
	wmask,

	i_addr,
	i_data[63:32],

	rdflag,

	membusy
);

dualported_ram imem (
	clk,
	i_addr[12:0],
	addr[12:0],
	i_cs,
	cs,
	rdflag,
	wmask,
	i_data,
	rdata,
	wdata
);

endmodule
