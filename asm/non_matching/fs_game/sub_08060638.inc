	THUMB_FUNC_START sub_08060638
sub_08060638: @ 0x08060638
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #122
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl 0x0800932C
	add r1, r7, #4
	strh r0, [r1]
	add r0, r7, #4
	ldrh r1, [r0]
	cmp r1, #1
	bne _080606B2
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r0, [r1]
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #2
	beq _08060690
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #122
	ldrh r1, [r2]
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #47
	bl 0x08008F78
	b _080606AA
_08060690:
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #122
	ldrh r1, [r2]
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #88
	bl 0x08008F78
_080606AA:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _08060726
_080606B2:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #121
	ldrb r0, [r1]
	cmp r0, #0
	beq _080606DA
	ldr r0, [r7]
	ldr r1, [r0, #124]
	ldrb r0, [r1]
	cmp r0, #0
	beq _080606D8
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #121
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_080606D8:
	b _08060726
_080606DA:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #120
	ldr r1, [r7]
	ldr r2, [r1, #124]
	ldrb r0, [r0]
	ldrb r1, [r2]
	cmp r0, r1
	beq _08060726
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #121
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _08060730  @ =gUnknown_081419E8
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #1
	add r1, r0, r2
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #122
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
_08060726:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08060730:
	.4byte gUnknown_081419E8
	THUMB_FUNC_END sub_08060638

