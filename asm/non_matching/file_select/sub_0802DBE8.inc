	THUMB_FUNC_START sub_0802DBE8
sub_0802DBE8: @ 0x0802DBE8
	push {lr}
	ldr r0, _0802DC20  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _0802DC1A
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _0802DC24  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _0802DC28  @ =gPaletteBuf2
	strh r1, [r0]
	bl sub_0801239C
	bl sub_080123BC
	bl sub_0800D6F4
	bl sub_0800D744
	mov r0, #5
	bl set_main_state
_0802DC1A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802DC20:
	.4byte gUnknown_03000520
_0802DC24:
	.4byte 0x00006739
_0802DC28:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_0802DBE8

