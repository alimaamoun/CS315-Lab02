.global quadratic_s

quadratic_s:
	mul r4, r0, r0 		@ x * x --> d (reg[4])
	mul r1, r1, r4		@ x^2 * a --> a (reg[1])
	mul r2, r2, r0		@ b * x --> b (reg[2])
	add r0, r1, r2		@ ax^2 + bx --> x (reg[0])
	add r0, r0, r3		@ (ax^2 + bx) + c -- reg[0]
	bx lr
	
