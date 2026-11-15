	THUMB_FUNC_START sub_08010270
sub_08010270: @ 0x08010270
	push {r4-r7,lr}
	mov r7, #0
	ldr r1, _0801028C  @ =gUnknown_02016D60
	add r2, r1, #0
	add r2, r2, #36
	ldrb r0, [r2]
	add r3, r1, #0
	cmp r0, #1
	beq _080102E4
	cmp r0, #1
	bgt _08010290
	cmp r0, #0
	beq _0801029C
	b _08010396
_0801028C:
	.4byte gUnknown_02016D60
_08010290:
	cmp r0, #2
	beq _080102F0
	cmp r0, #4
	bne _0801029A
	b _0801039C
_0801029A:
	b _08010396
_0801029C:
	mov r0, #1
	strb r0, [r2]
	ldr r1, _080102D8  @ =gUnknown_0200B250
	ldrb r0, [r3, #31]
	lsl r0, r0, #6
	add r0, r0, r1
	add r0, r0, #36
	ldrb r0, [r0]
	add r2, r3, #0
	add r2, r2, #38
	strb r0, [r2]
	ldrb r0, [r3, #31]
	lsl r0, r0, #6
	add r0, r0, r1
	add r0, r0, #37
	ldrb r1, [r0]
	add r0, r3, #0
	add r0, r0, #39
	strb r1, [r0]
	ldr r0, _080102DC  @ =gUnknown_08137F52
	bl sub_0804C808
	ldr r0, _080102E0  @ =0x80040002
	bl play_sound
	mov r0, #68
	bl play_sound
	b _080103C0
	.byte 0x00
	.byte 0x00
_080102D8:
	.4byte gUnknown_0200B250
_080102DC:
	.4byte gUnknown_08137F52
_080102E0:
	.4byte 0x80040002
_080102E4:
	ldrb r0, [r3, #27]
	cmp r0, #0
	bne _080103C0
	mov r0, #2
	strb r0, [r2]
	b _080103C0
_080102F0:
	ldr r0, _08010308  @ =gNewKeys
	ldrh r0, [r0]
	cmp r0, #16
	beq _08010392
	cmp r0, #16
	bgt _0801030C
	cmp r0, #1
	beq _08010320
	cmp r0, #2
	beq _08010374
	b _080103C0
	.byte 0x00
	.byte 0x00
_08010308:
	.4byte gNewKeys
_0801030C:
	cmp r0, #64
	beq _0801037A
	cmp r0, #64
	bgt _0801031A
	cmp r0, #32
	beq _0801038E
	b _080103C0
_0801031A:
	cmp r0, #128
	beq _0801037A
	b _080103C0
_08010320:
	add r1, r3, #0
	add r1, r1, #38
	ldr r6, _0801036C  @ =gUnknown_0200B250
	ldrb r0, [r3, #31]
	lsl r0, r0, #6
	add r0, r0, r6
	add r4, r0, #0
	add r4, r4, #36
	ldrb r2, [r1]
	add r5, r3, #0
	add r5, r5, #39
	ldrb r1, [r4]
	cmp r2, r1
	bne _08010348
	add r1, r0, #0
	add r1, r1, #37
	ldrb r0, [r5]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0801035C
_08010348:
	strb r2, [r4]
	ldrb r0, [r3, #31]
	lsl r0, r0, #6
	add r0, r0, r6
	ldrb r1, [r5]
	add r0, r0, #37
	strb r1, [r0]
	ldrb r0, [r3, #31]
	bl sub_08011434
_0801035C:
	mov r0, #62
	bl play_sound
	ldr r0, _08010370  @ =gUnknown_02016D60
	add r0, r0, #36
	mov r1, #3
	strb r1, [r0]
	b _080103C0
_0801036C:
	.4byte gUnknown_0200B250
_08010370:
	.4byte gUnknown_02016D60
_08010374:
	mov r0, #4
	strb r0, [r2]
	b _080103C0
_0801037A:
	add r0, r3, #0
	add r0, r0, #37
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
	mov r0, #61
	bl play_sound
	b _080103C0
_0801038E:
	mov r7, #255
	b _080103C0
_08010392:
	mov r7, #1
	b _080103C0
_08010396:
	ldrb r0, [r3, #27]
	cmp r0, #0
	bne _080103C0
_0801039C:
	add r1, r3, #0
	add r1, r1, #36
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080103B8  @ =gSubState
	mov r0, #2
	strb r0, [r1]
	ldrb r0, [r3, #31]
	bl sub_0800F888
	ldr r0, _080103BC  @ =0x80050000
	bl play_sound
	b _080103EE
_080103B8:
	.4byte gSubState
_080103BC:
	.4byte 0x80050000
_080103C0:
	lsl r0, r7, #24
	asr r2, r0, #24
	cmp r2, #0
	beq _080103EE
	ldr r1, _080103F4  @ =gUnknown_02016D60
	add r0, r1, #0
	add r0, r0, #37
	ldrb r0, [r0]
	add r4, r1, #0
	add r4, r4, #38
	cmp r0, #0
	beq _080103DA
	add r4, r4, #1
_080103DA:
	ldrb r0, [r4]
	add r0, r0, r2
	add r0, r0, #3
	mov r1, #3
	bl __modsi3
	strb r0, [r4]
	mov r0, #61
	bl play_sound
_080103EE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080103F4:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08010270

