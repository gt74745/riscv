module dualportram
(
	input	wire		clk,

	// Port 1
	input wire port1_chip_select,
	input wire port1_output_enable,
	input wire [3:0] port1_write_enable,

	input wire [11:0] port1_addr,

	// read	
	output wire [31:0] port1_read_data,
	// write
	input wire [31:0] port1_write_data,

	// Port 2
	input wire port2_chip_select,
	input wire port2_output_enable,
	input wire [3:0] port2_write_enable,

	input wire [11:0] port2_addr,

	// read	
	output wire [31:0] port2_read_data,
	// write
	input wire [31:0] port2_write_data
);

reg [7:0] x [0:1023][0:3];

always @(posedge clk)
begin
	if (port2_chip_select)
	begin
		if (port2_write_enable[0])
			x[port2_addr[11:2]][port2_addr[1:0] + 0] <= port2_write_data[7:0];

		if (port2_write_enable[1])
			x[port2_addr[11:2]][port2_addr[1:0] + 1] <= port2_write_data[15:8];

		if (port2_write_enable[2])
			x[port2_addr[11:2]][port2_addr[1:0] + 2] <= port2_write_data[23:16];

		if (port2_write_enable[3])
			x[port2_addr[11:2]][port2_addr[1:0] + 3] <= port2_write_data[31:24];
	end
end

assign port1_read_data = (port1_chip_select && port1_output_enable) ? 
					{	x[port1_addr[11:2]][3],
						x[port1_addr[11:2]][2],
						x[port1_addr[11:2]][1],
						x[port1_addr[11:2]][0] } :
					32'bz;

assign port2_read_data = (port2_chip_select && port2_output_enable) ? 
					{	x[port2_addr[11:2]][3],
						x[port2_addr[11:2]][2],
						x[port2_addr[11:2]][1],
						x[port2_addr[11:2]][0] } :
					32'bz;

endmodule
