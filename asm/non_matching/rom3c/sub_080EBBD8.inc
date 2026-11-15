	THUMB_FUNC_START sub_080EBBD8
sub_080EBBD8: @ 0x080EBBD8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #0
	bl sub_080EB69C
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EBBD8

