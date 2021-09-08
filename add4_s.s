.global add4_s

@ r0 = a, r1 = b, r2 = c, r3 = d

add4_s: 

	add r0, r0, r1

	add r0, r0, r2

	add r0, r0, r3

	bx lr
	
