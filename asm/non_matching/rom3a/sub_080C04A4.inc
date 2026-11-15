	THUMB_FUNC_START sub_080C04A4
sub_080C04A4: @ 0x080C04A4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r1, _080C0500  @ =gRam
	ldr r0, _080C0504  @ =0x00001733
	add r2, r1, r0
	mov r0, #2
	strb r0, [r2]
	ldr r2, _080C0508  @ =0x000009AD
	add r0, r1, r2
	ldrb r3, [r0]
	add r5, r1, #0
	cmp r3, #0
	bne _080C0560
	ldr r4, _080C050C  @ =0x00000E29
	add r0, r5, r4
	mov r6, r9
	add r2, r6, r0
	ldrb r0, [r2]
	sub r0, r0, #3
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bhi _080C0518
	ldr r1, _080C0510  @ =0x00001844
	add r0, r5, r1
	add r0, r0, r9
	mov r1, #1
	strb r1, [r0]
	ldr r4, _080C0514  @ =0x00001818
	add r0, r5, r4
	add r0, r0, r9
	strb r1, [r0]
	strb r3, [r2]
	mov r0, r9
	bl sub_080C084C
	b _080C0698
	.byte 0x00
	.byte 0x00
_080C0500:
	.4byte gRam
_080C0504:
	.4byte 0x00001733
_080C0508:
	.4byte 0x000009AD
_080C050C:
	.4byte 0x00000E29
_080C0510:
	.4byte 0x00001844
_080C0514:
	.4byte 0x00001818
_080C0518:
	mov r1, #0
	cmp r0, #65
	bls _080C0530
	ldrb r0, [r2]
	cmp r0, #67
	beq _080C052C
	cmp r0, #70
	bne _080C0532
	mov r1, #1
	b _080C0532
_080C052C:
	mov r1, #2
	b _080C0532
_080C0530:
	mov r1, #3
_080C0532:
	ldr r6, _080C06A8  @ =0x00000E1F
	add r0, r5, r6
	add r0, r0, r9
	strb r1, [r0]
	ldr r1, _080C06AC  @ =0x00001844
	add r0, r5, r1
	mov r2, r9
	add r3, r2, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C0560
	ldr r4, _080C06B0  @ =0x00001733
	add r0, r5, r4
	mov r1, #4
	strb r1, [r0]
	mov r0, #2
	strb r0, [r3]
_080C0560:
	ldr r1, _080C06B4  @ =gRam
	ldr r5, _080C06A8  @ =0x00000E1F
	add r0, r1, r5
	add r0, r0, r9
	ldrb r6, [r0]
	cmp r6, #0
	blt _080C05EE
	mov r8, r1
	ldr r0, _080C06B8  @ =gUnknown_03003E74
	mov r10, r0
	ldr r1, _080C06BC  @ =gUnknown_02006880
	add r7, r6, r1
_080C0578:
	ldr r0, _080C06C0  @ =0x00001732
	add r0, r0, r8
	strb r6, [r0]
	ldr r0, _080C06C4  @ =0x000009AD
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C0592
	ldrb r0, [r7]
	add r0, r0, #4
	mov r1, #63
	and r0, r0, r1
	strb r0, [r7]
_080C0592:
	ldr r0, _080C06C8  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r8
	strb r1, [r0]
	ldrb r1, [r7]
	mov r0, r9
	bl sub_080C06EC
	bl sub_080C0790
	mov r2, r10
	ldrh r0, [r2]
	ldr r1, _080C06CC  @ =0x00000964
	add r1, r1, r8
	ldrh r1, [r1]
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldrh r2, [r2]
	ldr r3, _080C06D0  @ =gUnknown_08171CFE
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080C06B0  @ =0x00001733
	add r4, r4, r8
	ldrb r4, [r4]
	mov r12, r4
	ldr r5, _080C06D4  @ =gUnknown_03003954
	ldrb r4, [r5]
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r5, r10
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	sub r7, r7, #1
	sub r6, r6, #1
	cmp r6, #0
	bge _080C0578
_080C05EE:
	ldr r1, _080C06B4  @ =gRam
	ldr r6, _080C06C4  @ =0x000009AD
	add r0, r1, r6
	ldrb r3, [r0]
	add r5, r1, #0
	cmp r3, #0
	bne _080C0638
	ldr r1, _080C06D8  @ =0x00001832
	add r0, r5, r1
	mov r4, r9
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080C0698
	strb r3, [r2]
	ldr r6, _080C06DC  @ =0x00001837
	add r0, r5, r6
	add r0, r0, r9
	ldrb r1, [r0]
	add r1, r1, #1
	mov r2, #3
	and r1, r1, r2
	strb r1, [r0]
	cmp r1, #3
	bne _080C0638
	ldr r0, _080C06E0  @ =gUnknown_02006884
	ldrb r1, [r0]
	add r1, r1, #9
	mov r2, #63
	and r1, r1, r2
	strb r1, [r0]
_080C0638:
	ldr r1, _080C06DC  @ =0x00001837
	add r0, r5, r1
	add r0, r0, r9
	ldrb r0, [r0]
	ldr r2, _080C06C0  @ =0x00001732
	add r6, r5, r2
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _080C0698
	ldr r0, _080C06C8  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r5, r3
	strb r1, [r0]
	ldr r0, _080C06E0  @ =gUnknown_02006884
	ldrb r1, [r0]
	mov r0, r9
	bl sub_080C06EC
	bl sub_080C0790
	ldr r0, _080C06B8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _080C06CC  @ =0x00000964
	add r1, r5, r4
	ldrh r1, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	ldrh r2, [r2]
	ldr r4, _080C06E4  @ =gUnknown_08171D02
	ldrb r3, [r6]
	add r3, r3, r4
	ldrb r3, [r3]
	ldr r6, _080C06E8  @ =0x00001724
	add r4, r5, r6
	ldrb r5, [r4]
	mov r4, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
_080C0698:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C06A8:
	.4byte 0x00000E1F
_080C06AC:
	.4byte 0x00001844
_080C06B0:
	.4byte 0x00001733
_080C06B4:
	.4byte gRam
_080C06B8:
	.4byte gUnknown_03003E74
_080C06BC:
	.4byte gUnknown_02006880
_080C06C0:
	.4byte 0x00001732
_080C06C4:
	.4byte 0x000009AD
_080C06C8:
	.4byte gUnknown_02006888
_080C06CC:
	.4byte 0x00000964
_080C06D0:
	.4byte gUnknown_08171CFE
_080C06D4:
	.4byte gUnknown_03003954
_080C06D8:
	.4byte 0x00001832
_080C06DC:
	.4byte 0x00001837
_080C06E0:
	.4byte gUnknown_02006884
_080C06E4:
	.4byte gUnknown_08171D02
_080C06E8:
	.4byte 0x00001724
	THUMB_FUNC_END sub_080C04A4

