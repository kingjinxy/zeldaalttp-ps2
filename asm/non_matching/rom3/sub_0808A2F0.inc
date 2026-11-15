	THUMB_FUNC_START sub_0808A2F0
sub_0808A2F0: @ 0x0808A2F0
	ldr r1, _0808A300  @ =gRam
	ldr r0, _0808A304  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_0808A300:
	.4byte gRam
_0808A304:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808A2F0

