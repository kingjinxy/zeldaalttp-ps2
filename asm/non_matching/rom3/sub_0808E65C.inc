	THUMB_FUNC_START sub_0808E65C
sub_0808E65C: @ 0x0808E65C
	push {lr}
	bl sub_08132B4C
	ldr r1, _0808E694  @ =gRam
	ldr r0, _0808E698  @ =0x000009B5
	add r3, r1, r0
	ldrb r0, [r3]
	add r2, r0, #0
	cmp r2, #0
	bne _0808E6AA
	add r0, r0, #1
	strb r0, [r3]
	ldr r0, _0808E69C  @ =0x00000A02
	add r3, r1, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _0808E6A4
	strb r2, [r3]
	ldr r3, _0808E6A0  @ =0x00000A3E
	add r1, r1, r3
	mov r0, #5
	strb r0, [r1]
	b _0808E6AA
	.byte 0x00
	.byte 0x00
_0808E694:
	.4byte gRam
_0808E698:
	.4byte 0x000009B5
_0808E69C:
	.4byte 0x00000A02
_0808E6A0:
	.4byte 0x00000A3E
_0808E6A4:
	ldr r3, _0808E6B0  @ =0x000009E8
	add r0, r1, r3
	strh r2, [r0]
_0808E6AA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808E6B0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808E65C

