	THUMB_FUNC_START sub_080CA538
sub_080CA538: @ 0x080CA538
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, #15
	bl sub_080C9AAC
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080CA538

