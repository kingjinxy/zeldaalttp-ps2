	THUMB_FUNC_START sub_0808DA40
sub_0808DA40: @ 0x0808DA40
	push {r4,r5,lr}
	sub sp, sp, #8
	ldr r5, _0808DAAC  @ =gRam
	ldr r0, _0808DAB0  @ =0x00000A02
	add r3, r5, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _0808DAA2
	ldr r1, _0808DAB4  @ =0x000009E8
	add r2, r5, r1
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	ldr r0, _0808DAB8  @ =0x00000812
	bl sub_08092568
	ldr r2, _0808DABC  @ =0x0000096C
	add r1, r5, r2
	strh r0, [r1]
	ldr r4, _0808DAC0  @ =0x00003818
	add r0, r4, #0
	bl sub_0808B8B8
	ldr r0, _0808DAC4  @ =0x00000814
	str r0, [sp, #4]
	str r4, [sp]
	add r1, sp, #4
	mov r0, sp
	bl sub_0808B948
	ldr r1, _0808DAC8  @ =0x000009C6
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r2, _0808DACC  @ =gUnknown_02002280
	add r1, r1, r2
	ldrb r0, [r1]
	mov r2, #32
	orr r0, r0, r2
	strb r0, [r1]
	mov r0, #56
	mov r1, #0
	bl sub_0812A324
_0808DAA2:
	add sp, sp, #8
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808DAAC:
	.4byte gRam
_0808DAB0:
	.4byte 0x00000A02
_0808DAB4:
	.4byte 0x000009E8
_0808DAB8:
	.4byte 0x00000812
_0808DABC:
	.4byte 0x0000096C
_0808DAC0:
	.4byte 0x00003818
_0808DAC4:
	.4byte 0x00000814
_0808DAC8:
	.4byte 0x000009C6
_0808DACC:
	.4byte gUnknown_02002280
	THUMB_FUNC_END sub_0808DA40

