	THUMB_FUNC_START sub_0808A014
sub_0808A014: @ 0x0808A014
	push {lr}
	ldr r1, _0808A030  @ =gUnknown_0815360C
	ldr r0, _0808A034  @ =gRam
	ldr r2, _0808A038  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A030:
	.4byte gUnknown_0815360C
_0808A034:
	.4byte gRam
_0808A038:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808A014

