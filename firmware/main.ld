OUTPUT_ARCH( "riscv" )

ENTRY( reset )

MEMORY 
{
	brom(rx) : ORIGIN = 0x0000, LENGTH = 4K
}

SECTIONS
{
	. = ORIGIN(brom);

	.text : {
		KEEP(*(.init))
		*(.text*)
	}
}
