	.syntax unified
	THUMB_FUNC_START sub_08009FDC
sub_08009FDC: @ 0X08009FDC
	push {lr}
	movs r1, #12
	strh r1, [r0, #44]
	bl sub_08009FF4
	bl sub_08009F6C
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x21
	.byte 0x81
	.byte 0x85
	.syntax unified
	.thumb
