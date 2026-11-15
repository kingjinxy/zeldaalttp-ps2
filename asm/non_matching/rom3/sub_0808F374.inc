	THUMB_FUNC_START sub_0808F374
sub_0808F374: @ 0x0808F374
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _0808F3B0  @ =gRam
	ldr r1, _0808F3B4  @ =0x000009C6
	add r0, r4, r1
	ldrh r1, [r0]
	ldr r2, _0808F3B8  @ =gUnknown_02002280
	add r1, r1, r2
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	mov r1, sp
	ldr r2, _0808F3BC  @ =0x000001E3
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _0808F3C0  @ =0x0600A000
	ldr r2, _0808F3C4  @ =0x01001000
	mov r0, sp
	bl CpuSet
	ldr r0, _0808F3C8  @ =0x000009E8
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0808F3B0:
	.4byte gRam
_0808F3B4:
	.4byte 0x000009C6
_0808F3B8:
	.4byte gUnknown_02002280
_0808F3BC:
	.4byte 0x000001E3
_0808F3C0:
	.4byte 0x0600A000
_0808F3C4:
	.4byte 0x01001000
_0808F3C8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808F374

