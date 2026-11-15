	THUMB_FUNC_START sub_080280E8
sub_080280E8: @ 0x080280E8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08028200
	add r0, r4, #0
	add r0, r0, #116
	ldrh r1, [r0]
	mov r2, #50
	ldrsh r0, [r4, r2]
	cmp r1, r0
	bgt _08028106
	strh r1, [r4, #50]
	add r0, r4, #0
	bl sub_08028170
_08028106:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080280E8

