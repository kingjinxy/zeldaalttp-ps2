	THUMB_FUNC_START sub_08031F7C
sub_08031F7C: @ 0x08031F7C
	push {lr}
	ldr r0, _08031FB4  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _08031FAE
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _08031FB8  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08031FBC  @ =gPaletteBuf2
	strh r1, [r0]
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0800D6F4
	bl sub_0800D744
	mov r0, #7
	bl set_main_state
_08031FAE:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031FB4:
	.4byte gUnknown_03000520
_08031FB8:
	.4byte 0x00006739
_08031FBC:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_08031F7C

