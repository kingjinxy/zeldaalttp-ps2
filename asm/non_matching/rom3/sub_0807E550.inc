	THUMB_FUNC_START sub_0807E550
sub_0807E550: @ 0x0807E550
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r4, r0, #0
	str r1, [sp]
	ldr r5, [r1]
	ldr r1, _0807E5F8  @ =gRam
	ldr r0, _0807E5FC  @ =0x00000974
	add r1, r1, r0
	mov r0, #6
	strh r0, [r1]
	mov r3, #63
	mov r10, r3
	mov r7, #64
	mov r8, r7
	mov r0, #248
	lsl r0, r0, #4
	mov r12, r0
	mov r3, #192
	lsl r3, r3, #6
	mov r9, r3
	add r6, r1, #0
_0807E582:
	add r2, r4, #0
	mov r7, r8
	and r2, r2, r7
	lsl r2, r2, #5
	add r1, r4, #0
	mov r0, r12
	and r1, r1, r0
	asr r1, r1, #1
	mov r0, r9
	mov r3, r10
	orr r0, r0, r3
	and r0, r0, r4
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r7, _0807E600  @ =gUnknown_02018000
	add r0, r0, r7
	ldrh r1, [r5]
	strh r1, [r0]
	add r3, r4, #2
	add r2, r3, #0
	mov r0, r8
	and r2, r2, r0
	lsl r2, r2, #5
	add r1, r3, #0
	mov r7, r12
	and r1, r1, r7
	asr r1, r1, #1
	mov r0, r9
	mov r7, r10
	orr r0, r0, r7
	and r0, r0, r3
	orr r0, r0, r2
	orr r0, r0, r1
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _0807E600  @ =gUnknown_02018000
	add r0, r0, r1
	ldrh r1, [r5, #12]
	strh r1, [r0]
	add r5, r5, #2
	add r4, r4, #128
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0807E582
	ldr r3, [sp]
	str r5, [r3]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0807E5F8:
	.4byte gRam
_0807E5FC:
	.4byte 0x00000974
_0807E600:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_0807E550

