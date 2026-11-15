	THUMB_FUNC_START sub_080FFA44
sub_080FFA44: @ 0x080FFA44
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r6
	ldr r7, _080FFAEC  @ =gRam
	ldr r0, _080FFAF0  @ =0x00000D94
	add r1, r7, r0
	add r1, r6, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r6, #0
	bl sub_080C6240
	ldr r0, _080FFAF4  @ =gUnknown_03003E74
	ldrh r4, [r0]
	lsl r4, r4, #3
	mov r1, #170
	lsl r1, r1, #3
	add r0, r7, r1
	add r4, r4, r0
	ldr r1, _080FFAF8  @ =0x00001082
	add r0, r7, r1
	add r0, r6, r0
	ldrb r3, [r0]
	ldr r0, _080FFAFC  @ =gUnknown_0817AD58
	add r0, r3, r0
	ldrb r2, [r0]
	ldrh r5, [r4, #4]
	lsl r1, r5, #22
	lsr r1, r1, #22
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r1
	orr r2, r2, r0
	ldr r0, _080FFB00  @ =0xFFFFFC00
	and r0, r0, r5
	orr r0, r0, r2
	strh r0, [r4, #4]
	ldr r0, _080FFB04  @ =gUnknown_0817AD68
	add r3, r3, r0
	ldrb r1, [r3]
	lsl r1, r1, #24
	lsr r2, r1, #31
	lsl r2, r2, #5
	ldrb r3, [r4, #3]
	mov r0, #33
	neg r0, r0
	and r0, r0, r3
	orr r0, r0, r2
	lsr r1, r1, #30
	mov r2, #1
	and r1, r1, r2
	lsl r1, r1, #4
	sub r2, r2, #18
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #3]
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FFB0C
	ldr r1, _080FFB08  @ =0x00001072
	add r0, r7, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #14
	bne _080FFADA
	mov r0, #8
	strb r0, [r1]
_080FFADA:
	mov r0, r8
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FFB0C
	mov r0, #0
	b _080FFB0E
	.byte 0x00
	.byte 0x00
_080FFAEC:
	.4byte gRam
_080FFAF0:
	.4byte 0x00000D94
_080FFAF4:
	.4byte gUnknown_03003E74
_080FFAF8:
	.4byte 0x00001082
_080FFAFC:
	.4byte gUnknown_0817AD58
_080FFB00:
	.4byte 0xFFFFFC00
_080FFB04:
	.4byte gUnknown_0817AD68
_080FFB08:
	.4byte 0x00001072
_080FFB0C:
	mov r0, #1
_080FFB0E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080FFA44

