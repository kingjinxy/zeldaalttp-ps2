	THUMB_FUNC_START sub_0801679C
sub_0801679C: @ 0x0801679C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	add r4, r1, #0
	lsl r5, r2, #16
	lsr r5, r5, #16
	mov r0, #50
	ldrsh r1, [r4, r0]
	mov r2, #50
	ldrsh r0, [r6, r2]
	sub r2, r1, r0
	mov r3, #54
	ldrsh r1, [r4, r3]
	mov r3, #54
	ldrsh r0, [r6, r3]
	sub r1, r1, r0
	lsl r0, r2, #16
	asr r0, r0, #16
	lsl r1, r1, #16
	asr r1, r1, #16
	bl 0x080040E0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r7, r0, #0
	ldr r0, [r4, #48]
	ldr r1, [r6, #48]
	mov r12, r1
	sub r2, r0, r1
	ldr r0, [r4, #52]
	ldr r4, [r6, #52]
	sub r1, r0, r4
	ldr r3, _08016844  @ =gUnknown_0813E4CC
	mov r8, r3
	lsl r0, r7, #1
	add r0, r0, r8
	mov r3, #0
	ldrsh r0, [r0, r3]
	lsl r5, r5, #16
	asr r5, r5, #16
	mul r0, r5, r0
	sub r3, r2, r0
	cmp r0, #0
	bge _080167F8
	neg r0, r0
_080167F8:
	cmp r2, #0
	bge _080167FE
	neg r2, r2
_080167FE:
	sub r0, r2, r0
	cmp r0, #0
	bgt _08016806
	mov r3, #0
_08016806:
	add r0, r7, #0
	add r0, r0, #64
	lsl r0, r0, #1
	add r0, r0, r8
	mov r2, #0
	ldrsh r0, [r0, r2]
	mul r5, r0, r5
	neg r0, r5
	sub r2, r1, r0
	cmp r0, #0
	bge _0801681E
	add r0, r5, #0
_0801681E:
	cmp r1, #0
	bge _08016824
	neg r1, r1
_08016824:
	sub r0, r1, r0
	cmp r0, #0
	bgt _0801682C
	mov r2, #0
_0801682C:
	mov r1, r12
	add r0, r1, r3
	str r0, [r6, #48]
	add r0, r4, r2
	str r0, [r6, #52]
	add r0, r3, r2
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08016844:
	.4byte gUnknown_0813E4CC
	THUMB_FUNC_END sub_0801679C

