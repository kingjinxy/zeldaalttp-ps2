	THUMB_FUNC_START sub_080104F4
sub_080104F4: @ 0x080104F4
	push {r4-r6,lr}
	ldr r4, _0801052C  @ =gUnknown_02016D60
	ldrb r0, [r4, #29]
	cmp r0, #0
	beq _0801050A
	mov r0, #3
	strb r0, [r4, #31]
	add r1, r4, #0
	add r1, r1, #32
	mov r0, #2
	strb r0, [r1]
_0801050A:
	bl sub_08010DC0
	cmp r0, #0
	bne _080105D0
	ldrb r0, [r4, #27]
	cmp r0, #0
	bne _080105D0
	ldr r0, _08010530  @ =gNewKeys
	ldrh r0, [r0]
	cmp r0, #2
	beq _080105B4
	cmp r0, #2
	bgt _08010534
	cmp r0, #1
	beq _08010578
	b _080105D0
	.byte 0x00
	.byte 0x00
_0801052C:
	.4byte gUnknown_02016D60
_08010530:
	.4byte gNewKeys
_08010534:
	cmp r0, #64
	beq _0801053C
	cmp r0, #128
	bne _080105D0
_0801053C:
	add r6, r4, #0
	mov r5, #3
	b _0801054E
_08010542:
	ldrb r0, [r6, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _08010570
_0801054E:
	ldrb r2, [r4, #31]
	ldr r0, _08010560  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08010564
	sub r0, r2, #1
	b _08010566
_08010560:
	.4byte gNewKeys
_08010564:
	add r0, r2, #1
_08010566:
	and r0, r0, r5
	strb r0, [r4, #31]
	ldrb r0, [r6, #31]
	cmp r0, #3
	bne _08010542
_08010570:
	mov r0, #61
	bl play_sound
	b _080105D0
_08010578:
	ldrb r0, [r4, #31]
	cmp r0, #3
	beq _080105B4
	ldr r1, _080105AC  @ =gSubState
	mov r0, #3
	strb r0, [r1]
	mov r0, #3
	mov r1, #0
	bl sub_08010104
	bl sub_080107D8
	ldr r1, _080105B0  @ =gUnknown_0202A6F0
	ldrb r0, [r4, #31]
	lsl r0, r0, #4
	add r0, r0, r1
	ldrb r0, [r0, #15]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bgt _080105D0
	ldrh r0, [r4, #4]
	add r0, r0, #120
	strh r0, [r4, #4]
	b _080105D0
	.byte 0x00
	.byte 0x00
_080105AC:
	.4byte gSubState
_080105B0:
	.4byte gUnknown_0202A6F0
_080105B4:
	ldr r1, _080105D8  @ =gSubState
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	ldr r1, _080105DC  @ =gUnknown_02016D60
	mov r0, #4
	strb r0, [r1, #26]
	mov r0, #3
	strb r0, [r1, #31]
	bl sub_080100E4
	mov r0, #148
	bl play_sound
_080105D0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080105D8:
	.4byte gSubState
_080105DC:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080104F4

