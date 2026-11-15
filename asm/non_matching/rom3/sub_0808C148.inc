	THUMB_FUNC_START sub_0808C148
sub_0808C148: @ 0x0808C148
	push {r4,r5,lr}
	add r2, r0, #0
	ldr r4, _0808C19C  @ =gUnknown_08155B4E
	lsl r0, r2, #1
	add r0, r0, r4
	ldr r3, _0808C1A0  @ =gRam
	ldr r5, _0808C1A4  @ =0x000016B6
	add r1, r3, r5
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0808C1AC
	add r0, r2, #1
	lsl r0, r0, #1
	add r0, r0, r4
	add r5, r5, #2
	add r1, r3, r5
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0808C1AC
	add r0, r2, #2
	lsl r0, r0, #1
	add r0, r0, r4
	add r5, r5, #2
	add r1, r3, r5
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0808C1AC
	add r0, r2, #3
	lsl r0, r0, #1
	add r0, r0, r4
	ldr r2, _0808C1A8  @ =0x000016BC
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0808C1AC
	mov r0, #1
	b _0808C1AE
	.byte 0x00
	.byte 0x00
_0808C19C:
	.4byte gUnknown_08155B4E
_0808C1A0:
	.4byte gRam
_0808C1A4:
	.4byte 0x000016B6
_0808C1A8:
	.4byte 0x000016BC
_0808C1AC:
	mov r0, #0
_0808C1AE:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0808C148

