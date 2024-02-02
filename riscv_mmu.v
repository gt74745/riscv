module riscv_mmu
(
	// CPU Instruction Fetch port
	input 	wire 		hart2imem_addr_valid,
	input	wire	[31:0]	hart2imem_addr,

	output	wire 		imem2hart_data_ready,
	output	wire	[31:0]	imem2hart_data,

	// CPU Memacc load port
	input 	wire 		hart2dmem_addr_valid,
	input	wire	[31:0]	hart2dmem_addr,

	output	wire 		dmem2hart_data_ready,
	output	wire	[31:0]	dmem2hart_data,

	// Bootrom port
	output 	wire 		mmu2brom_select,
	output 	wire 	[31:0]	mmu2brom_addr,

	input 	wire 		brom2mmu_data_ready,
	input 	wire 	[31:0]	brom2mmu_data,
	
	// Main memory port
	output 	wire 		mmu2mainmem_select,
	output 	wire 	[31:0]	mmu2mainmem_addr,

	input 	wire 		mainmem2mmu_data_ready,
	input 	wire 	[31:0]	mainmem2mmu_data
);

wire brom_is_memacc;
wire brom_is_fetch;
wire mainmem_is_memacc;
wire mainmem_is_fetch;

assign brom_is_memacc = (hart2dmem_addr[31:12] == 0) && hart2dmem_addr_valid;
assign mainmem_is_memacc = (hart2dmem_addr[31:15] == 1) && hart2dmem_addr_valid;

assign mmu2brom_select = ((hart2imem_addr[31:12] == 0) || brom_is_memacc) && hart2imem_addr_valid;
assign mmu2mainmem_select = ((hart2imem_addr[31:15] == 1) || mainmem_is_memacc) && hart2imem_addr_valid;

assign brom_is_fetch = mmu2brom_select && ~brom_is_memacc;
assign mainmem_is_fetch = mmu2mainmem_select && ~mainmem_is_memacc;

assign mmu2brom_addr =	brom_is_memacc ?	hart2dmem_addr :
			brom_is_fetch ?		hart2imem_addr :
						32'b0;

assign mmu2mainmem_addr =	mainmem_is_memacc ?	hart2dmem_addr :
				mainmem_is_fetch ?	hart2imem_addr :
							32'b0;

assign imem2hart_data_ready =	brom_is_fetch ?		brom2mmu_data_ready :
				mainmem_is_fetch ?	mainmem2mmu_data_ready :
							0;

assign imem2hart_data =	(mmu2brom_select & ~brom_is_memacc) ?		brom2mmu_data :
			(mmu2mainmem_select & ~mainmem_is_memacc) ?	mainmem2mmu_data :
									0;

assign dmem2hart_data_ready =	brom_is_memacc ?	brom2mmu_data_ready :
				mainmem_is_memacc ?	mainmem2mmu_data_ready :
							0;

assign dmem2hart_data =	brom_is_memacc ?	brom2mmu_data :
			mainmem_is_memacc ?	mainmem2mmu_data :
						0;

endmodule
