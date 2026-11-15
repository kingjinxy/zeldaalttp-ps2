	THUMB_FUNC_START sub_0812A4F8
sub_0812A4F8: @ 0x0812A4F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r5, r0, #0
	mov r9, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	str r1, [sp]
	mov r0, #128
	mov r8, r0
	ldr r1, _0812A5C4  @ =gUnknown_08198E88
	ldr r2, [sp]
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r6, [r0]
	ldrh r0, [r0]
	mov r10, r0
	add r0, r5, #0
	bl sub_0812A4B8
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	blt _0812A5B4
	add r4, r1, #0
	add r4, r4, #16
	ldr r0, _0812A5C8  @ =gUnknown_03000108
	lsl r1, r1, #3
	add r7, r1, r0
	ldr r0, [r7]
	cmp r5, r0
	beq _0812A54C
	lsl r0, r4, #16
	lsr r0, r0, #16
	mov r1, #0
	mov r2, r10
	bl sub_0812C73C
	str r5, [r7]
_0812A54C:
	ldr r0, _0812A5CC  @ =gUnknown_030000C8
	lsl r1, r4, #1
	add r1, r1, r0
	mov r0, sp
	ldrh r0, [r0]
	strh r0, [r1]
	mov r0, #128
	lsl r0, r0, #17
	and r0, r0, r6
	lsl r5, r4, #16
	cmp r0, #0
	beq _0812A586
	lsr r4, r5, #16
	mov r0, r9
	bl sub_0812A258
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r4, #0
	mov r1, #1
	bl sub_0812C8DC
	mov r0, r9
	bl sub_0812A2AC
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
_0812A586:
	mov r0, #128
	lsl r0, r0, #22
	and r6, r6, r0
	cmp r6, #0
	beq _0812A5A2
	mov r0, r9
	bl sub_0812A2E8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, r8
	mul r1, r0, r1
	lsr r1, r1, #7
	mov r8, r1
_0812A5A2:
	lsr r0, r5, #16
	mov r1, r8
	lsl r2, r1, #24
	lsr r2, r2, #24
	mov r1, #1
	bl sub_0812C884
	mov r0, #1
	strb r0, [r7, #4]
_0812A5B4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0812A5C4:
	.4byte gUnknown_08198E88
_0812A5C8:
	.4byte gUnknown_03000108
_0812A5CC:
	.4byte gUnknown_030000C8
	THUMB_FUNC_END sub_0812A4F8

