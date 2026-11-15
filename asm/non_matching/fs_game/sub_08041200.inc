	THUMB_FUNC_START sub_08041200
sub_08041200: @ 0x08041200
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #40
	bls _08041218
	add r0, r7, #4
	mov r1, #8
	strb r1, [r0]
	b _080412D2
_08041218:
	add r0, r7, #4
	mov r1, #4
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #96]
	mov r2, #128
	lsl r2, r2, #8
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _0804123C
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #96]
	add r1, r2, #0
	sub r1, r1, #16
	str r1, [r0, #96]
	b _08041248
_0804123C:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #96]
	add r1, r2, #0
	add r1, r1, #16
	str r1, [r0, #96]
_08041248:
	ldr r0, [r7]
	ldr r1, [r0, #96]
	mov r2, #240
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08041266
	ldr r0, [r7]
	ldr r1, [r0, #96]
	mov r2, #240
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #128
	bhi _08041266
	b _08041274
_08041266:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #96]
	mov r1, #128
	lsl r1, r1, #8
	eor r2, r2, r1
	str r2, [r0, #96]
_08041274:
	ldr r0, _080412F8  @ =gUnknown_03000488
	ldr r1, [r7]
	ldr r2, [r1, #96]
	add r1, r2, #0
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #152
	lsl r3, r3, #1
	sub r1, r3, r2
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080412F8  @ =gUnknown_03000488
	ldr r1, [r7]
	ldr r2, [r1, #96]
	add r1, r2, #0
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #152
	lsl r3, r3, #1
	sub r1, r3, r2
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #2]
	ldr r0, _080412F8  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _080412F8  @ =gUnknown_03000488
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803D770
_080412D2:
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r0, [r0, #24]
	ldrb r1, [r1]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080412FC
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
	b _0804131E
	.byte 0x00
	.byte 0x00
_080412F8:
	.4byte gUnknown_03000488
_080412FC:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #24
	lsr r1, r3, #28
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
_0804131E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08041200

	.byte 0x00
	.byte 0x00
