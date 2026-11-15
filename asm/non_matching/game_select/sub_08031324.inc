	THUMB_FUNC_START sub_08031324
sub_08031324: @ 0x08031324
	push {r4,lr}
	ldr r4, _08031338  @ =gSubState
	ldrb r0, [r4]
	cmp r0, #1
	beq _08031354
	cmp r0, #1
	bgt _0803133C
	cmp r0, #0
	beq _08031342
	b _080313CA
_08031338:
	.4byte gSubState
_0803133C:
	cmp r0, #2
	beq _0803137C
	b _080313CA
_08031342:
	ldr r1, _08031350  @ =gUnknown_02016D60
	mov r0, #30
	strh r0, [r1, #4]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _080313CA
_08031350:
	.4byte gUnknown_02016D60
_08031354:
	ldr r1, _08031378  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080313CA
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #5
	bl sub_08036704
	mov r0, #124
	bl play_sound
	b _080313CA
	.byte 0x00
	.byte 0x00
_08031378:
	.4byte gUnknown_02016D60
_0803137C:
	bl sub_08037554
	cmp r0, #0
	beq _080313CA
	bl sub_08037750
	ldr r0, _080313D0  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0803139C
	ldr r1, _080313D4  @ =gUnknown_030004A0
	ldrh r0, [r1, #24]
	add r0, r0, #1
	strh r0, [r1, #24]
_0803139C:
	ldr r0, _080313D8  @ =gUnknown_03005E10
	ldrh r1, [r0]
	mov r0, #9
	and r0, r0, r1
	ldr r1, _080313D4  @ =gUnknown_030004A0
	cmp r0, #0
	beq _080313AE
	mov r0, #96
	strh r0, [r1, #24]
_080313AE:
	ldrh r0, [r1, #24]
	cmp r0, #96
	bls _080313C6
	ldr r0, _080313DC  @ =gUnknown_03005050
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
	strb r0, [r4]
	mov r0, #125
	bl play_sound
_080313C6:
	bl sub_08037574
_080313CA:
	pop {r4}
	pop {r0}
	bx r0
_080313D0:
	.4byte gUnknown_03000948
_080313D4:
	.4byte gUnknown_030004A0
_080313D8:
	.4byte gUnknown_03005E10
_080313DC:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08031324

