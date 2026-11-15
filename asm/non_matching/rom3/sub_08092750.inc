	THUMB_FUNC_START sub_08092750
sub_08092750: @ 0x08092750
	push {lr}
	mov r0, #214
	lsl r0, r0, #2
	bl sub_0808F678
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08092750

	.byte 0x00
	.byte 0x00
