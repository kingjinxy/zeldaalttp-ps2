	THUMB_FUNC_START sub_0808A1BC
sub_0808A1BC: @ 0x0808A1BC
	push {lr}
	ldr r1, _0808A1E0  @ =gRam
	ldr r0, _0808A1E4  @ =0x00000A4C
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r3, #0
	strh r0, [r2]
	ldr r2, _0808A1E8  @ =0x000009EA
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _0808A1EC  @ =0x000009EE
	add r1, r1, r0
	strh r3, [r1]
	bl sub_0808273C
	pop {r0}
	bx r0
_0808A1E0:
	.4byte gRam
_0808A1E4:
	.4byte 0x00000A4C
_0808A1E8:
	.4byte 0x000009EA
_0808A1EC:
	.4byte 0x000009EE
	THUMB_FUNC_END sub_0808A1BC

