module bootrom
(
	input 	wire 		chip_select,

	input	wire	[10:2]	addr,

	output	wire	[31:0]	data
);

reg [7:0] x [0:511][0:3];

assign data = (chip_select) ?	{	x[addr[10:2]][3],
					x[addr[10:2]][2],
					x[addr[10:2]][1],
					x[addr[10:2]][0] } :
				32'bz;

endmodule
