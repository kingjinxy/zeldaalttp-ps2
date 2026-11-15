	THUMB_FUNC_START sub_080FCA0C
sub_080FCA0C: @ 0x080FCA0C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	ldr r1, _080FCB38  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #19
	strh r0, [r1]
	mov r3, #3
	mov r2, #0
	add r0, sp, #4
	strb r2, [r0]
	add r7, r0, #0
_080FCA30:
	ldrb r0, [r7]
	ldr r1, _080FCB38  @ =gUnknown_03003E74
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080FCB3C  @ =gUnknown_0817A948
	lsl r5, r3, #24
	asr r5, r5, #24
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r10, r1
	ldr r2, _080FCB40  @ =gUnknown_03002B90
	ldrh r1, [r2]
	add r1, r1, r10
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080FCB44  @ =gUnknown_0817A94C
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	mov r8, r2
	ldr r3, _080FCB48  @ =gUnknown_03002B94
	ldrh r2, [r3]
	ldr r4, _080FCB4C  @ =gUnknown_02010990
	add r4, r4, r5
	mov r9, r4
	add r2, r2, r8
	ldrb r3, [r4]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r12, r2
	ldr r3, _080FCB50  @ =gUnknown_0817A950
	add r3, r5, r3
	ldrb r4, [r3]
	ldr r3, _080FCB54  @ =gUnknown_0817A954
	add r3, r5, r3
	ldrb r6, [r3]
	ldr r2, _080FCB58  @ =gUnknown_03002B99
	mov r3, #0
	ldrsb r3, [r2, r3]
	eor r3, r3, r6
	lsl r3, r3, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	str r3, [sp, #12]
	mov r3, #2
	str r3, [sp]
	mov r2, r12
	ldr r3, [sp, #12]
	bl sub_080C6004
	ldrb r0, [r7]
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	strb r0, [r7]
	ldr r1, _080FCB38  @ =gUnknown_03003E74
	ldrh r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080FCB40  @ =gUnknown_03002B90
	ldrh r1, [r2]
	add r1, r1, r10
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	ldr r3, _080FCB48  @ =gUnknown_03002B94
	ldrh r2, [r3]
	add r2, r2, r8
	add r2, r2, #16
	mov r1, r9
	ldrb r1, [r1]
	add r2, r2, r1
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r4, r4, #2
	ldr r3, _080FCB58  @ =gUnknown_03002B99
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	eor r6, r6, r3
	lsl r6, r6, #8
	orr r4, r4, r6
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r1, #2
	str r1, [sp]
	mov r1, r10
	add r3, r4, #0
	bl sub_080C6004
	sub r5, r5, #1
	lsl r5, r5, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r3, r5, #24
	cmp r5, #0
	bge _080FCA30
	ldr r0, _080FCB5C  @ =gRam
	ldr r2, _080FCB60  @ =0x000009AD
	add r0, r0, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FCB26
	ldr r0, [sp, #8]
	mov r1, #2
	mov r2, #7
	bl sub_080C6350
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	ldr r2, [sp, #8]
	bl sub_080C5ACC
_080FCB26:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FCB38:
	.4byte gUnknown_03003E74
_080FCB3C:
	.4byte gUnknown_0817A948
_080FCB40:
	.4byte gUnknown_03002B90
_080FCB44:
	.4byte gUnknown_0817A94C
_080FCB48:
	.4byte gUnknown_03002B94
_080FCB4C:
	.4byte gUnknown_02010990
_080FCB50:
	.4byte gUnknown_0817A950
_080FCB54:
	.4byte gUnknown_0817A954
_080FCB58:
	.4byte gUnknown_03002B99
_080FCB5C:
	.4byte gRam
_080FCB60:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080FCA0C

