	THUMB_FUNC_START sub_080C55A4
sub_080C55A4: @ 0x080C55A4
	push {r4,lr}
	add r4, r0, #0
	bl sub_080C43DC
	mov r0, #0
	strb r0, [r4]
	mov r0, #1
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C55A4

