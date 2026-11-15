	THUMB_FUNC_START sub_080927FC
sub_080927FC: @ 0x080927FC
	push {lr}
	mov r0, #204
	lsl r0, r0, #2
	bl sub_0808F678
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080927FC

	.byte 0x00
	.byte 0x00
