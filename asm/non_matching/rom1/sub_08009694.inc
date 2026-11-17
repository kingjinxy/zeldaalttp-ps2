	.syntax unified
	THUMB_FUNC_START sub_08009694
sub_08009694: @ 0X08009694
	push {lr}
	movs r1, #4
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
	.byte 0x00
	.byte 0xb5
	.byte 0x0c
	.byte 0x21
	.byte 0x81
	.byte 0x85
	.byte 0x00
	.byte 0xf0
	.byte 0x11
	.byte 0xf8
	.byte 0xf9
	.byte 0xf7
	.byte 0xbf
	.byte 0xfc
	.byte 0x08
	.byte 0x1c
	.byte 0x00
	.byte 0xbd
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
