	THUMB_FUNC_START sub_080C631C
sub_080C631C: @ 0x080C631C
	push {lr}
	lsl r2, r2, #24
	lsr r2, r2, #24
	bl sub_080C5ACC
	mov r0, #0
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C631C

