	THUMB_FUNC_START sub_080E7BD4
sub_080E7BD4: @ 0x080E7BD4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #8]
	ldr r4, _080E7CF0  @ =gRam
	ldr r0, _080E7CF4  @ =0x00001122
	add r1, r4, r0
	ldr r2, [sp, #8]
	add r1, r2, r1
	ldr r2, _080E7CF8  @ =gUnknown_081778DD
	ldr r3, _080E7CFC  @ =0x00000F82
	add r0, r4, r3
	ldr r7, [sp, #8]
	add r0, r7, r0
	ldrb r0, [r0]
	sub r0, r0, #6
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	ldr r2, [sp, #8]
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7CE0
	mov r5, #3
	mov r8, r4
	ldr r0, _080E7D00  @ =0x00000969
	add r0, r0, r8
	mov r10, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	mov r9, r1
_080E7C28:
	ldr r0, _080E7D04  @ =gUnknown_03003E74
	sub r1, r5, #3
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080E7D08  @ =gUnknown_081778CE
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	mov r2, r9
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r6, _080E7D0C  @ =0x00000964
	add r6, r6, r8
	ldr r2, _080E7D10  @ =gUnknown_081778D2
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r6]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080E7D14  @ =gUnknown_081778D6
	add r3, r5, r3
	ldrb r4, [r3]
	mov r7, r10
	ldrb r3, [r7]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #138
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r5, r5, #1
	cmp r5, #0
	bge _080E7C28
	mov r0, #12
	bl sub_080CF388
	ldr r1, _080E7D18  @ =0x0000056E
	add r0, r6, r1
	ldr r2, [sp, #8]
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r3, _080E7D1C  @ =0x0000058E
	add r0, r6, r3
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r0, r6, #0
	sub r0, r0, #12
	ldrh r0, [r0]
	sub r1, r1, r0
	strh r1, [r6]
	mov r5, #2
	sub r7, r6, #4
	add r4, r6, #0
_080E7CAA:
	ldr r0, _080E7D04  @ =gUnknown_03003E74
	sub r1, r5, #2
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080E7D20  @ =gUnknown_081778DA
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r7]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r4]
	add r2, r2, #12
	lsl r2, r2, #16
	lsr r2, r2, #16
	mov r3, #2
	str r3, [sp]
	ldr r3, _080E7D24  @ =0x000024CC
	bl sub_080C6368
	sub r5, r5, #1
	cmp r5, #0
	bge _080E7CAA
_080E7CE0:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E7CF0:
	.4byte gRam
_080E7CF4:
	.4byte 0x00001122
_080E7CF8:
	.4byte gUnknown_081778DD
_080E7CFC:
	.4byte 0x00000F82
_080E7D00:
	.4byte 0x00000969
_080E7D04:
	.4byte gUnknown_03003E74
_080E7D08:
	.4byte gUnknown_081778CE
_080E7D0C:
	.4byte 0x00000964
_080E7D10:
	.4byte gUnknown_081778D2
_080E7D14:
	.4byte gUnknown_081778D6
_080E7D18:
	.4byte 0x0000056E
_080E7D1C:
	.4byte 0x0000058E
_080E7D20:
	.4byte gUnknown_081778DA
_080E7D24:
	.4byte 0x000024CC
	THUMB_FUNC_END sub_080E7BD4

