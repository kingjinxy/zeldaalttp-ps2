	THUMB_FUNC_START sub_0802C39C
sub_0802C39C: @ 0x0802C39C
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _0802C3C0  @ =gUnknown_0202E110
	add r3, r1, #0
	add r3, r3, #64
_0802C3A6:
	ldrb r0, [r1, #1]
	cmp r0, r2
	bne _0802C3B6
	ldrb r0, [r1]
	cmp r0, #0
	beq _0802C3B6
	sub r0, r0, #1
	strb r0, [r1]
_0802C3B6:
	add r1, r1, #4
	cmp r1, r3
	bcc _0802C3A6
	bx lr
	.byte 0x00
	.byte 0x00
_0802C3C0:
	.4byte gUnknown_0202E110
	THUMB_FUNC_END sub_0802C39C

