	THUMB_FUNC_START sub_0810D294
sub_0810D294: @ 0x0810D294
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810D15C
	ldr r5, _0810D34C  @ =gRam
	ldr r1, _0810D350  @ =0x00000F92
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _0810D336
	cmp r0, #11
	beq _0810D336
	ldr r1, _0810D354  @ =gUnknown_0817CE7E
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _0810D358  @ =0x00001809
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0810D35C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0810D360  @ =0x00000EF2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r1, r1, #16
	ldr r0, _0810D364  @ =0xFFED0000
	add r1, r1, r0
	lsr r1, r1, #16
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _0810D368  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _0810D36C  @ =0x00000F02
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _0810D370  @ =0x000016C4
	add r0, r5, r2
	strh r1, [r0]
	ldr r1, _0810D374  @ =0x00000FC2
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #0
	bne _0810D336
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bne _0810D32A
	add r0, r4, #0
	mov r1, #123
	bl sub_080CF140
	mov r2, #188
	lsl r2, r2, #4
	add r1, r5, r2
	mov r0, #1
	strh r0, [r1]
_0810D32A:
	ldr r0, _0810D378  @ =gUnknown_0817CE74
	ldrb r1, [r6]
	sub r1, r1, #2
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r7]
_0810D336:
	ldr r0, _0810D34C  @ =gRam
	ldr r1, _0810D37C  @ =0x00000FF2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #7
	bne _0810D380
	add r0, r4, #0
	bl sub_0810D4AC
	b _0810D386
_0810D34C:
	.4byte gRam
_0810D350:
	.4byte 0x00000F92
_0810D354:
	.4byte gUnknown_0817CE7E
_0810D358:
	.4byte 0x00001809
_0810D35C:
	.4byte 0x00000ED2
_0810D360:
	.4byte 0x00000EF2
_0810D364:
	.4byte 0xFFED0000
_0810D368:
	.4byte 0x00000EE2
_0810D36C:
	.4byte 0x00000F02
_0810D370:
	.4byte 0x000016C4
_0810D374:
	.4byte 0x00000FC2
_0810D378:
	.4byte gUnknown_0817CE74
_0810D37C:
	.4byte 0x00000FF2
_0810D380:
	add r0, r4, #0
	bl sub_0810D38C
_0810D386:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810D294

