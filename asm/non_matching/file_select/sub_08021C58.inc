	THUMB_FUNC_START sub_08021C58
sub_08021C58: @ 0x08021C58
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r1, r4, #0
	add r1, r1, #117
	ldrb r0, [r1]
	cmp r0, #0
	beq _08021C6E
	sub r0, r0, #1
	strb r0, [r1]
_08021C6E:
	ldrb r0, [r4, #24]
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _08021C82
	add r0, r4, #0
	bl sub_08022A7C
_08021C82:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021C58

