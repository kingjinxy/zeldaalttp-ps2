	THUMB_FUNC_START sub_08028130
sub_08028130: @ 0x08028130
	push {r4,lr}
	add r4, r0, #0
	bl sub_08028200
	add r0, r4, #0
	add r0, r0, #116
	ldrh r1, [r0]
	mov r2, #50
	ldrsh r0, [r4, r2]
	cmp r1, r0
	blt _0802814E
	strh r1, [r4, #50]
	add r0, r4, #0
	bl sub_08028170
_0802814E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028130

