	THUMB_FUNC_START sub_08033364
sub_08033364: @ 0x08033364
	push {r4,lr}
	ldr r0, _08033390  @ =gUnknown_03000520
	ldrb r4, [r0]
	cmp r4, #0
	bne _08033388
	bl sub_0800BED8
	mov r0, #160
	lsl r0, r0, #19
	strh r4, [r0]
	ldr r0, _08033394  @ =gPaletteBuf2
	strh r4, [r0]
	bl sub_0801239C
	bl sub_080123BC
	bl sub_08031FC0
_08033388:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033390:
	.4byte gUnknown_03000520
_08033394:
	.4byte gPaletteBuf2
	THUMB_FUNC_END sub_08033364

