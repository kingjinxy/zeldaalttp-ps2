	THUMB_FUNC_START sub_0801BF80
sub_0801BF80: @ 0x0801BF80
	push {lr}
	mov r1, #2
	strb r1, [r0, #20]
	bl sub_0801BCE4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801BF80

	.byte 0x00
	.byte 0x00
