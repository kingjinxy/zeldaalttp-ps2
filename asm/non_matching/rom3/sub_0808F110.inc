	THUMB_FUNC_START sub_0808F110
sub_0808F110: @ 0x0808F110
	push {lr}
	bl sub_0808CA1C
	bl sub_0808CBF4
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0808F110

	.byte 0x00
	.byte 0x00
