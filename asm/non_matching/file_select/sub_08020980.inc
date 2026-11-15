	THUMB_FUNC_START sub_08020980
sub_08020980: @ 0x08020980
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802099C
	mov r0, #1
	strb r0, [r1, #20]
	add r0, r0, #255
	str r0, [r1, #12]
	add r1, r1, #122
	mov r0, #60
	strh r0, [r1]
_0802099C:
	bx lr
	THUMB_FUNC_END sub_08020980

	.byte 0x00
	.byte 0x00
