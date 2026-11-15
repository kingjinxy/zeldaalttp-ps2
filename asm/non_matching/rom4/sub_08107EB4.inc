	THUMB_FUNC_START sub_08107EB4
sub_08107EB4: @ 0x08107EB4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #24
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #12]
	ldr r4, _08107F58  @ =gRam
	ldr r1, _08107F5C  @ =0x00001082
	add r0, r4, r1
	ldr r2, [sp, #12]
	add r0, r2, r0
	ldrb r1, [r0]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08107EDE
	b _081082FA
_08107EDE:
	ldr r3, _08107F60  @ =0x00000F52
	add r0, r4, r3
	ldr r7, [sp, #12]
	add r5, r7, r0
	ldrb r1, [r5]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08107EFE
	ldr r1, _08107F64  @ =0x00000D94
	add r0, r4, r1
	add r0, r7, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
_08107EFE:
	ldr r2, _08107F68  @ =0x00000F92
	add r0, r4, r2
	ldr r3, [sp, #12]
	add r0, r3, r0
	ldrb r1, [r0]
	lsl r1, r1, #5
	ldr r0, _08107F6C  @ =gUnknown_0817BFFC
	add r1, r1, r0
	add r0, r3, #0
	mov r2, #4
	bl sub_080C9480
	ldr r7, _08107F70  @ =0x00000969
	add r2, r4, r7
	ldrb r1, [r2]
	mov r0, #17
	neg r0, r0
	and r0, r0, r1
	strb r0, [r2]
	ldrb r0, [r5]
	add r1, sp, #8
	mov r9, r1
	cmp r0, #3
	beq _08107F30
	b _081080B4
_08107F30:
	ldr r2, _08107F74  @ =0x00000F62
	add r1, r4, r2
	ldr r3, [sp, #12]
	add r1, r3, r1
	ldr r7, _08107F78  @ =0x00000EE2
	add r0, r4, r7
	add r0, r3, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	mov r2, #151
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	lsl r0, r1, #24
	cmp r0, #0
	blt _08107F80
	ldr r3, _08107F7C  @ =0x00000974
	add r0, r4, r3
	b _08107F86
_08107F58:
	.4byte gRam
_08107F5C:
	.4byte 0x00001082
_08107F60:
	.4byte 0x00000F52
_08107F64:
	.4byte 0x00000D94
_08107F68:
	.4byte 0x00000F92
_08107F6C:
	.4byte gUnknown_0817BFFC
_08107F70:
	.4byte 0x00000969
_08107F74:
	.4byte 0x00000F62
_08107F78:
	.4byte 0x00000EE2
_08107F7C:
	.4byte 0x00000974
_08107F80:
	neg r1, r1
	ldr r7, _08107FB0  @ =0x00000974
	add r0, r4, r7
_08107F86:
	strb r1, [r0]
	ldr r2, _08107FB4  @ =gRam
	ldr r0, _08107FB8  @ =0x00000F82
	add r1, r2, r0
	ldr r3, [sp, #12]
	add r1, r3, r1
	ldr r4, _08107FBC  @ =0x00000ED2
	add r0, r2, r4
	add r0, r3, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r1, r1, r0
	ldr r7, _08107FC0  @ =0x00000971
	add r0, r2, r7
	strb r1, [r0]
	lsl r0, r1, #24
	cmp r0, #0
	blt _08107FC8
	ldr r3, _08107FC4  @ =0x00000975
	add r0, r2, r3
	b _08107FCE
_08107FB0:
	.4byte 0x00000974
_08107FB4:
	.4byte gRam
_08107FB8:
	.4byte 0x00000F82
_08107FBC:
	.4byte 0x00000ED2
_08107FC0:
	.4byte 0x00000971
_08107FC4:
	.4byte 0x00000975
_08107FC8:
	neg r1, r1
	ldr r4, _08108134  @ =0x00000975
	add r0, r2, r4
_08107FCE:
	strb r1, [r0]
	ldr r1, _08108138  @ =gRam
	ldr r7, _0810813C  @ =0x000015F9
	add r2, r1, r7
	mov r0, #7
	strb r0, [r2]
	ldr r0, _08108140  @ =0x000015FA
	add r3, r1, r0
	mov r0, #4
	strb r0, [r3]
	add r4, sp, #8
	mov r9, r4
	add r5, r1, #0
	add r7, r2, #0
	mov r0, #1
	mov r8, r0
	ldr r1, _08108144  @ =0x00000969
	add r1, r1, r5
	mov r10, r1
	add r6, r3, #0
_08107FF6:
	ldr r2, _08108148  @ =0x00000974
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r1, _0810814C  @ =gUnknown_0817C1AD
	ldrb r0, [r7]
	add r0, r0, r1
	ldrb r4, [r0]
	add r0, r2, #0
	mul r0, r4, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	mov r3, r8
	and r0, r0, r3
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r3, r1, #24
	mov r1, #151
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0810802E
	lsl r0, r3, #24
	neg r0, r0
	lsr r3, r0, #24
_0810802E:
	ldr r2, _08108134  @ =0x00000975
	add r0, r5, r2
	ldrb r0, [r0]
	mul r0, r4, r0
	lsl r0, r0, #16
	lsr r1, r0, #24
	lsr r0, r0, #23
	mov r4, r8
	and r0, r0, r4
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r4, r1, #24
	ldr r1, _08108150  @ =0x00000971
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0810805A
	lsl r0, r4, #24
	neg r0, r0
	lsr r4, r0, #24
_0810805A:
	ldr r0, _08108154  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r2, r5, r1
	lsl r1, r3, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _08108158  @ =0x00000964
	add r3, r5, r2
	lsl r2, r4, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r4, r10
	mov r3, #0
	ldrsb r3, [r4, r3]
	lsl r3, r3, #8
	mov r4, #72
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrb r1, [r7]
	sub r1, r1, #1
	strb r1, [r7]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	beq _08107FF6
_081080B4:
	ldr r1, _08108154  @ =gUnknown_03003E74
	mov r0, #124
	strh r0, [r1]
	ldr r2, _08108138  @ =gRam
	ldr r7, _0810815C  @ =0x00000F62
	add r0, r2, r7
	ldr r1, [sp, #12]
	add r0, r1, r0
	ldr r3, _08108160  @ =0x00000952
	add r1, r2, r3
	ldrb r1, [r1]
	ldrb r0, [r0]
	sub r0, r0, r1
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	strb r0, [r1]
	add r7, r7, #32
	add r0, r2, r7
	ldr r1, [sp, #12]
	add r0, r1, r0
	ldrb r1, [r0]
	ldr r3, _08108164  @ =0x00000EF2
	add r0, r2, r3
	ldr r4, [sp, #12]
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r7, _08108168  @ =0x00000958
	add r0, r2, r7
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r3, _08108158  @ =0x00000964
	add r0, r2, r3
	strh r1, [r0]
	mov r4, #0
	mov r10, r4
	ldr r7, _0810813C  @ =0x000015F9
	add r1, r2, r7
	mov r0, #1
	strb r0, [r1]
	add r7, sp, #4
	ldr r3, _0810816C  @ =0x00001052
	add r0, r2, r3
	ldr r4, [sp, #12]
	add r0, r4, r0
	str r0, [sp, #16]
	mov r0, r9
	str r0, [sp, #20]
_08108118:
	ldr r1, _08108138  @ =gRam
	ldr r2, _08108170  @ =0x00000F22
	add r0, r1, r2
	ldr r3, [sp, #12]
	add r0, r3, r0
	ldrb r0, [r0]
	add r0, r0, #3
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #6
	bhi _08108174
	mov r0, #0
	b _0810817E
	.byte 0x00
	.byte 0x00
_08108134:
	.4byte 0x00000975
_08108138:
	.4byte gRam
_0810813C:
	.4byte 0x000015F9
_08108140:
	.4byte 0x000015FA
_08108144:
	.4byte 0x00000969
_08108148:
	.4byte 0x00000974
_0810814C:
	.4byte gUnknown_0817C1AD
_08108150:
	.4byte 0x00000971
_08108154:
	.4byte gUnknown_03003E74
_08108158:
	.4byte 0x00000964
_0810815C:
	.4byte 0x00000F62
_08108160:
	.4byte 0x00000952
_08108164:
	.4byte 0x00000EF2
_08108168:
	.4byte 0x00000958
_0810816C:
	.4byte 0x00001052
_08108170:
	.4byte 0x00000F22
_08108174:
	ldr r4, [sp, #16]
	ldrb r0, [r4]
	lsr r0, r0, #2
	mov r1, #15
	and r0, r0, r1
_0810817E:
	strb r0, [r7]
	ldrb r0, [r7]
	add r0, r0, #8
	mov r2, #15
	and r0, r0, r2
	strb r0, [r7, #1]
	ldr r3, [sp, #16]
	ldrb r0, [r3]
	lsr r0, r0, #2
	and r0, r0, r2
	ldr r4, [sp, #20]
	strb r0, [r4]
	add r0, r0, #8
	and r0, r0, r2
	strb r0, [r4, #1]
	ldr r1, _0810830C  @ =gUnknown_0817C1B5
	ldr r0, _08108310  @ =gUnknown_03003829
	ldrb r3, [r0]
	mov r0, #1
	sub r0, r0, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r2, _08108314  @ =gUnknown_03002B90
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _08108318  @ =gUnknown_0817C1B9
	add r0, sp, r0
	add r0, r0, #4
	ldrb r0, [r0]
	add r0, r0, r2
	mov r6, #0
	ldrsb r6, [r0, r6]
	add r6, r6, r1
	lsl r6, r6, #16
	lsr r6, r6, #16
	ldr r4, _0810831C  @ =gRam
	ldr r1, _08108320  @ =0x00000964
	add r0, r4, r1
	ldrh r1, [r0]
	sub r1, r1, #8
	ldr r2, _08108324  @ =gUnknown_0817C1C9
	ldr r4, [sp, #20]
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, r2
	mov r4, #0
	ldrsb r4, [r0, r4]
	add r4, r4, r1
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldr r0, _08108328  @ =gUnknown_0817C1B7
	add r3, r3, r0
	ldrb r0, [r3]
	ldr r1, _0810832C  @ =gUnknown_03002B99
	ldrb r5, [r1]
	orr r5, r5, r0
	ldr r2, _08108330  @ =gUnknown_03003E74
	mov r8, r2
	ldrh r0, [r2]
	add r0, r0, r10
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r5, r5, #8
	mov r1, #12
	add r3, r5, #0
	orr r3, r3, r1
	mov r1, #2
	mov r9, r1
	str r1, [sp]
	add r1, r6, #0
	add r2, r4, #0
	bl sub_080C6004
	mov r0, r10
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	mov r2, r8
	ldrh r0, [r2]
	add r0, r0, r10
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r4, r4, #16
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r1, #74
	orr r5, r5, r1
	mov r3, r9
	str r3, [sp]
	add r1, r6, #0
	add r2, r4, #0
	add r3, r5, #0
	bl sub_080C6004
	mov r0, r10
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	ldr r4, _08108310  @ =gUnknown_03003829
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0810825C
	b _08108118
_0810825C:
	ldr r0, _08108334  @ =gUnknown_02010992
	ldrb r0, [r0]
	lsl r1, r0, #2
	add r0, r0, r1
	ldr r7, _08108314  @ =gUnknown_03002B90
	strb r0, [r7, #12]
	mov r0, #0
	ldr r1, _08108338  @ =0xFFFFF6A0
	add r6, r7, r1
	ldr r2, _0810833C  @ =0x00000969
	add r2, r2, r6
	mov r8, r2
_08108274:
	ldr r3, _08108340  @ =0x0000096C
	add r3, r3, r6
	mov r9, r3
	ldrb r3, [r3]
	lsl r5, r0, #24
	asr r5, r5, #24
	add r3, r5, r3
	lsl r3, r3, #24
	add r0, r5, #0
	add r0, r0, #91
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r4, #150
	lsl r4, r4, #4
	add r2, r6, r4
	ldr r1, _08108344  @ =gUnknown_0817C11C
	lsr r3, r3, #23
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r7, _08108320  @ =0x00000964
	add r4, r6, r7
	ldr r2, _08108348  @ =gUnknown_0817C162
	add r3, r3, r2
	ldrh r2, [r4]
	ldrh r3, [r3]
	sub r2, r2, r3
	ldr r3, _0810834C  @ =gUnknown_02010997
	ldr r4, _08108350  @ =0x0000FFE0
	add r2, r2, r4
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _08108354  @ =gUnknown_0817C1A8
	add r3, r5, r3
	ldrb r3, [r3]
	mov r7, r8
	mov r4, #0
	ldrsb r4, [r7, r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	add r5, r5, #1
	lsl r5, r5, #24
	lsr r0, r5, #24
	asr r5, r5, #24
	cmp r5, #5
	bne _08108274
	mov r0, r9
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #0
	beq _081082FA
	ldr r0, [sp, #12]
	mov r1, #2
	mov r2, #3
	bl sub_080C6350
_081082FA:
	add sp, sp, #24
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810830C:
	.4byte gUnknown_0817C1B5
_08108310:
	.4byte gUnknown_03003829
_08108314:
	.4byte gUnknown_03002B90
_08108318:
	.4byte gUnknown_0817C1B9
_0810831C:
	.4byte gRam
_08108320:
	.4byte 0x00000964
_08108324:
	.4byte gUnknown_0817C1C9
_08108328:
	.4byte gUnknown_0817C1B7
_0810832C:
	.4byte gUnknown_03002B99
_08108330:
	.4byte gUnknown_03003E74
_08108334:
	.4byte gUnknown_02010992
_08108338:
	.4byte 0xFFFFF6A0
_0810833C:
	.4byte 0x00000969
_08108340:
	.4byte 0x0000096C
_08108344:
	.4byte gUnknown_0817C11C
_08108348:
	.4byte gUnknown_0817C162
_0810834C:
	.4byte gUnknown_02010997
_08108350:
	.4byte 0x0000FFE0
_08108354:
	.4byte gUnknown_0817C1A8
	THUMB_FUNC_END sub_08107EB4

