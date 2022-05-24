main:

	nop
	li s0,0xff
	li a0,0xff000000
	csrw mcycle,s0
	csrs mcycle,a0
	csrci mcycle,0x5
	csrr s0,mcycle

halt:
	j halt
