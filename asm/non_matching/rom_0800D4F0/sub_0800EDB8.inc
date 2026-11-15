	THUMB_FUNC_START sub_0800EDB8
sub_0800EDB8: @ 0x0800EDB8
	add r2, r0, #0
	add r3, r1, #0
	ldrb r0, [r2]
	cmp r0, #0
	beq _0800EDD0
	ldrb r0, [r2, #2]
	cmp r0, #6
	bls _0800EDCC
	mov r0, #0
	b _0800EDE0
_0800EDCC:
	add r0, r0, #1
	strb r0, [r2, #2]
_0800EDD0:
	ldrb r0, [r2, #2]
	lsl r0, r0, #2
	add r1, r2, #0
	add r1, r1, #32
	add r1, r1, r0
	str r3, [r1]
	mov r0, #1
	strb r0, [r2]
_0800EDE0:
	bx lr
	THUMB_FUNC_END sub_0800EDB8

	.byte 0x00
	.byte 0x00
