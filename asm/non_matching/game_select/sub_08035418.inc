	THUMB_FUNC_START sub_08035418
sub_08035418: @ 0x08035418
	push {r4-r7,lr}
	add r6, r0, #0
	ldr r7, [r6, #100]
	ldrb r0, [r7]
	cmp r0, #255
	bne _08035450
	ldr r0, _08035448  @ =gUnknown_0201F000
	add r1, r6, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _0803544C  @ =gUnknown_08137B10
	ldrb r0, [r6, #11]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	add r0, r6, #0
	bl DeleteThisEntity
	b _0803549A
_08035448:
	.4byte gUnknown_0201F000
_0803544C:
	.4byte gUnknown_08137B10
_08035450:
	ldrb r0, [r6, #23]
	sub r0, r0, #1
	strb r0, [r6, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0803549A
	ldrb r0, [r6, #24]
	strb r0, [r6, #23]
	ldrb r2, [r7]
	lsl r2, r2, #4
	mov r5, #8
	orr r2, r2, r5
	ldr r4, _080354A0  @ =gUnknown_0201EFF8
	add r0, r6, #0
	add r0, r0, #82
	ldrb r3, [r0]
	lsl r3, r3, #2
	add r0, r3, r4
	ldrh r1, [r0]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrb r0, [r7, #1]
	lsl r0, r0, #4
	orr r0, r0, r5
	add r4, r4, #2
	add r3, r3, r4
	ldrh r2, [r3]
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r0, r6, #0
	bl sub_080354A4
	ldr r0, [r6, #100]
	add r0, r0, #2
	str r0, [r6, #100]
_0803549A:
	pop {r4-r7}
	pop {r0}
	bx r0
_080354A0:
	.4byte gUnknown_0201EFF8
	THUMB_FUNC_END sub_08035418

