	THUMB_FUNC_START sub_080C6E3C
sub_080C6E3C: @ 0x080C6E3C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #31
	bl sub_080C6E4C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6E3C

