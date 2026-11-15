	THUMB_FUNC_START sub_08010434
sub_08010434: @ 0x08010434
	push {r4,r5,lr}
	ldr r4, _08010464  @ =gUnknown_02016D60
	mov r0, #255
	strb r0, [r4, #30]
	ldrb r0, [r4, #29]
	cmp r0, #0
	beq _0801044A
	add r1, r4, #0
	add r1, r1, #32
	mov r0, #2
	strb r0, [r1]
_0801044A:
	bl sub_08010DC0
	cmp r0, #0
	bne _080104EE
	ldr r0, _08010468  @ =gNewKeys
	ldrh r0, [r0]
	cmp r0, #2
	beq _080104E8
	cmp r0, #2
	bgt _0801046C
	cmp r0, #1
	beq _080104C0
	b _080104EE
_08010464:
	.4byte gUnknown_02016D60
_08010468:
	.4byte gNewKeys
_0801046C:
	cmp r0, #64
	beq _08010474
	cmp r0, #128
	bne _080104EE
_08010474:
	add r5, r4, #0
	mov r4, #3
	b _08010486
_0801047A:
	ldrb r0, [r1, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	bne _080104AA
_08010486:
	ldrb r2, [r5, #31]
	ldr r0, _08010498  @ =gNewKeys
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _0801049C
	sub r0, r2, #1
	b _0801049E
_08010498:
	.4byte gNewKeys
_0801049C:
	add r0, r2, #1
_0801049E:
	and r0, r0, r4
	strb r0, [r5, #31]
	ldr r1, _080104BC  @ =gUnknown_02016D60
	ldrb r0, [r1, #31]
	cmp r0, #3
	bne _0801047A
_080104AA:
	ldr r0, _080104BC  @ =gUnknown_02016D60
	ldrb r0, [r0, #31]
	bl sub_080100E4
	mov r0, #61
	bl play_sound
	b _080104EE
	.byte 0x00
	.byte 0x00
_080104BC:
	.4byte gUnknown_02016D60
_080104C0:
	ldrb r0, [r4, #31]
	bl sub_080111F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080104E8
	ldr r1, _080104E4  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #5
	strb r0, [r4, #26]
	ldrb r0, [r4, #31]
	strb r0, [r4, #30]
	mov r0, #62
	bl play_sound
	b _080104EE
_080104E4:
	.4byte gSubState
_080104E8:
	mov r0, #3
	bl sub_080107F8
_080104EE:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08010434

