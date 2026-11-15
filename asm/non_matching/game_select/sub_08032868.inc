	THUMB_FUNC_START sub_08032868
sub_08032868: @ 0x08032868
	push {lr}
	mov r0, #90
	mov r1, #1
	mov r2, #50
	bl sub_0804C8A8
	mov r1, #1
	strb r1, [r0, #23]
	mov r1, #252
	lsl r1, r1, #1
	strh r1, [r0, #50]
	sub r1, r1, #88
	strh r1, [r0, #54]
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08032868

	.byte 0x00
	.byte 0x00
