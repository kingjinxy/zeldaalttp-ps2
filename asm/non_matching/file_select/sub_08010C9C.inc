	THUMB_FUNC_START sub_08010C9C
sub_08010C9C: @ 0x08010C9C
	push {r4,lr}
	ldr r0, _08010CC8  @ =gUnknown_02016D60
	add r4, r0, #0
	add r4, r4, #34
	ldrb r0, [r4]
	cmp r0, #0
	beq _08010CC0
	sub r0, r0, #1
	strb r0, [r4]
	mov r0, #0
	bl sub_08010C48
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	mov r0, #148
	bl play_sound
_08010CC0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010CC8:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_08010C9C

