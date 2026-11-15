	THUMB_FUNC_START sub_0808F340
sub_0808F340: @ 0x0808F340
	push {r4,lr}
	ldr r4, _0808F368  @ =gRam
	ldr r0, _0808F36C  @ =0x00000A02
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #128
	bne _0808F362
	bl sub_0808D788
	ldr r0, _0808F370  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
_0808F362:
	pop {r4}
	pop {r0}
	bx r0
_0808F368:
	.4byte gRam
_0808F36C:
	.4byte 0x00000A02
_0808F370:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_0808F340

