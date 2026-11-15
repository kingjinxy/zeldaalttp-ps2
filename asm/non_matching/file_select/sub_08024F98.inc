	THUMB_FUNC_START sub_08024F98
sub_08024F98: @ 0x08024F98
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #43
	add r0, r0, r5
	mov r12, r0
	ldrb r0, [r0]
	add r0, r0, #1
	mov r1, r12
	strb r0, [r1]
	ldr r4, [r5, #84]
	ldr r3, _08024FE8  @ =gUnknown_0813E4CC
	ldrb r0, [r1]
	lsl r0, r0, #1
	add r0, r0, r3
	mov r2, #0
	ldrsh r1, [r0, r2]
	add r2, r5, #0
	add r2, r2, #124
	ldrh r0, [r2]
	mul r0, r1, r0
	asr r0, r0, #8
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r5, #50]
	mov r1, r12
	ldrb r0, [r1]
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r3
	mov r3, #0
	ldrsh r1, [r0, r3]
	ldrh r0, [r2]
	mul r1, r0, r1
	asr r1, r1, #8
	ldrh r0, [r4, #54]
	sub r0, r0, r1
	strh r0, [r5, #54]
	pop {r4,r5}
	pop {r0}
	bx r0
_08024FE8:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08024F98

