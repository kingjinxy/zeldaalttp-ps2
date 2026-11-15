	THUMB_FUNC_START sub_0800EE2C
sub_0800EE2C: @ 0x0800EE2C
	add r2, r0, #0
	ldrb r1, [r2]
	ldrb r0, [r2, #2]
	orr r0, r0, r1
	cmp r0, #0
	beq _0800EE4A
	ldrb r0, [r2, #2]
	lsl r0, r0, #2
	add r2, r2, #32
	add r2, r2, r0
	ldr r1, [r2]
	ldrb r0, [r1]
	add r1, r1, #1
	str r1, [r2]
	b _0800EE4C
_0800EE4A:
	mov r0, #0
_0800EE4C:
	bx lr
	THUMB_FUNC_END sub_0800EE2C

	.byte 0x00
	.byte 0x00
