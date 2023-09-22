module riscv_hart
(
	input	wire		clk,
	input	wire		rst,

	output	wire	[31:0]	imem_addr,
	input	wire	[31:0]	imem_data,

	output	wire	[31:0]	addr,
	output	wire	[2:0]	mem_op,
	input	wire	[31:0]	data_i,
	output	wire	[31:0]	data_o,

	input	wire		hardware_irq,
	input	wire		timer_irq
);

integer i;

wire		illegal_instruction;
wire		breakpoint;
wire		ecall;
wire		trap;
wire		mret;
wire		wfi;
wire	[31:0]	trap_target;
wire	[31:0]	mret_target;
wire	[31:0]	nextpc;
wire	[4:0]	rs1;
wire	[4:0]	rs2;
wire	[11:0]	csr;
wire	[4095:0]	csr_;
wire	[31:0]	csr_value;
wire		jump;
wire	[31:0]	jump_target;
wire	[4:0]	rd;
wire	[31:0]	csr_wb;
wire	[31:0]	irf_wb;

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

riscv_control control
(
	.clk(clk),
	.rst(rst),

	// CSR read/write port
	.csr(csr),
	.csr_(csr_),
	.csr_value(csr_value),
	.csr_wb(csr_wb),

	// Memory access monitoring port
	.pc(pc),
	.mem_op(mem_op),
	.addr(addr),

	// Inline event port
	.illegal_instruction(illegal_instruction),
	.breakpoint(breakpoint),
	.ecall(ecall),
	.mret(mret),
	.wfi(wfi),

	// Interrupt port
	.hardware_irq(hardware_irq),
	.timer_irq(timer_irq),

	// Trap port
	.trap(trap),
	.trap_target(trap_target),
	.mret_target(mret_target)
);


// Fetch logic

assign nextpc =	rst ?			0 :
		trap ?			trap_target :
		wfi ?			pc :
		mret ?			mret_target :
		jump ?			jump_target :
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

	// instruction/pc input
	.pc(pc),
	.instr(instr),

	// exception detection port
	.illegal_instruction(illegal_instruction),
	.breakpoint(breakpoint),
	.ecall(ecall),
	.mret(mret),
	.wfi(wfi),

	// irf read port
	.rs1(rs1),
	.rs2(rs2),
	.rs1_value(irf[rs1]),
	.rs2_value(irf[rs2]),

	// csr read/write port
	.csr(csr),
	.csr_(csr_),
	.csr_value(csr_value),
	.csr_wb(csr_wb),

	// jump port
	.jump(jump),
	.jump_target(jump_target),

	// memory access port 
	.mem_op(mem_op),
	.mem_addr(addr),
	.mem_load_data(data_i),
	.mem_store_data(data_o),

	// irf writeback port 
	.rd(rd),
	.irf_wb(irf_wb)
);

// Writeback

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
			irf[rd] <= irf_wb;
	end
end

endmodule
