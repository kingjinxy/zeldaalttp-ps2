	THUMB_FUNC_START sub_08022F3C
sub_08022F3C: @ 0x08022F3C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	add r0, r0, #122
	ldrh r1, [r0]
	mov r2, #54
	ldrsh r0, [r4, r2]
	cmp r1, r0
	bgt _08022F5A
	strh r1, [r4, #54]
	add r0, r4, #0
	bl sub_08023010
_08022F5A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022F3C

