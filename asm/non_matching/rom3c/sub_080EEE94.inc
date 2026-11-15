	THUMB_FUNC_START sub_080EEE94
sub_080EEE94: @ 0x080EEE94
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r4, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EEF34
	mov r1, #1
	ldr r0, _080EEF44  @ =gRam
	mov r8, r0
	ldr r0, _080EEF48  @ =0x00000F92
	add r0, r0, r8
	add r4, r4, r0
	mov r9, r4
	add r7, sp, #4
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	mov r10, r2
_080EEECE:
	lsl r6, r1, #24
	asr r6, r6, #24
	ldr r0, _080EEF4C  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080EEF50  @ =gUnknown_08178BB4
	lsl r1, r6, #1
	add r1, r1, r2
	ldrh r1, [r1]
	mov r3, r10
	ldrh r3, [r3]
	add r1, r1, r3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080EEF54  @ =0x00000964
	add r2, r2, r8
	ldrh r2, [r2]
	ldr r3, _080EEF58  @ =gUnknown_08178BB8
	mov r5, r9
	ldrb r4, [r5]
	add r3, r4, r3
	ldrb r3, [r3]
	ldr r5, _080EEF5C  @ =gUnknown_08178BBF
	lsl r4, r4, #1
	add r4, r4, r6
	add r4, r4, r5
	ldrb r4, [r4]
	ldr r5, _080EEF60  @ =gUnknown_03002B99
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	lsl r6, r6, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r1, r6, #24
	cmp r6, #0
	bge _080EEECE
_080EEF34:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080EEF44:
	.4byte gRam
_080EEF48:
	.4byte 0x00000F92
_080EEF4C:
	.4byte gUnknown_03003E74
_080EEF50:
	.4byte gUnknown_08178BB4
_080EEF54:
	.4byte 0x00000964
_080EEF58:
	.4byte gUnknown_08178BB8
_080EEF5C:
	.4byte gUnknown_08178BBF
_080EEF60:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_080EEE94

