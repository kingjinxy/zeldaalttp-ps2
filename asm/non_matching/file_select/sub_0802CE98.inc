	THUMB_FUNC_START sub_0802CE98
sub_0802CE98: @ 0x0802CE98
	push {lr}
	ldr r0, _0802CEBC  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	bne _0802CEB8
	ldr r0, _0802CEC0  @ =gUnknown_03000420
	ldrb r1, [r0, #8]
	ldrb r0, [r0, #9]
	lsl r0, r0, #1
	cmp r1, r0
	bgt _0802CEB8
	mov r0, #37
	bl play_sound
_0802CEB8:
	pop {r0}
	bx r0
_0802CEBC:
	.4byte gUnknown_03000948
_0802CEC0:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802CE98

