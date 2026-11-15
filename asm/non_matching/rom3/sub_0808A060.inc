	THUMB_FUNC_START sub_0808A060
sub_0808A060: @ 0x0808A060
	push {lr}
	ldr r0, _0808A078  @ =gRam
	ldr r2, _0808A07C  @ =0x00000B08
	add r1, r0, r2
	ldrb r1, [r1]
	ldr r2, _0808A080  @ =0x00000968
	add r0, r0, r2
	strh r1, [r0]
	bl sub_08084FD0
	pop {r0}
	bx r0
_0808A078:
	.4byte gRam
_0808A07C:
	.4byte 0x00000B08
_0808A080:
	.4byte 0x00000968
	THUMB_FUNC_END sub_0808A060

