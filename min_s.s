.global min_s

@r0 = a r1 = b
min_s:
	cmp r0, r1
	blt lesser @if r0 > r1 then branch to greater:
	mov r0, r1

lesser:
	bx lr
