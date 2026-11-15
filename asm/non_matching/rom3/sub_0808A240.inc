	THUMB_FUNC_START sub_0808A240
sub_0808A240: @ 0x0808A240
	push {lr}
	ldr r1, _0808A260  @ =gRam
	ldr r0, _0808A264  @ =0x00000A4C
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	ldr r0, _0808A268  @ =0x00001A56
	add r1, r1, r0
	ldrh r0, [r1]
	cmp r0, #0
	beq _0808A25C
	bl sub_08084720
_0808A25C:
	pop {r0}
	bx r0
_0808A260:
	.4byte gRam
_0808A264:
	.4byte 0x00000A4C
_0808A268:
	.4byte 0x00001A56
	THUMB_FUNC_END sub_0808A240

