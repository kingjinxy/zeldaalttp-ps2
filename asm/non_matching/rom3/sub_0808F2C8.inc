	THUMB_FUNC_START sub_0808F2C8
sub_0808F2C8: @ 0x0808F2C8
	push {lr}
	ldr r1, _0808F2E8  @ =gRam
	ldr r0, _0808F2EC  @ =0x00000A02
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #32
	bne _0808F2E2
	bl sub_0808D788
_0808F2E2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F2E8:
	.4byte gRam
_0808F2EC:
	.4byte 0x00000A02
	THUMB_FUNC_END sub_0808F2C8

