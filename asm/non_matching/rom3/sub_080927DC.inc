	THUMB_FUNC_START sub_080927DC
sub_080927DC: @ 0x080927DC
	push {lr}
	mov r0, #210
	lsl r0, r0, #4
	bl sub_0808F678
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080927DC

	.byte 0x00
	.byte 0x00
