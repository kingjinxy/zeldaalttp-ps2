	THUMB_FUNC_START sub_08035BE8
sub_08035BE8: @ 0x08035BE8
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _08035C08
	mov r0, #9
	strb r0, [r1, #20]
	add r0, r1, #0
	add r0, r0, #43
	strb r2, [r0]
	ldr r1, _08035C0C  @ =gUnknown_0201F000
	mov r0, #2
	str r0, [r1]
_08035C08:
	bx lr
	.byte 0x00
	.byte 0x00
_08035C0C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08035BE8

