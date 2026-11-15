	THUMB_FUNC_START sub_080C9A48
sub_080C9A48: @ 0x080C9A48
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #14
	bl sub_080C9A68
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C9A48

