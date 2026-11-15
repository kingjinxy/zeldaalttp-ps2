	.syntax unified
	THUMB_FUNC_START sub_08003BCC
sub_08003BCC: @ 0X08003BCC
	ldrb r1, [r0, #29]
	lsrs r2, r1, #1
	bcc.n _08003BF4
	movs r2, #252
	ands r1, r2
	strb r1, [r0, #29]
	ldrb r1, [r0, #31]
	movs r2, #193
	ands r2, r1
	strb r2, [r0, #31]
	movs r2, #62
	ands r1, r2
	lsls r1, r1, #1
	ldr r2, [pc, #696]
	ldr r1, [r2, r1]
	mvns r1, r1
	ldr r2, [pc, #692]
	ldr r3, [r2, #0]
	ands r3, r1
	str r3, [r2, #0]
_08003BF4:
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.byte 0xab
	.byte 0x49
	.byte 0x09
	.byte 0x88
	.byte 0x89
	.byte 0x07
	.byte 0x09
	.byte 0x0f
	.byte 0xaa
	.byte 0x4a
	.byte 0x51
	.byte 0x58
	.byte 0x09
	.byte 0x68
	.byte 0x00
	.byte 0x29
	.byte 0x28
	.byte 0xd1
	.byte 0x00
	.byte 0x20
	.byte 0xf7
	.byte 0x46
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
