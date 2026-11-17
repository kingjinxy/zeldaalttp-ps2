	THUMB_FUNC_START sub_08018028
sub_08018028: @ 0x08018028
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #63
	ldrb r0, [r1]
	cmp r0, #20
	bne _080180D4
	mov r0, #19
	strb r0, [r1]
	ldr r0, _080180C4  @ =gUnknown_08139864
	str r0, [r4, #72]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #125
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r4, #30]
	add r2, r2, #66
	ldrh r1, [r2]
	add r0, r4, #0
	add r0, r0, #32
	strb r1, [r0]
	ldrh r1, [r2]
	lsr r1, r1, #8
	lsl r1, r1, #6
	ldrb r2, [r4, #28]
	mov r0, #63
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #44
	strb r0, [r4, #27]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
	ldr r2, [r4, #84]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	ldr r0, [r4, #84]
	mov r1, #5
	bl sub_08003870
	add r0, r4, #0
	bl sub_0804C9C8
	ldr r1, [r4, #76]
	ldrb r0, [r1, #8]
	cmp r0, #8
	beq _080180B0
	cmp r0, #1
	bne _080180CC
_080180B0:
	ldr r2, _080180C8  @ =gUnknown_03006A30
	ldrb r1, [r1, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r4, #88]
	b _0801818C
_080180C4:
	.4byte gUnknown_08139864
_080180C8:
	.4byte gUnknown_03006A30
_080180CC:
	bl sub_08044594
	str r0, [r4, #88]
	b _0801818C
_080180D4:
	ldrb r0, [r4, #20]
	cmp r0, #4
	bne _080180E0
	add r0, r4, #0
	bl sub_08018528
_080180E0:
	ldr r1, [r4, #76]
	ldrb r0, [r1, #8]
	cmp r0, #1
	bne _0801815C
	ldr r2, _08018154  @ =gUnknown_03006A30
	ldrb r1, [r1, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	ldrh r1, [r0, #54]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _08018178
	ldrb r0, [r4, #20]
	cmp r0, #2
	bne _08018114
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
	ldr r0, [r4, #84]
	mov r1, #3
	bl sub_08003870
_08018114:
	ldr r1, [r4, #76]
	str r1, [r4, #88]
	add r1, r1, #60
	ldrb r2, [r1]
	mov r0, #127
	and r0, r0, r2
	strb r0, [r1]
	ldr r0, [r4, #88]
	add r0, r0, #46
	ldrb r1, [r0]
	add r0, r4, #0
	add r0, r0, #120
	strb r1, [r0]
	ldr r1, _08018158  @ =gUnknown_08139788
	ldr r0, [r4, #88]
	ldrb r0, [r0, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	add r0, r0, #92
	mov r2, #0
	strh r1, [r0]
	mov r0, #4
	strb r0, [r4, #20]
	strb r2, [r4, #24]
	add r1, r4, #0
	add r1, r1, #124
	mov r0, #45
	strb r0, [r1]
	b _0801817E
	.byte 0x00
	.byte 0x00
_08018154:
	.4byte gUnknown_03006A30
_08018158:
	.4byte gUnknown_08139788
_0801815C:
	cmp r0, #8
	bne _08018178
	ldr r2, _08018174  @ =gUnknown_03006A30
	ldrb r1, [r1, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	b _0801817C
	.byte 0x00
	.byte 0x00
_08018174:
	.4byte gUnknown_03006A30
_08018178:
	bl sub_08044594
_0801817C:
	str r0, [r4, #88]
_0801817E:
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl sub_0803CECC
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
_0801818C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08018028

	.byte 0x00
	.byte 0x00
