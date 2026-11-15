	THUMB_FUNC_START sub_080D4FAC
sub_080D4FAC: @ 0x080D4FAC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D5056
	mov r2, #5
	add r6, sp, #4
	ldr r0, _080D5068  @ =0x00000969
	ldr r1, _080D506C  @ =gRam
	add r0, r0, r1
	mov r10, r0
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r1
	mov r9, r3
_080D4FE4:
	ldr r0, _080D5070  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080D5074  @ =gUnknown_08175084
	lsl r5, r2, #24
	asr r5, r5, #24
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r4, r9
	ldrh r4, [r4]
	add r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r7, _080D506C  @ =gRam
	ldr r2, _080D5078  @ =0x00000964
	add r3, r7, r2
	ldr r2, _080D507C  @ =gUnknown_0817508A
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080D5080  @ =gUnknown_08175090
	add r3, r5, r3
	ldrb r3, [r3]
	mov r7, r10
	mov r4, #0
	ldrsb r4, [r7, r4]
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
	sub r5, r5, #1
	lsl r5, r5, #24
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r2, r5, #24
	cmp r5, #0
	bge _080D4FE4
	mov r0, r8
	mov r1, #0
	mov r2, #5
	bl sub_080C6350
_080D5056:
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
_080D5068:
	.4byte 0x00000969
_080D506C:
	.4byte gRam
_080D5070:
	.4byte gUnknown_03003E74
_080D5074:
	.4byte gUnknown_08175084
_080D5078:
	.4byte 0x00000964
_080D507C:
	.4byte gUnknown_0817508A
_080D5080:
	.4byte gUnknown_08175090
	THUMB_FUNC_END sub_080D4FAC

