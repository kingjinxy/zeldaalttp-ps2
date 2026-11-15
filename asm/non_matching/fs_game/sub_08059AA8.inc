	THUMB_FUNC_START sub_08059AA8
sub_08059AA8: @ 0x08059AA8
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	add r2, r0, #0
	lsl r1, r2, #2
	add r1, r1, r0
	lsl r0, r1, #2
	ldr r1, _08059BC8  @ =gUnknown_08429004
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #4
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	add r0, r2, #6
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #125
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r0, r0, #8
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #124
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r0, r0, #10
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #123
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r0, r0, #12
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #122
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7]
	ldr r2, [r7, #4]
	add r0, r2, #0
	add r0, r0, #14
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #121
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldr r2, _08059BCC  @ =gUnknown_030004A0
	add r1, r2, #0
	add r2, r2, #96
	ldrh r1, [r2]
	mov r2, #255
	lsl r2, r2, #8
	and r1, r1, r2
	ldr r3, [r7, #4]
	add r2, r3, #0
	add r2, r2, #16
	ldrh r2, [r2]
	orr r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r0, [r1]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r1, r1, #18
	ldrh r2, [r1]
	add r1, r2, #0
	bl sub_0800CA84
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_08059BC8:
	.4byte gUnknown_08429004
_08059BCC:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_08059AA8

