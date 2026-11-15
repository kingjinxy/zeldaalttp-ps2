	THUMB_FUNC_START sub_080111C8
sub_080111C8: @ 0x080111C8
	push {r4,lr}
	mov r0, #0
	bl sub_080111F8
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #1
	bl sub_080111F8
	add r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	mov r0, #2
	bl sub_080111F8
	add r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080111C8

	.byte 0x00
	.byte 0x00
