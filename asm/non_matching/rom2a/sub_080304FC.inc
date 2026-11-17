	THUMB_FUNC_START sub_080304FC
sub_080304FC: @ 0x080304FC
	push {lr}
	bl sub_08037554
	cmp r0, #0
	beq _080305AC
	bl sub_08037750
	bl sub_0800099C
	ldr r0, _0803052C  @ =gUnknown_03005E10
	ldrh r1, [r0]
	mov r0, #96
	and r0, r0, r1
	cmp r0, #0
	beq _08030538
	ldr r1, _08030530  @ =gUnknown_02016D60
	ldrb r0, [r1, #8]
	add r2, r1, #0
	ldrb r3, [r1, #11]
	cmp r0, r3
	beq _08030534
	add r0, r0, #1
	b _08030556
	.byte 0x00
	.byte 0x00
_0803052C:
	.4byte gUnknown_03005E10
_08030530:
	.4byte gUnknown_02016D60
_08030534:
	mov r0, #0
	b _08030556
_08030538:
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _08030566
	ldr r1, _08030550  @ =gUnknown_02016D60
	ldrb r0, [r1, #8]
	add r2, r1, #0
	cmp r0, #0
	bne _08030554
	ldrb r0, [r2, #11]
	b _08030556
	.byte 0x00
	.byte 0x00
_08030550:
	.4byte gUnknown_02016D60
_08030554:
	sub r0, r0, #1
_08030556:
	strb r0, [r1, #8]
	ldrb r0, [r2, #8]
	bl sub_08030214
	mov r0, #61
	bl play_sound
	b _08030598
_08030566:
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	beq _08030598
	ldr r0, _080305B0  @ =0x80010000
	bl play_sound
	mov r0, #62
	bl play_sound
	mov r0, #77
	bl play_sound
	ldr r0, _080305B4  @ =gUnknown_03000450
	ldr r0, [r0]
	mov r1, #0
	bl sub_080599A8
	ldr r1, _080305B8  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #5
	bl sub_08036704
_08030598:
	bl sub_08030728
	bl sub_08030654
	bl sub_08137AFC
	bl sub_08000BAC
	bl sub_08037574
_080305AC:
	pop {r0}
	bx r0
_080305B0:
	.4byte 0x80010000
_080305B4:
	.4byte gUnknown_03000450
_080305B8:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_080304FC

