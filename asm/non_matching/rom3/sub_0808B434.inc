	THUMB_FUNC_START sub_0808B434
sub_0808B434: @ 0x0808B434
	push {lr}
	ldr r1, _0808B458  @ =gRam
	ldr r0, _0808B45C  @ =0x00000BC5
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _0808B464
	ldr r0, _0808B460  @ =0x00000D02
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #12
	bne _0808B478
	mov r0, #1
	b _0808B476
_0808B458:
	.4byte gRam
_0808B45C:
	.4byte 0x00000BC5
_0808B460:
	.4byte 0x00000D02
_0808B464:
	ldr r0, _0808B47C  @ =0x00000D02
	add r1, r1, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0808B478
	mov r0, #0
_0808B476:
	strb r0, [r2]
_0808B478:
	pop {r0}
	bx r0
_0808B47C:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_0808B434

