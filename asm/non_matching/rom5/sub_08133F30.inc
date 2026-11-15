	.syntax unified
	THUMB_FUNC_START sub_08133F30
sub_08133F30: @ 0X08133F30
	mov ip, lr
	bl sub_08133E98
	lsls r3, r3, #1
	strh r3, [r0, #28]
	ldrh r2, [r0, #30]
	muls r3, r2
	lsrs r3, r3, #8
	strh r3, [r0, #32]
	bx ip
	.syntax divided
	.thumb
