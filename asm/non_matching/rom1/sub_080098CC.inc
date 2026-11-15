	.syntax unified
	THUMB_FUNC_START sub_080098CC
sub_080098CC: @ 0X080098CC
	push {r0, lr}
	bl 0x804c9c8
	pop {r0}
	bl 0x8012540
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
