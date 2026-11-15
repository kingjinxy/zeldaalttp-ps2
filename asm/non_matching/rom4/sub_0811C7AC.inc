	THUMB_FUNC_START sub_0811C7AC
sub_0811C7AC: @ 0x0811C7AC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_080C17A8
	mov r0, #16
	bl sub_080CF388
	mov r6, #0
	ldr r7, _0811C82C  @ =gUnknown_03002B90
	add r0, r7, #4
	mov r8, r0
_0811C7CA:
	ldr r0, _0811C830  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r6
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _0811C834  @ =gUnknown_0817F90A
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r2, r8
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _0811C838  @ =gUnknown_0817F90E
	add r2, r6, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r7]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _0811C83C  @ =gUnknown_0817F902
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _0811C840  @ =gUnknown_0817F906
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #45
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	add r4, sp, #8
	str r4, [sp, #4]
	bl sub_080C63A4
	add r6, r6, #1
	cmp r6, #4
	bne _0811C7CA
	add sp, sp, #12
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0811C82C:
	.4byte gUnknown_03002B90
_0811C830:
	.4byte gUnknown_03003E74
_0811C834:
	.4byte gUnknown_0817F90A
_0811C838:
	.4byte gUnknown_0817F90E
_0811C83C:
	.4byte gUnknown_0817F902
_0811C840:
	.4byte gUnknown_0817F906
	THUMB_FUNC_END sub_0811C7AC

