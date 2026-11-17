	THUMB_FUNC_START sub_0801EA54
sub_0801EA54: @ 0x0801EA54
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801EA7A
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #192
	lsl r0, r0, #2
	str r0, [r4, #12]
	b _0801EA80
_0801EA7A:
	add r0, r4, #0
	bl sub_0801EE30
_0801EA80:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801EA54

	.byte 0x00
	.byte 0x00
