	THUMB_FUNC_START sub_08023E14
sub_08023E14: @ 0x08023E14
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	add r4, r1, #0
	lsl r2, r2, #16
	lsr r6, r2, #16
	ldrh r0, [r4, #50]
	ldrh r1, [r5, #50]
	sub r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	ldrh r1, [r4, #54]
	ldrh r2, [r5, #54]
	sub r1, r1, r2
	lsl r1, r1, #16
	asr r1, r1, #16
	bl sub_080040E0
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r12, r2
	cmp r6, #3
	bhi _08023E46
	mov r6, #4
_08023E46:
	ldr r0, [r4, #48]
	ldr r7, [r5, #48]
	sub r1, r0, r7
	ldr r0, _08023EB4  @ =gUnknown_0813E4CC
	mov r8, r0
	lsl r0, r2, #1
	add r0, r0, r8
	mov r2, #0
	ldrsh r0, [r0, r2]
	mul r0, r6, r0
	lsl r0, r0, #8
	sub r3, r1, r0
	cmp r0, #0
	bge _08023E64
	neg r0, r0
_08023E64:
	cmp r1, #0
	bge _08023E6A
	neg r1, r1
_08023E6A:
	sub r0, r1, r0
	cmp r0, #0
	bgt _08023E72
	mov r3, #0
_08023E72:
	add r0, r7, r3
	str r0, [r5, #48]
	ldr r0, [r4, #52]
	ldr r4, [r5, #52]
	sub r1, r0, r4
	mov r0, r12
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r8
	mov r2, #0
	ldrsh r0, [r0, r2]
	mul r0, r6, r0
	lsl r2, r0, #8
	neg r0, r2
	sub r3, r1, r0
	cmp r0, #0
	bge _08023E96
	add r0, r2, #0
_08023E96:
	cmp r1, #0
	bge _08023E9C
	neg r1, r1
_08023E9C:
	sub r0, r1, r0
	cmp r0, #0
	bgt _08023EA4
	mov r3, #0
_08023EA4:
	add r0, r4, r3
	str r0, [r5, #52]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08023EB4:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_08023E14

