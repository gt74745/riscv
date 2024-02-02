module dualportedram
(
	input	wire		clk,

	input	wire		chip_select,
	input	wire		write_enable,

	input	wire	[14:0]	addr,

	input	wire		data_valid,
	input	wire	[31:0]	data_i,

	output	reg	data_ready,
	output	reg	[31:0]	data_o
);

reg [7:0] x [0:8191][0:3];


always @(posedge chip_select, negedge chip_select)
begin
	#100 data_o = chip_select ? 	{	x[addr[14:2]][3],
						x[addr[14:2]][2],
						x[addr[14:2]][1],
						x[addr[14:2]][0]} : 
					32'b0;
	#21 data_ready = chip_select;
end

initial
begin
	$readmemh("imem.hex", x);
end

always @(posedge clk)
begin
	if (chip_select & write_enable & data_valid)
	begin
		x[addr[14:2]][3] <= data_i[31:24];
		x[addr[14:2]][2] <= data_i[23:16];
		x[addr[14:2]][1] <= data_i[15:8];
		x[addr[14:2]][0] <= data_i[7:0];
	end
end

endmodule
