	THUMB_FUNC_START sub_080F73EC
sub_080F73EC: @ 0x080F73EC
	push {r4-r7,lr}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r2, r1, #0
	ldr r4, _080F7484  @ =gRam
	ldr r3, _080F7488  @ =0x00000FC2
	add r0, r4, r3
	add r0, r1, r0
	ldrb r3, [r0]
	cmp r3, #0
	bne _080F740C
	ldr r5, _080F748C  @ =0x00000FA2
	add r0, r4, r5
	add r0, r1, r0
	strb r3, [r0]
_080F740C:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F747A
	mov r5, #3
	add r6, r4, #0
	ldr r0, _080F7490  @ =0x00000969
	add r7, r6, r0
_080F7424:
	mov r0, #150
	lsl r0, r0, #4
	add r3, r6, r0
	ldr r0, _080F7494  @ =gUnknown_08179C16
	lsl r2, r5, #1
	add r0, r2, r0
	ldrh r1, [r0]
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r0, _080F7498  @ =0x00000964
	add r3, r6, r0
	ldr r0, _080F749C  @ =gUnknown_08179C1E
	add r2, r2, r0
	ldrh r2, [r2]
	ldrh r3, [r3]
	add r2, r2, r3
	ldr r0, _080F74A0  @ =gUnknown_03003E74
	sub r3, r5, #3
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #23
	lsr r1, r1, #23
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r4, [r7]
	mov r3, #48
	and r3, r3, r4
	ldr r4, _080F74A4  @ =gUnknown_08179C26
	add r4, r5, r4
	ldrb r4, [r4]
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #182
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	sub r5, r5, #1
	cmp r5, #0
	bge _080F7424
_080F747A:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7484:
	.4byte gRam
_080F7488:
	.4byte 0x00000FC2
_080F748C:
	.4byte 0x00000FA2
_080F7490:
	.4byte 0x00000969
_080F7494:
	.4byte gUnknown_08179C16
_080F7498:
	.4byte 0x00000964
_080F749C:
	.4byte gUnknown_08179C1E
_080F74A0:
	.4byte gUnknown_03003E74
_080F74A4:
	.4byte gUnknown_08179C26
	THUMB_FUNC_END sub_080F73EC

