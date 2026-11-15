	THUMB_FUNC_START sub_08010BFC
sub_08010BFC: @ 0x08010BFC
	push {lr}
	ldr r0, _08010C2C  @ =gGameLanguage
	ldrb r0, [r0]
	mov r2, #3
	cmp r0, #0
	bne _08010C0A
	mov r2, #4
_08010C0A:
	ldr r1, _08010C30  @ =gUnknown_02016D60
	ldrb r0, [r1, #3]
	cmp r0, #5
	bne _08010C1C
	add r0, r1, #0
	add r0, r0, #32
	ldrb r0, [r0]
	cmp r2, r0
	beq _08010C34
_08010C1C:
	mov r0, #10
	strb r0, [r1, #2]
	mov r0, #5
	strb r0, [r1, #3]
	add r0, r1, #0
	add r0, r0, #32
	strb r2, [r0]
	b _08010C3A
_08010C2C:
	.4byte gGameLanguage
_08010C30:
	.4byte gUnknown_02016D60
_08010C34:
	ldr r1, _08010C44  @ =gSubState
	mov r0, #2
	strb r0, [r1]
_08010C3A:
	mov r0, #62
	bl play_sound
	pop {r0}
	bx r0
_08010C44:
	.4byte gSubState
	THUMB_FUNC_END sub_08010BFC

