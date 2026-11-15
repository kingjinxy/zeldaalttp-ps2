	THUMB_FUNC_START sub_080C9A58
sub_080C9A58: @ 0x080C9A58
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #29
	bl sub_080C9A68
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C9A58

