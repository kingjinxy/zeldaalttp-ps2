	THUMB_FUNC_START sub_080105E0
sub_080105E0: @ 0x080105E0
	push {r4,lr}
	bl sub_08010DC0
	cmp r0, #0
	bne _0801061E
	ldr r1, _080105FC  @ =gUnknown_02016D60
	ldrb r0, [r1, #26]
	cmp r0, #2
	bne _08010600
	ldrb r0, [r1, #30]
	bl sub_080112B8
	b _08010608
	.byte 0x00
	.byte 0x00
_080105FC:
	.4byte gUnknown_02016D60
_08010600:
	ldrb r0, [r1, #30]
	ldrb r1, [r1, #31]
	bl sub_08011228
_08010608:
	ldr r4, _08010624  @ =gUnknown_02016D60
	mov r0, #0
	strh r0, [r4, #4]
	bl sub_0801017C
	mov r0, #3
	bl sub_080100E4
	ldrb r0, [r4, #31]
	bl sub_080107F8
_0801061E:
	pop {r4}
	pop {r0}
	bx r0
_08010624:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080105E0

