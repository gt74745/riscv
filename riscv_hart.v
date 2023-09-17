
module riscv_hart
(
	input	wire		clk,
	input	wire		rst,

	output	wire	[31:0]	imem_addr,
	input	wire	[31:0]	imem_data,

	output	wire	[31:0]	dmem_addr,
	output	wire	[1:0]	dmem_op,
	input	wire	[31:0]	dmem_data_i,
	output	wire	[31:0]	dmem_data_o
);

integer i;

wire	[31:0]	nextpc;
wire	[4:0]	rs1;
wire	[4:0]	rs2;
wire		jump;
wire	[31:0]	jump_target;
wire	[4:0]	rd;
wire	[31:0]	wb;

// Main operation registers

reg	[31:0]	pc;
reg	[31:0]	instr;
reg	[31:0]	irf	[0:31];

// Initialize regs

initial
begin
	pc = 0;
	instr = 0;

	for (i = 0; i < 32; i++)
	begin
		irf[i] = 0;
	end
end

// Fetch logic

assign nextpc =	rst ?	0 :
		jump ?	jump_target :
			pc + 4;

assign imem_addr = nextpc;

always @(posedge clk, posedge rst)
begin
	if (rst)
	begin
		pc <= -4;
		instr <= 32'h13;
	end else
	begin
		pc <= nextpc;
		instr <= imem_data;
	end
end

riscv_datapath datapath
(
	.clk(clk),

	.pc(pc),
	.instr(instr),

	.rs1(rs1),
	.rs2(rs2),
	.rs1_value(irf[rs1]),
	.rs2_value(irf[rs2]),

	.jump(jump),
	.jump_target(jump_target),

	.mem_op(dmem_op),
	.mem_addr(dmem_addr),
	.mem_load_data(dmem_data_i),
	.mem_store_data(dmem_data_o),

	.rd(rd),
	.wb(wb)
);

always @(posedge clk, posedge rst)
begin
	if (rst)
	begin
		for (i = 0; i < 32; i++)
		begin
			irf[i] <= 32'b0;
		end
	end else
	begin
		if (rd != 5'b0)
			irf[rd] <= wb;
	end
end

endmodule
