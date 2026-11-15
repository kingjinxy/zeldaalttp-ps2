	THUMB_FUNC_START sub_08108B74
sub_08108B74: @ 0x08108B74
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #255
	bl sub_08108B84
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08108B74

