	THUMB_FUNC_START sub_08025A60
sub_08025A60: @ 0x08025A60
	push {r4,r5,lr}
	add r4, r0, #0
	mov r3, #0
	mov r0, #2
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _08025AC4  @ =gUnknown_0813C46C
	sub r2, r2, #18
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r5, [r4, #50]
	add r0, r0, r5
	strh r0, [r4, #50]
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r0, r0, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #54]
	add r0, r0, r1
	strh r0, [r4, #54]
	str r3, [r4, #84]
	ldrb r1, [r2]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
	ldr r1, _08025AC8  @ =gUnknown_0813C474
	ldrb r0, [r4, #10]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	bl 0x08003DFC
	pop {r4,r5}
	pop {r0}
	bx r0
_08025AC4:
	.4byte gUnknown_0813C46C
_08025AC8:
	.4byte gUnknown_0813C474
	THUMB_FUNC_END sub_08025A60

