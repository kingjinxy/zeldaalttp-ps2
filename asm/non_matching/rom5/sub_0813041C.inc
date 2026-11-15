	THUMB_FUNC_START sub_0813041C
sub_0813041C: @ 0x0813041C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _081304BC  @ =gUnknown_0822BC10
	ldr r1, _081304C0  @ =gRam
	ldr r3, _081304C4  @ =0x00000CAE
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r3, #5
	lsl r0, r0, #1
	ldr r5, _081304C8  @ =gUnknown_02030800
	add r4, r0, r5
	mov r0, #15
	mov r12, r0
	mov r5, #202
	lsl r5, r5, #4
	add r0, r1, r5
	ldrh r0, [r0]
	add r0, r0, #32
	mov r8, r2
	add r6, r1, #0
	ldr r7, _081304CC  @ =gUnknown_02000800
	lsl r2, r0, #1
_08130450:
	mov r1, r12
	sub r5, r3, #1
	cmp r1, #0
	blt _0813046A
	add r3, r2, r7
_0813045A:
	ldrh r0, [r4]
	strh r0, [r3]
	add r4, r4, #2
	add r3, r3, #2
	add r2, r2, #2
	sub r1, r1, #1
	cmp r1, #0
	bge _0813045A
_0813046A:
	add r3, r5, #0
	cmp r3, #0
	bge _08130450
	ldr r1, _081304D0  @ =0x00000CB2
	add r0, r6, r1
	ldrh r0, [r0]
	mov r1, #132
	lsl r1, r1, #1
	cmp r0, #0
	beq _08130480
	add r1, r1, #112
_08130480:
	ldr r2, _081304C4  @ =0x00000CAE
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _081304C8  @ =gUnknown_02030800
	add r2, r0, r4
	mov r5, #202
	lsl r5, r5, #4
	add r0, r6, r5
	ldrh r0, [r0]
	add r0, r1, r0
	lsl r0, r0, #1
	ldr r4, _081304CC  @ =gUnknown_02000800
	add r1, r0, r4
_081304A4:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _081304A4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_081304BC:
	.4byte gUnknown_0822BC10
_081304C0:
	.4byte gRam
_081304C4:
	.4byte 0x00000CAE
_081304C8:
	.4byte gUnknown_02030800
_081304CC:
	.4byte gUnknown_02000800
_081304D0:
	.4byte 0x00000CB2
	THUMB_FUNC_END sub_0813041C

