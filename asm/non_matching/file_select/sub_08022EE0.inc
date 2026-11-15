	THUMB_FUNC_START sub_08022EE0
sub_08022EE0: @ 0x08022EE0
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803CC20
	add r0, r4, #0
	add r0, r0, #120
	ldrh r1, [r0]
	mov r2, #50
	ldrsh r0, [r4, r2]
	cmp r1, r0
	bgt _08022EFE
	strh r1, [r4, #50]
	add r0, r4, #0
	bl sub_08023010
_08022EFE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022EE0

