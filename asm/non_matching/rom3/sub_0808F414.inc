	THUMB_FUNC_START sub_0808F414
sub_0808F414: @ 0x0808F414
	push {lr}
	ldr r0, _0808F434  @ =gRam
	ldr r1, _0808F438  @ =0x000009C6
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _0808F43C  @ =gUnknown_02002280
	add r1, r1, r0
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	bl sub_08132B4C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F434:
	.4byte gRam
_0808F438:
	.4byte 0x000009C6
_0808F43C:
	.4byte gUnknown_02002280
	THUMB_FUNC_END sub_0808F414

