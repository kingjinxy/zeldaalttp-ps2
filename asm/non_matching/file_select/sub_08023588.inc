	THUMB_FUNC_START sub_08023588
sub_08023588: @ 0x08023588
	push {r4,lr}
	add r4, r0, #0
	bl 0x080077D0
	add r0, r4, #0
	add r0, r0, #114
	ldrb r0, [r0]
	cmp r0, #0
	beq _080235B6
	add r0, r4, #0
	add r0, r0, #117
	ldrb r0, [r0]
	lsl r0, r0, #4
	add r0, r0, #8
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0803CC20
	add r0, r4, #0
	bl sub_080239C0
_080235B6:
	add r0, r4, #0
	bl 0x08003C10
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023588

	.byte 0x00
	.byte 0x00
