	THUMB_FUNC_START sub_08039288
sub_08039288: @ 0x08039288
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	mov r7, sp
	ldr r0, _08039358  @ =gUnknown_03000940
	ldr r1, _08039358  @ =gUnknown_03000940
	ldr r2, _08039358  @ =gUnknown_03000940
	ldr r3, _08039358  @ =gUnknown_03000940
	ldr r4, _0803935C  @ =gUnknown_03005E10
	ldr r5, _0803935C  @ =gUnknown_03005E10
	str r5, [r7, #8]
	ldr r6, _0803935C  @ =gUnknown_03005E10
	str r6, [r7, #12]
	ldr r5, _0803935C  @ =gUnknown_03005E10
	mov r8, r5
	mov r6, r8
	ldrh r6, [r6, #6]
	mov r9, r6
	mov r5, #0
	mov r10, r5
	mov r6, r9
	mov r5, r10
	and r6, r6, r5
	mov r9, r6
	mov r10, r9
	mov r5, r10
	mov r6, r8
	strh r5, [r6, #6]
	ldr r6, [r7, #12]
	ldrh r6, [r6, #4]
	mov r8, r6
	mov r5, #0
	mov r9, r5
	mov r6, r8
	mov r5, r9
	and r6, r6, r5
	mov r8, r6
	mov r9, r8
	mov r5, r9
	ldr r6, [r7, #12]
	strh r5, [r6, #4]
	ldr r6, [r7, #8]
	ldrh r6, [r6, #2]
	strh r6, [r7, #12]
	mov r5, #0
	mov r8, r5
	ldrh r6, [r7, #12]
	mov r5, r8
	and r6, r6, r5
	mov r8, r6
	mov r5, r8
	ldr r6, [r7, #8]
	strh r5, [r6, #2]
	ldrh r5, [r4]
	mov r6, #0
	and r5, r5, r6
	add r6, r5, #0
	strh r6, [r4]
	ldrh r4, [r3, #6]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strh r5, [r3, #6]
	ldrh r3, [r2, #4]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strh r4, [r2, #4]
	ldrh r2, [r1, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #2]
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r1, _08039360  @ =gUnknown_03000E20
	ldr r0, _08039360  @ =gUnknown_03000E20
	ldr r1, _08039360  @ =gUnknown_03000E20
	ldrh r2, [r1]
	add r1, r2, #1
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, _08039364  @ =gSubState
	ldrb r0, [r1]
	cmp r0, #1
	beq _08039400
	cmp r0, #1
	bgt _08039368
	cmp r0, #0
	beq _08039376
	b _08039640
	.byte 0x00
	.byte 0x00
_08039358:
	.4byte gUnknown_03000940
_0803935C:
	.4byte gUnknown_03005E10
_08039360:
	.4byte gUnknown_03000E20
_08039364:
	.4byte gSubState
_08039368:
	cmp r0, #2
	bne _0803936E
	b _080395A8
_0803936E:
	cmp r0, #3
	bne _08039374
	b _08039610
_08039374:
	b _08039640
_08039376:
	ldr r0, _080393F4  @ =gUnknown_03000E20
	ldr r1, _080393F4  @ =gUnknown_03000E20
	ldrb r2, [r1, #18]
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #18]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #18]
	ldr r1, _080393F4  @ =gUnknown_03000E20
	ldr r0, _080393F4  @ =gUnknown_03000E20
	ldr r1, _080393F4  @ =gUnknown_03000E20
	ldrh r2, [r1, #2]
	sub r1, r2, #1
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _080393F8  @ =0x0000FFFF
	cmp r0, r1
	bne _080393D4
	mov r0, #1
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _080393FC  @ =gSubState
	ldr r0, _080393FC  @ =gSubState
	ldr r1, _080393FC  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080393D4:
	bl sub_08137AFC
	bl sub_08015D9C
	bl sub_08015C64
	bl sub_08008ED8
	bl sub_0802CD3C
	bl sub_08000BAC
	bl sub_0802BFC4
	b _08039640
	.byte 0x00
	.byte 0x00
_080393F4:
	.4byte gUnknown_03000E20
_080393F8:
	.4byte 0x0000FFFF
_080393FC:
	.4byte gSubState
_08039400:
	ldr r0, _0803940C  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _08039410
	b _08039640
	.byte 0x00
	.byte 0x00
_0803940C:
	.4byte gUnknown_03000520
_08039410:
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _08039588  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0802BF60
	bl sub_0802C278
	bl sub_0800D6F4
	mov r0, #2
	bl load_palette_from_gfx_group
	mov r0, #21
	bl load_palette_from_gfx_group
	mov r0, #27
	bl load_gfx_group
	mov r0, #160
	lsl r0, r0, #19
	mov r1, #0
	strh r1, [r0]
	ldr r0, _08039588  @ =gPaletteBuf2
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0803958C  @ =gUnknown_030004A0
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #146
	lsl r3, r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _0803958C  @ =gUnknown_030004A0
	ldr r1, _08039590  @ =gUnknown_08142374
	ldrh r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #42]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #20]
	ldr r0, _0803958C  @ =gUnknown_030004A0
	ldr r1, _0803958C  @ =gUnknown_030004A0
	ldrh r2, [r1, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strh r3, [r1, #24]
	ldrh r1, [r0, #22]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #22]
	ldr r0, _08039594  @ =gUnknown_03000E20
	ldrb r1, [r0, #18]
	add r0, r1, #0
	bl sub_08063C5C
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrh r1, [r0, #50]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #120
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #136
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r0, _08039598  @ =gUnknown_03006A30
	ldr r2, _08039594  @ =gUnknown_03000E20
	ldrb r1, [r2, #18]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #12]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #12]
	ldr r0, _08039598  @ =gUnknown_03006A30
	ldr r2, _08039594  @ =gUnknown_03000E20
	ldrb r1, [r2, #18]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #56
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #80
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	ldr r0, _08039594  @ =gUnknown_03000E20
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r1, _0803959C  @ =gSubState
	ldr r0, _0803959C  @ =gSubState
	ldr r1, _0803959C  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _080395A0  @ =gUnknown_03000830
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080395A4  @ =0x800B01A0
	add r0, r1, #0
	bl play_sound
	mov r0, #0
	mov r1, #8
	bl sub_0800C0B0
	b _08039640
_08039588:
	.4byte gPaletteBuf2
_0803958C:
	.4byte gUnknown_030004A0
_08039590:
	.4byte gUnknown_08142374
_08039594:
	.4byte gUnknown_03000E20
_08039598:
	.4byte gUnknown_03006A30
_0803959C:
	.4byte gSubState
_080395A0:
	.4byte gUnknown_03000830
_080395A4:
	.4byte 0x800B01A0
_080395A8:
	bl sub_08137AFC
	bl sub_08000BAC
	bl sub_0802BFC4
	ldr r0, _080395C0  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _080395C4
	b _08039640
	.byte 0x00
	.byte 0x00
_080395C0:
	.4byte gUnknown_03000520
_080395C4:
	ldr r1, _080395F0  @ =gUnknown_03000E20
	ldr r0, _080395F0  @ =gUnknown_03000E20
	ldr r1, _080395F0  @ =gUnknown_03000E20
	ldrh r2, [r1, #2]
	sub r1, r2, #1
	ldrh r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _080395F4
	b _08039640
_080395F0:
	.4byte gUnknown_03000E20
_080395F4:
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _0803960C  @ =gSubState
	ldr r0, _0803960C  @ =gSubState
	ldr r1, _0803960C  @ =gSubState
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08039640
_0803960C:
	.4byte gSubState
_08039610:
	ldr r0, _0803961C  @ =gUnknown_03000520
	ldrb r1, [r0]
	cmp r1, #0
	beq _08039620
	b _08039640
	.byte 0x00
	.byte 0x00
_0803961C:
	.4byte gUnknown_03000520
_08039620:
	ldr r1, _0803963C  @ =0x80040000
	add r0, r1, #0
	bl play_sound
	bl sub_0800BED8
	bl sub_0801239C
	bl sub_080123BC
	mov r0, #5
	bl set_main_state
	b _08039640
_0803963C:
	.4byte 0x80040000
_08039640:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08039288

