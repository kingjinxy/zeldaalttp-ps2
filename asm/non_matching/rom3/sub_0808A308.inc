	THUMB_FUNC_START sub_0808A308
sub_0808A308: @ 0x0808A308
	push {lr}
	bl sub_08079338
	ldr r1, _0808A328  @ =gRam
	ldr r0, _0808A32C  @ =0x00000B04
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #4
	strh r0, [r2]
	ldr r0, _0808A330  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
_0808A328:
	.4byte gRam
_0808A32C:
	.4byte 0x00000B04
_0808A330:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808A308

