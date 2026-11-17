	THUMB_FUNC_START sub_08021378
sub_08021378: @ 0x08021378
	push {r4-r6,lr}
	add r4, r0, #0
	ldrb r1, [r4, #11]
	mov r6, #128
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08021390
	add r0, r4, #0
	bl sub_08022044
	b _080215E6
_08021390:
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _08021488
	ldr r1, _08021480  @ =gUnknown_0813B96C
	ldrb r0, [r4, #20]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _080213B0
	b _080215E6
_080213B0:
	ldr r5, [r4, #56]
	cmp r5, #0
	beq _080213B8
	b _080215E6
_080213B8:
	add r0, r4, #0
	add r0, r0, #65
	ldrb r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080213C8
	b _080215E6
_080213C8:
	mov r0, #127
	and r0, r0, r1
	cmp r0, #16
	beq _080213D2
	b _080215E6
_080213D2:
	ldr r2, _08021484  @ =gUnknown_03006A30
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r6, #6
	strb r6, [r0, #12]
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	mov r1, #1
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #254
	strb r0, [r1]
	ldr r0, [r4, #76]
	add r0, r0, #42
	ldrb r0, [r0]
	cmp r0, #2
	beq _0802140A
	b _080215E6
_0802140A:
	ldr r1, [r4, #84]
	ldr r0, [r4, #48]
	str r0, [r1, #48]
	ldr r1, [r4, #84]
	ldr r0, [r4, #52]
	str r0, [r1, #52]
	ldr r0, [r4, #84]
	str r5, [r0, #56]
	ldr r1, [r4, #84]
	add r1, r1, #60
	ldrb r0, [r1]
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r1]
	ldr r2, [r4, #84]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	ldr r1, [r4, #84]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r1, #12]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r1, #16]
	add r1, r1, #43
	mov r0, #8
	strb r0, [r1]
	ldr r0, [r4, #84]
	mov r1, #14
	bl sub_08003870
	ldr r0, [r4, #84]
	strb r6, [r0, #20]
	ldr r0, [r4, #84]
	add r0, r0, #116
	strb r5, [r0]
	ldr r0, [r4, #84]
	add r0, r0, #117
	mov r1, #30
	strb r1, [r0]
	ldr r0, [r4, #84]
	bl sub_08022B10
	mov r0, #166
	bl play_sound
	mov r0, #163
	bl play_sound
	add r0, r4, #0
	bl DeleteThisEntity
	b _080215E6
	.byte 0x00
	.byte 0x00
_08021480:
	.4byte gUnknown_0813B96C
_08021484:
	.4byte gUnknown_03006A30
_08021488:
	ldrb r1, [r4, #10]
	cmp r1, #3
	bls _080214A6
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0802149A
	b _080215D6
_0802149A:
	add r0, r4, #0
	bl sub_08043F20
	mov r0, #5
	strb r0, [r4, #10]
	b _080215E6
_080214A6:
	ldr r0, [r4, #124]
	cmp r0, #0
	beq _080214B0
	sub r0, r0, #1
	str r0, [r4, #124]
_080214B0:
	ldrb r0, [r4, #20]
	cmp r0, #8
	bne _080214B8
	b _080215D6
_080214B8:
	ldr r0, [r4, #56]
	cmp r0, #0
	beq _080214C0
	b _080215D6
_080214C0:
	cmp r1, #0
	bne _080214C6
	b _080215D6
_080214C6:
	add r0, r4, #0
	add r0, r0, #65
	ldrb r1, [r0]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080214D6
	b _080215D6
_080214D6:
	mov r0, #127
	and r0, r0, r1
	cmp r0, #0
	beq _080215D6
	cmp r0, #16
	bne _080215AA
	ldr r2, _0802156C  @ =gUnknown_03006A30
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	mov r1, #6
	strb r1, [r0, #12]
	ldr r0, [r4, #76]
	ldrb r1, [r0, #10]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r2
	add r0, r0, #56
	mov r1, #1
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #254
	strb r0, [r1]
	ldr r0, [r4, #76]
	add r0, r0, #42
	ldrb r0, [r0]
	cmp r0, #2
	bne _08021580
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r4, #12]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r1, r4, #0
	add r1, r1, #43
	mov r0, #8
	strb r0, [r1]
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	mov r0, #128
	lsl r0, r0, #19
	add r1, r1, r0
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	add r0, r4, #0
	add r0, r0, #117
	ldrb r1, [r0]
	add r2, r0, #0
	cmp r1, #0
	beq _08021570
	add r1, r4, #0
	add r1, r1, #116
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _08021576
	.byte 0x00
	.byte 0x00
_0802156C:
	.4byte gUnknown_03006A30
_08021570:
	add r0, r4, #0
	add r0, r0, #116
	strb r1, [r0]
_08021576:
	mov r0, #30
	strb r0, [r2]
	add r0, r4, #0
	bl sub_08022B10
_08021580:
	ldrb r0, [r4, #10]
	cmp r0, #3
	bne _0802159E
	ldrb r0, [r4, #20]
	cmp r0, #2
	beq _0802159E
	cmp r0, #2
	blt _08021598
	cmp r0, #7
	bgt _08021598
	cmp r0, #6
	bge _0802159E
_08021598:
	mov r0, #163
	bl play_sound
_0802159E:
	mov r0, #6
	strb r0, [r4, #20]
	mov r0, #166
	bl play_sound
	b _080215D6
_080215AA:
	add r1, r4, #0
	add r1, r1, #61
	mov r0, #216
	strb r0, [r1]
	ldrb r0, [r4, #10]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #25
	mov r0, #160
	lsl r0, r0, #19
	add r1, r1, r0
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	ldrb r0, [r4, #20]
	add r1, r4, #0
	add r1, r1, #114
	strb r0, [r1]
	mov r0, #5
	strb r0, [r4, #20]
_080215D6:
	ldr r0, _080215EC  @ =gUnknown_0813B928
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_080215E6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080215EC:
	.4byte gUnknown_0813B928
	THUMB_FUNC_END sub_08021378

