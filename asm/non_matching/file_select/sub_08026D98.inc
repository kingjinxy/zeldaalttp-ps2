	THUMB_FUNC_START sub_08026D98
sub_08026D98: @ 0x08026D98
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #20]
	add r0, r0, #1
	strb r0, [r1, #20]
	ldrb r0, [r1, #24]
	cmp r0, #0
	bne _08026DAE
	add r0, r1, #0
	bl sub_08026E24
_08026DAE:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026D98

	.byte 0x00
	.byte 0x00
