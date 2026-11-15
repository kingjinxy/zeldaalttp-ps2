	THUMB_FUNC_START sub_0808F3E4
sub_0808F3E4: @ 0x0808F3E4
	ldr r1, _0808F3F4  @ =gRam
	ldr r0, _0808F3F8  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_0808F3F4:
	.4byte gRam
_0808F3F8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808F3E4

