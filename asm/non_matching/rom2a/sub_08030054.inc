	THUMB_FUNC_START sub_08030054
sub_08030054: @ 0x08030054
	push {lr}
	ldr r0, _08030064  @ =0x00000402
	ldr r1, _08030068  @ =gUnknown_084278E0
	bl sub_0800F4C4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08030064:
	.4byte 0x00000402
_08030068:
	.4byte gUnknown_084278E0
	THUMB_FUNC_END sub_08030054

