	THUMB_FUNC_START sub_08047538
sub_08047538: @ 0x08047538
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #115
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #125
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #115
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, _080475CC  @ =gUnknown_0813E4CC
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #110
	ldrh r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	mov r3, #0
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	lsl r2, r1, #5
	asr r1, r2, #8
	add r2, r1, #0
	add r1, r2, #0
	add r1, r1, #32
	add r2, r0, #0
	add r0, r0, #114
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #110
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #110
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_080475CC:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08047538

