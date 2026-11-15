	.syntax unified
	THUMB_FUNC_START sub_08004FD0
sub_08004FD0: @ 0X08004FD0
	push {lr}
	bl 0x8008d90
	bl 0x8001d5c
	movs r2, #255
	strb r2, [r1, #0]
	movs r2, #0
	strb r2, [r0, #27]
	movs r1, #2
	ldrb r2, [r0, #9]
	bl 0x8003840
	movs r3, #32
	strb r3, [r0, #26]
	movs r3, #94
	ldrb r2, [r0, r3]
	movs r4, #4
	orrs r2, r4
	strb r2, [r0, r3]
	movs r3, #2
	movs r2, #63
	strb r3, [r0, r2]
	ldrb r2, [r0, #10]
	lsls r2, r2, #1
	movs r3, #128
	orrs r2, r3
	movs r3, #60
	strb r2, [r0, r3]
	movs r3, #127
	ands r2, r3
	ldr r3, [pc, #24]
	ldrh r3, [r3, r2]
	movs r2, #92
	strh r3, [r0, r2]
	bl 0x800127c
	bl 0x80012fc
	movs r2, #72
	ldr r1, [pc, #8]
	str r1, [r0, r2]
	pop {pc}
	.byte 0x00
	.byte 0x00
	.4byte 0x08004fc8
	.4byte 0x0813e7cc
	.byte 0x97
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x94
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x9b
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x9a
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x98
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x99
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x96
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x95
	.byte 0x01
	.byte 0x00
	.byte 0x80
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xc5
	.byte 0x50
	.byte 0x00
	.byte 0x08
	.byte 0xd5
	.byte 0x50
	.byte 0x00
	.byte 0x08
	.syntax unified
	.thumb
