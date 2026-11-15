	THUMB_FUNC_START sub_08034ACC
sub_08034ACC: @ 0x08034ACC
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034AEA
	ldrb r0, [r1, #21]
	add r0, r0, #1
	strb r0, [r1, #21]
	mov r0, #0
	mov r1, #2
	bl sub_0800C0B0
_08034AEA:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034ACC

	.byte 0x00
	.byte 0x00
