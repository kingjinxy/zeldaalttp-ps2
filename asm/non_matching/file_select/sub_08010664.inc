	THUMB_FUNC_START sub_08010664
sub_08010664: @ 0x08010664
	push {r4,r5,lr}
	ldr r4, _08010694  @ =gUnknown_02016D60
	mov r0, #255
	strb r0, [r4, #30]
	ldrb r0, [r4, #29]
	cmp r0, #0
	beq _0801067A
	add r1, r4, #0
	add r1, r1, #32
	mov r0, #2
	strb r0, [r1]
_0801067A:
	bl sub_08010DC0
	cmp r0, #0
	bne _0801071E
	ldr r0, _08010698  @ =gNewKeys
	ldrh r0, [r0]
	cmp r0, #2
	beq _08010718
	cmp r0, #2
	bgt _0801069C
	cmp r0, #1
	beq _080106F0
	b _0801071E
_08010694:
	.4byte gUnknown_02016D60
_08010698:
	.4byte gNewKeys
_0801069C:
	cmp r0, #64
	beq _080106A4
	cmp r0, #128
	bne _0801071E
_080106A4:
	add r5, r4, #0
	mov r4, #3
	b _080106B6
_080106AA:
	ldrb r0, [r1, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	bne _080106DA
_080106B6:
	ldrb r2, [r5, #31]
	ldr r0, _080106C8  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080106CC
	sub r0, r2, #1
	b _080106CE
_080106C8:
	.4byte gNewKeys
_080106CC:
	add r0, r2, #1
_080106CE:
	and r0, r0, r4
	strb r0, [r5, #31]
	ldr r1, _080106EC  @ =gUnknown_02016D60
	ldrb r0, [r1, #31]
	cmp r0, #3
	bne _080106AA
_080106DA:
	ldr r0, _080106EC  @ =gUnknown_02016D60
	ldrb r0, [r0, #31]
	bl sub_080100E4
	mov r0, #61
	bl play_sound
	b _0801071E
	.byte 0x00
	.byte 0x00
_080106EC:
	.4byte gUnknown_02016D60
_080106F0:
	ldrb r0, [r4, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08010718
	ldrb r0, [r4, #31]
	strb r0, [r4, #30]
	mov r0, #2
	strb r0, [r4, #26]
	ldr r1, _08010714  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #62
	bl play_sound
	b _0801071E
_08010714:
	.4byte gSubState
_08010718:
	mov r0, #3
	bl sub_080107F8
_0801071E:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08010664

