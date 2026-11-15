	THUMB_FUNC_START sub_080C9600
sub_080C9600: @ 0x080C9600
	push {lr}
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r0, #4
	mov r1, #41
	bl sub_080ADD38
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C9600

