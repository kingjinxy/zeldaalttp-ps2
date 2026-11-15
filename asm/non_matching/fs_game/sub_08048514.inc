	THUMB_FUNC_START sub_08048514
sub_08048514: @ 0x08048514
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _080485A4
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #12
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, _08048664  @ =gUnknown_0813F544
	str r1, [r0, #72]
	ldr r0, [r7]
	mov r1, #6
	bl sub_08003870
_080485A4:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r0, [r0, #48]
	ldr r1, [r2, #48]
	sub r0, r0, r1
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	asr r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	ldr r4, [r7, #4]
	add r2, r3, #0
	mul r2, r4, r2
	ldr r1, [r1, #48]
	add r2, r1, r2
	str r2, [r0, #48]
	ldr r1, [r7]
	ldr r0, [r1, #88]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r0, [r0, #52]
	ldr r1, [r2, #52]
	sub r0, r0, r1
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	asr r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	ldr r4, [r7, #4]
	add r2, r3, #0
	mul r2, r4, r2
	ldr r1, [r1, #52]
	add r2, r1, r2
	str r2, [r0, #52]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r1, r1, #114
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804861C
	b _08048712
_0804861C:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #96
	bne _0804869A
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #2
	bne _08048668
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #4
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08048698
_08048664:
	.4byte gUnknown_0813F544
_08048668:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	add r1, r2, #4
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #6
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08048698:
	b _08048712
_0804869A:
	ldr r0, [r7]
	ldr r1, [r0, #88]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #160
	bne _08048712
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #2
	bne _080486E2
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	sub r1, r2, #2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #4
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _08048712
_080486E2:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #50]
	sub r1, r2, #4
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	sub r1, r2, #6
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_08048712:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08048514

	.byte 0x00
	.byte 0x00
