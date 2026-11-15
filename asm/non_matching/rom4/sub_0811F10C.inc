	THUMB_FUNC_START sub_0811F10C
sub_0811F10C: @ 0x0811F10C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r4, r7, #0
	add r0, r7, #0
	bl sub_080C10D4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	beq _0811F20E
	ldr r3, _0811F220  @ =gRam
	ldr r0, _0811F224  @ =0x00000968
	add r0, r0, r3
	mov r10, r0
	ldr r1, _0811F228  @ =gUnknown_0817FBA8
	ldr r2, _0811F22C  @ =0x00000E29
	add r0, r3, r2
	add r0, r7, r0
	ldrb r0, [r0]
	add r0, r0, r1
	mov r5, r10
	ldrb r1, [r5]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r5]
	ldr r2, _0811F230  @ =0x00000A74
	add r0, r3, r2
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811F15C
	mov r0, #48
	orr r1, r1, r0
	strb r1, [r5]
_0811F15C:
	ldr r5, _0811F234  @ =0x00000E3D
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r2, r0, #2
	add r2, r0, r2
	ldr r7, _0811F238  @ =0x00000E1F
	add r1, r3, r7
	add r1, r4, r1
	add r0, r0, r2
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _0811F23C  @ =gUnknown_0817FB48
	add r0, r7, r0
	ldrb r1, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r3
	mov r9, r0
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _0811F240  @ =gUnknown_0817FB78
	add r0, r7, r0
	ldrb r2, [r0]
	ldr r4, _0811F244  @ =0x00000961
	add r4, r4, r3
	mov r8, r4
	ldrb r0, [r4]
	add r2, r2, r0
	ldr r6, _0811F248  @ =gUnknown_03003E74
	ldrh r0, [r6]
	ldr r3, _0811F24C  @ =gUnknown_0817FAE8
	add r3, r7, r3
	ldrb r3, [r3]
	ldr r4, _0811F250  @ =gUnknown_0817FB18
	add r4, r7, r4
	ldrb r4, [r4]
	mov r5, r10
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	ldr r0, _0811F254  @ =gUnknown_0817FB60
	add r0, r7, r0
	ldrb r1, [r0]
	mov r5, r9
	ldrb r0, [r5]
	add r1, r1, r0
	ldr r0, _0811F258  @ =gUnknown_0817FB90
	add r0, r7, r0
	ldrb r2, [r0]
	mov r3, r8
	ldrb r0, [r3]
	add r2, r2, r0
	ldrh r0, [r6]
	ldr r3, _0811F25C  @ =gUnknown_0817FB00
	add r3, r7, r3
	ldrb r3, [r3]
	ldr r4, _0811F260  @ =gUnknown_0817FB30
	add r4, r7, r4
	ldrb r4, [r4]
	mov r7, r10
	mov r5, #0
	ldrsb r5, [r7, r5]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
_0811F20E:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811F220:
	.4byte gRam
_0811F224:
	.4byte 0x00000968
_0811F228:
	.4byte gUnknown_0817FBA8
_0811F22C:
	.4byte 0x00000E29
_0811F230:
	.4byte 0x00000A74
_0811F234:
	.4byte 0x00000E3D
_0811F238:
	.4byte 0x00000E1F
_0811F23C:
	.4byte gUnknown_0817FB48
_0811F240:
	.4byte gUnknown_0817FB78
_0811F244:
	.4byte 0x00000961
_0811F248:
	.4byte gUnknown_03003E74
_0811F24C:
	.4byte gUnknown_0817FAE8
_0811F250:
	.4byte gUnknown_0817FB18
_0811F254:
	.4byte gUnknown_0817FB60
_0811F258:
	.4byte gUnknown_0817FB90
_0811F25C:
	.4byte gUnknown_0817FB00
_0811F260:
	.4byte gUnknown_0817FB30
	THUMB_FUNC_END sub_0811F10C

