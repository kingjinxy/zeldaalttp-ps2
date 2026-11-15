	THUMB_FUNC_START sub_080B55B0
sub_080B55B0: @ 0x080B55B0
	push {r4-r7,lr}
	sub sp, sp, #16
	ldr r2, _080B5654  @ =gRam
	ldr r1, _080B5658  @ =gUnknown_0816F702
	ldr r3, _080B565C  @ =0x00000AB2
	add r0, r2, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r7, [r1]
	mov r4, #15
	and r4, r4, r7
	ldr r1, _080B5660  @ =0x00000964
	add r3, r2, r1
	strb r4, [r3]
	ldr r1, _080B5664  @ =gUnknown_0816F03C
	add r0, r0, r1
	ldrb r0, [r0]
	add r5, r4, r0
	ldr r0, _080B5668  @ =0x00000965
	add r6, r2, r0
	strb r5, [r6]
	mov r1, #0
	ldrsb r1, [r3, r1]
	mov r0, #4
	sub r0, r0, r1
	cmp r0, #0
	blt _080B5604
	add r0, r5, #4
	sub r3, r0, r4
	strb r3, [r6]
	mov r0, #255
	and r0, r0, r7
	lsr r1, r0, #4
	sub r0, r1, #4
	cmp r0, #0
	blt _080B5604
	sub r0, r0, r3
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r6]
_080B5604:
	ldr r1, _080B566C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #9
	bhi _080B564A
	mov r3, #150
	lsl r3, r3, #4
	add r5, r2, r3
	mov r0, #0
	ldrsb r0, [r5, r0]
	ldr r1, _080B5670  @ =gUnknown_0816F09C
	ldrb r1, [r1, #1]
	ldr r3, _080B5674  @ =gUnknown_0816F094
	ldr r4, _080B5668  @ =0x00000965
	add r2, r2, r4
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	add r2, r2, r3
	ldrb r2, [r2]
	sub r2, r2, #48
	ldr r3, _080B5678  @ =0x00000261
	mov r4, #1
	str r4, [sp]
	mov r4, #0
	str r4, [sp, #4]
	str r4, [sp, #8]
	str r4, [sp, #12]
	bl sub_080B35E0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080B564A:
	add sp, sp, #16
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B5654:
	.4byte gRam
_080B5658:
	.4byte gUnknown_0816F702
_080B565C:
	.4byte 0x00000AB2
_080B5660:
	.4byte 0x00000964
_080B5664:
	.4byte gUnknown_0816F03C
_080B5668:
	.4byte 0x00000965
_080B566C:
	.4byte 0x00000996
_080B5670:
	.4byte gUnknown_0816F09C
_080B5674:
	.4byte gUnknown_0816F094
_080B5678:
	.4byte 0x00000261
	THUMB_FUNC_END sub_080B55B0

