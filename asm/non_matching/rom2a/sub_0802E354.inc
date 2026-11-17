	THUMB_FUNC_START sub_0802E354
sub_0802E354: @ 0x0802E354
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r5, _0802E36C  @ =gSubState
	ldrb r0, [r5]
	cmp r0, #1
	beq _0802E3EC
	cmp r0, #1
	bgt _0802E370
	cmp r0, #0
	beq _0802E37A
	b _0802E4A4
	.byte 0x00
	.byte 0x00
_0802E36C:
	.4byte gSubState
_0802E370:
	cmp r0, #2
	beq _0802E3FC
	cmp r0, #3
	beq _0802E428
	b _0802E4A4
_0802E37A:
	ldr r0, _0802E3D4  @ =gUnknown_03000520
	ldrb r4, [r0]
	cmp r4, #0
	beq _0802E384
	b _0802E4AC
_0802E384:
	bl sub_0802E1A8
	ldr r0, _0802E3D8  @ =gUnknown_02016D60
	add r0, r0, #39
	mov r1, #1
	strb r1, [r0]
	ldr r1, _0802E3DC  @ =gUnknown_030004A0
	mov r0, #226
	lsl r0, r0, #5
	strh r0, [r1]
	strh r4, [r1, #34]
	mov r2, #168
	lsl r2, r2, #1
	strh r2, [r1, #36]
	strh r4, [r1, #46]
	strh r2, [r1, #48]
	ldr r0, _0802E3E0  @ =gUnknown_03000450
	strh r4, [r0, #32]
	strh r2, [r0, #34]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r2, _0802E3E4  @ =gUnknown_03000E20
	ldr r0, _0802E3E8  @ =gUnknown_03006C80
	ldrb r0, [r0, #2]
	mov r3, #165
	lsl r3, r3, #2
	add r1, r3, #0
	cmp r0, #0
	beq _0802E3C6
	mov r0, #150
	lsl r0, r0, #1
	add r1, r0, #0
_0802E3C6:
	strh r1, [r2, #2]
	mov r0, #0
	mov r1, #4
	bl sub_0800C0B0
	b _0802E4A4
	.byte 0x00
	.byte 0x00
_0802E3D4:
	.4byte gUnknown_03000520
_0802E3D8:
	.4byte gUnknown_02016D60
_0802E3DC:
	.4byte gUnknown_030004A0
_0802E3E0:
	.4byte gUnknown_03000450
_0802E3E4:
	.4byte gUnknown_03000E20
_0802E3E8:
	.4byte gUnknown_03006C80
_0802E3EC:
	ldr r0, _0802E3F8  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802E4AC
	mov r0, #2
	b _0802E4A2
_0802E3F8:
	.4byte gUnknown_03000520
_0802E3FC:
	ldr r1, _0802E420  @ =gUnknown_03000E20
	ldrh r0, [r1, #2]
	sub r0, r0, #1
	strh r0, [r1, #2]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802E4A4
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r0, _0802E424  @ =0x80040000
	bl play_sound
	mov r0, #1
	mov r1, #8
	bl sub_0800C0B0
	b _0802E4A4
_0802E420:
	.4byte gUnknown_03000E20
_0802E424:
	.4byte 0x80040000
_0802E428:
	ldr r0, _0802E480  @ =gUnknown_03000520
	ldrb r4, [r0]
	cmp r4, #0
	bne _0802E4AC
	ldr r0, _0802E484  @ =0x80010000
	bl play_sound
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0802BF60
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	strh r4, [r0]
	ldr r0, _0802E488  @ =gPaletteBuf2
	strh r4, [r0]
	str r4, [sp]
	mov r1, #192
	lsl r1, r1, #19
	ldr r2, _0802E48C  @ =0x01006000
	mov r0, sp
	bl CpuFastSet
	ldr r4, _0802E490  @ =gUnknown_03006C80
	ldrb r0, [r4, #2]
	cmp r0, #0
	beq _0802E498
	mov r0, #2
	bl set_main_state
	ldr r1, _0802E494  @ =gUnknown_03005050
	mov r0, #1
	strb r0, [r1]
	add r1, r4, #0
	add r1, r1, #79
	mov r0, #40
	strb r0, [r1]
	bl sub_08039D64
	b _0802E4A4
_0802E480:
	.4byte gUnknown_03000520
_0802E484:
	.4byte 0x80010000
_0802E488:
	.4byte gPaletteBuf2
_0802E48C:
	.4byte 0x01006000
_0802E490:
	.4byte gUnknown_03006C80
_0802E494:
	.4byte gUnknown_03005050
_0802E498:
	ldr r0, _0802E4B4  @ =gUnknown_03005050
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #0
_0802E4A2:
	strb r0, [r5]
_0802E4A4:
	bl sub_08137AFC
	bl sub_08000BAC
_0802E4AC:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_0802E4B4:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0802E354

