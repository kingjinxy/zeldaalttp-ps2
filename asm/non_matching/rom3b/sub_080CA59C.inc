	THUMB_FUNC_START sub_080CA59C
sub_080CA59C: @ 0x080CA59C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #0
	bl sub_080CA614
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CA59C

