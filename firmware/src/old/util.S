.global sleep
.global halt
.global greeting

sleep:

	addi	sp, sp, -16		# save ra and temp regs
	sw	t0, 12(sp)
	sw	t1, 8(sp)
	sw	t2, 4(sp)
	sw	ra, 0(sp)

	la	t0, mtime		# get base address of timer registers

	li	t1, -1
	sw	t1, 12(t0)		# set mtimecmph to -1

	lw	t1, 0(t0)		# get mtime
	add	a0, a0, t1		# calculate time to interrupt
	sw	a0, 8(t0)		# set mtimecmp

	lw	t2, 4(t0)		# get mtimeh
	bgeu	a0, t1, no_inc_mtimeh

	addi	t2, t2, 1		# if mtimecmp > mtime, increment mtimeh before storing to mtimecmph
no_inc_mtimeh:
	sw	t2, 12(t0)		# set mtimecmph

	li	t0, 0x80
	csrc	mip, t0			# clear pending timer interrupts
	csrs	mie, t0			# enable timer interrupts

	wfi

	li	a0, 0			# return 0

	lw	t0, 12(sp)
	lw	t1, 8(sp)
	lw	t2, 4(sp)
	lw	ra, 0(sp)
	addi	sp, sp, 16		# restore ra and temp regs

	ret

halt:

	j halt

greeting:

	.asciz "Hello!"
