	THUMB_FUNC_START sub_0808A1FC
sub_0808A1FC: @ 0x0808A1FC
	push {r4,r5,lr}
	mov r4, #0
	ldr r0, _0808A234  @ =gRam
	ldr r1, _0808A238  @ =0x000018D0
	add r5, r0, r1
_0808A206:
	ldrh r0, [r5]
	cmp r0, #0
	beq _0808A212
	add r0, r4, #0
	bl sub_080835C8
_0808A212:
	add r5, r5, #2
	add r4, r4, #1
	cmp r4, #16
	bne _0808A206
	bl sub_08085978
	bl sub_080829F4
	ldr r1, _0808A234  @ =gRam
	ldr r0, _0808A23C  @ =0x00000A4C
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_0808A234:
	.4byte gRam
_0808A238:
	.4byte 0x000018D0
_0808A23C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0808A1FC

