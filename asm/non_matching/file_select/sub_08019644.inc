	THUMB_FUNC_START sub_08019644
sub_08019644: @ 0x08019644
	push {r4,lr}
	add r4, r0, #0
	ldr r1, [r4, #84]
	add r0, r1, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _08019684
	add r0, r1, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r0, [r4, #52]
	sub r0, r0, #1
	str r0, [r4, #52]
	ldr r1, _08019680  @ =gUnknown_0842764C
	ldrb r0, [r4, #23]
	lsr r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
	add r0, r4, #0
	bl GetNextFrame
	b _0801968A
	.byte 0x00
	.byte 0x00
_08019680:
	.4byte gUnknown_0842764C
_08019684:
	add r0, r4, #0
	bl DeleteThisEntity
_0801968A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019644

