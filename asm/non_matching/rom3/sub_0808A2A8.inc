	THUMB_FUNC_START sub_0808A2A8
sub_0808A2A8: @ 0x0808A2A8
	push {lr}
	ldr r0, _0808A2C8  @ =gUnknown_0201A000
	ldr r1, _0808A2CC  @ =0x0600A000
	mov r2, #128
	lsl r2, r2, #4
	bl CpuFastSet
	ldr r1, _0808A2D0  @ =gRam
	ldr r0, _0808A2D4  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A2C8:
	.4byte gUnknown_0201A000
_0808A2CC:
	.4byte 0x0600A000
_0808A2D0:
	.4byte gRam
_0808A2D4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808A2A8

