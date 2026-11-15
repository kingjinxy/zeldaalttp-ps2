	THUMB_FUNC_START sub_0808A270
sub_0808A270: @ 0x0808A270
	push {lr}
	mov r0, #1
	bl sub_0806BD6C
	ldr r1, _0808A298  @ =gRam
	ldr r0, _0808A29C  @ =0x0000051A
	add r2, r1, r0
	mov r0, #63
	strh r0, [r2]
	ldr r0, _0808A2A0  @ =0x0000051C
	add r2, r1, r0
	mov r0, #61
	strh r0, [r2]
	ldr r0, _0808A2A4  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
_0808A298:
	.4byte gRam
_0808A29C:
	.4byte 0x0000051A
_0808A2A0:
	.4byte 0x0000051C
_0808A2A4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808A270

