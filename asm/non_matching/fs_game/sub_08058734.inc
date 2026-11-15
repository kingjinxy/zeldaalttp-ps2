	THUMB_FUNC_START sub_08058734
sub_08058734: @ 0x08058734
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, _080587B4  @ =gUnknown_02016D60
	ldrb r0, [r1, #9]
	ldr r1, _080587B8  @ =gUnknown_0813E4CC
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #96
	ldrb r2, [r3]
	add r3, r2, #0
	add r3, r3, #64
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	mov r3, #0
	ldrsh r2, [r1, r3]
	mul r0, r2, r0
	asr r1, r0, #8
	add r0, r1, #0
	add r0, r0, #120
	str r0, [r7, #4]
	ldr r1, _080587B4  @ =gUnknown_02016D60
	ldrb r0, [r1, #9]
	ldr r1, _080587B8  @ =gUnknown_0813E4CC
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #96
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	mov r3, #0
	ldrsh r2, [r1, r3]
	mul r0, r2, r0
	asr r1, r0, #8
	add r0, r1, #0
	add r0, r0, #104
	str r0, [r7, #8]
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldr r2, [r7, #8]
	add r1, r2, #0
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_080587B4:
	.4byte gUnknown_02016D60
_080587B8:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08058734

