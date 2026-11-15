	THUMB_FUNC_START sub_08022508
sub_08022508: @ 0x08022508
	push {r4,lr}
	mov r12, r0
	ldr r1, [r0, #84]
	ldr r2, _08022568  @ =gUnknown_0813BDA2
	mov r4, r12
	add r4, r4, #114
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r1, #50]
	add r0, r0, r1
	mov r1, r12
	add r1, r1, #116
	mov r3, #0
	strh r0, [r1]
	mov r0, r12
	ldr r1, [r0, #84]
	ldrb r0, [r4]
	lsl r0, r0, #1
	add r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r1, #54]
	add r0, r0, r1
	mov r1, r12
	add r1, r1, #118
	strh r0, [r1]
	mov r1, r12
	strb r3, [r1, #24]
	mov r0, #192
	lsl r0, r0, #2
	str r0, [r1, #12]
	mov r0, #192
	lsl r0, r0, #10
	str r0, [r1, #16]
	mov r0, r12
	mov r1, #11
	bl 0x08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08022568:
	.4byte gUnknown_0813BDA2
	THUMB_FUNC_END sub_08022508

