	THUMB_FUNC_START sub_0806F090
sub_0806F090: @ 0x0806F090
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r4, _0806F1A4  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r4
	mov r9, r2
	ldr r3, _0806F1A8  @ =0x00000B36
	add r2, r4, r3
	strh r1, [r2]
	ldr r3, _0806F1AC  @ =0x000009DC
	add r2, r4, r3
	strh r1, [r2]
	mov r3, #15
	and r3, r3, r1
	ldr r2, _0806F1B0  @ =0x000016C4
	add r6, r4, r2
	ldrh r5, [r6]
	ldr r2, _0806F1B4  @ =0xFFFFFF00
	and r2, r2, r5
	lsl r3, r3, #9
	lsl r2, r2, #16
	asr r2, r2, #16
	sub r3, r3, r2
	lsl r3, r3, #16
	asr r3, r3, #16
	add r3, r3, r0
	mov r0, r9
	strh r3, [r0]
	ldr r2, _0806F1B8  @ =0x00000961
	add r2, r2, r4
	mov r8, r2
	ldrb r7, [r2]
	add r5, r5, r3
	strh r5, [r6]
	ldr r0, _0806F1BC  @ =0x00000952
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, r3
	strh r0, [r2]
	mov r0, #184
	lsl r0, r0, #4
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _0806F1C0  @ =0x00000B82
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _0806F1C4  @ =0x00000B7C
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, r3
	strh r0, [r2]
	ldr r0, _0806F1C8  @ =0x00000B7E
	add r2, r4, r0
	ldrh r0, [r2]
	add r0, r0, r3
	strh r0, [r2]
	mov r2, #240
	and r2, r2, r1
	lsl r2, r2, #5
	mov r0, #182
	lsl r0, r0, #5
	add r3, r4, r0
	ldrh r1, [r3]
	ldr r0, _0806F1CC  @ =0xFFFFFE00
	and r0, r0, r1
	sub r2, r2, r0
	mov r0, r9
	strh r2, [r0]
	mov r0, r8
	ldrb r6, [r0]
	add r1, r1, r2
	strh r1, [r3]
	ldr r3, _0806F1D0  @ =0x00000958
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldr r0, _0806F1D4  @ =0x00000B78
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldr r3, _0806F1D8  @ =0x00000B7A
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldr r0, _0806F1DC  @ =0x00000B74
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	sub r3, r3, #4
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r1, #0
	ldr r0, _0806F1E0  @ =0x00000FA2
	add r5, r4, r0
	ldr r2, _0806F1E4  @ =0x00000F02
	add r3, r4, r2
	sub r0, r0, #176
	add r4, r4, r0
_0806F16E:
	lsl r0, r1, #16
	asr r2, r0, #16
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806F18A
	add r1, r2, r3
	ldrb r0, [r1]
	add r0, r0, r7
	strb r0, [r1]
	add r1, r2, r4
	ldrb r0, [r1]
	add r0, r0, r6
	strb r0, [r1]
_0806F18A:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, #15
	ble _0806F16E
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806F1A4:
	.4byte gRam
_0806F1A8:
	.4byte 0x00000B36
_0806F1AC:
	.4byte 0x000009DC
_0806F1B0:
	.4byte 0x000016C4
_0806F1B4:
	.4byte 0xFFFFFF00
_0806F1B8:
	.4byte 0x00000961
_0806F1BC:
	.4byte 0x00000952
_0806F1C0:
	.4byte 0x00000B82
_0806F1C4:
	.4byte 0x00000B7C
_0806F1C8:
	.4byte 0x00000B7E
_0806F1CC:
	.4byte 0xFFFFFE00
_0806F1D0:
	.4byte 0x00000958
_0806F1D4:
	.4byte 0x00000B78
_0806F1D8:
	.4byte 0x00000B7A
_0806F1DC:
	.4byte 0x00000B74
_0806F1E0:
	.4byte 0x00000FA2
_0806F1E4:
	.4byte 0x00000F02
	THUMB_FUNC_END sub_0806F090

