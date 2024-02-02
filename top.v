module top ();

reg	clock;
reg	reset;
reg	rtc_clk;
reg	rtc_dly;

initial
begin
	clock = 0;
	reset = 0;

	$dumpfile("wave.vcd");
	$dumpvars(0, top);

	$readmemh("prog.hex", core0.mainmem.x);
	$readmemh("ucode.hex", core0.brom.x);
end

always #10
	clock <= !clock;

always #10
	rtc_clk <= !rtc_clk;

initial begin
	reset = 1;
	#3200 reset = 0;
end

always @(posedge clock)
begin
	rtc_dly <= rtc_clk;
end


wire		rtc;
wire		addr_valid;
wire	[31:0]	addr;
wire		write_data_valid;
wire	[511:0]	write_data;
wire		read_data_ready;
wire	[511:0]	read_data;

assign rtc = rtc_clk ^ rtc_dly;

riscv_soc core0
(
	.clk(clock),
	.rst(reset),

	.rtc_tick(rtc_clk),
	.ext_irq(0)
);

rom flash
(
	.chip_select(addr[31:15] == 0),

	.addr_valid(addr_valid),
	.addr(addr[14:0]),

	.data_ready(read_data_ready),
	.data(read_data)
);

ram ram
(
	.clk(clock),

	.chip_select(addr[31:14] == 2),
	.write_enable(write_data_valid),

	.addr_valid(addr_valid),
	.addr(addr[13:0]),

	.data_valid(write_data_valid),
	.data_i(write_data),

	.data_ready(read_data_ready),
	.data_o(read_data)
);

endmodule
