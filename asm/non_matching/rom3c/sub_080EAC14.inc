	THUMB_FUNC_START sub_080EAC14
sub_080EAC14: @ 0x080EAC14
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C2C4C
	add r0, r4, #0
	bl sub_080EAC34
	lsl r0, r0, #24
	lsr r0, r0, #24
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080EAC14

	.byte 0x00
	.byte 0x00
