	THUMB_FUNC_START sub_0802E4B8
sub_0802E4B8: @ 0x0802E4B8
	push {r4,lr}
	sub sp, sp, #24
	ldr r4, _0802E4D0  @ =gSubState
	ldrb r0, [r4]
	cmp r0, #1
	beq _0802E57C
	cmp r0, #1
	bgt _0802E4D4
	cmp r0, #0
	beq _0802E4DA
	b _0802E5CC
	.byte 0x00
	.byte 0x00
_0802E4D0:
	.4byte gSubState
_0802E4D4:
	cmp r0, #2
	beq _0802E5AC
	b _0802E5CC
_0802E4DA:
	mov r0, #21
	bl load_palette_from_gfx_group
	mov r0, #0
	mov r1, #0
	bl set_palette_color
	ldr r0, _0802E50C  @ =gUnknown_08427818
	ldr r2, _0802E510  @ =0x04000006
	mov r1, sp
	bl CpuSet
	ldr r0, _0802E514  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	bl sub_08039AA0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802E51C
	mov r1, sp
	mov r0, #35
	strb r0, [r1, #18]
	ldr r0, _0802E518  @ =0x0000041E
	b _0802E524
	.byte 0x00
	.byte 0x00
_0802E50C:
	.4byte gUnknown_08427818
_0802E510:
	.4byte 0x04000006
_0802E514:
	.4byte gLCDRegisterBuffer
_0802E518:
	.4byte 0x0000041E
_0802E51C:
	mov r1, sp
	mov r0, #3
	strb r0, [r1, #18]
	ldr r0, _0802E568  @ =0x0000040C
_0802E524:
	bl sub_0800F4C4
	lsl r0, r0, #16
	lsr r4, r0, #16
	mov r0, #121
	bl play_sound
	ldr r1, _0802E56C  @ =gUnknown_030004A0
	mov r0, #0
	strh r0, [r1, #10]
	lsl r0, r4, #2
	sub r0, r0, #72
	strh r0, [r1, #12]
	ldr r0, _0802E570  @ =gUnknown_08142374
	ldrh r0, [r0, #36]
	strh r0, [r1, #8]
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #1
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	mov r0, #0
	mov r1, #8
	bl sub_0800C0B0
	ldr r1, _0802E574  @ =gUnknown_02016D60
	mov r0, #120
	strh r0, [r1, #4]
	ldr r1, _0802E578  @ =gSubState
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0802E5CC
_0802E568:
	.4byte 0x0000040C
_0802E56C:
	.4byte gUnknown_030004A0
_0802E570:
	.4byte gUnknown_08142374
_0802E574:
	.4byte gUnknown_02016D60
_0802E578:
	.4byte gSubState
_0802E57C:
	ldr r0, _0802E5A4  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802E5CC
	ldr r1, _0802E5A8  @ =gUnknown_02016D60
	ldrh r0, [r1, #4]
	sub r0, r0, #1
	strh r0, [r1, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0802E5CC
	mov r0, #3
	mov r1, #8
	bl sub_0800C0B0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	b _0802E5CC
	.byte 0x00
	.byte 0x00
_0802E5A4:
	.4byte gUnknown_03000520
_0802E5A8:
	.4byte gUnknown_02016D60
_0802E5AC:
	ldr r0, _0802E5D4  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802E5CC
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _0802E5D8  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0802E5DC  @ =gPaletteBuf2
	strh r1, [r0]
	mov r0, #5
	bl set_main_state
_0802E5CC:
	add sp, sp, #24
	pop {r4}
	pop {r0}
	bx r0
_0802E5D4:
	.4byte gUnknown_03000520
_0802E5D8:
	.4byte 0x00006739
_0802E5DC:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_0802E4B8

