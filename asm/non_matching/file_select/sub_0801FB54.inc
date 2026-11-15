	THUMB_FUNC_START sub_0801FB54
sub_0801FB54: @ 0x0801FB54
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801FB72
	mov r0, #5
	strb r0, [r1, #20]
	mov r0, #120
	strb r0, [r1, #23]
	mov r0, #30
	strb r0, [r1, #24]
	add r0, r0, #226
	str r0, [r1, #12]
_0801FB72:
	bx lr
	THUMB_FUNC_END sub_0801FB54

