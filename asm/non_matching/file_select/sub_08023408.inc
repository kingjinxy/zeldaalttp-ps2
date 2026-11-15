	THUMB_FUNC_START sub_08023408
sub_08023408: @ 0x08023408
	push {r4,r5,lr}
	mov r12, r0
	mov r3, #1
	mov r4, #1
	strb r4, [r0, #20]
	mov r0, #32
	mov r1, r12
	strb r0, [r1, #23]
	ldrb r1, [r1, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	orr r0, r0, r3
	mov r1, r12
	strb r0, [r1, #28]
	mov r0, #128
	str r0, [r1, #12]
	mov r5, r12
	add r5, r5, #117
	ldrb r0, [r5]
	eor r0, r0, r3
	lsl r0, r0, #4
	add r0, r0, #8
	add r1, r1, #43
	strb r0, [r1]
	ldr r1, _08023474  @ =gUnknown_0813BE2C
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r3, r12
	ldrh r3, [r3, #50]
	add r0, r0, r3
	mov r1, r12
	strh r0, [r1, #50]
	strb r4, [r1, #26]
	ldr r0, _08023478  @ =gUnknown_0813C0B8
	str r0, [r1, #72]
	add r1, r1, #94
	ldrb r0, [r1]
	and r2, r2, r0
	strb r2, [r1]
	ldrb r1, [r5]
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, r12
	bl 0x08003870
	pop {r4,r5}
	pop {r0}
	bx r0
_08023474:
	.4byte gUnknown_0813BE2C
_08023478:
	.4byte gUnknown_0813C0B8
	THUMB_FUNC_END sub_08023408

