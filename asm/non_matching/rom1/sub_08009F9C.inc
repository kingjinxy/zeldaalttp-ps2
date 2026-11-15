	.syntax unified
	THUMB_FUNC_START sub_08009F9C
sub_08009F9C: @ 0X08009F9C
	push {lr}
	movs r1, #8
	strh r1, [r0, #44]
	bl sub_08009FF4
	push {r1}
	bl sub_08009F6C
	pop {r1}
	bl 0x80038e8
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
