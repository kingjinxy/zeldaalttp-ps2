	THUMB_FUNC_START sub_0808A334
sub_0808A334: @ 0x0808A334
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r7, _0808A428  @ =gRam
	mov r1, #190
	lsl r1, r1, #5
	add r0, r7, r1
	ldrb r1, [r0]
	mov r5, #15
	mov r2, #178
	lsl r2, r2, #4
	add r0, r7, r2
	and r5, r5, r1
	ldrh r0, [r0]
	add r5, r5, r0
	lsl r5, r5, #1
	ldr r1, _0808A42C  @ =0x0000197C
	add r0, r7, r1
	add r0, r5, r0
	ldrh r2, [r0]
	add r1, r1, #32
	add r0, r7, r1
	add r5, r5, r0
	ldrh r0, [r5]
	ldr r1, _0808A430  @ =0x00007FFF
	and r1, r1, r0
	strh r1, [r5]
	lsl r0, r2, #1
	ldr r2, _0808A434  @ =gUnknown_02002BC0
	add r0, r0, r2
	strh r1, [r0]
	ldrh r1, [r5]
	ldr r4, _0808A438  @ =0x00003FFF
	add r0, r4, #0
	and r0, r0, r1
	mov r2, #151
	lsl r2, r2, #4
	add r1, r7, r2
	strh r0, [r1]
	ldrh r1, [r5]
	add r0, r4, #0
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	asr r2, r2, #1
	lsl r1, r2, #1
	ldr r6, _0808A43C  @ =gUnknown_02018000
	add r2, r1, r6
	ldr r3, _0808A440  @ =gUnknown_081653E2
	ldrh r0, [r3]
	strh r0, [r2]
	ldr r0, _0808A444  @ =gUnknown_02018040
	mov r8, r0
	add r1, r1, r8
	ldrh r0, [r3, #2]
	strh r0, [r1]
	ldrh r0, [r5]
	and r4, r4, r0
	add r4, r4, #2
	add r0, r4, #0
	str r3, [sp]
	bl sub_08080380
	add r2, r0, #0
	asr r2, r2, #1
	lsl r1, r2, #1
	add r6, r1, r6
	ldr r3, [sp]
	ldrh r0, [r3, #4]
	strh r0, [r6]
	add r1, r1, r8
	ldrh r0, [r3, #6]
	strh r0, [r1]
	bl sub_08089F74
	ldr r1, _0808A448  @ =0x00000CF5
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0808A3FC
	ldr r2, _0808A44C  @ =0x00000B02
	add r1, r7, r2
	ldrh r0, [r1]
	cmp r0, #0
	beq _0808A3FC
	sub r0, r0, #1
	strh r0, [r1]
	ldrh r0, [r1]
	bl sub_0806C4EC
	ldr r0, _0808A450  @ =0x000009AD
	add r1, r7, r0
	mov r0, #11
	strb r0, [r1]
	ldr r2, _0808A454  @ =0x000009E8
	add r1, r7, r2
	mov r0, #0
	strh r0, [r1]
_0808A3FC:
	ldr r1, _0808A428  @ =gRam
	mov r0, #190
	lsl r0, r0, #5
	add r3, r1, r0
	ldrb r2, [r3]
	mov r0, #15
	and r0, r0, r2
	lsl r0, r0, #1
	ldr r2, _0808A458  @ =0x0000193C
	add r1, r1, r2
	add r0, r0, r1
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	strb r2, [r3]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A428:
	.4byte gRam
_0808A42C:
	.4byte 0x0000197C
_0808A430:
	.4byte 0x00007FFF
_0808A434:
	.4byte gUnknown_02002BC0
_0808A438:
	.4byte 0x00003FFF
_0808A43C:
	.4byte gUnknown_02018000
_0808A440:
	.4byte gUnknown_081653E2
_0808A444:
	.4byte gUnknown_02018040
_0808A448:
	.4byte 0x00000CF5
_0808A44C:
	.4byte 0x00000B02
_0808A450:
	.4byte 0x000009AD
_0808A454:
	.4byte 0x000009E8
_0808A458:
	.4byte 0x0000193C
	THUMB_FUNC_END sub_0808A334

