	THUMB_FUNC_START sub_08034120
sub_08034120: @ 0x08034120
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034136
	add r0, r1, #0
	bl DeleteThisEntity
_08034136:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034120

	.byte 0x00
	.byte 0x00
