	THUMB_FUNC_START sub_08066764
sub_08066764: @ 0x08066764
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08003828
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #124
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	cmp r0, #0
	bne _080667CC
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, _080667C8  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1, #96]
	ldr r2, [r2]
	eor r1, r1, r2
	str r1, [r0, #96]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080667FE
_080667C8:
	.4byte gUnknown_08137B10
_080667CC:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r0, [r1]
	cmp r0, #59
	bhi _080667FE
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #30
	lsr r1, r3, #30
	mov r2, #1
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
_080667FE:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08066764

	.byte 0x00
	.byte 0x00
