	THUMB_FUNC_START sub_080DF3EC
sub_080DF3EC: @ 0x080DF3EC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #121
	bl sub_080CF140
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DF3EC

