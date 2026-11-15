	THUMB_FUNC_START sub_080EAC34
sub_080EAC34: @ 0x080EAC34
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C79D0
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080EAC34

	.byte 0x00
	.byte 0x00
