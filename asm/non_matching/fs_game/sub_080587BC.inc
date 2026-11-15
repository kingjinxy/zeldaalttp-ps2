	THUMB_FUNC_START sub_080587BC
sub_080587BC: @ 0x080587BC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #141
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	ldr r1, _0805887C  @ =gUnknown_08428FB4
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r1, r1, r3
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #48
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r1, _08058880  @ =gUnknown_02016D60
	ldrb r0, [r1, #2]
	cmp r0, #1
	beq _080588B6
	cmp r0, #1
	bgt _08058884
	cmp r0, #0
	beq _0805888A
	b _080588E0
_0805887C:
	.4byte gUnknown_08428FB4
_08058880:
	.4byte gUnknown_02016D60
_08058884:
	cmp r0, #2
	beq _080588A0
	b _080588E0
_0805888A:
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #11
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	b _080588E0
_080588A0:
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #12
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	b _080588E0
_080588B6:
	mov r0, #36
	bl load_palette_from_gfx_group
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #0
	add r1, r1, #11
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	b _080588E0
_080588E0:
	ldr r0, [r7]
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r3, r2, #2
	add r3, r3, r1
	add r2, r3, #0
	add r1, r2, #0
	add r1, r1, #60
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #42
	add r1, r2, #0
	mul r1, r3, r1
	add r2, r1, #0
	mov r3, #106
	sub r1, r3, r2
	add r2, r0, #0
	add r0, r0, #96
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl sub_08058734
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080587BC

	.byte 0x00
	.byte 0x00
