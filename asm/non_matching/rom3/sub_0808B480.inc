	THUMB_FUNC_START sub_0808B480
sub_0808B480: @ 0x0808B480
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0808B49C  @ =gRam
	ldr r3, _0808B4A0  @ =0x00000BC5
	add r2, r1, r3
	mov r3, #0
	strb r3, [r2]
	ldr r2, _0808B4A4  @ =0x00000D02
	add r1, r1, r2
	strh r0, [r1]
	ldr r0, _0808B4A8  @ =0x0400004C
	strh r3, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_0808B49C:
	.4byte gRam
_0808B4A0:
	.4byte 0x00000BC5
_0808B4A4:
	.4byte 0x00000D02
_0808B4A8:
	.4byte 0x0400004C
	THUMB_FUNC_END sub_0808B480

