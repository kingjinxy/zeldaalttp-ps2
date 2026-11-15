	THUMB_FUNC_START sub_080C6230
sub_080C6230: @ 0x080C6230
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #10
	bl sub_080C57F8
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C6230

