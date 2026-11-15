	.syntax unified
	THUMB_FUNC_START sub_08134010
sub_08134010: @ 0X08134010
	mov ip, lr
	ldr r2, [r1, #64]
	ldrb r3, [r2, #0]
	adds r2, #1
	ldr r0, [pc, #8]
	adds r0, r0, r3
	bl sub_08133E9A
	strb r3, [r0, #0]
	bx ip
	.4byte 0x04000060
	.syntax divided
	.thumb

