	THUMB_FUNC_START sub_080261A0
sub_080261A0: @ 0x080261A0
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080261FC  @ =gUnknown_0813C624
	mov r2, #43
	add r2, r2, r4
	mov r12, r2
	ldrb r5, [r2]
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mul r0, r1, r0
	cmp r0, #0
	bge _080261C2
	add r0, r0, #15
_080261C2:
	ldr r3, [r4, #84]
	lsl r1, r0, #20
	asr r1, r1, #24
	ldr r2, _08026200  @ =gUnknown_0813E4CC
	lsl r0, r5, #4
	add r0, r0, r2
	mov r5, #0
	ldrsh r0, [r0, r5]
	mul r0, r1, r0
	asr r0, r0, #8
	ldrh r5, [r3, #50]
	add r0, r0, r5
	strh r0, [r4, #50]
	mov r5, r12
	ldrb r0, [r5]
	lsl r0, r0, #4
	add r0, r0, #128
	add r0, r0, r2
	mov r2, #0
	ldrsh r0, [r0, r2]
	mul r1, r0, r1
	asr r1, r1, #8
	add r1, r1, #8
	ldrh r0, [r3, #54]
	sub r0, r0, r1
	strh r0, [r4, #54]
	pop {r4,r5}
	pop {r0}
	bx r0
_080261FC:
	.4byte gUnknown_0813C624
_08026200:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_080261A0

