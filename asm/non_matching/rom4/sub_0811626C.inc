	THUMB_FUNC_START sub_0811626C
sub_0811626C: @ 0x0811626C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _08116294  @ =gRam
	ldr r1, _08116298  @ =0x00000E33
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _081162A0
	ldr r3, _0811629C  @ =0x00000E15
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	b _08116384
_08116294:
	.4byte gRam
_08116298:
	.4byte 0x00000E33
_0811629C:
	.4byte 0x00000E15
_081162A0:
	ldr r6, _08116394  @ =0x00001844
	add r1, r2, r6
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _081162C8
	ldr r1, _08116398  @ =0x00000E29
	add r0, r2, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #2
	bne _081162C2
	mov r0, #0
	strb r0, [r1]
_081162C2:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_081162C8:
	add r0, r4, #0
	bl sub_080C177C
	ldr r5, _0811639C  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r3, r5, r2
	ldrh r1, [r3]
	ldr r6, _081163A0  @ =0x00000968
	add r0, r5, r6
	mov r2, #0
	strh r1, [r0]
	ldr r1, _081163A4  @ =0x00000964
	add r0, r5, r1
	ldrh r1, [r0]
	add r6, r6, #4
	add r0, r5, r6
	strh r1, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r1, r5, r0
	strb r2, [r1]
	ldr r2, _08116398  @ =0x00000E29
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08116384
	sub r0, r0, #1
	lsl r0, r0, #26
	lsr r7, r0, #24
	mov r8, r5
	ldr r3, _081163A8  @ =gUnknown_03003E74
	mov r9, r3
	mov r10, r1
_0811630E:
	ldr r2, _081163A0  @ =0x00000968
	add r2, r2, r8
	ldr r0, _081163AC  @ =gUnknown_0817ED8A
	lsl r1, r7, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r4, _081163B0  @ =gUnknown_03002B90
	strh r0, [r4]
	ldr r2, _081163B4  @ =0x0000096C
	add r2, r2, r8
	ldr r0, _081163B8  @ =gUnknown_0817ED9A
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r1, _081163A4  @ =0x00000964
	add r1, r1, r8
	strh r0, [r1]
	mov r6, r9
	ldrh r0, [r6]
	ldrh r1, [r1]
	ldrh r2, [r4]
	ldr r3, _081163BC  @ =gUnknown_0817EDAA
	add r3, r7, r3
	ldrb r3, [r3]
	ldr r4, _081163C0  @ =gUnknown_0817EDB2
	add r4, r7, r4
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _081163C4  @ =0x00001724
	add r5, r5, r8
	ldrb r5, [r5]
	mov r6, #4
	orr r5, r5, r6
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r6, r9
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, r10
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bne _0811630E
_08116384:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08116394:
	.4byte 0x00001844
_08116398:
	.4byte 0x00000E29
_0811639C:
	.4byte gRam
_081163A0:
	.4byte 0x00000968
_081163A4:
	.4byte 0x00000964
_081163A8:
	.4byte gUnknown_03003E74
_081163AC:
	.4byte gUnknown_0817ED8A
_081163B0:
	.4byte gUnknown_03002B90
_081163B4:
	.4byte 0x0000096C
_081163B8:
	.4byte gUnknown_0817ED9A
_081163BC:
	.4byte gUnknown_0817EDAA
_081163C0:
	.4byte gUnknown_0817EDB2
_081163C4:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811626C

