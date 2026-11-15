	THUMB_FUNC_START sub_08031F20
sub_08031F20: @ 0x08031F20
	push {r4,lr}
	ldr r4, _08031F30  @ =gSubState
	ldrb r0, [r4]
	cmp r0, #0
	beq _08031F34
	cmp r0, #1
	beq _08031F50
	b _08031F6E
_08031F30:
	.4byte gSubState
_08031F34:
	ldr r0, _08031F4C  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _08031F6E
	bl sub_0800D644
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _08031F6E
_08031F4C:
	.4byte gUnknown_02000010
_08031F50:
	bl sub_08031B4C
	lsl r0, r0, #24
	cmp r0, #0
	bne _08031F6E
	ldr r0, _08031F74  @ =gUnknown_03005050
	mov r1, #4
	strb r1, [r0]
	mov r0, #3
	mov r1, #2
	bl sub_0800C0B0
	ldr r0, _08031F78  @ =0x00000212
	bl play_sound
_08031F6E:
	pop {r4}
	pop {r0}
	bx r0
_08031F74:
	.4byte gUnknown_03005050
_08031F78:
	.4byte 0x00000212
	THUMB_FUNC_END sub_08031F20

