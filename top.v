module top
(
	output	reg		done
);

reg clk;
reg rst;

wire wfi;

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

riscv_core core
(
	.clk(clk),
	.rst(rst)
);

endmodule
