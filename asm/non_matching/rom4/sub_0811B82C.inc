	THUMB_FUNC_START sub_0811B82C
sub_0811B82C: @ 0x0811B82C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #2
	bne _0811B84C
	ldr r1, _0811B914  @ =gRam
	ldr r0, _0811B918  @ =0x00000964
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #4
	strh r0, [r1]
_0811B84C:
	lsl r0, r7, #25
	lsr r7, r0, #24
	ldr r6, _0811B91C  @ =gUnknown_03003964
	mov r0, #0
	strb r0, [r6]
	strb r0, [r6, #1]
	mov r1, #6
	add r1, sp, r1
	mov r8, r1
	add r0, sp, #4
	bl sub_080C1820
	ldr r3, _0811B920  @ =gUnknown_03003E74
	mov r9, r3
	ldrh r0, [r3]
	add r1, sp, #4
	ldrh r1, [r1]
	mov r4, r8
	ldrh r2, [r4]
	ldr r5, _0811B924  @ =gUnknown_0817F7F8
	mov r10, r5
	add r3, r7, r5
	ldrb r3, [r3]
	ldr r5, _0811B928  @ =gUnknown_0817F806
	add r4, r7, r5
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _0811B92C  @ =gUnknown_03002B98
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldrb r4, [r6, #1]
	str r4, [sp]
	bl sub_080C6368
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r3, _0811B930  @ =0xFFFFF230
	add r1, r6, r3
	ldrh r0, [r1]
	add r0, r0, #8
	mov r2, #0
	strh r0, [r1]
	add r4, r7, #1
	mov r7, r10
	add r5, r4, r7
	ldrb r0, [r5]
	cmp r0, #255
	beq _0811B902
	strb r2, [r6]
	strb r2, [r6, #1]
	add r0, sp, #4
	mov r1, r8
	bl sub_080C1820
	mov r1, r9
	ldrh r0, [r1]
	add r1, sp, #4
	ldrh r1, [r1]
	mov r3, r8
	ldrh r2, [r3]
	ldrb r3, [r5]
	ldr r5, _0811B928  @ =gUnknown_0817F806
	add r4, r4, r5
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r7, _0811B92C  @ =gUnknown_03002B98
	mov r5, #0
	ldrsb r5, [r7, r5]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldrb r4, [r6, #1]
	str r4, [sp]
	bl sub_080C6368
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0811B902:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811B914:
	.4byte gRam
_0811B918:
	.4byte 0x00000964
_0811B91C:
	.4byte gUnknown_03003964
_0811B920:
	.4byte gUnknown_03003E74
_0811B924:
	.4byte gUnknown_0817F7F8
_0811B928:
	.4byte gUnknown_0817F806
_0811B92C:
	.4byte gUnknown_03002B98
_0811B930:
	.4byte 0xFFFFF230
	THUMB_FUNC_END sub_0811B82C

