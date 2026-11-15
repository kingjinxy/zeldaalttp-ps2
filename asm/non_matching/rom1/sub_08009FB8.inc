	.syntax unified
	THUMB_FUNC_START sub_08009FB8
sub_08009FB8: @ 0X08009FB8
	push {lr}
	movs r1, #8
	strh r1, [r0, #44]
	bl sub_08009FF4
	bl sub_08009F6C
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
