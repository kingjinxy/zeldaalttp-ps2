	THUMB_FUNC_START sub_0802A014
sub_0802A014: @ 0x0802A014
	push {r4,lr}
	add r4, r0, #0
	bl sub_08043F20
	mov r0, #5
	strb r0, [r4, #10]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802A014

	.byte 0x00
	.byte 0x00
