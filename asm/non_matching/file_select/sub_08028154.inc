	THUMB_FUNC_START sub_08028154
sub_08028154: @ 0x08028154
	push {lr}
	add r2, r0, #0
	ldr r0, [r2, #104]
	sub r0, r0, #1
	str r0, [r2, #104]
	mov r1, #1
	neg r1, r1
	cmp r0, r1
	bne _0802816C
	add r0, r2, #0
	bl sub_08028170
_0802816C:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028154

