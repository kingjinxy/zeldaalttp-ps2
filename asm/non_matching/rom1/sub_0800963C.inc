	.syntax unified
	THUMB_FUNC_START sub_0800963C
sub_0800963C: @ 0X0800963C
	push {lr}
	bl sub_080096D8
	bl sub_0800303C
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
