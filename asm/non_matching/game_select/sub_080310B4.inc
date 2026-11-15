	THUMB_FUNC_START sub_080310B4
sub_080310B4: @ 0x080310B4
	push {lr}
	ldr r1, _080310D4  @ =gUnknown_08427988
	ldr r0, _080310D8  @ =gUnknown_03005050
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl 0x08137AFC
	bl sub_08000BAC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080310D4:
	.4byte gUnknown_08427988
_080310D8:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_080310B4

