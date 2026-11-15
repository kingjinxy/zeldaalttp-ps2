	THUMB_FUNC_START sub_0808EC68
sub_0808EC68: @ 0x0808EC68
	push {r4,r5,lr}
	ldr r5, _0808EC9C  @ =gRam
	ldr r0, _0808ECA0  @ =0x00000A02
	add r4, r5, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #72
	bne _0808EC96
	bl sub_0808D788
	mov r0, #0
	strb r0, [r4]
	ldr r0, _0808ECA4  @ =0x00000A3C
	add r1, r5, r0
	mov r0, #15
	strh r0, [r1]
	ldr r0, _0808ECA8  @ =0x00000A3E
	add r1, r5, r0
	mov r0, #6
	strb r0, [r1]
_0808EC96:
	pop {r4,r5}
	pop {r0}
	bx r0
_0808EC9C:
	.4byte gRam
_0808ECA0:
	.4byte 0x00000A02
_0808ECA4:
	.4byte 0x00000A3C
_0808ECA8:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_0808EC68

