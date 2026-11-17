	.syntax unified
	THUMB_FUNC_START sub_0800964C
sub_0800964C: @ 0X0800964C
	push {lr}
	bl sub_080096D8
	push {r0, r1}
	bl sub_0800303C
	pop {r0, r1}
	bl sub_080038E8
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
