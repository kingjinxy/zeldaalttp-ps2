	THUMB_FUNC_START sub_080E692C
sub_080E692C: @ 0x080E692C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #30
	bl sub_080CF0AC
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E692C

