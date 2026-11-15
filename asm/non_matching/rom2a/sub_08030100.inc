	THUMB_FUNC_START sub_08030100
sub_08030100: @ 0x08030100
	push {r4-r6,lr}
	ldr r0, _080301D4  @ =gUnknown_03000520
	ldrb r4, [r0]
	cmp r4, #0
	bne _080301CE
	mov r0, #128
	lsl r0, r0, #19
	mov r6, #0
	strh r4, [r0]
	bl sub_0800BED8
	mov r0, #15
	bl load_palette_from_gfx_group
	mov r0, #20
	bl load_gfx_group
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _080301D8  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _080301DC  @ =gPaletteBuf2
	strh r1, [r0]
	ldr r1, _080301E0  @ =gUnknown_030004A0
	mov r0, #234
	lsl r0, r0, #5
	strh r0, [r1]
	mov r0, #224
	lsl r0, r0, #5
	strh r0, [r1, #8]
	ldr r0, _080301E4  @ =0x00001D01
	strh r0, [r1, #20]
	ldr r0, _080301E8  @ =0x00001E02
	strh r0, [r1, #32]
	ldr r0, _080301EC  @ =0x00001F03
	strh r0, [r1, #44]
	ldr r5, _080301F0  @ =gUnknown_02016D60
	mov r0, #96
	strh r0, [r5, #38]
	neg r0, r0
	strh r0, [r1, #22]
	strh r4, [r1, #10]
	ldr r0, _080301F4  @ =0x0000FFF8
	strh r0, [r1, #46]
	strh r0, [r1, #34]
	strh r4, [r1, #12]
	strh r0, [r1, #48]
	strh r0, [r1, #36]
	strh r0, [r1, #24]
	ldr r2, _080301F8  @ =gUnknown_03000450
	strh r0, [r2, #34]
	strh r0, [r2, #32]
	add r2, r1, #0
	add r2, r2, #102
	mov r0, #253
	lsl r0, r0, #6
	strh r0, [r2]
	add r1, r1, #104
	ldr r0, _080301FC  @ =0x0000070C
	strh r0, [r1]
	mov r0, #0
	mov r1, #1
	bl sub_080599A8
	ldr r1, _08030200  @ =gUnknown_03005050
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #106
	strh r0, [r5, #4]
	ldr r1, _08030204  @ =gUnknown_03000948
	mov r0, #1
	strb r0, [r1, #5]
	strb r6, [r5, #8]
	mov r0, #70
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #1
	mov r2, #0
	bl sub_0804C8A8
	bl sub_080397F0
	strb r0, [r5, #10]
	lsl r0, r0, #24
	mov r1, #3
	cmp r0, #0
	beq _080301BA
	mov r1, #4
_080301BA:
	strb r1, [r5, #11]
	ldr r0, _08030208  @ =gUnknown_03006C80
	strb r6, [r0, #3]
	ldr r0, _0803020C  @ =gUnknown_03000830
	strb r6, [r0]
	bl sub_0800D1A0
	ldr r0, _08030210  @ =0x80010000
	bl play_sound
_080301CE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080301D4:
	.4byte gUnknown_03000520
_080301D8:
	.4byte 0x00006739
_080301DC:
	.4byte gPaletteBuf2
_080301E0:
	.4byte gUnknown_030004A0
_080301E4:
	.4byte 0x00001D01
_080301E8:
	.4byte 0x00001E02
_080301EC:
	.4byte 0x00001F03
_080301F0:
	.4byte gUnknown_02016D60
_080301F4:
	.4byte 0x0000FFF8
_080301F8:
	.4byte gUnknown_03000450
_080301FC:
	.4byte 0x0000070C
_08030200:
	.4byte gUnknown_03005050
_08030204:
	.4byte gUnknown_03000948
_08030208:
	.4byte gUnknown_03006C80
_0803020C:
	.4byte gUnknown_03000830
_08030210:
	.4byte 0x80010000
	THUMB_FUNC_END sub_08030100

