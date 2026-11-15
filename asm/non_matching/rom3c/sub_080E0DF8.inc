	THUMB_FUNC_START sub_080E0DF8
sub_080E0DF8: @ 0x080E0DF8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
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
	bne _080E0EE8
	add r0, sp, #4
	mov r1, #1
	strb r1, [r0]
	mov r2, #4
	ldr r0, _080E0E50  @ =gRam
	mov r9, r0
	ldr r0, _080E0E54  @ =0x00000F72
	add r0, r0, r9
	add r0, r0, r8
	str r0, [sp, #8]
	ldr r3, _080E0E58  @ =0x00000964
	add r3, r3, r9
	mov r10, r3
	mov r6, sp
	add r6, r6, #4
	str r6, [sp, #12]
_080E0E3C:
	lsl r0, r2, #24
	asr r1, r0, #24
	add r2, r0, #0
	cmp r1, #4
	beq _080E0E6C
	cmp r1, #3
	beq _080E0E60
	ldr r0, _080E0E5C  @ =gUnknown_08176850
	add r0, r1, r0
	b _080E0E76
_080E0E50:
	.4byte gRam
_080E0E54:
	.4byte 0x00000F72
_080E0E58:
	.4byte 0x00000964
_080E0E5C:
	.4byte gUnknown_08176850
_080E0E60:
	ldr r1, _080E0E68  @ =gUnknown_0817685A
	ldr r7, [sp, #8]
	ldrb r0, [r7]
	b _080E0E72
_080E0E68:
	.4byte gUnknown_0817685A
_080E0E6C:
	ldr r1, _080E0EF8  @ =gUnknown_08176860
	ldr r3, [sp, #8]
	ldrb r0, [r3]
_080E0E72:
	sub r0, r0, #1
	add r0, r0, r1
_080E0E76:
	ldrb r4, [r0]
	ldr r0, _080E0EFC  @ =gUnknown_08176855
	asr r5, r2, #24
	add r0, r5, r0
	ldrb r3, [r0]
	cmp r4, #235
	bls _080E0E88
	mov r0, #254
	and r3, r3, r0
_080E0E88:
	ldr r0, _080E0F00  @ =gUnknown_03003E74
	ldr r6, [sp, #12]
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080E0F04  @ =gUnknown_08176846
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080E0F08  @ =gUnknown_0817684B
	add r2, r5, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	mov r7, r10
	ldrh r7, [r7]
	add r2, r2, r7
	lsl r2, r2, #16
	lsr r2, r2, #16
	lsl r3, r3, #8
	add r3, r4, r3
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r1, r5, #1
	lsl r1, r1, #24
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r2, r1, #24
	cmp r1, #0
	bge _080E0E3C
	mov r0, r8
	bl sub_080EAAF0
_080E0EE8:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E0EF8:
	.4byte gUnknown_08176860
_080E0EFC:
	.4byte gUnknown_08176855
_080E0F00:
	.4byte gUnknown_03003E74
_080E0F04:
	.4byte gUnknown_08176846
_080E0F08:
	.4byte gUnknown_0817684B
	THUMB_FUNC_END sub_080E0DF8

