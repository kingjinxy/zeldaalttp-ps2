	THUMB_FUNC_START sub_080321D0
sub_080321D0: @ 0x080321D0
	push {r4,lr}
	bl sub_08037554
	cmp r0, #0
	beq _08032210
	bl sub_08037750
	ldr r1, _08032218  @ =gUnknown_08427A1C
	ldr r4, _0803221C  @ =gSubState
	ldrb r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08137AFC
	ldrb r0, [r4]
	cmp r0, #1
	bhi _08032204
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08008ED8
_08032204:
	bl sub_0802BFC4
	bl sub_08000BAC
	bl sub_08037574
_08032210:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08032218:
	.4byte gUnknown_08427A1C
_0803221C:
	.4byte gSubState
	THUMB_FUNC_END sub_080321D0

