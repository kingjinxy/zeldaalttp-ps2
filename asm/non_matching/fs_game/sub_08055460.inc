	THUMB_FUNC_START sub_08055460
sub_08055460: @ 0x08055460
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #11
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	ldr r1, _08055500  @ =gUnknown_08428DC0
	str r1, [r0, #72]
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_0802C3E0
	add r1, r0, #0
	ldr r0, [r7]
	lsl r2, r1, #24
	lsr r1, r2, #24
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
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	beq _0805557E
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #255
	bne _08055504
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
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #232
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	b _08055538
	.byte 0x00
	.byte 0x00
_08055500:
	.4byte gUnknown_08428DC0
_08055504:
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
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	add r0, r1, #0
	bl sub_08013D54
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #32
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r0
	add r0, r2, #0
	strb r0, [r1]
_08055538:
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	b _0805565E
_0805557E:
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #16
	bne _0805563C
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_0805558E:
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080555A0  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080555A4
	b _080555DE
	.byte 0x00
	.byte 0x00
_080555A0:
	.4byte gUnknown_03006C80
_080555A4:
	ldr r0, _080555C4  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #28]
	cmp r1, #16
	bne _080555C8
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805567E
_080555C4:
	.4byte gUnknown_03006A30
_080555C8:
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0805558E
_080555DE:
	mov r0, #33
	mov r1, #6
	bl sub_080127A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805563C
	ldr r0, [r7, #4]
	ldrb r1, [r0, #10]
	cmp r1, #16
	bne _08055608
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _08055608
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805567E
	.byte 0x19
	.byte 0xE0
_08055608:
	b _0805560C
	.byte 0x17
	.byte 0xE0
_0805560C:
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #6
	bl sub_080127D4
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08055638
	ldr r0, [r7, #4]
	ldrb r1, [r0, #10]
	cmp r1, #16
	bne _08055636
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _08055636
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805567E
_08055636:
	b _0805563A
_08055638:
	b _0805563C
_0805563A:
	b _08055608
_0805563C:
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
	ldr r0, [r7]
	bl 0x08003E24
	ldr r0, [r7]
	mov r1, #3
	bl sub_08003870
_0805565E:
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
	bl sub_08055688
_0805567E:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08055460

	.byte 0x00
	.byte 0x00
