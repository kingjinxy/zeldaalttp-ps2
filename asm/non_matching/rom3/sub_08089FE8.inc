	THUMB_FUNC_START sub_08089FE8
sub_08089FE8: @ 0x08089FE8
	push {lr}
	bl sub_0808AF98
	ldr r1, _0808A008  @ =gUnknown_0815358C
	ldr r0, _0808A00C  @ =gRam
	ldr r2, _0808A010  @ =0x000009E8
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
_0808A008:
	.4byte gUnknown_0815358C
_0808A00C:
	.4byte gRam
_0808A010:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08089FE8

