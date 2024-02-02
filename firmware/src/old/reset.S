.section .init

.global stack_pointer
.global global_pointer

.global _reset

_reset:
	la	sp, stack_pointer	# set top of stack
	la	gp, global_pointer	# set gp

	la	t0, trap_vector		# set trap vector
	addi	t0, t0, 1		# add 1 to tvec
	csrw	mtvec, t0		# write to mtvec

	li	t0, 0x8
	csrs	mstatus, t0		# enable interrupts

	li	t0, 2
	csrw	mhpmevent3, t0

	la	t0, greeting 
	lw	a0, 0(t0)

	call	main

	call	halt
