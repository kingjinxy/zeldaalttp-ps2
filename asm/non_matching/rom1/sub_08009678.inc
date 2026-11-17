	.syntax unified
	THUMB_FUNC_START sub_08009678
sub_08009678: @ 0X08009678
	push {lr}
	movs r1, #8
	strh r1, [r0, #44]
	bl sub_080096DC
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
