	THUMB_FUNC_START sub_08032264
sub_08032264: @ 0x08032264
	push {r4-r6,lr}
	ldr r0, _0803227C  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r6, r0, #0
	cmp r1, #16
	bls _08032272
	b _0803252E
_08032272:
	lsl r0, r1, #2
	ldr r1, _08032280  @ =0x08032284
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_0803227C:
	.4byte gUnknown_02016D60
_08032280:
	.4byte 0x08032284
	.4byte _080322C8
	.4byte _080322DC
	.4byte _08032300
	.4byte _0803231C
	.4byte _08032344
	.4byte _08032364
	.4byte _080323DC
	.4byte _08032380
	.4byte _080323BC
	.4byte _0803245C
	.4byte _080323DC
	.4byte _080323FA
	.4byte _08032440
	.4byte _0803245C
	.4byte _08032478
	.4byte _080324C0
	.4byte _0803250C
_080322C8:
	ldr r0, _080322D8  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080322D6
	b _0803252E
_080322D6:
	b _0803236E
_080322D8:
	.4byte gUnknown_0201F000
_080322DC:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _080322EA
	b _0803252E
_080322EA:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #120
	strh r0, [r6, #4]
	ldr r2, _080322FC  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #2
	b _0803252A
_080322FC:
	.4byte gUnknown_0201F000
_08032300:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0803230E
	b _0803252E
_0803230E:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r0, _08032318  @ =0x00000A02
	b _08032396
_08032318:
	.4byte 0x00000A02
_0803231C:
	ldr r0, _08032338  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	beq _0803232A
	b _0803252E
_0803232A:
	ldr r0, _0803233C  @ =0x800B01B9
	bl play_sound
	bl sub_0800D644
	ldr r1, _08032340  @ =gUnknown_02016D60
	b _0803246C
_08032338:
	.4byte gUnknown_02000010
_0803233C:
	.4byte 0x800B01B9
_08032340:
	.4byte gUnknown_02016D60
_08032344:
	bl sub_08032220
	lsl r0, r0, #24
	cmp r0, #0
	beq _08032350
	b _0803252E
_08032350:
	ldr r1, _0803235C  @ =gUnknown_0202A7E0
	mov r0, #7
	strb r0, [r1, #4]
	ldr r1, _08032360  @ =gUnknown_02016D60
	b _0803246C
	.byte 0x00
	.byte 0x00
_0803235C:
	.4byte gUnknown_0202A7E0
_08032360:
	.4byte gUnknown_02016D60
_08032364:
	ldr r0, _0803237C  @ =gUnknown_0202A7E0
	ldrb r0, [r0, #2]
	cmp r0, #0
	beq _0803236E
	b _0803252E
_0803236E:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #30
	strh r0, [r6, #4]
	b _0803252E
	.byte 0x00
	.byte 0x00
_0803237C:
	.4byte gUnknown_0202A7E0
_08032380:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _0803238E
	b _0803252E
_0803238E:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r0, _080323B4  @ =0x00000A03
_08032396:
	bl sub_0800D67C
	ldr r3, _080323B8  @ =gUnknown_02000010
	ldrb r1, [r3, #3]
	mov r2, #32
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r2, r2, r0
	strb r2, [r3, #4]
	b _0803252E
_080323B4:
	.4byte 0x00000A03
_080323B8:
	.4byte gUnknown_02000010
_080323BC:
	ldr r0, _080323D4  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	beq _080323CA
	b _0803252E
_080323CA:
	bl sub_0800D644
	ldr r1, _080323D8  @ =gUnknown_02016D60
	b _0803246C
	.byte 0x00
	.byte 0x00
_080323D4:
	.4byte gUnknown_02000010
_080323D8:
	.4byte gUnknown_02016D60
_080323DC:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _080323EA
	b _0803252E
_080323EA:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #60
	strh r0, [r6, #4]
	bl sub_08032868
	b _0803252E
_080323FA:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08032408
	b _0803252E
_08032408:
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	ldr r0, _08032434  @ =0x00000A04
	bl sub_0800D67C
	ldr r3, _08032438  @ =gUnknown_02000010
	ldrb r1, [r3, #3]
	mov r2, #32
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r2, r2, r0
	strb r2, [r3, #4]
	ldr r0, _0803243C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	str r0, [r3, #8]
	b _0803252E
_08032434:
	.4byte 0x00000A04
_08032438:
	.4byte gUnknown_02000010
_0803243C:
	.4byte gUnknown_03006C80
_08032440:
	ldr r0, _08032454  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _0803252E
	bl sub_0800D644
	ldr r1, _08032458  @ =gUnknown_02016D60
	b _0803246C
_08032454:
	.4byte gUnknown_02000010
_08032458:
	.4byte gUnknown_02016D60
_0803245C:
	bl sub_08032220
	lsl r0, r0, #24
	cmp r0, #0
	bne _0803252E
	ldr r1, _08032474  @ =gUnknown_02016D60
	mov r0, #60
	strh r0, [r1, #4]
_0803246C:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0803252E
_08032474:
	.4byte gUnknown_02016D60
_08032478:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803252E
	mov r0, #104
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	mov r5, #252
	lsl r5, r5, #1
	strh r5, [r0, #50]
	mov r4, #247
	lsl r4, r4, #1
	strh r4, [r0, #54]
	mov r0, #104
	mov r1, #3
	mov r2, #4
	bl sub_0804C8A8
	strh r5, [r0, #50]
	strh r4, [r0, #54]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #60
	strh r0, [r6, #4]
	ldr r0, _080324BC  @ =0x80040000
	bl play_sound
	b _0803252E
	.byte 0x00
	.byte 0x00
_080324BC:
	.4byte 0x80040000
_080324C0:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803252E
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #120
	strh r0, [r6, #4]
	bl sub_08032868
	mov r1, #0
	ldr r2, _08032504  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r1, r0
	bcs _0803252E
	ldr r4, _08032508  @ =gUnknown_03006A58
	mov r3, #4
_080324E8:
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r4
	ldr r0, [r0]
	add r0, r0, #42
	strb r3, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r2]
	cmp r1, r0
	bcc _080324E8
	b _0803252E
_08032504:
	.4byte gUnknown_03006C80
_08032508:
	.4byte gUnknown_03006A58
_0803250C:
	ldrh r0, [r6, #4]
	sub r0, r0, #1
	strh r0, [r6, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0803252E
	ldr r1, _08032534  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	strb r0, [r6]
	ldr r2, _08032538  @ =gUnknown_0201F000
	ldr r0, [r2]
	mov r1, #4
_0803252A:
	orr r0, r0, r1
	str r0, [r2]
_0803252E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08032534:
	.4byte gSubState
_08032538:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08032264

