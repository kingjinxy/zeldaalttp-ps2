	THUMB_FUNC_START sub_0808D788
sub_0808D788: @ 0x0808D788
	push {r4,lr}
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r1, _0808D7CC  @ =gRam
	ldr r2, _0808D7D0  @ =0x00000B6E
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _0808D7D4  @ =0x000009E8
	add r0, r1, r3
	mov r3, #0
	strh r2, [r0]
	mov r4, #201
	lsl r4, r4, #4
	add r0, r1, r4
	strh r2, [r0]
	ldr r4, _0808D7D8  @ =0x00001770
	add r0, r1, r4
	strb r3, [r0]
	ldr r4, _0808D7DC  @ =0x00001605
	add r0, r1, r4
	strb r3, [r0]
	ldr r3, _0808D7E0  @ =0x00000A28
	add r0, r1, r3
	strh r2, [r0]
	ldr r4, _0808D7E4  @ =0x00000A2A
	add r1, r1, r4
	strh r2, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808D7CC:
	.4byte gRam
_0808D7D0:
	.4byte 0x00000B6E
_0808D7D4:
	.4byte 0x000009E8
_0808D7D8:
	.4byte 0x00001770
_0808D7DC:
	.4byte 0x00001605
_0808D7E0:
	.4byte 0x00000A28
_0808D7E4:
	.4byte 0x00000A2A
	THUMB_FUNC_END sub_0808D788

