	THUMB_FUNC_START sub_0811B50C
sub_0811B50C: @ 0x0811B50C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, _0811B60C  @ =gRam
	mov r8, r0
	ldr r1, _0811B610  @ =gUnknown_03003E74
	mov r10, r1
	ldr r2, _0811B614  @ =0x0000096C
	add r2, r2, r8
	mov r9, r2
_0811B52A:
	ldr r0, _0811B618  @ =gUnknown_0817F5AA
	lsr r1, r6, #1
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r1]
	ldrb r7, [r1]
	lsr r5, r0, #8
	cmp r7, #255
	beq _0811B5E0
	mov r1, #0
	ldr r4, _0811B61C  @ =gUnknown_03003962
	strb r6, [r4]
	ldr r0, _0811B620  @ =0x00001734
	add r0, r0, r8
	strb r1, [r0]
	ldr r0, _0811B624  @ =gUnknown_03003965
	strb r1, [r0]
	mov r1, r9
	ldrb r0, [r1]
	ldr r1, _0811B628  @ =0x00000968
	add r1, r1, r8
	lsl r0, r0, #2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	lsr r0, r0, #25
	lsl r0, r0, #1
	ldr r2, _0811B62C  @ =gUnknown_0817F616
	add r0, r0, r2
	ldr r1, _0811B630  @ =0x00000978
	add r1, r1, r8
	ldrh r1, [r1]
	ldrh r0, [r0]
	add r1, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r8
	strh r1, [r0]
	add r0, r6, #2
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldr r1, _0811B634  @ =0x0000097C
	add r1, r1, r8
	ldrh r1, [r1]
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r0, _0811B638  @ =0x00000964
	add r0, r0, r8
	strh r1, [r0]
	ldrb r6, [r4]
	mov r4, sp
	add r4, r4, #6
	add r0, sp, #4
	add r1, r4, #0
	bl sub_080C1820
	mov r1, r10
	ldrh r0, [r1]
	add r1, sp, #4
	ldrh r1, [r1]
	ldrh r2, [r4]
	mov r3, #193
	and r5, r5, r3
	ldr r3, _0811B63C  @ =0x00001724
	add r3, r3, r8
	ldrb r3, [r3]
	orr r5, r5, r3
	ldr r4, _0811B640  @ =gUnknown_03002BA5
	mov r3, #0
	ldrsb r3, [r4, r3]
	orr r5, r5, r3
	lsl r3, r5, #8
	orr r7, r7, r3
	lsl r3, r7, #16
	lsr r3, r3, #16
	ldr r5, _0811B644  @ =gUnknown_0817F6EE
	lsr r4, r6, #1
	add r4, r4, r5
	ldrb r5, [r4]
	ldr r7, _0811B624  @ =gUnknown_03003965
	ldrb r4, [r7]
	orr r4, r4, r5
	str r4, [sp]
	bl sub_080C6368
	mov r1, r10
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0811B5E0:
	add r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r2, r9
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r4, _0811B648  @ =gUnknown_03002BA0
	mov r1, #0
	ldrsb r1, [r4, r1]
	cmp r0, r1
	bne _0811B52A
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811B60C:
	.4byte gRam
_0811B610:
	.4byte gUnknown_03003E74
_0811B614:
	.4byte 0x0000096C
_0811B618:
	.4byte gUnknown_0817F5AA
_0811B61C:
	.4byte gUnknown_03003962
_0811B620:
	.4byte 0x00001734
_0811B624:
	.4byte gUnknown_03003965
_0811B628:
	.4byte 0x00000968
_0811B62C:
	.4byte gUnknown_0817F616
_0811B630:
	.4byte 0x00000978
_0811B634:
	.4byte 0x0000097C
_0811B638:
	.4byte 0x00000964
_0811B63C:
	.4byte 0x00001724
_0811B640:
	.4byte gUnknown_03002BA5
_0811B644:
	.4byte gUnknown_0817F6EE
_0811B648:
	.4byte gUnknown_03002BA0
	THUMB_FUNC_END sub_0811B50C

