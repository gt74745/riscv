main:
	
	lui	sp,0x1
	addi	sp,sp,-344
	slli	sp,sp,4
	lui	gp,0x1
	slli	gp,gp,1
	addi	gp,gp,-567
halt:
	j halt
