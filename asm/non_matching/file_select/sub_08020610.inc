	THUMB_FUNC_START sub_08020610
sub_08020610: @ 0x08020610
	push {r4,lr}
	add r4, r0, #0
	bl sub_08009678
	add r0, r4, #0
	bl GetNextFrame
	add r1, r4, #0
	add r1, r1, #126
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _0802063E
	add r0, r4, #0
	bl sub_0802065C
	add r0, r4, #0
	bl DeleteThisEntity
	b _08020654
_0802063E:
	cmp r0, #44
	bhi _08020654
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
_08020654:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020610

	.byte 0x00
	.byte 0x00
