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
	input	wire		rst
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
wire	[31:0]	memrd;
wire	[31:0]	ld;
wire	[31:0]	sd;
wire	[2:0]	smask;
wire	[31:0]	wb;

// Main operation registers
reg	[31:0]	pc;
reg	[31:0]	instr;
reg	[31:0]	irf	[0:31];

// Memory
reg	[7:0]	imem	[0:1023];
reg	[7:0]	dmem	[0:1023];

initial
begin
	$readmemh("imem.hex", imem);

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

always @(posedge clk, posedge rst)
begin
	if (rst)
	begin
		pc <= -4;
		instr <= 32'h13;
	end else
	begin
		pc <= nextpc;
		instr <= {	imem[nextpc[9:0] + 10'h3],
				imem[nextpc[9:0] + 10'h2],
				imem[nextpc[9:0] + 10'h1],
				imem[nextpc[9:0] + 10'h0]};
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

assign memrd =	(agu[31:10] == 1) ?	{dmem[agu[9:0] + 10'h3], dmem[agu[9:0] + 10'h2], dmem[agu[9:0] + 10'h1], dmem[agu[9:0] + 10'h0]} :
					32'h0;

assign ld =	funct3[0] ?	{{24{memrd[7]}}, memrd[7:0]} :
		funct3[1] ?	{{16{memrd[7]}}, memrd[15:0]} :
		funct3[2] ?	memrd :
		funct3[4] ?	{24'b0, memrd[7:0]} :
		funct3[5] ?	{16'b0, memrd[15:0]} :
				32'b0;

assign smask =	funct3[0] ?	3'h1 :
		funct3[1] ?	3'h3 :
		funct3[2] ?	3'h7 :
				3'h0;

assign sd[31:16] =	smask[2] ?	alu_in2[31:16] :
					16'b0;

assign sd[15:8] =	smask[1] ?	alu_in2[15:8] :
					8'b0;

assign sd[7:0] =	smask[0] ?	alu_in2[7:0] :
					8'b0;

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

		if (`STORE)
		begin
			if (agu[31:10] == 1)
			begin
				if (smask[2])
				begin
					dmem[agu[9:0] + 10'h3] <= sd[31:24];
					dmem[agu[9:0] + 10'h2] <= sd[23:16];
				end
				if (smask[1]) dmem[agu[9:0] + 10'h1] <= sd[15:8];
				if (smask[0]) dmem[agu[9:0] + 10'h0] <= sd[7:0];
			end
		end
	end
end
endmodule
