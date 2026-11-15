	THUMB_FUNC_START sub_0802810C
sub_0802810C: @ 0x0802810C
	push {r4,lr}
	add r4, r0, #0
	bl sub_08028200
	add r0, r4, #0
	add r0, r0, #116
	ldrh r1, [r0]
	mov r2, #54
	ldrsh r0, [r4, r2]
	cmp r1, r0
	bgt _0802812A
	strh r1, [r4, #54]
	add r0, r4, #0
	bl sub_08028170
_0802812A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802810C

