	THUMB_FUNC_START sub_08020C0C
sub_08020C0C: @ 0x08020C0C
	push {r4-r6,lr}
	add r5, r0, #0
	ldr r1, [r5, #88]
	cmp r1, #0
	beq _08020C6C
	bl sub_0803D3D0
	mov r0, #41
	add r0, r0, r5
	mov r12, r0
	ldrb r1, [r0]
	mov r6, #7
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08020C60
	ldr r1, [r5, #88]
	add r1, r1, #60
	ldrb r2, [r1]
	mov r0, #128
	orr r0, r0, r2
	strb r0, [r1]
	ldr r4, [r5, #88]
	ldr r3, _08020C5C  @ =gUnknown_0813B854
	add r0, r5, #0
	add r0, r0, #42
	ldrb r1, [r0]
	lsl r0, r1, #2
	add r0, r0, r1
	mov r1, r12
	ldrb r2, [r1]
	add r1, r6, #0
	and r1, r1, r2
	add r0, r0, r1
	sub r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r3
	ldr r0, [r0]
	str r0, [r4, #72]
	b _08020C6C
_08020C5C:
	.4byte gUnknown_0813B854
_08020C60:
	ldr r0, [r5, #88]
	add r0, r0, #60
	ldrb r2, [r0]
	mov r1, #127
	and r1, r1, r2
	strb r1, [r0]
_08020C6C:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08020C0C

	.byte 0x00
	.byte 0x00
