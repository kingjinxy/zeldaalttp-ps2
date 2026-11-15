	THUMB_FUNC_START sub_080BA3EC
sub_080BA3EC: @ 0x080BA3EC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r0, #5
	bl sub_080C1F70
	ldr r6, _080BA508  @ =gRam
	ldr r1, _080BA50C  @ =0x000010D7
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BA446
	bl GetRandomInt
	mov r5, #7
	ldr r2, _080BA510  @ =gUnknown_08170FDB
	add r1, r5, #0
	and r1, r1, r0
	add r1, r1, r2
	ldr r2, _080BA514  @ =0x00001622
	add r0, r6, r2
	ldrb r4, [r0]
	ldrb r1, [r1]
	add r4, r4, r1
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	ldr r1, _080BA518  @ =gUnknown_08170FE3
	and r5, r5, r0
	add r5, r5, r1
	ldr r1, _080BA51C  @ =0x00001624
	add r0, r6, r1
	ldrb r2, [r0]
	ldrb r5, [r5]
	add r2, r2, r5
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r4, #0
	mov r1, #3
	bl sub_080B93A8
_080BA446:
	mov r0, #3
	add r7, r6, #0
	ldr r2, _080BA520  @ =0x000009AD
	add r2, r2, r7
	mov r8, r2
_080BA450:
	lsl r4, r0, #24
	asr r6, r4, #24
	ldr r0, _080BA524  @ =0x00000FD2
	add r0, r0, r7
	mov r10, r0
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BA466
	sub r0, r0, #1
	strb r0, [r1]
_080BA466:
	ldr r1, _080BA528  @ =0x00000FF2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #227
	strb r1, [r0]
	lsr r4, r4, #24
	ldr r2, _080BA52C  @ =0x00001012
	add r0, r7, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	add r2, r2, #32
	add r0, r7, r2
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	ldr r0, _080BA530  @ =0x000015DC
	add r0, r0, r7
	mov r9, r0
	strb r4, [r0]
	mov r0, #8
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r1, r8
	ldrb r5, [r1]
	mov r2, #0
	strb r2, [r1]
	ldr r1, _080BA534  @ =gUnknown_030031D2
	add r0, r4, r1
	mov r2, #9
	strb r2, [r0]
	add r0, r4, #0
	str r2, [sp]
	bl SpriteActive_MainLong
	mov r0, r8
	strb r5, [r0]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r4, r0, #24
	ldr r2, [sp]
	cmp r0, #5
	bne _080BA450
	ldr r0, _080BA538  @ =0x00000FF7
	add r1, r7, r0
	mov r0, #114
	strb r0, [r1]
	ldr r1, _080BA53C  @ =0x00000155
	add r1, r1, r10
	mov r0, #59
	strb r0, [r1]
	mov r0, r10
	sub r0, r0, #43
	strb r2, [r0]
	sub r0, r0, #48
	strb r2, [r0]
	lsr r4, r4, #24
	mov r0, #48
	bl sub_080CF370
	mov r1, r9
	strb r4, [r1]
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl SpriteActive_MainLong
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
_080BA508:
	.4byte gRam
_080BA50C:
	.4byte 0x000010D7
_080BA510:
	.4byte gUnknown_08170FDB
_080BA514:
	.4byte 0x00001622
_080BA518:
	.4byte gUnknown_08170FE3
_080BA51C:
	.4byte 0x00001624
_080BA520:
	.4byte 0x000009AD
_080BA524:
	.4byte 0x00000FD2
_080BA528:
	.4byte 0x00000FF2
_080BA52C:
	.4byte 0x00001012
_080BA530:
	.4byte 0x000015DC
_080BA534:
	.4byte gUnknown_030031D2
_080BA538:
	.4byte 0x00000FF7
_080BA53C:
	.4byte 0x00000155
	THUMB_FUNC_END sub_080BA3EC

