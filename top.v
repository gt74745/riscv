module top
(
	output	reg		done
);

reg clk;
reg rst;

initial
begin
	$dumpfile("wave.vcd");
	$dumpvars(0, top);

	clk = 0;
	rst = 0;
	done = 0;

	#3 rst = 1;
	#46 rst = 0;
	#4000 done = 1;
end

always #10
begin
	clk <= ~clk;
end

wire	[31:0]	imem_addr;
wire	[31:0]	imem_data;
wire	[31:0]	dmem_addr;
wire	[1:0]	dmem_op;
wire	[31:0]	dmem_read_data;
wire	[31:0]	dmem_write_data;

riscv_core core
(
	.clk(clk),
	.rst(rst),

	.imem_addr(imem_addr),
	.imem_data(imem_data),

	.dmem_addr(dmem_addr),
	.dmem_op(dmem_op),
	.dmem_data_i(dmem_read_data),
	.dmem_data_o(dmem_write_data)
);

dualport_ram mem
(
	.clk(clk),

	// Port A (instruction)
	.addr_a(imem_addr[14:0]),
	.chip_select_a(imem_addr[31:15] == 0),
	.op_a(0),
	.data_a_i(0),
	.data_a_o(imem_data),

	// Port B (data)
	.addr_b(dmem_addr[14:0]),
	.chip_select_b(dmem_addr[31:15] == 0),
	.op_b(dmem_op),
	.data_b_i(dmem_write_data),
	.data_b_o(dmem_read_data)
);

endmodule
