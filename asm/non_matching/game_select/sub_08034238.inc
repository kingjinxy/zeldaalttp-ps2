	THUMB_FUNC_START sub_08034238
sub_08034238: @ 0x08034238
	push {lr}
	mov r1, #1
	strb r1, [r0, #20]
	mov r1, #0
	bl sub_08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034238

