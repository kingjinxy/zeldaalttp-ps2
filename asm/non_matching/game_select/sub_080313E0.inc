	THUMB_FUNC_START sub_080313E0
sub_080313E0: @ 0x080313E0
	push {lr}
	ldr r0, _08031404  @ =gUnknown_03005E10
	ldrh r1, [r0]
	mov r0, #9
	and r0, r0, r1
	cmp r0, #0
	beq _08031414
	ldr r1, _08031408  @ =gUnknown_03005050
	mov r0, #5
	strb r0, [r1]
	ldr r1, _0803140C  @ =gSubState
	mov r0, #0
	strb r0, [r1]
	ldr r1, _08031410  @ =gUnknown_02016D60
	mov r0, #1
	strb r0, [r1, #8]
	b _0803143C
	.byte 0x00
	.byte 0x00
_08031404:
	.4byte gUnknown_03005E10
_08031408:
	.4byte gUnknown_03005050
_0803140C:
	.4byte gSubState
_08031410:
	.4byte gUnknown_02016D60
_08031414:
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _0803143C
	ldr r1, _08031440  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_08059A44
	mov r0, #62
	bl play_sound
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _08031444  @ =gUnknown_02016D60
	mov r0, #60
	strh r0, [r1, #4]
_0803143C:
	pop {r0}
	bx r0
_08031440:
	.4byte gSubState
_08031444:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080313E0

