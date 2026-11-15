	THUMB_FUNC_START sub_080F5280
sub_080F5280: @ 0x080F5280
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r0, #32
	bl sub_080CF388
	mov r4, sp
	add r4, r4, #5
	add r0, sp, #4
	add r1, r4, #0
	mov r2, r8
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F531A
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F531A
	mov r2, #5
	add r6, sp, #4
	ldr r7, _080F5328  @ =gUnknown_03002B94
	sub r0, r7, #4
	mov r9, r0
_080F52BA:
	ldr r0, _080F532C  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080F5330  @ =gUnknown_08179870
	lsl r5, r2, #24
	asr r5, r5, #24
	add r1, r5, r1
	ldrb r2, [r1]
	mov r3, r9
	ldrh r1, [r3]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F5334  @ =gUnknown_08179876
	add r2, r5, r2
	ldrb r3, [r2]
	ldrh r2, [r7]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080F5338  @ =gUnknown_0817987C
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080F533C  @ =gUnknown_08179882
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
	sub r5, r5, #1
	lsl r5, r5, #24
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r2, r5, #24
	cmp r5, #0
	bge _080F52BA
	mov r0, r8
	mov r1, #2
	mov r2, #5
	bl sub_080C6350
_080F531A:
	add sp, sp, #8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080F5328:
	.4byte gUnknown_03002B94
_080F532C:
	.4byte gUnknown_03003E74
_080F5330:
	.4byte gUnknown_08179870
_080F5334:
	.4byte gUnknown_08179876
_080F5338:
	.4byte gUnknown_0817987C
_080F533C:
	.4byte gUnknown_08179882
	THUMB_FUNC_END sub_080F5280

