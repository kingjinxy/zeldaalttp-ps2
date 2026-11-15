	.syntax unified
	THUMB_FUNC_START sub_08004710
sub_08004710: @ 0X08004710
	push {r4, lr}
	bl sub_0800471C
	adds r0, r2, #0
	pop {r4, pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
