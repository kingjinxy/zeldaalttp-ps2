	THUMB_FUNC_START sub_080BBBF0
sub_080BBBF0: @ 0x080BBBF0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r0, _080BBC3C  @ =gRam
	ldr r1, _080BBC40  @ =0x000016C4
	add r2, r0, r1
	ldrh r3, [r2]
	str r3, [sp]
	mov r3, #182
	lsl r3, r3, #5
	add r1, r0, r3
	ldrh r1, [r1]
	str r1, [sp, #4]
	mov r1, #15
	mov r9, r1
	add r3, r0, #0
	mov r10, r2
_080BBC18:
	ldr r2, _080BBC44  @ =0x00000FF2
	add r0, r3, r2
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BBCD0
	cmp r0, #18
	bne _080BBC48
	mov r0, #120
	mov r1, r10
	strh r0, [r1]
	mov r2, #182
	lsl r2, r2, #5
	add r1, r3, r2
	mov r0, #200
	strh r0, [r1]
	b _080BBC74
	.byte 0x00
	.byte 0x00
_080BBC3C:
	.4byte gRam
_080BBC40:
	.4byte 0x000016C4
_080BBC44:
	.4byte 0x00000FF2
_080BBC48:
	ldr r1, _080BBD04  @ =0x00000EE6
	add r0, r3, r1
	ldrb r0, [r0]
	mov r2, r10
	strb r0, [r2]
	add r1, r1, #32
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080BBD08  @ =0x000016C5
	add r0, r3, r2
	strb r1, [r0]
	ldr r1, _080BBD0C  @ =0x00000ED6
	add r0, r3, r1
	ldrb r1, [r0]
	sub r2, r2, #5
	add r0, r3, r2
	strb r1, [r0]
	ldr r1, _080BBD10  @ =0x00000EF6
	add r0, r3, r1
	ldrb r0, [r0]
	ldr r2, _080BBD14  @ =gUnknown_030038F1
	strb r0, [r2]
_080BBC74:
	mov r0, r9
	lsl r6, r0, #24
	lsr r6, r6, #24
	ldr r7, _080BBD18  @ =gRam
	ldr r1, _080BBD1C  @ =0x00001012
	add r0, r7, r1
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BBD20  @ =0x000015DC
	add r1, r7, r2
	strb r6, [r1]
	str r3, [sp, #8]
	bl sub_080CF370
	add r0, r6, #0
	bl sub_080C1F70
	ldr r0, _080BBD24  @ =0x000009AD
	add r5, r7, r0
	ldrb r1, [r5]
	mov r8, r1
	mov r2, #0
	strb r2, [r5]
	ldr r0, _080BBD28  @ =0x00000FA2
	add r4, r7, r0
	add r1, r6, r4
	mov r0, #9
	strb r0, [r1]
	add r0, r6, #0
	bl SpriteActive_MainLong
	mov r1, r8
	strb r1, [r5]
	add r4, r4, r9
	ldrb r2, [r4]
	ldr r3, [sp, #8]
	cmp r2, #0
	bne _080BBCD0
	ldr r1, _080BBD2C  @ =0x00000FF2
	add r0, r7, r1
	add r0, r0, r9
	strb r2, [r0]
_080BBCD0:
	mov r2, #1
	neg r2, r2
	add r9, r9, r2
	mov r0, r9
	cmp r0, #0
	bge _080BBC18
	ldr r0, _080BBD18  @ =gRam
	ldr r2, _080BBD30  @ =0x000016C4
	add r1, r0, r2
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r0, r1
	mov r2, sp
	ldrh r2, [r2, #4]
	strh r2, [r0]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BBD04:
	.4byte 0x00000EE6
_080BBD08:
	.4byte 0x000016C5
_080BBD0C:
	.4byte 0x00000ED6
_080BBD10:
	.4byte 0x00000EF6
_080BBD14:
	.4byte gUnknown_030038F1
_080BBD18:
	.4byte gRam
_080BBD1C:
	.4byte 0x00001012
_080BBD20:
	.4byte 0x000015DC
_080BBD24:
	.4byte 0x000009AD
_080BBD28:
	.4byte 0x00000FA2
_080BBD2C:
	.4byte 0x00000FF2
_080BBD30:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080BBBF0

