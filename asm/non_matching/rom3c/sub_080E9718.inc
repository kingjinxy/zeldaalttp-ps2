	THUMB_FUNC_START sub_080E9718
sub_080E9718: @ 0x080E9718
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	mov r4, sp
	add r4, r4, #5
	add r0, sp, #4
	add r1, r4, #0
	ldr r2, [sp, #8]
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E9740
	b _080E98AE
_080E9740:
	ldr r2, _080E98C0  @ =gRam
	ldr r1, _080E98C4  @ =0x00000F52
	add r0, r2, r1
	ldr r3, [sp, #8]
	add r0, r3, r0
	ldrb r0, [r0]
	cmp r0, #1
	bls _080E9808
	ldr r4, _080E98C8  @ =0x00000F92
	add r0, r2, r4
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #26
	lsr r0, r0, #24
	mov r10, r0
	mov r7, #3
	mov r8, r7
	mov r9, r2
	add r6, sp, #4
_080E9766:
	mov r0, r10
	add r0, r0, r8
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r0, _080E98CC  @ =gUnknown_08177BC5
	add r0, r5, r0
	ldrb r3, [r0]
	mov r0, #15
	and r0, r0, r3
	cmp r0, #0
	bne _080E9784
	ldr r1, _080E98D0  @ =gUnknown_03002B99
	ldrb r0, [r1]
	orr r3, r3, r0
_080E9784:
	mov r0, #32
	orr r3, r3, r0
	lsl r3, r3, #24
	ldr r0, _080E98D4  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080E98D8  @ =gUnknown_08177B29
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E98DC  @ =gUnknown_08177B5D
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldr r4, _080E98E0  @ =gUnknown_03002B94
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080E98E4  @ =gUnknown_08177B91
	add r4, r5, r4
	ldrb r4, [r4]
	lsr r3, r3, #16
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r7, r8
	lsl r1, r7, #24
	mov r0, #255
	lsl r0, r0, #24
	add r1, r1, r0
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r3, r1, #24
	mov r8, r3
	cmp r1, #0
	bge _080E9766
	ldr r0, [sp, #8]
	mov r1, #2
	mov r2, #3
	bl sub_080C6350
	add r0, sp, #4
	mov r1, sp
	add r1, r1, #5
	ldr r2, [sp, #8]
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E98AE
_080E9808:
	ldr r4, _080E98C0  @ =gRam
	ldr r7, _080E98E8  @ =0x00000FE2
	add r0, r4, r7
	ldr r1, [sp, #8]
	add r0, r1, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E98AE
	lsr r0, r0, #25
	mov r1, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	mov r0, #16
	bl sub_080CF3A0
	add r1, sp, #4
	mov r0, #0
	strb r0, [r1]
	mov r7, #3
	add r6, r1, #0
	mov r8, r4
	ldr r3, _080E98EC  @ =0x00000964
	add r3, r3, r8
	mov r10, r3
_080E983E:
	mov r4, r9
	add r5, r4, r7
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080E98D4  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _080E98F0  @ =gUnknown_08177BF9
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E98F4  @ =gUnknown_08177C01
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	mov r3, r10
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E98F8  @ =gUnknown_08177C09
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E98FC  @ =gUnknown_08177C11
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #36
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	lsl r1, r7, #24
	mov r4, #255
	lsl r4, r4, #24
	add r1, r1, r4
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r7, r1, #24
	cmp r1, #0
	bge _080E983E
_080E98AE:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E98C0:
	.4byte gRam
_080E98C4:
	.4byte 0x00000F52
_080E98C8:
	.4byte 0x00000F92
_080E98CC:
	.4byte gUnknown_08177BC5
_080E98D0:
	.4byte gUnknown_03002B99
_080E98D4:
	.4byte gUnknown_03003E74
_080E98D8:
	.4byte gUnknown_08177B29
_080E98DC:
	.4byte gUnknown_08177B5D
_080E98E0:
	.4byte gUnknown_03002B94
_080E98E4:
	.4byte gUnknown_08177B91
_080E98E8:
	.4byte 0x00000FE2
_080E98EC:
	.4byte 0x00000964
_080E98F0:
	.4byte gUnknown_08177BF9
_080E98F4:
	.4byte gUnknown_08177C01
_080E98F8:
	.4byte gUnknown_08177C09
_080E98FC:
	.4byte gUnknown_08177C11
	THUMB_FUNC_END sub_080E9718

