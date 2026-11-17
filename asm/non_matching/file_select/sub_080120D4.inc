	THUMB_FUNC_START sub_080120D4
sub_080120D4: @ 0x080120D4
	push {r4-r7,lr}
	add r6, r0, #0
	ldrb r3, [r6, #20]
	cmp r3, #0
	bne _08012118
	mov r0, #1
	strb r0, [r6, #20]
	ldrb r2, [r6, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r6, #31]
	ldrb r0, [r6, #29]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r6, #29]
	ldrb r1, [r6, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #192
	orr r0, r0, r1
	strb r0, [r6, #28]
	add r0, r6, #0
	add r0, r0, #32
	strb r3, [r0]
	mov r1, #38
	mov r0, #38
	strh r0, [r6, #50]
	add r0, r6, #0
	add r0, r0, #96
	strb r1, [r0]
_08012118:
	ldr r7, _080121A0  @ =gUnknown_02016D60
	add r1, r6, #0
	add r1, r1, #96
	ldrb r0, [r7, #28]
	add r3, r0, #0
	ldrb r2, [r1]
	cmp r3, r2
	bne _0801212A
	b _08012248
_0801212A:
	strb r0, [r1]
	ldrb r0, [r6, #28]
	mov r5, #4
	neg r5, r5
	add r2, r5, #0
	and r2, r2, r0
	strb r2, [r6, #28]
	cmp r3, #2
	bls _0801213E
	b _08012248
_0801213E:
	ldr r0, _080121A4  @ =gUnknown_0200B250
	ldrb r4, [r7, #28]
	lsl r1, r4, #6
	add r1, r1, r0
	add r1, r1, #63
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _08012248
	mov r3, #0
	ldrb r0, [r6, #11]
	cmp r0, #0
	beq _080121AC
	cmp r0, #1
	beq _080121F0
	add r0, r2, #0
	and r0, r0, r5
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r6, #28]
	ldr r3, _080121A8  @ =gUnknown_0202A6F0
	lsl r0, r4, #4
	add r0, r0, r3
	ldrb r1, [r0, #6]
	add r1, r1, #12
	mov r0, #15
	and r1, r1, r0
	ldrb r2, [r6, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r6, #30]
	add r2, r6, #0
	add r2, r2, #94
	ldrb r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r7, #28]
	lsl r0, r0, #4
	add r0, r0, r3
	ldrb r0, [r0, #4]
	mov r1, #7
	cmp r0, #0
	beq _08012234
	mov r1, #6
	b _08012234
	.byte 0x00
	.byte 0x00
_080121A0:
	.4byte gUnknown_02016D60
_080121A4:
	.4byte gUnknown_0200B250
_080121A8:
	.4byte gUnknown_0202A6F0
_080121AC:
	ldr r0, _080121EC  @ =gUnknown_0202A6F0
	lsl r1, r4, #4
	add r1, r1, r0
	ldrb r0, [r1, #5]
	cmp r0, #0
	beq _08012236
	mov r3, #4
	sub r0, r0, #1
	lsl r0, r0, #2
	add r1, r6, #0
	add r1, r1, #32
	strb r0, [r1]
	ldrb r1, [r6, #28]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r6, #28]
	ldrb r0, [r6, #30]
	mov r1, #15
	orr r0, r0, r1
	strb r0, [r6, #30]
	add r2, r6, #0
	add r2, r2, #94
	ldrb r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
	b _08012236
	.byte 0x00
	.byte 0x00
_080121EC:
	.4byte gUnknown_0202A6F0
_080121F0:
	ldr r0, _08012230  @ =gUnknown_0202A6F0
	lsl r1, r4, #4
	add r1, r1, r0
	ldrb r0, [r1, #4]
	cmp r0, #0
	beq _0801222A
	sub r0, r0, #1
	lsl r0, r0, #1
	add r1, r6, #0
	add r1, r1, #32
	strb r0, [r1]
	ldrb r1, [r6, #28]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r6, #28]
	ldrb r0, [r6, #30]
	mov r1, #15
	orr r0, r0, r1
	strb r0, [r6, #30]
	add r2, r6, #0
	add r2, r2, #94
	ldrb r1, [r2]
	add r0, r5, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
_0801222A:
	mov r3, #5
	b _08012236
	.byte 0x00
	.byte 0x00
_08012230:
	.4byte gUnknown_0202A6F0
_08012234:
	add r3, r1, #0
_08012236:
	add r0, r6, #0
	add r1, r3, #0
	bl sub_08003870
	ldr r0, _080122B8  @ =gUnknown_030004A0
	ldrh r0, [r0, #24]
	neg r0, r0
	add r0, r0, #33
	strh r0, [r6, #54]
_08012248:
	ldrb r0, [r6, #11]
	cmp r0, #2
	bne _080122AA
	ldr r0, _080122BC  @ =gUnknown_03006A30
	ldr r4, [r0, #40]
	ldrb r1, [r6, #28]
	lsl r1, r1, #30
	lsr r1, r1, #30
	ldrb r2, [r4, #28]
	mov r3, #4
	neg r3, r3
	add r0, r3, #0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r2, [r6, #29]
	lsr r2, r2, #6
	lsl r2, r2, #6
	ldrb r5, [r4, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r5
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r0, [r6, #31]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r2, [r4, #31]
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r4, #31]
	add r0, r6, #0
	add r0, r0, #94
	ldrb r0, [r0]
	lsl r0, r0, #30
	add r2, r4, #0
	add r2, r2, #94
	lsr r0, r0, #30
	ldrb r1, [r2]
	and r3, r3, r1
	orr r3, r3, r0
	strb r3, [r2]
	mov r0, #145
	strh r0, [r4, #50]
	ldr r0, _080122B8  @ =gUnknown_030004A0
	ldrh r0, [r0, #24]
	neg r0, r0
	add r0, r0, #34
	strh r0, [r4, #54]
_080122AA:
	add r0, r6, #0
	bl GetNextFrame
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080122B8:
	.4byte gUnknown_030004A0
_080122BC:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080120D4

