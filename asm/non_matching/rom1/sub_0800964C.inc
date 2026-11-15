	.syntax unified
	THUMB_FUNC_START sub_0800964C
sub_0800964C: @ 0X0800964C
	push {lr}
	bl sub_080096D8
	push {r0, r1}
	bl 0x800303c
	pop {r0, r1}
	bl 0x80038e8
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
