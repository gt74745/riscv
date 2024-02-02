module riscv_hart
(
	input	wire		clk,
	input	wire		rst,

	output	wire	[31:0]	hart2imem_addr,

	input	wire	[31:0]	imem2hart_data,

	output	wire		hart2dmem_rd,
	output	wire	[3:0]	hart2dmem_wr,

	output	wire	[31:0]	hart2dmem_addr,

	input	wire	[31:0]	dmem2hart_data,

	output	wire	[31:0]	hart2dmem_data,

	input	wire		hardware_irq,
	input	wire		timer_irq
);

integer i;

wire		illegal_instruction;
wire 		ucoded_instruction;
wire		breakpoint;
wire		ecall;
wire		trap;
wire		mret;
wire 		xret;
wire		wfi;
wire 		is_mem_op;
wire	[31:0]	trap_target;
wire	[31:0]	mret_target;
wire 	[31:0]	xret_target;
wire	[31:0]	nextpc;
wire	[4:0]	rs1;
wire	[4:0]	rs2;
wire	[11:0]	csr;
wire	[4095:0]	csr_mask;
wire	[31:0]	csr_value;
wire		jump;
wire	[31:0]	jump_target;
wire	[4:0]	rd;
wire	[31:0]	csr_wb;
wire	[31:0]	irf_wb;
wire	[2:0]	mem_op;

// Main operation registers

reg	[31:0]	pc_datapath;
reg	[31:0]	pc_ctrl;
reg	[31:0]	instr;
reg	[31:0]	irf	[0:31];


// Initialize regs

initial
begin
	pc_datapath = -4;
	pc_ctrl = -4;
	instr = 32'h13;

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
	.csr_mask(csr_mask),
	.csr_value(csr_value),
	.csr_wb(csr_wb),

	// Memory access monitoring port
	.pc_datapath(pc_datapath),
	.pc_ctrl(pc_ctrl),
	.is_mem_op(is_mem_op),
	.dmem_op(mem_op),
	.addr(hart2dmem_addr),

	// Inline event port
	.illegal_instruction(illegal_instruction),
	.ucoded_instruction(ucoded_instruction),
	.breakpoint(breakpoint),
	.ecall(ecall),
	.mret(mret),
	.xret(xret),
	.wfi(wfi),

	// Interrupt port
	.hardware_irq(hardware_irq),
	.timer_irq(timer_irq),

	// Trap port
	.trap(trap),
	.trap_target(trap_target),
	.mret_target(mret_target),
	.xret_target(xret_target)
);


// Fetch logic

assign nextpc =	rst ?				0 :
		trap ?				trap_target :
		wfi ?				pc_ctrl :
		mret ?				mret_target :
		xret ?				xret_target :
		jump ?				jump_target :
						pc_ctrl + 4;

assign hart2imem_addr = nextpc;
	
always @(posedge clk, posedge rst)
begin
	if (rst)
	begin
		pc_datapath <= -4;
		pc_ctrl <= -4;
		instr <= 32'h13;
	end
	else
	begin
		pc_datapath <= nextpc;
		pc_ctrl <= nextpc;
		instr <= imem2hart_data;
	end
//	else
//		pc_ctrl <= nextpc;
end


riscv_datapath datapath
(
	// instruction/pc input
	.pc(pc_datapath),
	.instr(instr),

	// exception detection port
	.illegal_instruction(illegal_instruction),
	.ucoded_instruction(ucoded_instruction),
	.breakpoint(breakpoint),
	.ecall(ecall),
	.mret(mret),
	.xret(xret),
	.wfi(wfi),

	// irf read port
	.rs1(rs1),
	.rs2(rs2),
	.rs1_value(irf[rs1]),
	.rs2_value(irf[rs2]),

	// csr read/write port
	.csr(csr),
	.csr_mask(csr_mask),
	.csr_value(csr_value),
	.csr_wb(csr_wb),

	// jump port
	.jump(jump),
	.jump_target(jump_target),

	// memory access port 
	.is_mem_op(is_mem_op),
	.mem_op(mem_op),
	.mem_addr(hart2dmem_addr),
	.mem_load_data(dmem2hart_data),
	.mem_store_data(hart2dmem_data),

	// irf writeback port 
	.rd(rd),
	.irf_wb(irf_wb)
);

assign hart2dmem_rd = ~mem_op[2] & (mem_op[1] | mem_op[0]);

assign hart2dmem_wr[0] = mem_op[2];
assign hart2dmem_wr[1] = mem_op[2] & mem_op[1];
assign hart2dmem_wr[2] = mem_op[2] & mem_op[1] & mem_op[0];
assign hart2dmem_wr[3] = mem_op[2] & mem_op[1] & mem_op[0];

// Writeback

always @(posedge clk, posedge rst)
begin
	if (rst)
	begin
		for (i = 0; i < 32; i++)
		begin
			irf[i] <= 32'b0;
		end
	end else if (rd != 5'b0) 
	begin
		irf[rd] <= irf_wb;
	end
end

endmodule
