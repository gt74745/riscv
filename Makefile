all:
	@verilator -cc top.v --exe main.cpp --trace
	@riscv64-unknown-elf-gcc -nostartfiles -march=rv32i -mabi=ilp32 -Ttext 0x00000000 a.s -o a 
	@riscv64-unknown-elf-objcopy -O binary a a.bin
	@od a.bin -v -A none -w4 -t x1 > a.dump
	@cut -c2-12 a.dump > obj_dir/a.hex
	@cd obj_dir && make -f Vtop.mk
	@rm a a.bin a.dump
