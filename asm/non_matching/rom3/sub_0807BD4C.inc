	THUMB_FUNC_START sub_0807BD4C
sub_0807BD4C: @ 0x0807BD4C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r12, r0
	add r6, r1, #0
	ldr r0, _0807BED4  @ =gRam
	ldr r3, _0807BED8  @ =0x00000974
	add r1, r0, r3
	strh r2, [r1]
	mov r4, #63
	mov r10, r4
	mov r0, #64
	mov r9, r0
	mov r2, #248
	lsl r2, r2, #4
	mov r8, r2
	ldr r7, _0807BEDC  @ =gUnknown_02018000
_0807BD74:
	mov r0, #2
	ldr r3, _0807BEE0  @ =gUnknown_03002B98
	strh r0, [r3]
_0807BD7A:
	mov r2, r12
	mov r4, r9
	and r2, r2, r4
	lsl r2, r2, #5
	mov r1, r12
	mov r0, r8
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r3, r10
	orr r0, r0, r3
	mov r4, r12
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r6]
	strh r1, [r0]
	mov r3, r12
	add r3, r3, #2
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	mov r4, r8
	and r1, r1, r4
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r4, r10
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	add r5, r0, #0
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r1, [r6, #2]
	strh r1, [r0]
	add r3, r3, #2
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	mov r4, r8
	and r1, r1, r4
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r4, r10
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	add r4, r0, #0
	lsl r0, r4, #1
	add r0, r0, r7
	ldrh r1, [r6, #4]
	strh r1, [r0]
	add r3, r3, #2
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r2, r10
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r6, #6]
	strh r1, [r0]
	mov r3, r12
	add r3, r3, #128
	add r2, r3, #0
	mov r0, r9
	and r2, r2, r0
	lsl r2, r2, #5
	str r2, [sp]
	add r1, r3, #0
	mov r2, r8
	and r1, r1, r2
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r2, r10
	orr r0, r0, r2
	and r0, r0, r3
	ldr r3, [sp]
	orr r0, r0, r3
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r6, #8]
	strh r1, [r0]
	lsl r5, r5, #1
	add r5, r5, r7
	ldrh r0, [r6, #10]
	strh r0, [r5]
	lsl r4, r4, #1
	add r4, r4, r7
	ldrh r0, [r6, #12]
	strh r0, [r4]
	mov r3, r12
	add r3, r3, #134
	add r2, r3, #0
	mov r4, r9
	and r2, r2, r4
	lsl r2, r2, #5
	add r1, r3, #0
	mov r0, r8
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, #192
	lsl r0, r0, #6
	mov r4, r10
	orr r0, r0, r4
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r7
	ldrh r1, [r6, #14]
	strh r1, [r0]
	mov r0, #128
	lsl r0, r0, #1
	add r12, r12, r0
	ldr r1, _0807BEE0  @ =gUnknown_03002B98
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0807BEAE
	b _0807BD7A
_0807BEAE:
	ldr r2, _0807BEE4  @ =0xFFFFFE08
	add r12, r12, r2
	ldr r3, _0807BEE8  @ =gUnknown_03002BA4
	ldrh r0, [r3]
	sub r0, r0, #1
	strh r0, [r3]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0807BEC2
	b _0807BD74
_0807BEC2:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807BED4:
	.4byte gRam
_0807BED8:
	.4byte 0x00000974
_0807BEDC:
	.4byte gUnknown_02018000
_0807BEE0:
	.4byte gUnknown_03002B98
_0807BEE4:
	.4byte 0xFFFFFE08
_0807BEE8:
	.4byte gUnknown_03002BA4
	THUMB_FUNC_END sub_0807BD4C

