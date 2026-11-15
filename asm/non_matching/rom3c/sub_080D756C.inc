	THUMB_FUNC_START sub_080D756C
sub_080D756C: @ 0x080D756C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080D7608
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D759E
	ldr r0, _080D7610  @ =gRam
	ldr r1, _080D7614  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080D759E:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r7, _080D7610  @ =gRam
	ldr r2, _080D7618  @ =0x00001152
	add r0, r7, r2
	add r5, r4, r0
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r1, _080D761C  @ =0x00001142
	add r0, r7, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D75F0
	ldr r1, _080D7620  @ =0x00000F12
	add r0, r7, r1
	add r0, r4, r0
	strb r6, [r0]
	strb r6, [r2]
	ldrb r0, [r5]
	mvn r0, r0
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, #1
	asr r0, r0, #2
	strb r0, [r5]
	mov r1, #254
	and r0, r0, r1
	cmp r0, #0
	beq _080D75F0
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
_080D75F0:
	ldr r1, _080D7624  @ =gUnknown_08175684
	ldr r0, _080D7610  @ =gRam
	ldr r2, _080D7614  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080D7608:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D7610:
	.4byte gRam
_080D7614:
	.4byte 0x00000F52
_080D7618:
	.4byte 0x00001152
_080D761C:
	.4byte 0x00001142
_080D7620:
	.4byte 0x00000F12
_080D7624:
	.4byte gUnknown_08175684
	THUMB_FUNC_END sub_080D756C

