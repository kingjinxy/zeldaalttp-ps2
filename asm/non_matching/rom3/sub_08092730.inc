	THUMB_FUNC_START sub_08092730
sub_08092730: @ 0x08092730
	push {lr}
	mov r0, #204
	lsl r0, r0, #2
	bl sub_0808F678
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08092730

	.byte 0x00
	.byte 0x00
