	THUMB_FUNC_START sub_080D41C4
sub_080D41C4: @ 0x080D41C4
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #245
	mov r2, sp
	bl sub_080C9164
	add sp, sp, #4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D41C4

	.byte 0x00
	.byte 0x00
