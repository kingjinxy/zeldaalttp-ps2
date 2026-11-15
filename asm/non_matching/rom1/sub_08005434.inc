	.syntax unified
	THUMB_FUNC_START sub_08005434
sub_08005434: @ 0X08005434
	push {lr}
	bl 0x8001d5c
	ldrb r2, [r0, #21]
	lsls r2, r2, #2
	ldr r3, [pc, #268]
	ldr r2, [r3, r2]
	bx r2
	.byte 0x3c
	.byte 0x23
	.byte 0xc2
	.byte 0x5c
	.byte 0x7f
	.byte 0x24
	.byte 0x22
	.byte 0x40
	.byte 0xc2
	.byte 0x54
	.byte 0x2a
	.byte 0x23
	.byte 0xc2
	.byte 0x5c
	.byte 0x52
	.byte 0x08
	.syntax unified
	.thumb
