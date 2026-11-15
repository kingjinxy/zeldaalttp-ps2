	THUMB_FUNC_START sub_08089824
sub_08089824: @ 0x08089824
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldr r2, _080898DC  @ =gRam
	ldr r0, _080898E0  @ =0x00000B24
	add r1, r2, r0
	mov r3, #128
	lsl r3, r3, #1
	add r0, r3, #0
	ldrh r1, [r1]
	add r0, r0, r1
	mov r3, #151
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	lsl r0, r0, #16
	asr r5, r0, #16
	ldr r6, _080898E4  @ =gUnknown_02018000
	ldr r0, _080898E8  @ =0x0000097C
	add r7, r2, r0
_0808984E:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r0, r5, #2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4, #2]
	strh r1, [r0]
	add r0, r5, #4
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4, #4]
	strh r1, [r0]
	add r0, r5, #6
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4, #6]
	strh r1, [r0]
	add r4, r4, #8
	add r5, r5, #128
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0808984E
	ldr r1, _080898DC  @ =gRam
	ldr r3, _080898EC  @ =0x00000974
	add r2, r1, r3
	mov r0, #4
	strh r0, [r2]
	ldr r0, _080898F0  @ =gUnknown_02000400
	ldrh r5, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r6, r1, r0
	ldr r7, _080898E4  @ =gUnknown_02018000
	mov r8, r2
	lsl r0, r5, #1
	ldr r1, _080898F4  @ =gUnknown_02000402
	add r4, r0, r1
_080898BC:
	ldrh r1, [r6]
	mov r2, #128
	lsl r2, r2, #6
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08089900
	ldr r3, _080898F8  @ =0x00001FFF
	add r0, r3, #0
	and r0, r0, r1
	bl sub_08080380
	ldr r1, _080898FC  @ =0xFFFFA000
	add r0, r0, r1
	b _0808990C
	.byte 0x00
	.byte 0x00
_080898DC:
	.4byte gRam
_080898E0:
	.4byte 0x00000B24
_080898E4:
	.4byte gUnknown_02018000
_080898E8:
	.4byte 0x0000097C
_080898EC:
	.4byte 0x00000974
_080898F0:
	.4byte gUnknown_02000400
_080898F4:
	.4byte gUnknown_02000402
_080898F8:
	.4byte 0x00001FFF
_080898FC:
	.4byte 0xFFFFA000
_08089900:
	mov r2, #0
	ldrsh r0, [r6, r2]
	bl sub_08080380
	ldr r3, _080899B4  @ =0xFFFFC000
	add r0, r0, r3
_0808990C:
	strh r0, [r4]
	ldr r1, _080899B8  @ =0x00008005
	add r0, r1, #0
	strh r0, [r4, #2]
	mov r2, #0
	ldrsh r0, [r6, r2]
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #4]
	mov r3, #0
	ldrsh r0, [r6, r3]
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #6]
	mov r1, #0
	ldrsh r0, [r6, r1]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r0, r2
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #8]
	mov r3, #0
	ldrsh r0, [r6, r3]
	mov r1, #192
	lsl r1, r1, #1
	add r0, r0, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #10]
	mov r2, #0
	ldrsh r0, [r6, r2]
	mov r3, #128
	lsl r3, r3, #2
	add r0, r0, r3
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r0, [r0]
	strh r0, [r4, #12]
	ldrh r0, [r6]
	add r0, r0, #2
	strh r0, [r6]
	add r4, r4, #14
	add r5, r5, #7
	mov r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080898BC
	lsl r0, r5, #1
	ldr r2, _080899BC  @ =gUnknown_02000402
	add r0, r0, r2
	ldr r3, _080899C0  @ =0x0000FFFF
	add r1, r3, #0
	strh r1, [r0]
	ldr r0, _080899C4  @ =gUnknown_02000400
	strh r5, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080899B4:
	.4byte 0xFFFFC000
_080899B8:
	.4byte 0x00008005
_080899BC:
	.4byte gUnknown_02000402
_080899C0:
	.4byte 0x0000FFFF
_080899C4:
	.4byte gUnknown_02000400
	THUMB_FUNC_END sub_08089824

