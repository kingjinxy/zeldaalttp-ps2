	THUMB_FUNC_START sub_0810D38C
sub_0810D38C: @ 0x0810D38C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810D486
	add r0, r7, #0
	bl sub_080C6340
	ldr r1, _0810D40C  @ =gRam
	ldr r3, _0810D410  @ =gUnknown_0817CEAA
	ldr r2, _0810D414  @ =gUnknown_0817CEB1
	ldr r4, _0810D418  @ =0x00000F92
	add r0, r1, r4
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	ldr r2, _0810D41C  @ =0x0000096C
	add r3, r1, r2
	mov r2, #0
	strh r0, [r3]
	ldr r4, _0810D420  @ =0x00000961
	add r0, r1, r4
	strb r2, [r0]
	add r4, r4, #4
	add r0, r1, r4
	strb r2, [r0]
	mov r6, #4
	mov r8, r1
	mov r10, r8
	mov r9, r3
_0810D3E6:
	ldr r0, _0810D424  @ =0x00000964
	add r0, r0, r10
	ldr r1, _0810D428  @ =gUnknown_0817CE8E
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	cmp r6, #2
	bne _0810D42C
	mov r2, r9
	mov r3, #0
	ldrsh r0, [r2, r3]
	sub r0, r1, r0
	lsl r0, r0, #16
	b _0810D42E
_0810D40C:
	.4byte gRam
_0810D410:
	.4byte gUnknown_0817CEAA
_0810D414:
	.4byte gUnknown_0817CEB1
_0810D418:
	.4byte 0x00000F92
_0810D41C:
	.4byte 0x0000096C
_0810D420:
	.4byte 0x00000961
_0810D424:
	.4byte 0x00000964
_0810D428:
	.4byte gUnknown_0817CE8E
_0810D42C:
	lsl r0, r1, #16
_0810D42E:
	lsr r3, r0, #16
	ldr r0, _0810D498  @ =gUnknown_03003E74
	sub r1, r6, #4
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r8
	ldr r1, _0810D49C  @ =gUnknown_0817CE88
	add r1, r6, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r3, #0
	ldr r3, _0810D4A0  @ =gUnknown_0817CE94
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _0810D4A4  @ =gUnknown_0817CEA0
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #33
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _0810D4A8  @ =gUnknown_0817CEA4
	add r4, r6, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	cmp r6, #0
	bge _0810D3E6
	add r0, r7, #0
	mov r1, #255
	mov r2, #4
	bl sub_080C6350
_0810D486:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810D498:
	.4byte gUnknown_03003E74
_0810D49C:
	.4byte gUnknown_0817CE88
_0810D4A0:
	.4byte gUnknown_0817CE94
_0810D4A4:
	.4byte gUnknown_0817CEA0
_0810D4A8:
	.4byte gUnknown_0817CEA4
	THUMB_FUNC_END sub_0810D38C

