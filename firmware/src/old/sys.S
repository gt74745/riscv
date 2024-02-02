.section .trap

.global trap_vector

trap_vector:

	j	exception
	nop
	nop
	j	machine_software_interrupt
	nop
	nop
	nop
	j	machine_timer_interrupt
	nop
	nop
	nop
	j	machine_external_interrupt

exception:
machine_software_interrupt:
machine_external_interrupt:

	addi	sp, sp, -16
	sw	a0, 0(sp)
	csrr	a0, mepc
	addi	a0, a0, 4
	csrw	mepc, a0
	lw	a0, 0(sp)
	addi	sp, sp, 16
	mret

machine_timer_interrupt:

	addi	sp, sp, -16
	sw	a0, 0(sp)
	li	a0, 0x80
	csrc	mstatus, a0
	csrr	a0, mepc
	addi	a0, a0, 4
	csrw	mepc, a0
	lw	a0, 0(sp)
	addi	sp, sp, 16
	mret
