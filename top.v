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

wire	[31:0]	addr;
wire	[2:0]	mem_op;
wire	[31:0]	read_data;
wire	[31:0]	write_data;

wire		ext_mem_addr_valid;
wire	[31:0]	ext_mem_addr;
wire		ext_mem_data_ready;
wire	[511:0]	ext_mem_data;

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

riscv_hart hart0
(
	.clk(clock),
	.rst(reset),

	.imem_addr_valid(imem_addr_valid),
	.imem_addr(imem_addr),
	.imem_data_ready(imem_data_ready),
	.imem_data(imem_data),

	.mem_op(mem_op),
	.dmem_addr_valid(dmem_addr_valid),
	.dmem_addr(dmem_addr),
	.dmem_read_data_ready(dmem_read_data_ready),
	.dmem_read_data(dmem_read_data),
	.dmem_write_data_valid(dmem_write_data_valid),
	.data_write_data(dmem_write_data),

	.hardware_irq(0),
	.timer_irq(timer_irq)
);

cache imem
(
	.clk(clock),

	.cpu_addr_valid(imem_addr_valid),
	.cpu_addr(imem_addr),
	.cpu_data_ready(imem_data_ready),
	.cpu_data_o(imem_data),

	.mem_addr_valid(ext_mem_addr_valid),
	.mem_addr(ext_mem_addr),
	.mem_data_ready(ext_mem_data_ready),
	.mem_data_i(ext_mem_data)
);

cache dmem
(
	.clk(clock),

	.cpu_addr_valid(dmem_addr_valid),
	.cpu_addr(dmem_addr),
	.cpu_data_ready(dmem_data_ready),
	.cpu_data_o(dmem_data),

	.mem_addr_valid(ext_mem_addr_valid),
	.mem_addr(ext_mem_addr),
	.mem_data_ready(ext_mem_data_ready),
	.mem_data_i(ext_mem_data)
);

rom flash
(
	.chip_select(addr[31:15] == 0),

	.addr_valid(ext_mem_addr_valid),
	.addr(ext_mem_addr[14:0]),

	.data_ready(ext_mem_data_ready),
	.data(ext_mem_data)
);

timer rtctime
(
	.clk(clock),
	.rtc(rtc),

	.chip_select(addr[31:4] == 28'h800),
	.addr(addr[3:0]),
	.op(mem_op[2]),
	.data_i(write_data),
	.data_o(read_data),

	.interrupt(timer_irq)
);

endmodule
