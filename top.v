module top ();

reg	clock;
reg	reset;
reg	rtc_clk;
reg	rtc_dly;
wire	rtc;

wire		imem_addr_valid;
wire	[31:0]	imem_addr;
wire		imem_data_ready;
wire	[31:0]	imem_data;

wire	[2:0]	dmem_op;
wire		dmem_addr_valid;
wire	[31:0]	dmem_addr;
wire		dmem_read_data_ready;
wire	[31:0]	dmem_read_data;
wire		dmem_write_data_valid;
wire	[31:0]	dmem_write_data;

wire		imem_ext_addr_valid;
wire	[31:0]	imem_ext_addr;
wire		dmem_ext_addr_valid;
wire	[31:0]	dmem_ext_addr;
wire		ext_addr_valid;
wire	[31:0]	ext_addr;

wire		ext_write_data_valid;
wire	[511:0]	ext_write_data;

wire		ext_read_data_ready;
wire	[511:0]	ext_read_data;

wire		timer_irq;

initial
begin
	clock = 0;
	reset = 0;

	$dumpfile("wave.vcd");
	$dumpvars(0, top);
end

always #10
	clock <= !clock;

always #320
	rtc_clk <= !rtc_clk;

always @(posedge clock)
begin
	rtc_dly <= rtc_clk;
end

assign rtc = rtc_clk ^ rtc_dly;

assign ext_addr_valid = (imem_ext_addr_valid | dmem_ext_addr_valid);
assign ext_addr =	imem_ext_addr_valid ?	imem_ext_addr :
			dmem_ext_addr_valid ?	dmem_ext_addr :
						32'b0;

riscv_hart hart0
(
	.clk(clock),
	.rst(reset),

	// Imem port
	.imem_addr_valid(imem_addr_valid),
	.imem_addr(imem_addr),
	.imem_data_ready(imem_data_ready),
	.imem_data(imem_data),

	// Dmem port
	.dmem_op(dmem_op),
	.dmem_addr_valid(dmem_addr_valid),
	.dmem_addr(dmem_addr),
	.dmem_read_data_ready(dmem_read_data_ready),
	.dmem_read_data(dmem_read_data),
	.dmem_write_data_valid(dmem_write_data_valid),
	.dmem_write_data(dmem_write_data),

	.hardware_irq(0),
	.timer_irq(timer_irq)
);

icache imem
(
	.clk(clock),

	// CPU address port
	.cpu_addr_valid(imem_addr_valid),
	.cpu_addr(imem_addr),

	// CPU data port
	.cpu_data_ready(imem_data_ready),
	.cpu_data_o(imem_data),

	// External address port
	.mem_addr_valid(imem_ext_addr_valid),
	.mem_addr(imem_ext_addr),

	// External data port
	.mem_data_ready(ext_read_data_ready),
	.mem_data_i(ext_read_data)
);

dcache dmem
(
	.clk(clock),

	// CPU address port
	.cpu_addr_valid(dmem_addr_valid),
	.cpu_addr(dmem_addr),

	// CPU data write port
	.cpu_data_valid(dmem_write_data_valid),
	.cpu_data_i(dmem_write_data),

	// CPU data read port
	.cpu_data_ready(dmem_read_data_ready),
	.cpu_data_o(dmem_read_data),

	// External address port
	.mem_addr_valid(dmem_ext_addr_valid),
	.mem_addr(dmem_ext_addr),

	// External data write port
	.mem_data_valid(ext_write_data_valid),
	.mem_data_o(ext_write_data),

	// External data read port
	.mem_data_ready(ext_read_data_ready),
	.mem_data_i(ext_read_data)
);

rom flash
(
	.chip_select(ext_addr[31:15] == 0),

	.addr_valid(ext_addr_valid),
	.addr(ext_addr[14:0]),

	.data_ready(ext_read_data_ready),
	.data(ext_read_data)
);

ram ram
(
	.clk(clock),

	.chip_select(ext_addr[31:14] == 2),
	.write_enable(ext_write_data_valid),

	.addr_valid(ext_addr_valid),
	.addr(ext_addr[13:0]),

	.data_valid(ext_write_data_valid),
	.data_i(ext_write_data),

	.data_ready(ext_read_data_ready),
	.data_o(ext_read_data)
);

timer rtctime
(
	.clk(clock),
	.rtc(rtc),

	.chip_select(dmem_addr[31:4] == 28'hc00),
	.addr_valid(dmem_addr_valid),
	.addr(dmem_addr[3:0]),
	.op(dmem_op[2]),
	.data_valid(dmem_write_data_valid),
	.data_i(dmem_write_data),
	.data_ready(dmem_read_data_ready),
	.data_o(dmem_read_data),

	.interrupt(timer_irq)
);

endmodule
