	THUMB_FUNC_START sub_0808A738
sub_0808A738: @ 0x0808A738
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r2, _0808A7B8  @ =gRam
	ldr r1, _0808A7BC  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0808A770
	ldr r3, _0808A7C0  @ =0x000009C6
	add r0, r2, r3
	ldrh r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	bne _0808A770
	mov r0, #163
	lsl r0, r0, #3
	add r1, r2, r0
	ldr r0, _0808A7C4  @ =0x0000FC40
	strh r0, [r1]
	ldr r3, _0808A7C8  @ =0x0000051E
	add r1, r2, r3
	ldr r0, _0808A7CC  @ =0x00003648
	strh r0, [r1]
	bl sub_08072D8C
_0808A770:
	ldr r0, _0808A7D0  @ =0xF0FCF0FC
	str r0, [sp]
	ldr r5, _0808A7D4  @ =gUnknown_02001600
	ldr r2, _0808A7D8  @ =0x01000080
	mov r0, sp
	add r1, r5, #0
	bl CpuFastSet
	mov r1, #2
	mov r2, #0
	ldr r4, _0808A7B8  @ =gRam
	ldr r3, _0808A7DC  @ =0x00000BDE
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _0808A7E0  @ =0x00000BDC
	add r0, r4, r1
	strh r2, [r0]
	mov r0, #1
	bl sub_0806BD6C
	bl sub_0808A8C4
	mov r3, #152
	lsl r3, r3, #4
	add r4, r4, r3
	mov r0, #15
	strb r0, [r4]
	ldr r1, _0808A7E4  @ =gUnknown_02001400
	add r0, r5, #0
	mov r2, #128
	bl CpuFastSet
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_0808A7B8:
	.4byte gRam
_0808A7BC:
	.4byte 0x000009B2
_0808A7C0:
	.4byte 0x000009C6
_0808A7C4:
	.4byte 0x0000FC40
_0808A7C8:
	.4byte 0x0000051E
_0808A7CC:
	.4byte 0x00003648
_0808A7D0:
	.4byte 0xF0FCF0FC
_0808A7D4:
	.4byte gUnknown_02001600
_0808A7D8:
	.4byte 0x01000080
_0808A7DC:
	.4byte 0x00000BDE
_0808A7E0:
	.4byte 0x00000BDC
_0808A7E4:
	.4byte gUnknown_02001400
	THUMB_FUNC_END sub_0808A738

