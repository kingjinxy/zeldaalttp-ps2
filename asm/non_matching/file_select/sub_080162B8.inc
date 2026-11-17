	THUMB_FUNC_START sub_080162B8
sub_080162B8: @ 0x080162B8
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r2, _080163E8  @ =gUnknown_03006A30
	ldrb r1, [r4, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r5, [r0]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	mov r6, #4
	neg r6, r6
	add r0, r6, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r1, [r4, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	mov r0, #9
	strb r0, [r4, #27]
	mov r0, #192
	lsl r0, r0, #1
	str r0, [r4, #12]
	ldr r0, [r5, #48]
	str r0, [r4, #48]
	ldr r0, [r5, #52]
	sub r0, r0, #1
	str r0, [r4, #52]
	ldr r0, [r5, #56]
	str r0, [r4, #56]
	add r0, r5, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r1, #192
	lsl r1, r1, #8
	add r0, r1, #0
	add r1, r4, #0
	add r1, r1, #80
	orr r0, r0, r2
	strh r0, [r1]
	ldrb r1, [r5, #28]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r4, #28]
	mov r3, #63
	add r0, r3, #0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r0, r5, #0
	add r0, r0, #32
	ldrb r0, [r0]
	add r0, r0, #16
	add r1, r4, #0
	add r1, r1, #32
	strb r0, [r1]
	add r1, r1, #74
	mov r0, #160
	lsl r0, r0, #4
	strh r0, [r1]
	ldrb r1, [r4, #11]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080163FC
	mov r0, #120
	strb r0, [r4, #23]
	ldr r0, [r4, #88]
	str r4, [r0, #84]
	ldrb r1, [r5, #29]
	lsr r1, r1, #6
	sub r1, r1, #1
	lsl r1, r1, #6
	ldrb r2, [r4, #29]
	add r0, r3, #0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldrb r1, [r4, #31]
	add r0, r3, #0
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r4, #31]
	add r1, r4, #0
	add r1, r1, #68
	mov r0, #10
	strb r0, [r1]
	add r1, r1, #2
	mov r0, #15
	strb r0, [r1]
	sub r1, r1, #6
	mov r0, #19
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #29
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #60
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, #127
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #60
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #92
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #92
	strh r1, [r0]
	ldr r0, _080163EC  @ =gUnknown_08138C18
	str r0, [r4, #72]
	add r0, r4, #0
	bl sub_080005F0
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #8
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #11
	bl sub_08003870
	ldrb r0, [r4, #10]
	lsl r0, r0, #10
	ldr r2, _080163F0  @ =0x06010200
	add r0, r0, r2
	ldr r1, _080163F4  @ =0x03000030
	ldr r1, [r1]
	ldr r2, _080163F8  @ =0x00041B20
	add r1, r1, r2
	mov r2, #128
	lsl r2, r2, #2
	bl sub_080009F4
	mov r0, #81
	bl sub_08003DFC
	b _08016420
	.byte 0x00
	.byte 0x00
_080163E8:
	.4byte gUnknown_03006A30
_080163EC:
	.4byte gUnknown_08138C18
_080163F0:
	.4byte 0x06010200
_080163F4:
	.4byte 0x03000030
_080163F8:
	.4byte 0x00041B20
_080163FC:
	ldrb r1, [r5, #29]
	lsr r1, r1, #6
	lsl r1, r1, #6
	ldrb r2, [r4, #29]
	add r0, r3, #0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #29]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #13
	bl sub_08003870
_08016420:
	ldrb r0, [r4, #11]
	cmp r0, #4
	bhi _08016476
	bl sub_080123E8
	str r0, [r4, #88]
	cmp r0, #0
	beq _08016476
	str r4, [r0, #84]
	ldr r1, [r4, #88]
	mov r0, #16
	strb r0, [r1, #9]
	ldr r1, [r4, #88]
	mov r0, #8
	strb r0, [r1, #8]
	ldr r1, [r4, #88]
	ldrb r0, [r4, #10]
	strb r0, [r1, #10]
	ldr r1, [r4, #88]
	ldrb r0, [r4, #11]
	add r0, r0, #1
	strb r0, [r1, #11]
	ldrb r0, [r4, #11]
	cmp r0, #4
	bne _0801646E
	ldr r2, [r4, #88]
	ldrb r0, [r2, #11]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r2, #11]
	ldr r2, _08016484  @ =gUnknown_03006A30
	ldrb r1, [r4, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #61
	mov r1, #1
	strb r1, [r0]
_0801646E:
	ldr r1, [r4, #88]
	mov r0, #6
	bl sub_08012728
_08016476:
	ldrb r0, [r4, #11]
	cmp r0, #0
	bne _0801647E
	str r5, [r4, #84]
_0801647E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08016484:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080162B8

