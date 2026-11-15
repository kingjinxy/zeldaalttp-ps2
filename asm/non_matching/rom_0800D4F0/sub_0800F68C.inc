	THUMB_FUNC_START sub_0800F68C
sub_0800F68C: @ 0x0800F68C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	add r5, r0, #0
	mov r8, r1
	add r7, r2, #0
	ldr r1, _0800F6E0  @ =gUnknown_08137E5C
	ldrb r0, [r5, #21]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [sp]
	ldr r1, [r5, #8]
	ldrb r2, [r5, #23]
	add r2, r2, #7
	mov r0, #252
	lsl r0, r0, #1
	and r2, r2, r0
	lsl r2, r2, #1
	mov r0, #128
	lsl r0, r0, #17
	orr r2, r2, r0
	mov r0, sp
	bl CpuFastSet
	mov r0, r8
	mov r1, #0
	bl sub_0800F408
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldrb r0, [r5, #19]
	cmp r0, #0
	beq _0800F6E4
	add r0, r4, #1
	asr r0, r0, #1
	mov r1, #8
	sub r1, r1, r0
	mov r0, #7
	and r0, r0, r1
	b _0800F6E6
_0800F6E0:
	.4byte gUnknown_08137E5C
_0800F6E4:
	mov r0, #0
_0800F6E6:
	strb r0, [r7, #3]
	mov r4, #0
	b _0800F6FA
_0800F6EC:
	add r0, r6, #0
	add r1, r7, #0
	bl sub_0800F7B4
	add r0, r4, r0
	lsl r0, r0, #16
	lsr r4, r0, #16
_0800F6FA:
	mov r0, r8
	bl sub_0800F22C
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r6, #15
	bhi _0800F6EC
	cmp r4, #0
	beq _0800F74C
	ldrb r1, [r7, #3]
	add r0, r1, #7
	lsr r4, r0, #3
	ldr r3, [r5]
	ldrb r0, [r5, #19]
	cmp r0, #0
	beq _0800F722
	add r0, r4, #1
	asr r0, r0, #1
	lsl r0, r0, #1
	sub r3, r3, r0
_0800F722:
	ldrh r1, [r5, #16]
	lsl r2, r4, #24
	lsr r2, r2, #24
	add r0, r3, #0
	bl sub_0800F76C
	strh r0, [r5, #16]
	ldr r0, [r5]
	add r0, r0, #128
	str r0, [r5]
	lsl r2, r4, #22
	lsr r4, r2, #16
	ldr r0, [r5, #8]
	ldr r1, [r5, #4]
	lsr r2, r2, #18
	bl CpuFastSet
	ldr r0, [r5, #4]
	add r0, r0, r4
	str r0, [r5, #4]
	b _0800F75A
_0800F74C:
	cmp r6, #10
	bne _0800F75A
	ldrb r1, [r5, #20]
	lsl r1, r1, #6
	ldr r0, [r5]
	add r0, r0, r1
	str r0, [r5]
_0800F75A:
	lsl r0, r4, #16
	orr r0, r0, r6
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800F68C

	.byte 0x00
	.byte 0x00
