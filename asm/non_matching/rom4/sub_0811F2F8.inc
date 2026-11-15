	THUMB_FUNC_START sub_0811F2F8
sub_0811F2F8: @ 0x0811F2F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _0811F354  @ =gRam
	ldr r1, _0811F358  @ =0x00001844
	add r0, r4, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811F364
	mov r0, #3
	strb r0, [r1]
	ldr r2, _0811F35C  @ =0x00000E29
	add r1, r4, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _0811F364
	add r0, r6, #0
	bl sub_0811EDE0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811F346
	add r0, r6, #0
	bl sub_0811EE68
_0811F346:
	ldr r3, _0811F360  @ =0x00000E15
	add r0, r4, r3
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	b _0811F47C
	.byte 0x00
	.byte 0x00
_0811F354:
	.4byte gRam
_0811F358:
	.4byte 0x00001844
_0811F35C:
	.4byte 0x00000E29
_0811F360:
	.4byte 0x00000E15
_0811F364:
	add r0, r6, #0
	bl sub_080C17A8
	ldr r1, _0811F3A4  @ =gRam
	ldr r5, _0811F3A8  @ =0x00001813
	add r0, r1, r5
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _0811F382
	ldr r2, _0811F3AC  @ =0x000016C8
	add r0, r1, r2
	ldrb r1, [r0]
	cmp r1, #255
	bne _0811F384
_0811F382:
	mov r1, #0
_0811F384:
	ldr r2, _0811F3A4  @ =gRam
	ldr r3, _0811F3B0  @ =0x00000A92
	add r0, r2, r3
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r1, r0
	ldr r5, _0811F3B4  @ =0x00000968
	add r1, r2, r5
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811F3BC
	ldr r0, _0811F3B8  @ =0x00000969
	add r1, r2, r0
	mov r0, #255
	b _0811F3C2
_0811F3A4:
	.4byte gRam
_0811F3A8:
	.4byte 0x00001813
_0811F3AC:
	.4byte 0x000016C8
_0811F3B0:
	.4byte 0x00000A92
_0811F3B4:
	.4byte 0x00000968
_0811F3B8:
	.4byte 0x00000969
_0811F3BC:
	ldr r3, _0811F48C  @ =0x00000969
	add r1, r2, r3
	mov r0, #0
_0811F3C2:
	strb r0, [r1]
	ldr r1, _0811F490  @ =gRam
	ldr r5, _0811F494  @ =0x00000968
	add r3, r1, r5
	mov r0, #0
	ldrsh r2, [r3, r0]
	sub r5, r5, #8
	add r4, r1, r5
	ldrh r0, [r4]
	sub r0, r0, r2
	mov r5, #0
	strh r0, [r3]
	ldr r2, _0811F498  @ =0x00000964
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _0811F49C  @ =0x0000096C
	add r0, r1, r3
	strh r2, [r0]
	ldr r2, _0811F4A0  @ =0x00000E29
	add r0, r1, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #27
	lsr r6, r0, #24
	add r3, r3, #4
	add r0, r1, r3
	strb r5, [r0]
	add r7, r1, #0
	mov r10, r4
	ldr r5, _0811F4A4  @ =gUnknown_03003E74
	mov r8, r5
	mov r9, r0
_0811F402:
	ldr r0, _0811F494  @ =0x00000968
	add r2, r7, r0
	ldr r0, _0811F4A8  @ =gUnknown_0817FBAA
	lsl r1, r6, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r10
	strh r0, [r2]
	ldr r3, _0811F49C  @ =0x0000096C
	add r2, r7, r3
	ldr r0, _0811F4AC  @ =gUnknown_0817FBCA
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r5, _0811F498  @ =0x00000964
	add r1, r7, r5
	strh r0, [r1]
	mov r2, r8
	ldrh r0, [r2]
	ldrh r1, [r1]
	mov r3, r10
	ldrh r3, [r3]
	str r3, [sp, #4]
	ldr r3, _0811F4B0  @ =gUnknown_0817FBEA
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _0811F4B4  @ =gUnknown_0817FBFA
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _0811F4B8  @ =0x00001724
	ldrb r2, [r5, r7]
	mov r12, r2
	mov r5, r12
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r2, #0
	str r2, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	mov r3, r8
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r5, r9
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #8
	bne _0811F402
_0811F47C:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0811F48C:
	.4byte 0x00000969
_0811F490:
	.4byte gRam
_0811F494:
	.4byte 0x00000968
_0811F498:
	.4byte 0x00000964
_0811F49C:
	.4byte 0x0000096C
_0811F4A0:
	.4byte 0x00000E29
_0811F4A4:
	.4byte gUnknown_03003E74
_0811F4A8:
	.4byte gUnknown_0817FBAA
_0811F4AC:
	.4byte gUnknown_0817FBCA
_0811F4B0:
	.4byte gUnknown_0817FBEA
_0811F4B4:
	.4byte gUnknown_0817FBFA
_0811F4B8:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811F2F8

