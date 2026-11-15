	.syntax unified
	THUMB_FUNC_START sub_08009FCC
sub_08009FCC: @ 0X08009FCC
	push {lr}
	movs r1, #0
	strh r1, [r0, #44]
	bl sub_08009F6C
	adds r0, r1, #0
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
