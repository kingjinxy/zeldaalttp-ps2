	THUMB_FUNC_START sub_0808A084
sub_0808A084: @ 0x0808A084
	push {lr}
	ldr r0, _0808A09C  @ =gRam
	ldr r2, _0808A0A0  @ =0x00000B08
	add r1, r0, r2
	ldrb r1, [r1]
	ldr r2, _0808A0A4  @ =0x00000968
	add r0, r0, r2
	strh r1, [r0]
	bl sub_08085258
	pop {r0}
	bx r0
_0808A09C:
	.4byte gRam
_0808A0A0:
	.4byte 0x00000B08
_0808A0A4:
	.4byte 0x00000968
	THUMB_FUNC_END sub_0808A084

