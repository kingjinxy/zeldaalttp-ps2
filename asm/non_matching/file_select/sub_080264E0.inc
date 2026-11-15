	THUMB_FUNC_START sub_080264E0
sub_080264E0: @ 0x080264E0
	push {lr}
	add r2, r0, #0
	ldr r1, [r2, #84]
	cmp r1, #0
	beq _080264EE
	mov r0, #0
	str r0, [r1, #88]
_080264EE:
	add r0, r2, #0
	bl DeleteThisEntity
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080264E0

