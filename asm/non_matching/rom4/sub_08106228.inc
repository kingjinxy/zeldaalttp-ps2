	THUMB_FUNC_START sub_08106228
sub_08106228: @ 0x08106228
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _08106344  @ =gRam
	ldr r1, _08106348  @ =0x00001052
	add r0, r2, r1
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	ldr r3, _0810634C  @ =0x000016C4
	add r0, r2, r3
	ldrb r1, [r0]
	ldr r4, _08106350  @ =0x000016F0
	add r0, r2, r4
	strb r1, [r0]
	ldr r1, _08106354  @ =0x000016C5
	add r0, r2, r1
	ldrb r1, [r0]
	add r3, r3, #45
	add r0, r2, r3
	strb r1, [r0]
	sub r4, r4, #48
	add r0, r2, r4
	ldrb r1, [r0]
	sub r3, r3, #5
	add r0, r2, r3
	strb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r6, r2, #0
	ldr r4, _08106358  @ =0x00000FB2
	add r0, r6, r4
	add r7, r5, r0
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r6
	mov r8, r0
_0810627E:
	ldr r1, _0810635C  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #7
	and r1, r1, r0
	cmp r1, #0
	bne _081062EE
	add r0, r5, #0
	bl sub_08110700
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	add r0, r0, #78
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bhi _081062B0
	add r0, r5, #0
	mov r1, #30
	bl sub_080CF0AC
_081062B0:
	ldr r2, _08106360  @ =0x00001062
	add r0, r6, r2
	add r0, r5, r0
	ldrb r3, [r0]
	cmp r4, r3
	beq _081062EE
	strb r4, [r0]
	cmp r4, #190
	bne _081062D8
	ldr r4, _08106364  @ =0x00000F92
	add r1, r6, r4
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _08106368  @ =0x00000FD2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #24
	strb r1, [r0]
_081062D8:
	ldr r2, _0810636C  @ =0x00001082
	add r0, r6, r2
	add r0, r5, r0
	ldrb r1, [r7]
	strb r1, [r0]
	add r0, r5, #0
	bl sub_08111004
	add r0, r5, #0
	bl sub_08111054
_081062EE:
	add r0, r5, #0
	bl Sprite3_Move
	ldr r3, _08106370  @ =0x00000EE2
	add r0, r6, r3
	add r0, r5, r0
	ldrb r2, [r0]
	ldr r4, _08106374  @ =0x00000F02
	add r0, r6, r4
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #8
	mov r0, r8
	strh r2, [r0]
	ldr r1, _08106378  @ =0x00000ED2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	add r3, r3, #16
	add r0, r6, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #14
	ldr r4, _0810637C  @ =0x00000964
	add r0, r6, r4
	strh r1, [r0]
	ldr r0, _0810634C  @ =0x000016C4
	add r3, r6, r0
	lsl r2, r2, #16
	asr r2, r2, #16
	ldrh r0, [r3]
	mov r4, #0
	ldrsh r1, [r3, r4]
	cmp r2, r1
	beq _08106384
	cmp r2, r1
	blt _08106380
	add r0, r0, #1
	b _08106382
_08106344:
	.4byte gRam
_08106348:
	.4byte 0x00001052
_0810634C:
	.4byte 0x000016C4
_08106350:
	.4byte 0x000016F0
_08106354:
	.4byte 0x000016C5
_08106358:
	.4byte 0x00000FB2
_0810635C:
	.4byte 0x00000F62
_08106360:
	.4byte 0x00001062
_08106364:
	.4byte 0x00000F92
_08106368:
	.4byte 0x00000FD2
_0810636C:
	.4byte 0x00001082
_08106370:
	.4byte 0x00000EE2
_08106374:
	.4byte 0x00000F02
_08106378:
	.4byte 0x00000ED2
_0810637C:
	.4byte 0x00000964
_08106380:
	sub r0, r0, #1
_08106382:
	strh r0, [r3]
_08106384:
	ldr r1, _081063A8  @ =0x00000964
	add r0, r6, r1
	mov r2, #182
	lsl r2, r2, #5
	add r3, r6, r2
	mov r4, #0
	ldrsh r2, [r0, r4]
	ldrh r0, [r3]
	mov r4, #0
	ldrsh r1, [r3, r4]
	add r4, r6, #0
	cmp r2, r1
	beq _081063B0
	cmp r2, r1
	blt _081063AC
	add r0, r0, #1
	b _081063AE
	.byte 0x00
	.byte 0x00
_081063A8:
	.4byte 0x00000964
_081063AC:
	sub r0, r0, #1
_081063AE:
	strh r0, [r3]
_081063B0:
	ldr r0, _08106418  @ =0x00001052
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	beq _081063C4
	b _0810627E
_081063C4:
	ldr r1, _0810641C  @ =0x000016C4
	add r0, r4, r1
	ldr r2, _08106420  @ =0x000016F0
	add r1, r4, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	ldr r3, _08106424  @ =0x000016D7
	add r1, r4, r3
	strb r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	sub r2, r2, #4
	add r1, r4, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r3, r3, #1
	add r1, r4, r3
	strb r0, [r1]
	ldr r1, _08106428  @ =gUnknown_0817BF0C
	ldr r2, _0810642C  @ =0x00000FB2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	sub r3, r3, #10
	add r0, r4, r3
	strb r1, [r0]
	bl sub_08096F30
	bl sub_0809E394
	bl sub_08093078
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08106418:
	.4byte 0x00001052
_0810641C:
	.4byte 0x000016C4
_08106420:
	.4byte 0x000016F0
_08106424:
	.4byte 0x000016D7
_08106428:
	.4byte gUnknown_0817BF0C
_0810642C:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_08106228

