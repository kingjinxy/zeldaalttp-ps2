	THUMB_FUNC_START sub_0809A4A8
sub_0809A4A8: @ 0x0809A4A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r5, _0809A57C  @ =gRam
	ldr r0, _0809A580  @ =0x000016EC
	add r0, r0, r5
	mov r10, r0
	ldrb r4, [r0]
	ldr r1, _0809A584  @ =0x000016C4
	add r1, r1, r5
	mov r9, r1
	ldrh r7, [r1]
	ldr r2, _0809A588  @ =0x00001726
	add r1, r5, r2
	ldrb r0, [r1]
	mov r8, r0
	mov r6, #1
	cmp r0, #2
	bne _0809A4D4
	mov r6, #255
_0809A4D4:
	ldr r3, _0809A58C  @ =gUnknown_030038FE
	strb r6, [r3]
	mov r0, #0
	strb r0, [r1]
	bl sub_0809345C
	mov r1, #0
	mov r12, r1
	mov r2, r9
	strh r7, [r2]
	mov r3, r10
	strb r4, [r3]
	ldr r4, _0809A590  @ =0x000016D8
	add r3, r5, r4
	mov r1, #0
	ldrsh r0, [r3, r1]
	sub r4, r4, #24
	add r2, r5, r4
	mov r4, #0
	ldrsh r1, [r2, r4]
	sub r0, r0, r1
	asr r0, r0, #3
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldrh r0, [r3]
	strh r0, [r2]
	ldr r0, _0809A594  @ =gUnknown_08167F39
	add r0, r6, r0
	ldrb r0, [r0]
	neg r0, r0
	ldr r2, _0809A598  @ =0x000016CD
	add r1, r5, r2
	strb r0, [r1]
	ldr r0, _0809A59C  @ =gUnknown_08167F59
	add r0, r6, r0
	ldrb r4, [r0]
	mov r3, r8
	cmp r3, #2
	bne _0809A528
	neg r0, r4
	lsl r0, r0, #24
	lsr r4, r0, #24
_0809A528:
	ldr r0, _0809A58C  @ =gUnknown_030038FE
	strb r4, [r0]
	ldr r0, _0809A5A0  @ =gUnknown_08167F79
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r3, _0809A5A4  @ =0x000016CF
	add r1, r5, r3
	strb r2, [r1]
	ldrb r1, [r0]
	ldr r4, _0809A5A8  @ =0x0000174C
	add r0, r5, r4
	strh r1, [r0]
	ldr r1, _0809A5AC  @ =0x000016C8
	add r0, r5, r1
	mov r2, r12
	strb r2, [r0]
	sub r3, r3, #6
	add r0, r5, r3
	strb r2, [r0]
	add r4, r4, #170
	add r0, r5, r4
	mov r1, #0
	strh r1, [r0]
	ldr r2, _0809A5B0  @ =0x00001702
	add r1, r5, r2
	mov r0, #2
	strb r0, [r1]
	ldr r3, _0809A5B4  @ =0x000017F1
	add r0, r5, r3
	mov r4, r12
	strb r4, [r0]
	ldr r0, _0809A5B8  @ =0x00001718
	add r1, r5, r0
	mov r0, #13
	strb r0, [r1]
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0809A57C:
	.4byte gRam
_0809A580:
	.4byte 0x000016EC
_0809A584:
	.4byte 0x000016C4
_0809A588:
	.4byte 0x00001726
_0809A58C:
	.4byte gUnknown_030038FE
_0809A590:
	.4byte 0x000016D8
_0809A594:
	.4byte gUnknown_08167F39
_0809A598:
	.4byte 0x000016CD
_0809A59C:
	.4byte gUnknown_08167F59
_0809A5A0:
	.4byte gUnknown_08167F79
_0809A5A4:
	.4byte 0x000016CF
_0809A5A8:
	.4byte 0x0000174C
_0809A5AC:
	.4byte 0x000016C8
_0809A5B0:
	.4byte 0x00001702
_0809A5B4:
	.4byte 0x000017F1
_0809A5B8:
	.4byte 0x00001718
	THUMB_FUNC_END sub_0809A4A8

