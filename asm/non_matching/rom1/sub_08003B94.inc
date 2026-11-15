	.syntax unified
	THUMB_FUNC_START sub_08003B94
sub_08003B94: @ 0X08003B94
	ldr r1, [pc, #764]
	ldr r2, [r1, #0]
	movs r3, #32
_08003B9A:
	lsls r2, r2, #1
	bcc.n _08003BA4
	subs r3, #1
	bne.n _08003B9A
	mov pc, lr
_08003BA4:
	subs r3, #1
	ldrb r2, [r0, #29]
	movs r1, #1
	orrs r2, r1
	strb r2, [r0, #29]
	ldrb r2, [r0, #31]
	movs r1, #193
	ands r2, r1
	lsls r1, r3, #1
	orrs r2, r1
	strb r2, [r0, #31]
	ldr r2, [pc, #732]
	lsls r3, r3, #2
	ldr r2, [r2, r3]
	ldr r1, [pc, #728]
	ldr r3, [r1, #0]
	orrs r3, r2
	str r3, [r1, #0]
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
