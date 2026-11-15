	THUMB_FUNC_START sub_08010724
sub_08010724: @ 0x08010724
	push {r4,lr}
	ldr r4, _0801075C  @ =gUnknown_02016D60
	ldrb r0, [r4, #29]
	cmp r0, #0
	beq _0801073A
	mov r0, #3
	strb r0, [r4, #31]
	add r1, r4, #0
	add r1, r1, #32
	mov r0, #1
	strb r0, [r1]
_0801073A:
	bl sub_08010DC0
	cmp r0, #0
	bne _080107C8
	ldrb r0, [r4, #27]
	cmp r0, #0
	bne _080107C8
	ldr r0, _08010760  @ =gNewKeys
	ldrh r1, [r0]
	cmp r1, #2
	beq _080107B0
	cmp r1, #2
	bgt _08010764
	cmp r1, #1
	beq _08010782
	b _080107C8
	.byte 0x00
	.byte 0x00
_0801075C:
	.4byte gUnknown_02016D60
_08010760:
	.4byte gNewKeys
_08010764:
	cmp r1, #16
	beq _0801076C
	cmp r1, #32
	bne _080107C8
_0801076C:
	mov r0, #32
	eor r1, r1, r0
	neg r0, r1
	lsr r0, r0, #31
	add r1, r4, #0
	add r1, r1, #32
	strb r0, [r1]
	mov r0, #61
	bl play_sound
	b _080107C8
_08010782:
	add r0, r4, #0
	add r0, r0, #32
	ldrb r0, [r0]
	cmp r0, #0
	bne _080107B0
	ldr r1, _080107AC  @ =gSubState
	mov r0, #3
	strb r0, [r1]
	ldrh r0, [r4, #4]
	add r0, r0, #60
	strh r0, [r4, #4]
	ldrb r0, [r4, #30]
	strb r0, [r4, #31]
	mov r0, #7
	mov r1, #0
	bl sub_08010104
	bl sub_080107D8
	b _080107C8
	.byte 0x00
	.byte 0x00
_080107AC:
	.4byte gSubState
_080107B0:
	ldr r1, _080107D0  @ =gSubState
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080107D4  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #26]
	mov r0, #3
	bl sub_080100E4
	mov r0, #148
	bl play_sound
_080107C8:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080107D0:
	.4byte gSubState
_080107D4:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08010724

