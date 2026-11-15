	THUMB_FUNC_START sub_08030FE0
sub_08030FE0: @ 0x08030FE0
	push {r4,lr}
	ldr r1, _08030FFC  @ =gUnknown_03005E10
	ldr r0, _08031000  @ =gNewKeys
	ldrh r3, [r0]
	strh r3, [r1]
	ldr r4, _08031004  @ =gUnknown_02016D60
	ldrb r2, [r4]
	cmp r2, #1
	beq _0803102C
	cmp r2, #1
	bgt _08031008
	cmp r2, #0
	beq _08031012
	b _080310AA
_08030FFC:
	.4byte gUnknown_03005E10
_08031000:
	.4byte gNewKeys
_08031004:
	.4byte gUnknown_02016D60
_08031008:
	cmp r2, #2
	beq _08031084
	cmp r2, #3
	beq _08031098
	b _080310AA
_08031012:
	ldr r0, _08031028  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _080310AA
	mov r0, #1
	strb r0, [r4]
	strh r2, [r4, #4]
	b _080310AA
	.byte 0x00
	.byte 0x00
_08031028:
	.4byte gUnknown_02000010
_0803102C:
	ldrh r0, [r4, #4]
	cmp r0, #29
	bls _0803106C
	mov r0, #9
	and r0, r0, r3
	cmp r0, #0
	beq _08031048
	mov r0, #2
	strb r0, [r4]
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	b _080310AA
_08031048:
	mov r0, #2
	and r0, r0, r3
	cmp r0, #0
	beq _080310AA
	mov r0, #3
	strb r0, [r4]
	mov r1, #8
	bl sub_0800C0B0
	ldr r0, _08031068  @ =0x80010000
	bl play_sound
	mov r0, #66
	bl play_sound
	b _080310AA
_08031068:
	.4byte 0x80010000
_0803106C:
	add r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #15
	bne _080310AA
	mov r0, #2
	mov r1, #24
	mov r2, #0
	bl sub_0804C8A8
	b _080310AA
_08031084:
	ldr r0, _08031094  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _080310AA
	bl sub_08030E0C
	b _080310AA
	.byte 0x00
	.byte 0x00
_08031094:
	.4byte gUnknown_03000520
_08031098:
	ldr r0, _080310B0  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _080310AA
	bl sub_08030E0C
	mov r0, #6
	bl set_main_state
_080310AA:
	pop {r4}
	pop {r0}
	bx r0
_080310B0:
	.4byte gUnknown_03000520
	THUMB_FUNC_END sub_08030FE0

