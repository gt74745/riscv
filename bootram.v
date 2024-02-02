module bootram
(
	input 	wire 		clk,

	input 	wire 		chip_select,
	input 	wire 		output_enable,
	input 	wire 	[3:0]	write_enable,

	input	wire	[10:0]	addr,

	output	wire	[31:0]	read_data,
	input 	wire 	[31:0]	write_data
);

reg [7:0] x [0:511][0:3];

assign read_data = (chip_select && output_enable) ?	{	x[addr[10:2]][3],
								x[addr[10:2]][2],
								x[addr[10:2]][1],
								x[addr[10:2]][0] } :
							32'bz;

always @(posedge clk)
begin
	if (chip_select)
	begin
		if (write_enable[3])
			x[addr[10:2]][addr[1:0] + 3] <= write_data[31:24];
		if (write_enable[2])
			x[addr[10:2]][addr[1:0] + 2] <= write_data[23:16];
		if (write_enable[1])
			x[addr[10:2]][addr[1:0] + 1] <= write_data[15:8];
		if (write_enable[0])
			x[addr[10:2]][addr[1:0] + 0] <= write_data[7:0];
	end
end

endmodule
