	THUMB_FUNC_START sub_0803194C
sub_0803194C: @ 0x0803194C
	push {r4-r7,lr}
	sub sp, sp, #8
	ldr r0, _08031A4C  @ =gUnknown_03000520
	ldrb r4, [r0]
	cmp r4, #0
	bne _08031A42
	ldr r0, _08031A50  @ =gUnknown_03000830
	strb r4, [r0]
	ldr r0, _08031A54  @ =0x80010000
	bl play_sound
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	strh r4, [r0]
	ldr r0, _08031A58  @ =gPaletteBuf2
	strh r4, [r0]
	mov r0, #5
	bl sub_08036704
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0802C278
	bl sub_0802BF60
	mov r2, #8
	add r7, sp, #4
	ldr r4, _08031A5C  @ =gUnknown_0202A3F0
	mov r3, #255
_0803198E:
	lsl r1, r2, #2
	add r1, r1, r4
	ldrb r0, [r1]
	orr r0, r0, r3
	strb r0, [r1]
	ldrb r0, [r1, #1]
	orr r0, r0, r3
	strb r0, [r1, #1]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #33
	bls _0803198E
	bl sub_080144A0
	bl sub_0800D744
	bl sub_0800D6F4
	mov r0, #2
	bl load_palette_from_gfx_group
	mov r0, #16
	bl load_gfx_group
	ldr r1, _08031A60  @ =gUnknown_08427A04
	ldr r0, _08031A64  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	add r0, r0, r1
	ldrb r0, [r0]
	bl load_gfx_group
	mov r0, #1
	bl load_gfx_group
	mov r0, sp
	mov r5, #0
	strh r5, [r0]
	ldr r6, _08031A68  @ =gBG0Buffer
	ldr r2, _08031A6C  @ =0x01000800
	add r1, r6, #0
	bl CpuSet
	mov r4, #0
	str r4, [sp, #4]
	ldr r1, _08031A70  @ =0x0600F800
	ldr r2, _08031A74  @ =0x01000200
	add r0, r7, #0
	bl CpuFastSet
	bl sub_08031884
	bl sub_08012EB4
	ldr r1, _08031A78  @ =gUnknown_03000450
	mov r0, #32
	strh r0, [r1, #32]
	strh r0, [r1, #36]
	ldr r0, _08031A7C  @ =gUnknown_03000420
	strb r5, [r0]
	strb r5, [r0, #3]
	ldr r1, _08031A80  @ =gUnknown_030004A0
	str r6, [r1, #16]
	ldr r0, _08031A84  @ =gUnknown_08142374
	ldrh r0, [r0, #36]
	strh r0, [r1, #8]
	mov r0, #64
	strh r0, [r1]
	add r1, r1, #102
	strh r4, [r1]
	ldr r0, _08031A88  @ =gUnknown_03000F44
	str r4, [r0]
	mov r0, #0
	mov r1, #0
	bl set_palette_color
	ldr r1, _08031A8C  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08031A90  @ =gSubState
	strb r5, [r0]
	ldr r0, _08031A94  @ =gUnknown_0201F000
	str r4, [r0]
	ldr r1, _08031A98  @ =gUnknown_02016D60
	mov r0, #30
	strh r0, [r1, #4]
	ldr r0, _08031A9C  @ =0x800B0193
	bl play_sound
_08031A42:
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031A4C:
	.4byte gUnknown_03000520
_08031A50:
	.4byte gUnknown_03000830
_08031A54:
	.4byte 0x80010000
_08031A58:
	.4byte gPaletteBuf2
_08031A5C:
	.4byte gUnknown_0202A3F0
_08031A60:
	.4byte gUnknown_08427A04
_08031A64:
	.4byte gUnknown_03006C80
_08031A68:
	.4byte gBG0Buffer
_08031A6C:
	.4byte 0x01000800
_08031A70:
	.4byte 0x0600F800
_08031A74:
	.4byte 0x01000200
_08031A78:
	.4byte gUnknown_03000450
_08031A7C:
	.4byte gUnknown_03000420
_08031A80:
	.4byte gUnknown_030004A0
_08031A84:
	.4byte gUnknown_08142374
_08031A88:
	.4byte gUnknown_03000F44
_08031A8C:
	.4byte gUnknown_03005050
_08031A90:
	.4byte gSubState
_08031A94:
	.4byte gUnknown_0201F000
_08031A98:
	.4byte gUnknown_02016D60
_08031A9C:
	.4byte 0x800B0193
	THUMB_FUNC_END sub_0803194C

