	THUMB_FUNC_START sub_0808F2F0
sub_0808F2F0: @ 0x0808F2F0
	push {lr}
	ldr r1, _0808F30C  @ =gUnknown_08153B3C
	ldr r0, _0808F310  @ =gRam
	ldr r2, _0808F314  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808F30C:
	.4byte gUnknown_08153B3C
_0808F310:
	.4byte gRam
_0808F314:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0808F2F0

