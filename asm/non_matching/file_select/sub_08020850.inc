	THUMB_FUNC_START sub_08020850
sub_08020850: @ 0x08020850
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08020868
	mov r0, #5
	strb r0, [r1, #20]
	mov r0, #144
	lsl r0, r0, #1
	str r0, [r1, #12]
_08020868:
	bx lr
	THUMB_FUNC_END sub_08020850

	.byte 0x00
	.byte 0x00
