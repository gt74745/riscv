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

wire		interrupt_trap;
wire	[3:0]	interrupt_cause;
wire	[31:0]	interrupt_tvec;
wire		instr_address_misaligned;
wire		illegal_instruction;
wire		breakpoint;
wire		load_address_misaligned;
wire		store_address_misaligned;
wire		ecall;
wire		mret;
wire		wfi;
wire		exception_trap;
wire	[3:0]	exception_cause;
wire	[63:0]	mstatus_;
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

// Control & Status registers

reg	[63:0]	mstatus;
reg	[31:0]	mtvec;
reg	[31:0]	mip;
reg	[31:0]	mie;
reg	[63:0]	mcycle;
reg	[63:0]	minstret;
reg	[63:0]	mhpmcounter	[3:31];
reg	[31:0]	mhpmevent	[3:31];
reg	[31:0]	mcountinhibit;
reg	[31:0]	mscratch;
reg	[31:0]	mepc;
reg	[31:0]	mcause;

// Initialize regs

initial
begin
	pc = 0;
	instr = 0;

	for (i = 0; i < 32; i++)
	begin
		irf[i] = 0;
	end

	mstatus = 64'b0;
	mtvec = 32'b0;
	mip = 32'b0;
	mie = 32'b0;
	mcycle = 64'b0;
	minstret = 64'b0;
	mcountinhibit = 32'b0;
	mscratch = 32'b0;
	mepc = 32'b0;
	mcause = 32'b0;

	for (i = 3; i < 32; i++)
	begin
		mhpmcounter[i] = 64'b0;
		mhpmevent[i] = 32'b0;
	end
end

// Interrupt trap logic

assign interrupt_trap =	mstatus[3] & (	(mie[11] & mip[11]) |
					(mie[7] & mip[7]) |
					(mie[3] & mip[3]));

assign interrupt_cause =	(mie[11] & mip[11]) ?	4'd11 :
				(mie[7] & mip[7]) ?	4'd7 :
				(mie[3] & mip[3]) ?	4'd3 :
							4'd0;

assign interrupt_tvec =	{mtvec[31:2] + (mtvec[0] ? {26'b0, interrupt_cause} : 30'b0), 2'b0};

// Exception trap logic

assign instr_address_misaligned = (pc[1] | pc[0]);

assign load_address_misaligned = ~mem_op[2] & (	((mem_op[1:0] == 2) & addr[0]) |
							((mem_op[1:0] == 3) & (addr[1] | addr[0])));

assign store_address_misaligned = mem_op[2] & (	((mem_op[1:0] == 2) & addr[0]) |
							((mem_op[1:0] == 3) & (addr[1] | addr[0])));

assign exception_trap =	instr_address_misaligned |
			illegal_instruction |
			breakpoint |
			load_address_misaligned |
			store_address_misaligned |
			ecall;

assign exception_cause =	instr_address_misaligned ?	4'd0 :
				illegal_instruction ?		4'd2 :
				breakpoint ?			4'd3 :
				load_address_misaligned ?	4'd4 :
				store_address_misaligned ?	4'd6 :
				ecall ?				4'd11 :
								4'd0;

// Fetch logic

assign nextpc =	rst ?			0 :
		interrupt_trap ?	interrupt_tvec :
		exception_trap ?	{mtvec[31:2], 2'b0} :
		wfi ?			pc :
		mret ?			mepc :
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

// CSR read

assign mstatus_ =	{56'b0, mstatus[7], 3'b0, mstatus[3], 3'b0};

assign csr_value =	csr_[12'h300] ?			mstatus_[31:0] :
			csr_[12'h301] ?			32'h40000100 :
			csr_[12'h304] ?			mie :
			csr_[12'h305] ?			mtvec :
			csr_[12'h310] ?			mstatus_[63:32] :
			csr_[12'h320] ?			mcountinhibit :
			csr_[12'h340] ?			mscratch :
			csr_[12'h341] ?			mepc :
			csr_[12'h342] ?			mcause :
			csr_[12'h344] ?			mip :
			csr_[12'hb00] ?			mcycle[31:0] :
			csr_[12'hb02] ?			minstret[31:0] :
			csr_[12'hb80] ?			mcycle[63:32] :
			csr_[12'hb82] ?			minstret[63:32] :
			32'h0;

riscv_datapath datapath
(
	.clk(clk),

	// instruction/pc input
	.pc(pc),
	.instr(instr),

	// exception detection interface
	.illegal_instruction(illegal_instruction),
	.breakpoint(breakpoint),
	.ecall(ecall),
	.mret(mret),
	.wfi(wfi),

	// irf read interface
	.rs1(rs1),
	.rs2(rs2),
	.rs1_value(irf[rs1]),
	.rs2_value(irf[rs2]),

	// csr read/write interface
	.csr(csr),
	.csr_(csr_),
	.csr_value(csr_value),
	.csr_wb(csr_wb),

	// jump interface
	.jump(jump),
	.jump_target(jump_target),

	// memory interface
	.mem_op(mem_op),
	.mem_addr(addr),
	.mem_load_data(data_i),
	.mem_store_data(data_o),

	// irf writeback interface
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

		for (i = 3; i < 32; i++)
		begin
			mhpmcounter[i] <= 64'b0;
			mhpmevent[i] <= 32'b0;
		end

		mstatus <= 0;
		mtvec <= 0;
		mip <= 0;
		mie <= 0;
		mcycle <= 0;
		minstret <= 0;
		mcountinhibit <= 0;
		mscratch <= 0;
		mepc <= 0;
		mcause <= 0;
	end else
	begin
		if (rd != 5'b0)
			irf[rd] <= irf_wb;

		// Interrupt queue handling
		if (mip[11] & interrupt_trap & (interrupt_cause == 11))
		begin
			mip[11] <= 0;
		end
		else if (mip[7] & interrupt_trap & (interrupt_cause == 8))
		begin
			mip[7] <= 0;
		end
		else if (hardware_irq)
		begin
			mip[11] <= 1;
		end
		else if (timer_irq)
		begin
			mip[7] <= 1;
		end
		else if (csr_[12'h344])
		begin
			mip <= csr_wb;
		end

		// Traps
		if (exception_trap)
		begin
			mcause <= {28'b0, exception_cause};		// Forward exception type to mcause
			mepc <= pc;					// Save exception PC
			mstatus[7] <= mstatus[3];			// Update mpie from mie
			mstatus[3] <= 0;				// Disable interrupts
		end
		else if (interrupt_trap)
		begin
			mcause <= {1'b0, 27'b0, interrupt_cause};	
			mepc <= pc;
			mstatus[7] <= mstatus[3];
			mstatus[3] <= 0;
		end
		else if (mret)
		begin
			mstatus[3] <= mstatus[7];			// Update mie from mpie
			mstatus[7] <= 1;				// set mpie
		end
		else if (csr_[12'h342])
		begin
			mcause <= csr_wb;
		end
		else if (csr_[12'h300])
		begin
			mstatus[31:0] <= csr_wb;
		end
		else if (csr_[12'h341])
		begin
			mepc <= csr_wb;
		end

		// Cycle counter
		if (csr_[12'hb00])
		begin
			mcycle[31:0] <= csr_wb;
		end
		else if (csr_[12'hb80])
		begin
			mcycle[63:32] <= csr_wb;
		end
		else
		begin
			mcycle <= mcycle + 64'b1;
		end

		// Instruction retire counter
		if (csr_[12'hb02])
		begin
			minstret[31:0] <= csr_wb;
		end
		else if (csr_[12'hb82])
		begin
			minstret[63:32] <= csr_wb;
		end
		else
		begin
			minstret <= minstret + {63'b0, ~(exception_trap | interrupt_trap | wfi)};
		end

		// Misc. CSR writeback
		case (csr)
			12'h304:	mie <= csr_wb;
			12'h305:	mtvec <= csr_wb;
			12'h320:	mcountinhibit <= csr_wb;
			12'h340:	mscratch <= csr_wb;
			default:;
		endcase

		case (csr[11:5])
			7'h19:	mhpmevent[csr[4:0]] <= csr_wb;
			7'h58:	mhpmcounter[csr[4:0]][31:0] <= csr_wb;
			7'h5c:	mhpmcounter[csr[4:0]][63:32] <= csr_wb;
			default:;
		endcase
	end
end

endmodule
