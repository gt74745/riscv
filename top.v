module top ();

reg	clock;
reg	reset;
reg	rtc_clk;
reg	rtc_dly;
wire	rtc;

wire	[31:0]	imem_addr;
wire	[31:0]	imem_data;

wire	[31:0]	addr;
wire	[2:0]	mem_op;
wire	[31:0]	read_data;
wire	[31:0]	write_data;

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

	.imem_addr(imem_addr),
	.imem_data(imem_data),

	.addr(addr),
	.mem_op(mem_op),
	.data_i(read_data),
	.data_o(write_data),

	.hardware_irq(0),
	.timer_irq(timer_irq)
);

dualport_ram mem
(
	.clk(clock),

	// Port A (instruction)
	.addr_a(imem_addr[14:0]),
	.chip_select_a(imem_addr[31:15] == 0),
	.op_a(0),
	.data_a_i(0),
	.data_a_o(imem_data),

	// Port B (data)
	.addr_b(addr[14:0]),
	.chip_select_b(addr[31:15] == 0),
	.op_b({2{mem_op[2]}} & mem_op[1:0]),
	.data_b_i(write_data),
	.data_b_o(read_data)
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
