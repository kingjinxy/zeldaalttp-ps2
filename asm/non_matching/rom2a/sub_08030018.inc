	THUMB_FUNC_START sub_08030018
sub_08030018: @ 0x08030018
	push {lr}
	ldr r0, _08030048  @ =gUnknown_03000520
	ldrb r0, [r0]
	cmp r0, #0
	bne _08030042
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	ldr r2, _0803004C  @ =0x00006739
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, _08030050  @ =gPaletteBuf2
	strh r1, [r0]
	bl sub_080123BC
	bl sub_0801239C
	mov r0, #6
	bl set_main_state
_08030042:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08030048:
	.4byte gUnknown_03000520
_0803004C:
	.4byte 0x00006739
_08030050:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_08030018

