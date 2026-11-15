	THUMB_FUNC_START sub_0811950C
sub_0811950C: @ 0x0811950C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080C177C
	ldr r0, _08119558  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _0811955C  @ =0x00000968
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08119560  @ =0x00000964
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #4
	add r1, r0, r3
	strh r2, [r1]
	add r3, r3, #4
	add r1, r0, r3
	strh r2, [r1]
	ldr r1, _08119564  @ =0x0000180F
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08119568
	mov r0, #16
	bl sub_080CF370
	b _0811956E
	.byte 0x00
	.byte 0x00
_08119558:
	.4byte gRam
_0811955C:
	.4byte 0x00000968
_08119560:
	.4byte 0x00000964
_08119564:
	.4byte 0x0000180F
_08119568:
	mov r0, #16
	bl sub_080CF388
_0811956E:
	ldr r2, _08119604  @ =gRam
	ldr r3, _08119608  @ =0x0000180F
	add r0, r2, r3
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	asr r7, r0, #31
	mov r0, #4
	and r7, r7, r0
	ldr r0, _0811960C  @ =0x00000974
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
	mov r10, r2
_0811958A:
	ldr r1, _08119610  @ =gUnknown_03003E74
	mov r8, r1
	ldrh r0, [r1]
	ldr r2, _08119614  @ =0x00000964
	add r2, r2, r10
	mov r9, r2
	ldrh r1, [r2]
	ldr r3, _08119618  @ =gUnknown_03002B90
	ldrh r2, [r3]
	ldr r3, _0811961C  @ =gUnknown_0817F3A0
	lsl r6, r7, #1
	add r6, r6, r3
	ldr r5, _08119620  @ =gUnknown_0817F3B0
	add r5, r7, r5
	ldr r3, _08119624  @ =0x00001724
	add r3, r3, r10
	ldrb r3, [r3]
	mov r4, #13
	orr r3, r3, r4
	ldrb r4, [r5]
	orr r3, r3, r4
	lsl r3, r3, #8
	ldrh r4, [r6]
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _08119628  @ =0x0000096C
	add r0, r0, r10
	ldrh r2, [r0]
	add r0, r2, #0
	add r0, r0, #16
	mov r3, r9
	strh r0, [r3]
	ldr r1, _0811960C  @ =0x00000974
	add r1, r1, r10
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _08119630
	cmp r0, #1
	bne _0811958A
	strh r2, [r3]
	ldr r0, _0811962C  @ =0x00000968
	add r0, r0, r10
	ldrh r0, [r0]
	add r0, r0, #8
	ldr r1, _08119618  @ =gUnknown_03002B90
	strh r0, [r1]
	b _0811958A
_08119604:
	.4byte gRam
_08119608:
	.4byte 0x0000180F
_0811960C:
	.4byte 0x00000974
_08119610:
	.4byte gUnknown_03003E74
_08119614:
	.4byte 0x00000964
_08119618:
	.4byte gUnknown_03002B90
_0811961C:
	.4byte gUnknown_0817F3A0
_08119620:
	.4byte gUnknown_0817F3B0
_08119624:
	.4byte 0x00001724
_08119628:
	.4byte 0x0000096C
_0811962C:
	.4byte 0x00000968
_08119630:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0811950C

