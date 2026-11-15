	THUMB_FUNC_START sub_080F8F70
sub_080F8F70: @ 0x080F8F70
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r1, _080F8FA4  @ =gRam
	ldr r2, _080F8FA8  @ =0x000010A2
	add r0, r1, r2
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F9052
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #3
	beq _080F8FB0
	ldr r3, _080F8FAC  @ =0x00000964
	add r0, r1, r3
	strb r2, [r0]
	b _080F8FC0
	.byte 0x00
	.byte 0x00
_080F8FA4:
	.4byte gRam
_080F8FA8:
	.4byte 0x000010A2
_080F8FAC:
	.4byte 0x00000964
_080F8FB0:
	ldr r4, _080F9064  @ =0x00001002
	add r0, r1, r4
	add r0, r0, r8
	ldrb r0, [r0]
	add r0, r0, #2
	ldr r5, _080F9068  @ =0x00000964
	add r1, r1, r5
	strb r0, [r1]
_080F8FC0:
	mov r0, #16
	bl sub_080CF3A0
	mov r0, #3
	mov r7, #0
	ldr r1, _080F906C  @ =gRam
	mov r10, r1
	ldr r2, _080F9068  @ =0x00000964
	add r2, r2, r10
	mov r9, r2
_080F8FD4:
	mov r3, r9
	ldrb r4, [r3]
	lsl r4, r4, #2
	lsl r6, r0, #24
	asr r6, r6, #24
	orr r4, r4, r6
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080F9070  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080F9074  @ =0x000015F9
	add r2, r2, r10
	ldr r1, _080F9078  @ =gUnknown_0817A254
	add r1, r4, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F907C  @ =gUnknown_0817A268
	add r2, r4, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldr r5, _080F9080  @ =gUnknown_0300382A
	ldrb r5, [r5]
	add r2, r2, r5
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080F9084  @ =gUnknown_0817A27C
	add r4, r4, r3
	ldrb r3, [r4]
	ldr r4, _080F9088  @ =gUnknown_0817A290
	mov r12, r4
	mov r5, r9
	mov r4, #0
	ldrsb r4, [r5, r4]
	add r4, r4, r12
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	lsl r6, r6, #24
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsr r0, r6, #24
	cmp r6, #0
	bge _080F8FD4
	mov r0, r8
	mov r1, #0
	mov r2, #3
	bl sub_080C6350
_080F9052:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F9064:
	.4byte 0x00001002
_080F9068:
	.4byte 0x00000964
_080F906C:
	.4byte gRam
_080F9070:
	.4byte gUnknown_03003E74
_080F9074:
	.4byte 0x000015F9
_080F9078:
	.4byte gUnknown_0817A254
_080F907C:
	.4byte gUnknown_0817A268
_080F9080:
	.4byte gUnknown_0300382A
_080F9084:
	.4byte gUnknown_0817A27C
_080F9088:
	.4byte gUnknown_0817A290
	THUMB_FUNC_END sub_080F8F70

