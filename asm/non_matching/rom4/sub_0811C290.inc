	THUMB_FUNC_START sub_0811C290
sub_0811C290: @ 0x0811C290
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C177C
	ldr r2, _0811C2D0  @ =gRam
	ldr r1, _0811C2D4  @ =0x00000E33
	add r0, r2, r1
	add r1, r4, r0
	ldrb r3, [r1]
	cmp r3, #0
	bne _0811C2E0
	mov r0, #6
	strb r0, [r1]
	ldr r5, _0811C2D8  @ =0x00000E29
	add r1, r2, r5
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _0811C2E0
	ldr r6, _0811C2DC  @ =0x00000E15
	add r0, r2, r6
	add r0, r4, r0
	strb r3, [r0]
	b _0811C3A4
	.byte 0x00
	.byte 0x00
_0811C2D0:
	.4byte gRam
_0811C2D4:
	.4byte 0x00000E33
_0811C2D8:
	.4byte 0x00000E29
_0811C2DC:
	.4byte 0x00000E15
_0811C2E0:
	ldr r2, _0811C340  @ =gRam
	ldr r7, _0811C344  @ =0x00000E29
	add r0, r2, r7
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r3, _0811C348  @ =0x00000974
	add r0, r2, r3
	strb r1, [r0]
	lsl r1, r1, #2
	mov r4, #151
	lsl r4, r4, #4
	add r0, r2, r4
	strb r1, [r0]
	ldr r5, _0811C34C  @ =0x000016D5
	add r0, r2, r5
	ldrb r4, [r0]
	lsr r4, r4, #1
	lsl r0, r4, #27
	lsr r0, r0, #24
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r6, #150
	lsl r6, r6, #4
	add r3, r2, r6
	ldr r5, _0811C350  @ =gUnknown_0817F8C2
	add r0, r1, #0
	add r0, r0, r5
	ldrh r0, [r0]
	ldrh r7, [r3]
	add r0, r0, r7
	strh r0, [r3]
	ldr r0, _0811C354  @ =0x00000964
	add r3, r2, r0
	add r1, r1, #2
	add r1, r1, r5
	ldrh r0, [r1]
	ldrh r1, [r3]
	add r0, r0, r1
	strh r0, [r3]
	add r5, r2, #0
	cmp r4, #2
	bne _0811C35C
	ldr r2, _0811C358  @ =0x00001732
	add r1, r5, r2
	mov r0, #64
	b _0811C362
	.byte 0x00
	.byte 0x00
_0811C340:
	.4byte gRam
_0811C344:
	.4byte 0x00000E29
_0811C348:
	.4byte 0x00000974
_0811C34C:
	.4byte 0x000016D5
_0811C350:
	.4byte gUnknown_0817F8C2
_0811C354:
	.4byte 0x00000964
_0811C358:
	.4byte 0x00001732
_0811C35C:
	ldr r3, _0811C3AC  @ =0x00001732
	add r1, r5, r3
	mov r0, #0
_0811C362:
	strb r0, [r1]
	ldr r0, _0811C3B0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r4, _0811C3B4  @ =0x00000964
	add r1, r5, r4
	ldrh r1, [r1]
	mov r6, #150
	lsl r6, r6, #4
	add r2, r5, r6
	ldrh r2, [r2]
	ldr r4, _0811C3B8  @ =gUnknown_0817F8E2
	ldr r7, _0811C3BC  @ =0x00000974
	add r3, r5, r7
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	add r3, r3, r4
	ldrb r3, [r3]
	ldr r4, _0811C3C0  @ =0x00001724
	add r6, r5, r4
	ldr r7, _0811C3AC  @ =0x00001732
	add r4, r5, r7
	ldrb r4, [r4]
	mov r5, #4
	orr r4, r4, r5
	ldrb r5, [r6]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #8
	str r4, [sp]
	bl sub_080C6368
_0811C3A4:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_0811C3AC:
	.4byte 0x00001732
_0811C3B0:
	.4byte gUnknown_03003E74
_0811C3B4:
	.4byte 0x00000964
_0811C3B8:
	.4byte gUnknown_0817F8E2
_0811C3BC:
	.4byte 0x00000974
_0811C3C0:
	.4byte 0x00001724
	THUMB_FUNC_END sub_0811C290

