	THUMB_FUNC_START sub_08035E8C
sub_08035E8C: @ 0x08035E8C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	mov r0, #17
	strb r0, [r4, #20]
	mov r0, #120
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035E8C

	.byte 0x00
	.byte 0x00
