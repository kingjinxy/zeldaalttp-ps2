	THUMB_FUNC_START sub_0808A6A0
sub_0808A6A0: @ 0x0808A6A0
	push {lr}
	ldr r0, _0808A6B8  @ =gRam
	mov r1, #190
	lsl r1, r1, #5
	add r0, r0, r1
	mov r1, #193
	strb r1, [r0]
	bl sub_0808A334
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A6B8:
	.4byte gRam
	THUMB_FUNC_END sub_0808A6A0

