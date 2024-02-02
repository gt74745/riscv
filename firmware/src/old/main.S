.global main

main:
	addi	sp, sp, -16
	sw	ra, 12(sp)
	
	la	t0, mtime
	li	a0, 3214
	sw	a0, 0(t0)
	li	a0, 33
	sw	a0, 4(t0)

	li	a0, 10
	call	sleep

	lw	ra, 12(sp)
	addi	sp, sp, 16

	ret
