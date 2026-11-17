	THUMB_FUNC_START sub_08019D48
sub_08019D48: @ 0x08019D48
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08019D66
	add r1, r4, #0
	add r1, r1, #46
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0801A210
_08019D66:
	add r0, r4, #0
	bl GetNextFrame
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019D48

	.byte 0x00
	.byte 0x00
