	.syntax unified
	THUMB_FUNC_START sub_08133F58
sub_08133F58: @ 0X08133F58
	mov ip, lr
	ldr r2, [r1, #64]
	ldrb r3, [r2, #0]
	adds r2, #1
	str r2, [r1, #64]
	lsls r2, r3, #1
	adds r2, r2, r3
	lsls r2, r2, #2
	ldr r3, [r0, #48]
	adds r2, r2, r3
	ldr r3, [r2, #0]
	bl sub_08133E7E
	str r3, [r1, #36]
	ldr r3, [r2, #4]
	bl sub_08133E7E
	str r3, [r1, #40]
	ldr r3, [r2, #8]
	bl sub_08133E7E
	str r3, [r1, #44]
	bx ip
	.byte 0x00
	.byte 0x00
	.syntax divided
	.thumb
