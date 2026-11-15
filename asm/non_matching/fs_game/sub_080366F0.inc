	THUMB_FUNC_START sub_080366F0
sub_080366F0: @ 0x080366F0
	push {r7,lr}
	mov r7, sp
	mov r0, #0
	bl sub_08036704
	bl sub_0800C4FC
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080366F0

