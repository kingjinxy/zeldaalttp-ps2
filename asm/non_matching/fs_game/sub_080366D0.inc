	THUMB_FUNC_START sub_080366D0
sub_080366D0: @ 0x080366D0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #0
	ldrb r1, [r0]
	add r0, r1, #0
	bl sub_08036704
	bl sub_0800C4E8
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080366D0

