	THUMB_FUNC_START sub_080C1970
sub_080C1970: @ 0x080C1970
	push {lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #1
	bl sub_080C11A0
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C1970

	.byte 0x00
	.byte 0x00
