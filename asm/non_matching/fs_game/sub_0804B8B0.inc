	THUMB_FUNC_START sub_0804B8B0
sub_0804B8B0: @ 0x0804B8B0
	push {r4,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804B98C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	add r1, r0, #0
	add r1, r1, #124
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #158
	bhi _0804B98C
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0804B94C
	mov r0, #17
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804B94A
	ldr r0, [r7, #4]
	ldrb r1, [r0, #11]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #11]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	str r2, [r0, #84]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	mov r0, #180
	bl sub_08003DFC
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804BAF6
_0804B94A:
	b _0804B98C
_0804B94C:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #0
	bne _0804B98C
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #112
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0804B98C:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r2, #1
	and r1, r1, r2
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r1, #0
	beq _0804B9B4
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #24
	lsr r1, r3, #28
	b _0804B9B6
_0804B9B4:
	mov r1, #3
_0804B9B6:
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldr r2, [r7]
	ldr r3, [r2, #84]
	add r2, r3, #0
	add r3, r3, #115
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, _0804BB00  @ =gUnknown_0813E4CC
	add r3, r7, #0
	add r3, r3, #8
	ldrb r4, [r3]
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r2, r4
	mov r4, #0
	ldrsh r2, [r3, r4]
	ldr r3, [r7]
	ldr r4, [r3, #84]
	add r3, r4, #0
	add r4, r4, #114
	ldrb r3, [r4]
	mul r2, r3, r2
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
	ldr r2, _0804BB00  @ =gUnknown_0813E4CC
	add r3, r7, #0
	add r3, r3, #8
	ldrb r4, [r3]
	add r3, r4, #0
	add r3, r3, #64
	add r4, r3, #0
	lsl r3, r4, #1
	add r4, r2, r3
	mov r3, #0
	ldrsh r2, [r4, r3]
	ldr r3, [r7]
	ldr r4, [r3, #84]
	add r3, r4, #0
	add r4, r4, #114
	ldrb r3, [r4]
	mul r2, r3, r2
	asr r3, r2, #8
	ldrh r1, [r1, #54]
	add r2, r3, #0
	sub r1, r1, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldr r1, _0804BB04  @ =gUnknown_084287E0
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	lsr r2, r3, #3
	add r3, r2, #0
	mov r4, #3
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	add r1, r2, #0
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #58]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	cmp r0, #255
	bne _0804BAF6
	mov r0, #17
	bl sub_08012494
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804BAF6
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803CECC
	ldr r1, [r7, #4]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7]
	bl DeleteThisEntity
_0804BAF6:
	add sp, sp, #12
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804BB00:
	.4byte gUnknown_0813E4CC
_0804BB04:
	.4byte gUnknown_084287E0
	THUMB_FUNC_END sub_0804B8B0

