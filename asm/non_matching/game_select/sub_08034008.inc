	THUMB_FUNC_START sub_08034008
sub_08034008: @ 0x08034008
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034028
	mov r0, #3
	strb r0, [r1, #20]
	mov r0, #60
	strb r0, [r1, #23]
	ldr r2, _0803402C  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #4
	orr r0, r0, r1
	str r0, [r2]
_08034028:
	bx lr
	.byte 0x00
	.byte 0x00
_0803402C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08034008

