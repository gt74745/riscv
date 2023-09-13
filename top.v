module top ();

reg clk;
reg rst;

initial
begin
	$dumpfile("wave.vcd");
	$dumpvars(0, top);

	clk = 0;
	rst = 0;

	#3 rst = 1;
	#46 rst = 0;
	#1000 $finish;
end

always #10
begin
	clk <= ~clk;
end

endmodule
