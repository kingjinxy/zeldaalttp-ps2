	THUMB_FUNC_START sub_0808B158
sub_0808B158: @ 0x0808B158
	push {r4,lr}
	ldr r0, _0808B194  @ =gRam
	ldr r2, _0808B198  @ =0x00000BF4
	add r1, r0, r2
	ldr r2, _0808B19C  @ =0x00000958
	add r3, r0, r2
	ldrh r2, [r1]
	ldrh r1, [r3]
	sub r2, r2, r1
	ldr r1, _0808B1A0  @ =0x00000974
	add r4, r0, r1
	strh r2, [r4]
	ldr r1, _0808B1A4  @ =0x00000BF6
	add r3, r0, r1
	ldrh r1, [r3]
	sub r2, r2, r1
	mov r1, #189
	lsl r1, r1, #4
	add r0, r0, r1
	strh r2, [r0]
	mov r2, #0
	ldrsh r0, [r4, r2]
	ldrh r3, [r3]
	add r0, r0, r3
	bl sub_0808AD8C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808B194:
	.4byte gRam
_0808B198:
	.4byte 0x00000BF4
_0808B19C:
	.4byte 0x00000958
_0808B1A0:
	.4byte 0x00000974
_0808B1A4:
	.4byte 0x00000BF6
	THUMB_FUNC_END sub_0808B158

