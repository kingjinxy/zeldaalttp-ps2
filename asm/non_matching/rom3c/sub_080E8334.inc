	THUMB_FUNC_START sub_080E8334
sub_080E8334: @ 0x080E8334
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E84D0  @ =gRam
	ldr r1, _080E84D4  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080E834C
	b _080E8548
_080E834C:
	ldr r2, _080E84D8  @ =0x00001172
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080E84DC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E8366
	mov r0, #4
	bl sub_080CF3A0
_080E8366:
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _080E837C
	b _080E85C8
_080E837C:
	add r0, r4, #0
	bl sub_080E8914
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E8390
	b _080E8538
_080E8390:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r2, _080E84E0  @ =0x000009B2
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080E83D0
	ldr r1, _080E84E4  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E83D0
	sub r2, r2, #28
	add r0, r5, r2
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080E83D0
	add r0, r4, #0
	bl sub_080C79F8
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E83D0
	b _080E852C
_080E83D0:
	ldr r6, _080E84D0  @ =gRam
	ldr r1, _080E84E8  @ =0x0000176C
	add r0, r6, r1
	ldr r2, _080E84EC  @ =0x0000180D
	add r1, r6, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	add r7, r0, #0
	orr r7, r7, r2
	cmp r7, #0
	beq _080E83E8
	b _080E85C8
_080E83E8:
	ldr r1, _080E84F0  @ =0x00001791
	add r0, r6, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080E83F8
	b _080E85C8
_080E83F8:
	ldr r0, _080E84F4  @ =gShield
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080E8402
	b _080E85C8
_080E8402:
	mov r2, #161
	lsl r2, r2, #4
	add r0, r6, r2
	ldr r2, _080E84F8  @ =0x000010F2
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _080E8418
	b _080E85C8
_080E8418:
	add r0, r4, #0
	bl sub_080C4574
	ldr r1, _080E84FC  @ =0x000016D5
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r5, r0, #1
	ldr r2, _080E8500  @ =0x000016EA
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E8436
	ldr r0, _080E8504  @ =gUnknown_0817795C
	add r0, r5, r0
	ldrb r5, [r0]
_080E8436:
	ldr r1, _080E8508  @ =0x000016C4
	add r0, r6, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r6, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080E850C  @ =gUnknown_08177958
	add r0, r5, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080E8510  @ =gUnknown_08177960
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	ldrb r3, [r0]
	add r1, r1, #1
	add r0, r6, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080E8514  @ =gUnknown_08177964
	add r0, r5, r0
	orr r3, r3, r1
	ldrb r0, [r0]
	add r3, r3, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	strb r2, [r0]
	lsr r2, r2, #8
	add r1, r1, #16
	add r0, r6, r1
	strb r2, [r0]
	ldr r0, _080E8518  @ =gUnknown_08177968
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080E851C  @ =0x00000964
	add r0, r6, r2
	strb r1, [r0]
	ldr r1, _080E8520  @ =0x00000961
	add r0, r6, r1
	strb r3, [r0]
	lsr r3, r3, #8
	add r2, r2, #13
	add r0, r6, r2
	strb r3, [r0]
	ldr r0, _080E8524  @ =gUnknown_0817796C
	add r0, r5, r0
	ldrb r1, [r0]
	sub r2, r2, #12
	add r0, r6, r2
	strb r1, [r0]
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E84B8
	b _080E85C8
_080E84B8:
	add r0, r4, #0
	bl sub_080C444C
	ldr r1, _080E8528  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r7, [r0]
	add r0, r4, #0
	mov r1, #9
	bl sub_080CF0AC
	b _080E85C8
_080E84D0:
	.4byte gRam
_080E84D4:
	.4byte 0x00001062
_080E84D8:
	.4byte 0x00001172
_080E84DC:
	.4byte 0x00000FC2
_080E84E0:
	.4byte 0x000009B2
_080E84E4:
	.4byte 0x00000FD2
_080E84E8:
	.4byte 0x0000176C
_080E84EC:
	.4byte 0x0000180D
_080E84F0:
	.4byte 0x00001791
_080E84F4:
	.4byte gShield
_080E84F8:
	.4byte 0x000010F2
_080E84FC:
	.4byte 0x000016D5
_080E8500:
	.4byte 0x000016EA
_080E8504:
	.4byte gUnknown_0817795C
_080E8508:
	.4byte 0x000016C4
_080E850C:
	.4byte gUnknown_08177958
_080E8510:
	.4byte gUnknown_08177960
_080E8514:
	.4byte gUnknown_08177964
_080E8518:
	.4byte gUnknown_08177968
_080E851C:
	.4byte 0x00000964
_080E8520:
	.4byte 0x00000961
_080E8524:
	.4byte gUnknown_0817796C
_080E8528:
	.4byte 0x00000FA2
_080E852C:
	ldr r2, _080E8534  @ =0x00000FA2
	add r0, r5, r2
	b _080E853C
	.byte 0x00
	.byte 0x00
_080E8534:
	.4byte 0x00000FA2
_080E8538:
	ldr r1, _080E8544  @ =0x00000FA2
	add r0, r5, r1
_080E853C:
	add r0, r4, r0
	strb r6, [r0]
	b _080E85C8
	.byte 0x00
	.byte 0x00
_080E8544:
	.4byte 0x00000FA2
_080E8548:
	ldr r2, _080E855C  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E8560
	add r0, r4, #0
	bl sub_080E8808
	b _080E8572
_080E855C:
	.4byte 0x00000F52
_080E8560:
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r4, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E85C8
_080E8572:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E85C8
	ldr r0, _080E8598  @ =gRam
	ldr r1, _080E859C  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	beq _080E85B2
	cmp r0, #1
	bgt _080E85A0
	cmp r0, #0
	beq _080E85AA
	b _080E85C8
	.byte 0x00
	.byte 0x00
_080E8598:
	.4byte gRam
_080E859C:
	.4byte 0x00000F52
_080E85A0:
	cmp r0, #2
	beq _080E85BA
	cmp r0, #3
	beq _080E85C2
	b _080E85C8
_080E85AA:
	add r0, r4, #0
	bl sub_080E85D0
	b _080E85C8
_080E85B2:
	add r0, r4, #0
	bl sub_080E86D8
	b _080E85C8
_080E85BA:
	add r0, r4, #0
	bl sub_080E8748
	b _080E85C8
_080E85C2:
	add r0, r4, #0
	bl sub_080E87AC
_080E85C8:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E8334

