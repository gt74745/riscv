module dcache
(
	input	wire		clk,

	/* =================== */
	/* CPU-Cache interface */
	/* =================== */

	// Read/Write address port
	input	wire		cpu_addr_valid,
	input	wire	[31:0]	cpu_addr,

	// Write data port
	input	wire		cpu_data_valid,
	input	wire	[31:0]	cpu_data_i,

	// Read data port
	output	wire		cpu_data_ready,
	output	wire	[31:0]	cpu_data_o,

	/* ====================== */
	/* Cache-Memory interface */
	/* ====================== */

	// Read/Write address port
	output	wire		mem_addr_valid,
	output	wire	[31:0]	mem_addr,

	// Write data port
	output	wire		mem_data_valid,
	output	wire	[511:0]	mem_data_o,

	// Read data port
	input	wire		mem_data_ready,
	input	wire	[511:0]	mem_data_i
);

/*	
* Cache functionality
*
*	Cycle:		   n+1		   n+2		   n+3	
*
*	Read hit:	cache>cpu	
*	Read miss:	mem>cache	cache>cpu
*	Write hit:	cpu>cache	cache>mem
*	Write miss:	mem>cache	cpu>cache	cache>mem
*/

reg	[31:0]	x	[0:63][0:15];
reg	[63:0]	valid;
reg	[63:0]	dirty;
reg	[19:0]	tag	[0:63];
reg	[31:0]	addr_dly;

assign cpu_data_ready = cpu_addr_valid & valid[cpu_addr[11:6]] & (cpu_addr[31:12] == tag[cpu_addr[11:6]]);
assign cpu_data_o = x[cpu_addr[11:6]][cpu_addr[5:2]];

assign mem_addr_valid = cpu_addr_valid ?	(~cpu_data_ready | dirty[addr_dly[11:6]]) :
			dirty[addr_dly[11:6]] ?	1 :
						1'bz;
assign mem_addr = 	(mem_addr_valid & dirty[addr_dly[11:6]]) ?	addr_dly :
			(mem_addr_valid & ~dirty[addr_dly[11:6]]) ?	cpu_addr :
									32'bz;


assign mem_data_valid = dirty[addr_dly[11:6]];
assign mem_data_o = mem_data_valid ?	{	x[addr_dly[11:6]][15],
						x[addr_dly[11:6]][14],
						x[addr_dly[11:6]][13],
						x[addr_dly[11:6]][12],
						x[addr_dly[11:6]][11],
						x[addr_dly[11:6]][10],
						x[addr_dly[11:6]][9],
						x[addr_dly[11:6]][8],
						x[addr_dly[11:6]][7],
						x[addr_dly[11:6]][6],
						x[addr_dly[11:6]][5],
						x[addr_dly[11:6]][4],
						x[addr_dly[11:6]][3],
						x[addr_dly[11:6]][2],
						x[addr_dly[11:6]][1],
						x[addr_dly[11:6]][0]} :

					512'b0;

always @(posedge clk)
begin
	if (cpu_data_valid & valid[cpu_addr[11:6]] & (tag[cpu_addr[11:6]] == cpu_addr[31:12]))
	begin
		x[cpu_addr[11:6]][cpu_addr[5:2]] <= cpu_data_i;
		dirty[cpu_addr[11:6]] <= 1;
	end
	else if (mem_data_valid)
	begin
		dirty[addr_dly[11:6]] <= 0;
	end
	else if (cpu_addr_valid & mem_addr_valid & mem_data_ready & (cpu_addr == mem_addr))
	begin
		x[cpu_addr[11:6]][0] <= mem_data_i[31:0];
		x[cpu_addr[11:6]][1] <= mem_data_i[63:32];
		x[cpu_addr[11:6]][2] <= mem_data_i[95:64];
		x[cpu_addr[11:6]][3] <= mem_data_i[127:96];
		x[cpu_addr[11:6]][4] <= mem_data_i[159:128];
		x[cpu_addr[11:6]][5] <= mem_data_i[191:160];
		x[cpu_addr[11:6]][6] <= mem_data_i[223:192];
		x[cpu_addr[11:6]][7] <= mem_data_i[255:224];
		x[cpu_addr[11:6]][8] <= mem_data_i[287:256];
		x[cpu_addr[11:6]][9] <= mem_data_i[319:288];
		x[cpu_addr[11:6]][10] <= mem_data_i[351:320];
		x[cpu_addr[11:6]][11] <= mem_data_i[383:352];
		x[cpu_addr[11:6]][12] <= mem_data_i[415:384];
		x[cpu_addr[11:6]][13] <= mem_data_i[447:416];
		x[cpu_addr[11:6]][14] <= mem_data_i[479:448];
		x[cpu_addr[11:6]][15] <= mem_data_i[511:480];

		tag[cpu_addr[11:6]] <= cpu_addr[31:12];
		valid[cpu_addr[11:6]] <= 1;
		dirty[cpu_addr[11:6]] <= 0;
	end

	addr_dly <= cpu_addr;
end

endmodule
