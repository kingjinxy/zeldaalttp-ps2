	THUMB_FUNC_START sub_0808A4CC
sub_0808A4CC: @ 0x0808A4CC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r1, _0808A508  @ =gRam
	mov r0, #190
	lsl r0, r0, #5
	add r3, r1, r0
	ldrb r0, [r3]
	mov r2, #240
	and r2, r2, r0
	mov r9, r1
	cmp r2, #192
	beq _0808A4EE
	b _0808A66C
_0808A4EE:
	ldr r0, _0808A50C  @ =0x000009DA
	add r0, r0, r9
	ldrh r0, [r0]
	cmp r0, #0
	bne _0808A510
	mov r1, #151
	lsl r1, r1, #4
	add r1, r1, r9
	mov r0, #128
	strh r0, [r1]
	mov r1, #128
	str r1, [sp]
	b _0808A530
_0808A508:
	.4byte gRam
_0808A50C:
	.4byte 0x000009DA
_0808A510:
	cmp r0, #221
	bne _0808A524
	mov r1, #151
	lsl r1, r1, #4
	add r1, r1, r9
	mov r0, #224
	strh r0, [r1]
	mov r2, #224
	str r2, [sp]
	b _0808A530
_0808A524:
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r9
	strh r2, [r0]
	mov r3, #192
	str r3, [sp]
_0808A530:
	mov r4, r9
	mov r1, #190
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r2, [r0]
	mov r1, #15
	mov r3, #178
	lsl r3, r3, #4
	add r0, r4, r3
	and r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #1
	ldr r2, _0808A634  @ =0x0000197C
	add r0, r4, r2
	add r0, r1, r0
	ldrh r2, [r0]
	ldr r3, _0808A638  @ =0x0000199C
	add r0, r4, r3
	add r7, r1, r0
	ldrh r1, [r7]
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r10, r0
	cmp r0, #0
	beq _0808A56E
	b _0808A670
_0808A56E:
	orr r3, r3, r1
	strh r3, [r7]
	mov r0, #151
	lsl r0, r0, #4
	add r5, r4, r0
	mov r1, #0
	ldrsh r0, [r5, r1]
	cmp r0, #0
	bne _0808A588
	lsl r0, r2, #1
	ldr r2, _0808A63C  @ =gUnknown_02002BC0
	add r0, r0, r2
	strh r3, [r0]
_0808A588:
	ldrh r1, [r7]
	ldr r4, _0808A640  @ =0x00003FFF
	add r0, r4, #0
	and r0, r0, r1
	strh r0, [r5]
	ldrh r1, [r7]
	add r0, r4, #0
	and r0, r0, r1
	bl sub_08080380
	add r2, r0, #0
	asr r2, r2, #1
	lsl r1, r2, #1
	ldr r5, _0808A644  @ =gUnknown_02018000
	add r2, r1, r5
	ldr r6, _0808A648  @ =gUnknown_081653EA
	ldrh r0, [r6]
	strh r0, [r2]
	ldr r3, _0808A64C  @ =gUnknown_02018040
	mov r8, r3
	add r1, r1, r8
	ldrh r0, [r6, #2]
	strh r0, [r1]
	ldrh r0, [r7]
	and r4, r4, r0
	add r4, r4, #2
	add r0, r4, #0
	bl sub_08080380
	add r2, r0, #0
	asr r2, r2, #1
	lsl r1, r2, #1
	add r5, r1, r5
	ldrh r0, [r6, #4]
	strh r0, [r5]
	add r1, r1, r8
	ldrh r0, [r6, #6]
	strh r0, [r1]
	bl sub_08089F74
	ldr r1, _0808A650  @ =0x00000504
	add r1, r1, r9
	mov r0, #37
	bl sub_0812A324
	ldr r0, _0808A654  @ =0x00000CF5
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _0808A614
	ldr r1, _0808A658  @ =0x00000B02
	add r1, r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #3
	bhi _0808A614
	ldrh r0, [r1]
	bl sub_0806C4EC
	ldr r1, _0808A65C  @ =0x000009AD
	add r1, r1, r9
	mov r0, #11
	strb r0, [r1]
	ldr r0, _0808A660  @ =0x000009E8
	add r0, r0, r9
	mov r1, r10
	strh r1, [r0]
_0808A614:
	ldr r1, _0808A664  @ =gRam
	mov r2, #190
	lsl r2, r2, #5
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #15
	and r0, r0, r2
	lsl r0, r0, #1
	ldr r3, _0808A668  @ =0x0000193C
	add r1, r1, r3
	add r0, r0, r1
	mov r1, sp
	ldrh r1, [r1]
	strh r1, [r0]
	b _0808A670
	.byte 0x00
	.byte 0x00
_0808A634:
	.4byte 0x0000197C
_0808A638:
	.4byte 0x0000199C
_0808A63C:
	.4byte gUnknown_02002BC0
_0808A640:
	.4byte 0x00003FFF
_0808A644:
	.4byte gUnknown_02018000
_0808A648:
	.4byte gUnknown_081653EA
_0808A64C:
	.4byte gUnknown_02018040
_0808A650:
	.4byte 0x00000504
_0808A654:
	.4byte 0x00000CF5
_0808A658:
	.4byte 0x00000B02
_0808A65C:
	.4byte 0x000009AD
_0808A660:
	.4byte 0x000009E8
_0808A664:
	.4byte gRam
_0808A668:
	.4byte 0x0000193C
_0808A66C:
	mov r0, #0
	strb r0, [r3]
_0808A670:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808A4CC

