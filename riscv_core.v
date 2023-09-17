`define LUI opcode[13]
`define AUIPC opcode[5]
`define JAL opcode[27]
`define JALR opcode[25]
`define BRANCH opcode[24]
`define LOAD opcode[0]
`define STORE opcode[8]
`define ALUI opcode[4]
`define ALUR opcode[12]
`define FENCE opcode[15]
`define SYSTEM opcode[28]

module riscv_core
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
wire	[31:0]	opcode;
wire	[7:0]	funct3;
wire	[127:0]	funct7;
wire		is_r;
wire		is_i;
wire		is_s;
wire		is_b;
wire		is_u;
wire		is_j;
wire 	[4:0]	rs1;
wire	[4:0]	rs2;
wire	[4:0]	rd;
wire	[31:0]	imm;
wire	[31:0]	alu_in1;
wire	[31:0]	alu_in2;
wire	[31:0]	agu_in1;
wire	[31:0]	agu_in2;
wire	[31:0]	csru_in1;
wire	[31:0]	csru_in2;
wire	[31:0]	alu;
wire	[31:0]	agu;
wire		bcu;
wire	[31:0]	ld;
wire	[31:0]	wb;

// Main operation registers
reg	[31:0]	pc;
reg	[31:0]	instr;
reg	[31:0]	irf	[0:31];

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

assign nextpc =	rst ?					0 :
		((`BRANCH & bcu) | `JAL | `JALR) ?	agu :
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

// Predecode logic

assign opcode = 32'b1 << instr[6:2];

assign is_r = `ALUR;
assign is_i = `JALR | `LOAD | `ALUI | `SYSTEM;
assign is_s = `STORE;
assign is_b = `BRANCH;
assign is_u = `LUI | `AUIPC;
assign is_j = `JAL;

assign funct3 = 8'b1 << ((is_u | is_j | `JALR) ? 0 : instr[14:12]);
assign funct7 = 128'b1 << (is_r ? instr[31:26] : 0);

assign rs1 = is_r | is_i | is_s | is_b ? instr[19:15] : 5'b0;
assign rs2 = is_r | is_s | is_b ? instr[24:20] : 5'b0;
assign rd = is_r | is_i | is_u | is_j ? instr[11:7] : 5'b0;

assign imm[31] =	instr[31];

assign imm[30:20] =	is_u ?	instr[30:20] :
				{{11{instr[31]}}};

assign imm[19:12] =	(is_u | is_j) ?	instr[19:12] :
					{{8{instr[31]}}};

assign imm[11] =	is_b ?	instr[7] :
			is_u ?	1'b0 :
			is_j ?	instr[20] :
				instr[31];

assign imm[10:5] =	is_u ?	6'b0 :
				instr[30:25];

assign imm[4:1] =	(is_i | is_j) ?	instr[24:21] :
			(is_s | is_b) ?	instr[11:8] :
			4'b0;

assign imm[0] =		is_i ?	instr[20] :
			is_s ?	instr[7] :
				1'b0;

// Decode logic

assign alu_in1 =	(`BRANCH | `ALUI | `ALUR) ?	irf[rs1] :
			(`JAL | `JALR | `AUIPC) ?	pc :
							32'h0;

assign alu_in2 =	(`STORE | `ALUR | `BRANCH) ?	irf[rs2] :
			(`LUI | `AUIPC | `ALUI) ?	imm :
			(`JAL | `JALR) ?		32'h4 :
							32'h0;

assign agu_in1 =	(`JALR | `STORE | `LOAD) ?	irf[rs1] :
			(`JAL | `BRANCH) ?		pc :
							32'h0;

assign agu_in2 =	(`JALR | `STORE | `LOAD | `JAL | `BRANCH) ?	imm :
									32'h0;

// Execute logic

assign alu =	funct3[0] ?	(funct7[32] ?	alu_in1 - alu_in2 :
						alu_in1 + alu_in2 ) :
		funct3[1] ?	alu_in1 << alu_in2 :
		funct3[2] ?	{31'b0, alu_in1 < alu_in2} :
		funct3[3] ?	{31'b0, $signed(alu_in1) < $signed(alu_in2)} :
		funct3[4] ?	(funct7[32] ?	alu_in1 >>> alu_in2 :
						alu_in1 >> alu_in2 ) :
		funct3[5] ?	alu_in1 ^ alu_in2 :
		funct3[6] ?	alu_in1 | alu_in2 :
		funct3[7] ?	alu_in1 & alu_in2 :
				32'b0;

assign bcu =	funct3[0] ?	alu_in1 == alu_in2 :
		funct3[1] ?	alu_in1 != alu_in2 :
		funct3[4] ?	alu_in1 < alu_in2 :
		funct3[5] ?	alu_in1 >= alu_in2 :
		funct3[6] ?	$signed(alu_in1) < $signed(alu_in2) :
		funct3[7] ?	$signed(alu_in1) >= $signed(alu_in2) :
				1'b0;

assign agu =	agu_in1 + agu_in2;

// Memory access logic

assign dmem_addr = (`STORE | `LOAD) ?	agu :
					32'b0;

assign dmem_op =	`STORE ? (	funct3[0] ?	2'b01 :
					funct3[1] ?	2'b10 :
					funct3[2] ?	2'b11 :
							2'b00 ) :
				2'b00;

assign ld =	funct3[0] ?	{{24{dmem_data_i[7]}}, dmem_data_i[7:0]} :
		funct3[1] ?	{{16{dmem_data_i[7]}}, dmem_data_i[15:0]} :
		funct3[2] ?	dmem_data_i :
		funct3[4] ?	{24'b0, dmem_data_i[7:0]} :
		funct3[5] ?	{16'b0, dmem_data_i[15:0]} :
				32'b0;

assign dmem_data_o = `STORE ?	alu_in2 :
				32'b0;

always @(posedge clk)
begin
end

// Writeback logic

assign wb =	`LOAD ?							ld :
		(`LUI | `AUIPC | `JAL | `JALR | `ALUR | `ALUI) ?	alu :
									32'b0;

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
