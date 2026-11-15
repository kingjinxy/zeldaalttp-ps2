	THUMB_FUNC_START sub_0808A03C
sub_0808A03C: @ 0x0808A03C
	push {lr}
	ldr r0, _0808A054  @ =gRam
	ldr r2, _0808A058  @ =0x00000B08
	add r1, r0, r2
	ldrb r1, [r1]
	ldr r2, _0808A05C  @ =0x00000968
	add r0, r0, r2
	strh r1, [r0]
	bl sub_08084D84
	pop {r0}
	bx r0
_0808A054:
	.4byte gRam
_0808A058:
	.4byte 0x00000B08
_0808A05C:
	.4byte 0x00000968
	THUMB_FUNC_END sub_0808A03C

