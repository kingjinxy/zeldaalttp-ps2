	THUMB_FUNC_START sub_0812A0A0
sub_0812A0A0: @ 0x0812A0A0
	push {lr}
	add r1, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r0, #18
	bl sub_0812C764
	bl sub_0812A094
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812A0A0

	.byte 0x00
	.byte 0x00
