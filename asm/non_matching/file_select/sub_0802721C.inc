	THUMB_FUNC_START sub_0802721C
sub_0802721C: @ 0x0802721C
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802723E
	ldrb r2, [r3, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r3, #28]
	b _08027258
_0802723E:
	mov r0, #45
	strb r0, [r3, #23]
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	add r0, r3, #0
	add r0, r0, #120
	ldrh r0, [r0]
	strh r0, [r3, #50]
	add r0, r3, #0
	add r0, r0, #122
	ldrh r0, [r0]
	strh r0, [r3, #54]
_08027258:
	bx lr
	THUMB_FUNC_END sub_0802721C

	.byte 0x00
	.byte 0x00
