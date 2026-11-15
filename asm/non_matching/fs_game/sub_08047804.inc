	THUMB_FUNC_START sub_08047804
sub_08047804: @ 0x08047804
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _080478A4  @ =gUnknown_0813F420
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, _080478A8  @ =gUnknown_0813E4CC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	add r4, r3, #0
	lsl r3, r4, #1
	add r2, r2, r3
	mov r4, #0
	ldrsh r3, [r2, r4]
	mov r4, #44
	add r2, r3, #0
	mul r2, r4, r2
	asr r3, r2, #8
	ldrh r1, [r1, #50]
	add r2, r3, #0
	add r1, r1, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, _080478A8  @ =gUnknown_0813E4CC
	ldr r4, [r7]
	add r3, r4, #0
	add r4, r4, #43
	ldrb r3, [r4]
	add r4, r3, #0
	add r4, r4, #64
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r2, r4
	mov r4, #0
	ldrsh r2, [r3, r4]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #2
	asr r3, r2, #8
	ldrh r1, [r1, #54]
	add r2, r3, #0
	sub r1, r1, r2
	add r2, r1, #0
	sub r1, r2, #4
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080478A4:
	.4byte gUnknown_0813F420
_080478A8:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08047804

