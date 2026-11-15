	THUMB_FUNC_START sub_08063524
sub_08063524: @ 0x08063524
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _080635A0  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #5
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _080635AC
	ldr r0, _080635A0  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080635A0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #88]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _080635A4  @ =0x0000F7FF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _080635A8  @ =gUnknown_03000450
	ldr r1, [r7]
	ldr r2, [r1, #88]
	str r2, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080637E2
	.byte 0x00
	.byte 0x00
_080635A0:
	.4byte gUnknown_03006A30
_080635A4:
	.4byte 0x0000F7FF
_080635A8:
	.4byte gUnknown_03000450
_080635AC:
	ldr r0, _08063610  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _080635D4
	b _080637C6
_080635D4:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080635EC
	b _080637A2
_080635EC:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #19
	bls _08063604
	b _080637A0
_08063604:
	lsl r1, r0, #2
	ldr r2, _08063614  @ =0x08063618
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
	.byte 0x00
	.byte 0x00
_08063610:
	.4byte gUnknown_03006A30
_08063614:
	.4byte 0x08063618
	.4byte _080636D4
	.4byte _080637A0
	.4byte _080637A0
	.4byte _080637A0
	.4byte _08063668
	.4byte _080637A0
	.4byte _080637A0
	.4byte _080637A0
	.4byte _08063668
	.4byte _080637A0
	.4byte _080637A0
	.4byte _080637A0
	.4byte _08063668
	.4byte _080637A0
	.4byte _080637A0
	.4byte _080637A0
	.4byte _08063668
	.4byte _080637A0
	.4byte _080637A0
	.4byte _08063668
_08063668:
	ldr r0, _080636C4  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _080636C4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #88]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _080636C8  @ =0x0000F7FF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _080636CC  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r0, [r0]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _080636BA
	ldr r0, _080636D0  @ =gUnknown_03000450
	ldr r1, [r7]
	ldr r2, [r1, #88]
	str r2, [r0]
_080636BA:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080637A0
	.byte 0x00
	.byte 0x00
_080636C4:
	.4byte gUnknown_03006A30
_080636C8:
	.4byte 0x0000F7FF
_080636CC:
	.4byte gLCDRegisterBuffer
_080636D0:
	.4byte gUnknown_03000450
_080636D4:
	ldr r0, _0806379C  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #196
	lsl r2, r2, #5
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08063798
	ldr r0, _0806379C  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #61
	ldrb r0, [r1]
	cmp r0, #0
	bne _08063798
	mov r0, #85
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08063798
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	str r2, [r0, #88]
	ldr r0, _0806379C  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0806379C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldr r3, [r2, #76]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	mov r3, #128
	lsl r3, r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _0806379C  @ =gUnknown_03006A30
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #13
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
_08063798:
	b _080637A0
	.byte 0x00
	.byte 0x00
_0806379C:
	.4byte gUnknown_03006A30
_080637A0:
	b _080637C4
_080637A2:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #88]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_080637C4:
	b _080637E2
_080637C6:
	ldr r0, _080637EC  @ =gLCDRegisterBuffer
	ldr r1, [r7]
	ldr r2, [r1, #88]
	ldrb r0, [r0]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _080637DC
	ldr r0, _080637F0  @ =gUnknown_03000450
	ldr r1, [r7]
	ldr r2, [r1, #88]
	str r2, [r0]
_080637DC:
	ldr r0, [r7]
	bl DeleteThisEntity
_080637E2:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080637EC:
	.4byte gLCDRegisterBuffer
_080637F0:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08063524

