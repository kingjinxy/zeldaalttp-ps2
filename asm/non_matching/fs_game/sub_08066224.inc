	THUMB_FUNC_START sub_08066224
sub_08066224: @ 0x08066224
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #96]
	add r0, r1, #0
	bl 0x08000A40
	add r1, r0, #0
	ldr r0, _0806625C  @ =gUnknown_03006C80
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0]
	cmp r1, r0
	beq _08066246
	b _080663BC
_08066246:
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_0806624C:
	add r0, r7, #4
	ldr r1, _0806625C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08066260
	b _08066294
	.byte 0x00
	.byte 0x00
_0806625C:
	.4byte gUnknown_03006C80
_08066260:
	add r1, r7, #4
	ldrb r0, [r1]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r2, _08066280  @ =gUnknown_03006A30
	add r1, r0, r2
	add r0, r1, #0
	bl sub_0806682C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08066284
	b _080663BC
_08066280:
	.4byte gUnknown_03006A30
_08066284:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0806624C
_08066294:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r1, _080662E0  @ =0x0000FFFF
	str r1, [r0, #96]
	ldr r0, _080662E4  @ =gUnknown_03000420
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	bl sub_0803DF84
	bl sub_0802D970
	add r0, r7, #4
	mov r1, #0
	strb r1, [r0]
_080662D0:
	add r0, r7, #4
	ldr r1, _080662E8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080662EC
	b _080663BC
	.byte 0x00
	.byte 0x00
_080662E0:
	.4byte 0x0000FFFF
_080662E4:
	.4byte gUnknown_03000420
_080662E8:
	.4byte gUnknown_03006C80
_080662EC:
	ldr r0, _080663B8  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _080663B8  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #191
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #8]
	ldr r0, _080663B8  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #180
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080663B8  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #57
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080663B8  @ =gUnknown_03006A30
	add r2, r7, #4
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r0, #0
	add r0, r0, #42
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080662D0
	.byte 0x00
	.byte 0x00
_080663B8:
	.4byte gUnknown_03006A30
_080663BC:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08066224

