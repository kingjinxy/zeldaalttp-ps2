	THUMB_FUNC_START sub_080F1AD4
sub_080F1AD4: @ 0x080F1AD4
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #133
	lsl r1, r1, #1
	mov r2, sp
	bl sub_080C9164
	add sp, sp, #4
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F1AD4

