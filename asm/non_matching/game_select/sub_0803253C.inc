	THUMB_FUNC_START sub_0803253C
sub_0803253C: @ 0x0803253C
	push {r4,r5,lr}
	ldr r0, _08032554  @ =gUnknown_02016D60
	ldrb r1, [r0]
	add r5, r0, #0
	cmp r1, #10
	bls _0803254A
	b _080327A4
_0803254A:
	lsl r0, r1, #2
	ldr r1, _08032558  @ =0x0803255C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_08032554:
	.4byte gUnknown_02016D60
_08032558:
	.4byte 0x0803255C
	.4byte _08032588
	.4byte _080325B4
	.4byte _080325D0
	.4byte _08032618
	.4byte _08032638
	.4byte _08032674
	.4byte _0803269C
	.4byte _080326D8
	.4byte _080326FC
	.4byte _08032724
	.4byte _08032774
_08032588:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r2, #0
	mov r0, #60
	strh r0, [r5, #4]
	ldr r1, _080325AC  @ =gUnknown_03000520
	ldr r0, _080325B0  @ =0x8877FFFF
	str r0, [r1, #12]
	mov r0, #28
	strb r0, [r1, #7]
	strb r2, [r5, #12]
	mov r0, #255
	lsl r0, r0, #1
	bl play_sound
	b _080327A4
	.byte 0x00
	.byte 0x00
_080325AC:
	.4byte gUnknown_03000520
_080325B0:
	.4byte 0x8877FFFF
_080325B4:
	ldrb r2, [r5, #12]
	cmp r2, #15
	bhi _0803265C
	ldr r0, _080325CC  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08032666
	add r0, r2, #1
	strb r0, [r5, #12]
	b _08032666
_080325CC:
	.4byte gUnknown_03000948
_080325D0:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _080325DE
	b _080327A4
_080325DE:
	mov r1, #0
	ldr r2, _0803260C  @ =gUnknown_03006C80
	ldrb r0, [r2]
	cmp r1, r0
	bcs _08032602
	ldr r4, _08032610  @ =gUnknown_03006A30
	mov r3, #12
_080325EC:
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r4
	strb r3, [r0, #12]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r2]
	cmp r1, r0
	bcc _080325EC
_08032602:
	ldr r0, _08032614  @ =0x00000205
	bl play_sound
	b _080326E8
	.byte 0x00
	.byte 0x00
_0803260C:
	.4byte gUnknown_03006C80
_08032610:
	.4byte gUnknown_03006A30
_08032614:
	.4byte 0x00000205
_08032618:
	ldr r0, _08032630  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	bne _08032626
	b _080327A4
_08032626:
	ldr r0, _08032634  @ =0x000001FF
	bl play_sound
	b _080326E8
	.byte 0x00
	.byte 0x00
_08032630:
	.4byte gUnknown_0201F000
_08032634:
	.4byte 0x000001FF
_08032638:
	ldrb r2, [r5, #12]
	cmp r2, #0
	beq _08032654
	ldr r0, _08032650  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08032666
	sub r0, r2, #1
	strb r0, [r5, #12]
	b _08032666
_08032650:
	.4byte gUnknown_03000948
_08032654:
	ldr r1, _08032670  @ =gUnknown_03000520
	mov r0, #1
	neg r0, r0
	str r0, [r1, #12]
_0803265C:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #60
	strh r0, [r5, #4]
_08032666:
	ldrb r0, [r5, #12]
	lsl r0, r0, #4
	bl sub_0800C1EC
	b _080327A4
_08032670:
	.4byte gUnknown_03000520
_08032674:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _08032682
	b _080327A4
_08032682:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #60
	strh r0, [r5, #4]
	ldr r0, _08032698  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #0
	strb r1, [r0]
	b _080327A4
_08032698:
	.4byte gUnknown_03006A30
_0803269C:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	beq _080326AA
	b _080327A4
_080326AA:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r0, _080326D0  @ =0x00000A05
	bl sub_0800D67C
	ldr r3, _080326D4  @ =gUnknown_02000010
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
	b _080327A4
_080326D0:
	.4byte 0x00000A05
_080326D4:
	.4byte gUnknown_02000010
_080326D8:
	ldr r0, _080326F4  @ =gUnknown_02000010
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _080327A4
	bl sub_0800D644
_080326E8:
	ldr r1, _080326F8  @ =gUnknown_02016D60
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080327A4
	.byte 0x00
	.byte 0x00
_080326F4:
	.4byte gUnknown_02000010
_080326F8:
	.4byte gUnknown_02016D60
_080326FC:
	bl sub_08032220
	lsl r0, r0, #24
	cmp r0, #0
	bne _080327A4
	ldr r1, _0803271C  @ =gUnknown_02016D60
	mov r0, #180
	strh r0, [r1, #4]
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _08032720  @ =0x800B0190
	bl play_sound
	b _080327A4
	.byte 0x00
	.byte 0x00
_0803271C:
	.4byte gUnknown_02016D60
_08032720:
	.4byte 0x800B0190
_08032724:
	ldrh r0, [r5, #4]
	cmp r0, #90
	bne _08032738
	ldr r0, _08032734  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #2
	b _08032744
_08032734:
	.4byte gUnknown_03006A30
_08032738:
	cmp r0, #82
	bne _08032746
	ldr r0, _0803276C  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r0, r0, #42
	mov r1, #4
_08032744:
	strb r1, [r0]
_08032746:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _080327A4
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #70
	strh r0, [r5, #4]
	ldr r1, _08032770  @ =gUnknown_03000520
	sub r0, r0, #71
	str r0, [r1, #12]
	mov r0, #1
	mov r1, #4
	bl sub_0800C0B0
	b _080327A4
_0803276C:
	.4byte gUnknown_03006A30
_08032770:
	.4byte gUnknown_03000520
_08032774:
	ldrh r0, [r5, #4]
	sub r0, r0, #1
	strh r0, [r5, #4]
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r4, #0
	bne _080327A4
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	strh r4, [r0]
	ldr r0, _080327AC  @ =gPaletteBuf2
	strh r4, [r0]
	bl sub_0801239C
	bl sub_080123BC
	ldr r1, _080327B0  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #0
	strb r0, [r5]
_080327A4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080327AC:
	.4byte gPaletteBuf2
_080327B0:
	.4byte gSubState
	THUMB_FUNC_END sub_0803253C

