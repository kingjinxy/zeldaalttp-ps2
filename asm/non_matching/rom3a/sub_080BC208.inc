	THUMB_FUNC_START sub_080BC208
sub_080BC208: @ 0x080BC208
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r5, _080BC2AC  @ =gRam
	ldr r0, _080BC2B0  @ =0x000016C4
	add r6, r5, r0
	ldrh r1, [r6]
	str r1, [sp]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r5, r2
	ldrh r0, [r0]
	str r0, [sp, #4]
	ldr r3, _080BC2B4  @ =0x000009AD
	add r4, r5, r3
	ldrb r0, [r4]
	str r0, [sp, #8]
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE350
	mov r1, sp
	ldrb r1, [r1, #8]
	strb r1, [r4]
	mov r2, #15
	mov r9, r2
	add r3, r5, #0
	mov r10, r6
_080BC246:
	ldr r4, _080BC2B8  @ =0x00000FF2
	add r0, r3, r4
	mov r1, r9
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080BC338
	sub r4, r4, #32
	add r0, r3, r4
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BC264
	sub r0, r0, #1
	strb r0, [r1]
_080BC264:
	ldr r1, _080BC2BC  @ =0x00000FE2
	add r0, r3, r1
	mov r4, r9
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BC276
	sub r0, r0, #1
	strb r0, [r1]
_080BC276:
	ldrb r0, [r2]
	cmp r0, #208
	bne _080BC2CC
	ldr r1, _080BC2C0  @ =0x00000EE3
	add r0, r3, r1
	ldrb r0, [r0]
	mov r2, r10
	strb r0, [r2]
	ldr r4, _080BC2C4  @ =0x00000F03
	add r0, r3, r4
	ldrb r1, [r0]
	ldr r2, _080BC2C8  @ =0x000016C5
	add r0, r3, r2
	strb r1, [r0]
	sub r4, r4, #48
	add r0, r3, r4
	ldrb r1, [r0]
	sub r2, r2, #5
	add r0, r3, r2
	strb r1, [r0]
	add r4, r4, #32
	add r0, r3, r4
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	b _080BC2DC
_080BC2AC:
	.4byte gRam
_080BC2B0:
	.4byte 0x000016C4
_080BC2B4:
	.4byte 0x000009AD
_080BC2B8:
	.4byte 0x00000FF2
_080BC2BC:
	.4byte 0x00000FE2
_080BC2C0:
	.4byte 0x00000EE3
_080BC2C4:
	.4byte 0x00000F03
_080BC2C8:
	.4byte 0x000016C5
_080BC2CC:
	ldr r0, _080BC380  @ =0x00000F08
	mov r4, r10
	strh r0, [r4]
	mov r0, #182
	lsl r0, r0, #5
	add r1, r3, r0
	mov r0, #248
	strh r0, [r1]
_080BC2DC:
	mov r1, r9
	lsl r6, r1, #24
	lsr r6, r6, #24
	ldr r7, _080BC384  @ =gRam
	ldr r2, _080BC388  @ =0x00001012
	add r0, r7, r2
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r4, _080BC38C  @ =0x000015DC
	add r1, r7, r4
	strb r6, [r1]
	str r3, [sp, #12]
	bl sub_080CF370
	add r0, r6, #0
	bl sub_080C1F70
	ldr r0, _080BC390  @ =0x000009AD
	add r5, r7, r0
	ldrb r1, [r5]
	mov r8, r1
	mov r2, #0
	strb r2, [r5]
	ldr r0, _080BC394  @ =0x00000FA2
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
	ldr r3, [sp, #12]
	cmp r2, #0
	bne _080BC338
	ldr r4, _080BC398  @ =0x00000FF2
	add r0, r7, r4
	add r0, r0, r9
	strb r2, [r0]
_080BC338:
	mov r0, #1
	neg r0, r0
	add r9, r9, r0
	mov r1, r9
	cmp r1, #0
	blt _080BC346
	b _080BC246
_080BC346:
	ldr r4, _080BC384  @ =gRam
	ldr r2, _080BC39C  @ =0x000016C4
	add r0, r4, r2
	mov r1, #0
	mov r3, sp
	ldrh r3, [r3]
	strh r3, [r0]
	sub r2, r2, #4
	add r0, r4, r2
	mov r3, sp
	ldrh r3, [r3, #4]
	strh r3, [r0]
	ldr r0, _080BC390  @ =0x000009AD
	add r4, r4, r0
	strb r1, [r4]
	bl sub_080CE324
	mov r1, sp
	ldrb r1, [r1, #8]
	strb r1, [r4]
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BC380:
	.4byte 0x00000F08
_080BC384:
	.4byte gRam
_080BC388:
	.4byte 0x00001012
_080BC38C:
	.4byte 0x000015DC
_080BC390:
	.4byte 0x000009AD
_080BC394:
	.4byte 0x00000FA2
_080BC398:
	.4byte 0x00000FF2
_080BC39C:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_080BC208

