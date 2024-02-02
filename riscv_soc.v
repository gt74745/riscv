module riscv_soc
(
	input	wire		clk,
	input	wire		rst,

	input	wire		rtc_tick,
	input	wire		ext_irq
);

wire [31:0] hart2imem_addr;
wire [31:0] imem2hart_data;
wire hart2dmem_rd;
wire [3:0] hart2dmem_wr;
wire [31:0] hart2dmem_addr;
wire [31:0] dmem2hart_data;
wire [31:0] hart2dmem_data;

wire timer_irq;

riscv_hart hart0
(
	.clk(clk),
	.rst(rst),

	.hart2imem_addr(hart2imem_addr),

	.imem2hart_data(imem2hart_data),

	.hart2dmem_rd(hart2dmem_rd),
	.hart2dmem_wr(hart2dmem_wr),

	.hart2dmem_addr(hart2dmem_addr),

	.dmem2hart_data(dmem2hart_data),

	.hart2dmem_data(hart2dmem_data),

	.hardware_irq(ext_irq),
	.timer_irq(timer_irq)
);

bootrom brom
(
	.chip_select(hart2imem_addr[31:11] == 0),
	.addr(hart2imem_addr[10:2]),

	.data(imem2hart_data)
); 

bootram bram
(
	.clk(clk),

	.chip_select(hart2dmem_addr[31:11] == 1),
	.output_enable(hart2dmem_rd),
	.write_enable(hart2dmem_wr),

	.addr(hart2dmem_addr[10:0]),

	.read_data(dmem2hart_data),
	.write_data(hart2dmem_data)
);

dualportram mainmem
(
	.clk(clk),

	// Port 1
	.port1_chip_select(hart2imem_addr[31:12] == 1),
	.port1_output_enable(1),
	.port1_write_enable(0),

	.port1_addr(hart2imem_addr[11:0]),

	// Read
	.port1_read_data(imem2hart_data),
	// Write
	.port1_write_data(0),

	// Port 2
	.port2_chip_select(hart2dmem_addr[31:12] == 1),
	.port2_output_enable(hart2dmem_rd),
	.port2_write_enable(hart2dmem_wr),

	.port2_addr(hart2dmem_addr[11:0]),

	// Read
	.port2_read_data(dmem2hart_data),
	// Write
	.port2_write_data(hart2dmem_data)
);

endmodule
