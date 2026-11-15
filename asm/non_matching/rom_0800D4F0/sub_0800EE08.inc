	THUMB_FUNC_START sub_0800EE08
sub_0800EE08: @ 0x0800EE08
	add r2, r0, #0
	ldrb r1, [r2, #24]
	ldrb r0, [r2, #26]
	orr r0, r0, r1
	cmp r0, #0
	beq _0800EE26
	ldrb r0, [r2, #26]
	lsl r0, r0, #2
	add r2, r2, #56
	add r2, r2, r0
	ldr r1, [r2]
	ldrb r0, [r1]
	add r1, r1, #1
	str r1, [r2]
	b _0800EE28
_0800EE26:
	mov r0, #0
_0800EE28:
	bx lr
	THUMB_FUNC_END sub_0800EE08

	.byte 0x00
	.byte 0x00
