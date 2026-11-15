	THUMB_FUNC_START sub_0808A680
sub_0808A680: @ 0x0808A680
	push {lr}
	bl sub_081335FC
	ldr r0, _0808A69C  @ =gRam
	mov r1, #190
	lsl r1, r1, #5
	add r0, r0, r1
	mov r1, #192
	strb r1, [r0]
	bl sub_0808A334
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A69C:
	.4byte gRam
	THUMB_FUNC_END sub_0808A680

