	THUMB_FUNC_START sub_0802F364
sub_0802F364: @ 0x0802F364
	push {r4,lr}
	ldr r0, _0802F37C  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r4, r0, #0
	cmp r1, #13
	bls _0802F372
	b _0802F676
_0802F372:
	lsl r0, r1, #2
	ldr r1, _0802F380  @ =0x0802F384
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0802F37C:
	.4byte gUnknown_02016D60
_0802F380:
	.4byte 0x0802F384
	.4byte _0802F3BC
	.4byte _0802F3DC
	.4byte _0802F43C
	.4byte _0802F474
	.4byte _0802F4E0
	.4byte _0802F524
	.4byte _0802F542
	.4byte _0802F566
	.4byte _0802F594
	.4byte _0802F5CC
	.4byte _0802F5DC
	.4byte _0802F5EC
	.4byte _0802F5FC
	.4byte _0802F654
_0802F3BC:
	ldr r2, _0802F3D0  @ =gUnknown_030004A0
	ldr r1, _0802F3D4  @ =gUnknown_03000450
	mov r0, #0
	strh r0, [r1, #34]
	strh r0, [r2, #48]
	strh r0, [r2, #36]
	ldr r0, _0802F3D8  @ =0x800B01AD
	bl play_sound
	b _0802F4BC
_0802F3D0:
	.4byte gUnknown_030004A0
_0802F3D4:
	.4byte gUnknown_03000450
_0802F3D8:
	.4byte 0x800B01AD
_0802F3DC:
	ldr r0, _0802F430  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _0802F3EA
	b _0802F676
_0802F3EA:
	ldrb r0, [r4, #12]
	sub r0, r0, #1
	strb r0, [r4, #12]
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802F3F8
	b _0802F676
_0802F3F8:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #120
	strh r0, [r4, #4]
	mov r0, #90
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	ldr r4, _0802F434  @ =gUnknown_0202A7E0
	str r0, [r4, #12]
	mov r0, #90
	mov r1, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r4, #32]
	mov r0, #90
	mov r1, #0
	mov r2, #2
	bl sub_0804C8A8
	str r0, [r4, #52]
	ldr r0, _0802F438  @ =0x00000201
	bl play_sound
	b _0802F676
_0802F430:
	.4byte gUnknown_03000948
_0802F434:
	.4byte gUnknown_0202A7E0
_0802F438:
	.4byte 0x00000201
_0802F43C:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F44A
	b _0802F676
_0802F44A:
	mov r0, #161
	lsl r0, r0, #3
	bl sub_0800D67C
	ldr r3, _0802F470  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	b _0802F63C
_0802F470:
	.4byte gUnknown_02000010
_0802F474:
	ldr r0, _0802F4C8  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0802F482
	b _0802F676
_0802F482:
	ldr r2, _0802F4CC  @ =gUnknown_030004A0
	ldr r1, _0802F4D0  @ =gUnknown_03000450
	ldrh r0, [r1, #34]
	add r0, r0, #1
	strh r0, [r1, #34]
	strh r0, [r2, #48]
	strh r0, [r2, #36]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #119
	bgt _0802F49A
	b _0802F676
_0802F49A:
	ldr r0, _0802F4D4  @ =0x00000509
	bl sub_0800D67C
	ldr r3, _0802F4D8  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
_0802F4BC:
	ldr r1, _0802F4DC  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0802F676
	.byte 0x00
	.byte 0x00
_0802F4C8:
	.4byte gUnknown_03000948
_0802F4CC:
	.4byte gUnknown_030004A0
_0802F4D0:
	.4byte gUnknown_03000450
_0802F4D4:
	.4byte 0x00000509
_0802F4D8:
	.4byte gUnknown_02000010
_0802F4DC:
	.4byte gUnknown_02016D60
_0802F4E0:
	ldr r0, _0802F518  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0802F4EE
	b _0802F676
_0802F4EE:
	ldr r2, _0802F51C  @ =gUnknown_030004A0
	ldr r1, _0802F520  @ =gUnknown_03000450
	ldrh r0, [r1, #34]
	add r0, r0, #1
	strh r0, [r1, #34]
	strh r0, [r2, #48]
	strh r0, [r2, #36]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #191
	bgt _0802F506
	b _0802F676
_0802F506:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #30
	strh r0, [r4, #4]
	mov r0, #1
	mov r1, #0
	b _0802F55E
	.byte 0x00
	.byte 0x00
_0802F518:
	.4byte gUnknown_03000948
_0802F51C:
	.4byte gUnknown_030004A0
_0802F520:
	.4byte gUnknown_03000450
_0802F524:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F532
	b _0802F676
_0802F532:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #30
	strh r0, [r4, #4]
	mov r0, #0
	mov r1, #1
	b _0802F55E
_0802F542:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F550
	b _0802F676
_0802F550:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #180
	strh r0, [r4, #4]
	mov r0, #2
	mov r1, #2
_0802F55E:
	mov r2, #120
	bl sub_0802F9F8
	b _0802F676
_0802F566:
	ldrh r0, [r4, #4]
	cmp r0, #60
	bne _0802F570
	bl sub_0800D644
_0802F570:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0802F57E
	b _0802F676
_0802F57E:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #60
	strh r0, [r4, #4]
	ldr r1, _0802F590  @ =gUnknown_03006A30
	mov r0, #10
	strb r0, [r1, #12]
	b _0802F676
_0802F590:
	.4byte gUnknown_03006A30
_0802F594:
	ldrh r0, [r4, #4]
	cmp r0, #30
	bne _0802F5A4
	ldr r0, _0802F5C4  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #0
	strb r1, [r0]
_0802F5A4:
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802F676
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #30
	strh r0, [r4, #4]
	ldr r1, _0802F5C8  @ =0x0000050A
	mov r0, #0
	bl sub_0802FA3C
	b _0802F676
_0802F5C4:
	.4byte gUnknown_03006A30
_0802F5C8:
	.4byte 0x0000050A
_0802F5CC:
	ldr r1, _0802F5D8  @ =0x0000050B
	mov r0, #1
	bl sub_0802F304
	b _0802F676
	.byte 0x00
	.byte 0x00
_0802F5D8:
	.4byte 0x0000050B
_0802F5DC:
	ldr r1, _0802F5E8  @ =0x0000050C
	mov r0, #2
	bl sub_0802F304
	b _0802F676
	.byte 0x00
	.byte 0x00
_0802F5E8:
	.4byte 0x0000050C
_0802F5EC:
	ldr r1, _0802F5F8  @ =0x0000050D
	mov r0, #0
	bl sub_0802F304
	b _0802F676
	.byte 0x00
	.byte 0x00
_0802F5F8:
	.4byte 0x0000050D
_0802F5FC:
	ldr r0, _0802F644  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0802F676
	bl sub_0800D644
	ldr r4, _0802F648  @ =gUnknown_02016D60
	mov r0, #255
	strb r0, [r4, #15]
	ldr r1, _0802F64C  @ =gUnknown_03006A30
	mov r0, #11
	strb r0, [r1, #12]
	mov r0, #0
	mov r1, #3
	mov r2, #60
	bl sub_0802F9F8
	mov r0, #1
	mov r1, #4
	mov r2, #60
	bl sub_0802F9F8
	mov r0, #2
	mov r1, #5
	mov r2, #60
	bl sub_0802F9F8
	ldr r0, _0802F650  @ =0x00000201
	bl play_sound
_0802F63C:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _0802F676
_0802F644:
	.4byte gUnknown_02000010
_0802F648:
	.4byte gUnknown_02016D60
_0802F64C:
	.4byte gUnknown_03006A30
_0802F650:
	.4byte 0x00000201
_0802F654:
	bl sub_0802FA94
	ldr r0, _0802F67C  @ =gUnknown_0202A4F8
	ldr r0, [r0]
	mov r1, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0802F676
	ldr r1, _0802F680  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0802F684  @ =gUnknown_02016D60
	mov r0, #0
	strb r0, [r1]
	mov r0, #120
	strh r0, [r1, #4]
_0802F676:
	pop {r4}
	pop {r0}
	bx r0
_0802F67C:
	.4byte gUnknown_0202A4F8
_0802F680:
	.4byte gSubState
_0802F684:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0802F364

