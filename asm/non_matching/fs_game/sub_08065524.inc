	THUMB_FUNC_START sub_08065524
sub_08065524: @ 0x08065524
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x08003828
	ldr r0, [r7]
	bl sub_080660BC
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _080655C0
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #5
	bne _080655B4
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #21]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #124
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_0800D67C
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #3
	bne _080655AC
	ldr r0, _080655B8  @ =gUnknown_02000010
	ldrb r1, [r0, #3]
	mov r2, #224
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #3]
	ldr r0, _080655B8  @ =gUnknown_02000010
	ldrb r1, [r0, #4]
	mov r2, #224
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #4]
_080655AC:
	ldr r1, _080655BC  @ =0x00000203
	add r0, r1, #0
	bl play_sound
_080655B4:
	b _0806566E
	.byte 0x00
	.byte 0x00
_080655B8:
	.4byte gUnknown_02000010
_080655BC:
	.4byte 0x00000203
_080655C0:
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	cmp r1, #0
	bne _080655FE
	ldr r0, _080655E0  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r2, #127
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #6
	beq _080655E4
	b _0806566E
	.byte 0x00
	.byte 0x00
_080655E0:
	.4byte gUnknown_02000010
_080655E4:
	bl sub_0800D644
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #21]
	b _0806566E
_080655FE:
	add r0, r7, #4
	mov r1, #0
	strh r1, [r0]
_08065604:
	add r0, r7, #4
	ldr r1, _08065618  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _0806561C
	b _08065654
_08065618:
	.4byte gUnknown_03006C80
_0806561C:
	ldr r0, _08065640  @ =gUnknown_03000940
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08065644
	b _0806566E
	.byte 0x00
	.byte 0x00
_08065640:
	.4byte gUnknown_03000940
_08065644:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _08065604
_08065654:
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
_0806566E:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08065524

	.byte 0x00
	.byte 0x00
