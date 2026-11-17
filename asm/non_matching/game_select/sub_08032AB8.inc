	THUMB_FUNC_START sub_08032AB8
sub_08032AB8: @ 0x08032AB8
	push {lr}
	bl sub_08037554
	cmp r0, #0
	beq _08032B02
	bl sub_08037750
	ldr r1, _08032B08  @ =gUnknown_08427A38
	ldr r0, _08032B0C  @ =gUnknown_02016D60
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_08137AFC
	bl sub_08000BAC
	bl sub_0802BFC4
	mov r0, #8
	bl sub_0803781C
	lsl r0, r0, #24
	cmp r0, #0
	beq _08032AFE
	ldr r1, _08032B10  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08032B14  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
_08032AFE:
	bl sub_08037574
_08032B02:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08032B08:
	.4byte gUnknown_08427A38
_08032B0C:
	.4byte gUnknown_02016D60
_08032B10:
	.4byte gSubState
_08032B14:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_08032AB8

