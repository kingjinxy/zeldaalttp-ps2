	THUMB_FUNC_START sub_080FD280
sub_080FD280: @ 0x080FD280
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080FD310  @ =gRam
	ldr r1, _080FD314  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r2, _080FD318  @ =0x00000F02
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080FD31C  @ =0x00000952
	add r0, r5, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r12, r1
	ldr r1, _080FD320  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	sub r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r3, r3, #6
	add r0, r5, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r7, r1, #16
	ldr r0, _080FD324  @ =0x00001052
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080FD328  @ =gUnknown_0817A9AB
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #1
	and r0, r0, r1
	add r0, r0, r2
	ldrb r0, [r0]
	ldr r1, _080FD32C  @ =0x00000969
	add r6, r5, r1
	strb r0, [r6]
	mov r0, r12
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #63
	bls _080FD304
	add r0, r7, #0
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _080FD334
_080FD304:
	ldr r2, _080FD330  @ =0x00000FA2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	b _080FD4C2
	.byte 0x00
	.byte 0x00
_080FD310:
	.4byte gRam
_080FD314:
	.4byte 0x00000EE2
_080FD318:
	.4byte 0x00000F02
_080FD31C:
	.4byte 0x00000952
_080FD320:
	.4byte 0x00000ED2
_080FD324:
	.4byte 0x00001052
_080FD328:
	.4byte gUnknown_0817A9AB
_080FD32C:
	.4byte 0x00000969
_080FD330:
	.4byte 0x00000FA2
_080FD334:
	ldr r0, _080FD408  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r2, _080FD40C  @ =gUnknown_0817A9A8
	ldr r3, _080FD410  @ =0x00000F92
	add r1, r5, r3
	add r1, r4, r1
	ldrb r1, [r1]
	add r1, r1, r2
	ldrb r3, [r1]
	mov r1, #0
	ldrsb r1, [r6, r1]
	lsl r1, r1, #8
	orr r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r1, #2
	str r1, [sp]
	mov r1, r12
	add r2, r7, #0
	bl sub_080C6004
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FD36C
	b _080FD4C4
_080FD36C:
	ldr r1, _080FD414  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080FD3CA
	ldr r3, _080FD418  @ =0x000016C4
	add r2, r5, r3
	ldr r1, _080FD41C  @ =0x00001622
	add r0, r5, r1
	ldrb r1, [r0]
	sub r3, r3, #161
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bhi _080FD3CA
	mov r0, #182
	lsl r0, r0, #5
	add r2, r5, r0
	ldr r1, _080FD420  @ =0x00001624
	add r0, r5, r1
	ldrb r1, [r0]
	add r3, r3, #2
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bhi _080FD3CA
	add r0, r4, #0
	bl sub_080C3BD0
_080FD3CA:
	ldr r1, _080FD424  @ =gRam
	ldr r2, _080FD428  @ =0x00000F52
	add r0, r1, r2
	add r3, r4, r0
	ldrb r5, [r3]
	add r0, r5, #0
	cmp r0, #4
	beq _080FD48C
	cmp r0, #1
	bne _080FD434
	ldr r2, _080FD42C  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080FD3F2
	add r0, r5, #1
	strb r0, [r3]
	mov r0, #31
	strb r0, [r2]
_080FD3F2:
	ldr r3, _080FD430  @ =0x00000F12
	add r1, r1, r3
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_MoveVert
	b _080FD4C4
	.byte 0x00
	.byte 0x00
_080FD408:
	.4byte gUnknown_03003E74
_080FD40C:
	.4byte gUnknown_0817A9A8
_080FD410:
	.4byte 0x00000F92
_080FD414:
	.4byte 0x00000996
_080FD418:
	.4byte 0x000016C4
_080FD41C:
	.4byte 0x00001622
_080FD420:
	.4byte 0x00001624
_080FD424:
	.4byte gRam
_080FD428:
	.4byte 0x00000F52
_080FD42C:
	.4byte 0x00000FC2
_080FD430:
	.4byte 0x00000F12
_080FD434:
	cmp r0, #2
	bne _080FD46C
	ldr r2, _080FD458  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FD464
	ldr r3, _080FD45C  @ =0x00000F92
	add r1, r1, r3
	add r1, r4, r1
	ldr r2, _080FD460  @ =gUnknown_0817A9AD
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080FD4C4
_080FD458:
	.4byte 0x00000FC2
_080FD45C:
	.4byte 0x00000F92
_080FD460:
	.4byte gUnknown_0817A9AD
_080FD464:
	add r0, r4, #0
	bl sub_080FD4D4
	b _080FD4C4
_080FD46C:
	cmp r0, #3
	bne _080FD4A4
	ldr r2, _080FD494  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FD49C
	ldr r3, _080FD498  @ =0x00001082
	add r0, r1, r3
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #19
	bhi _080FD4C4
	add r0, r0, #1
	strb r0, [r1]
_080FD48C:
	add r0, r4, #0
	bl Sprite3_Move
	b _080FD4C4
_080FD494:
	.4byte 0x00000FC2
_080FD498:
	.4byte 0x00001082
_080FD49C:
	add r0, r4, #0
	bl sub_080FD5D4
	b _080FD4C4
_080FD4A4:
	ldr r2, _080FD4CC  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080FD4C4
	mov r0, #18
	strb r0, [r2]
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	ldr r3, _080FD4D0  @ =0x00000F12
	add r0, r1, r3
	add r0, r4, r0
	mov r1, #36
_080FD4C2:
	strb r1, [r0]
_080FD4C4:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080FD4CC:
	.4byte 0x00000FC2
_080FD4D0:
	.4byte 0x00000F12
	THUMB_FUNC_END sub_080FD280

