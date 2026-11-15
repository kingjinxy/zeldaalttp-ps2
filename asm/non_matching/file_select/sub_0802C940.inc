	THUMB_FUNC_START sub_0802C940
sub_0802C940: @ 0x0802C940
	ldr r3, _0802C968  @ =gUnknown_03000420
	ldrb r0, [r3, #2]
	cmp r0, #0
	beq _0802C964
	mov r0, #0
	strb r0, [r3, #2]
	ldr r2, _0802C96C  @ =gUnknown_030004A0
	mov r0, #1
	strh r0, [r2, #14]
	ldrb r0, [r3, #3]
	lsl r0, r0, #11
	ldr r1, _0802C970  @ =gBG0Buffer
	add r0, r0, r1
	str r0, [r2, #16]
	ldrb r0, [r3, #3]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r3, #3]
_0802C964:
	bx lr
	.byte 0x00
	.byte 0x00
_0802C968:
	.4byte gUnknown_03000420
_0802C96C:
	.4byte gUnknown_030004A0
_0802C970:
	.4byte gBG0Buffer
	THUMB_FUNC_END sub_0802C940

