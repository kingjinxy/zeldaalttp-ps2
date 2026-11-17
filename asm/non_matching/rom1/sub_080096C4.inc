	.syntax unified
	THUMB_FUNC_START sub_080096C4
sub_080096C4: @ 0X080096C4
	push {lr}
	movs r1, #16
	strh r1, [r0, #44]
	bl sub_080096DC
	bl sub_0800303C
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
