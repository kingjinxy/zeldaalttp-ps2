	THUMB_FUNC_START sub_080B60DC
sub_080B60DC: @ 0x080B60DC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r2, _080B6134  @ =gRam
	ldr r1, _080B6138  @ =gUnknown_0816F094
	ldr r0, _080B613C  @ =0x00000979
	add r4, r2, r0
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r0, r0, r1
	ldrb r1, [r0]
	add r3, r1, #0
	sub r3, r3, #51
	ldr r5, _080B6140  @ =0x00000964
	add r0, r2, r5
	strb r3, [r0]
	sub r1, r1, #35
	ldr r7, _080B6144  @ =0x00000965
	add r0, r2, r7
	strb r1, [r0]
	ldr r1, _080B6148  @ =gUnknown_0816F702
	ldr r0, _080B614C  @ =0x00000AB2
	add r2, r2, r0
	ldrh r0, [r2]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldrb r0, [r0]
	lsr r0, r0, #4
	strb r0, [r4]
	mov r0, #15
	and r0, r0, r1
	mov r1, #0
	ldrsb r1, [r4, r1]
	add r0, r0, r1
	cmp r0, #1
	beq _080B6150
	mov r0, #1
	b _080B6152
	.byte 0x00
	.byte 0x00
_080B6134:
	.4byte gRam
_080B6138:
	.4byte gUnknown_0816F094
_080B613C:
	.4byte 0x00000979
_080B6140:
	.4byte 0x00000964
_080B6144:
	.4byte 0x00000965
_080B6148:
	.4byte gUnknown_0816F702
_080B614C:
	.4byte 0x00000AB2
_080B6150:
	mov r0, #0
_080B6152:
	strb r0, [r4]
	ldr r5, _080B6230  @ =gUnknown_03002B91
	add r6, r5, #0
	add r6, r6, #23
	sub r1, r5, #1
	mov r8, r1
	mov r3, #24
	add r3, r3, r5
	mov r9, r3
	mov r7, #6
	mov r10, r7
_080B6168:
	mov r0, #32
	strb r0, [r5]
	mov r0, #3
	strb r0, [r6]
_080B6170:
	mov r0, #0
	ldrsb r0, [r6, r0]
	mov r4, #0
	cmp r0, #0
	bne _080B617C
	mov r4, #1
_080B617C:
	mov r1, r8
	mov r0, #0
	ldrsb r0, [r1, r0]
	mov r1, #0
	ldrsb r1, [r5, r1]
	mov r3, r9
	mov r2, #0
	ldrsb r2, [r3, r2]
	ldr r7, _080B6234  @ =gUnknown_03002B94
	add r2, r2, r7
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	mov r3, #0
	ldrsb r3, [r6, r3]
	lsl r3, r3, #1
	ldr r7, _080B6238  @ =gUnknown_0816F0EA
	add r3, r3, r7
	ldrh r3, [r3]
	mov r12, r3
	mov r3, r10
	str r3, [sp]
	str r4, [sp, #4]
	mov r7, #0
	str r7, [sp, #8]
	str r7, [sp, #12]
	mov r3, r12
	bl sub_080B35E0
	mov r1, r8
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, #1
	mov r1, #0
	ldrsb r1, [r5, r1]
	mov r3, r9
	mov r2, #0
	ldrsb r2, [r3, r2]
	ldr r7, _080B6234  @ =gUnknown_03002B94
	add r2, r2, r7
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r2, r2, #8
	mov r3, #0
	ldrsb r3, [r6, r3]
	lsl r3, r3, #1
	ldr r7, _080B6238  @ =gUnknown_0816F0EA
	add r3, r3, r7
	ldrh r3, [r3]
	mov r12, r3
	mov r3, r10
	str r3, [sp]
	str r4, [sp, #4]
	mov r4, #1
	str r4, [sp, #8]
	mov r7, #0
	str r7, [sp, #12]
	mov r3, r12
	bl sub_080B35E0
	mov r1, r8
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	ldrb r0, [r5]
	add r0, r0, #8
	strb r0, [r5]
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B6170
	mov r3, r9
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080B6168
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B6230:
	.4byte gUnknown_03002B91
_080B6234:
	.4byte gUnknown_03002B94
_080B6238:
	.4byte gUnknown_0816F0EA
	THUMB_FUNC_END sub_080B60DC

