	.syntax unified
	THUMB_FUNC_START sub_08008B00
sub_08008B00: @ 0X08008B00
	lsls r0, r0, #10
	movs r0, r0
	ldr r1, [sp, #688]
	lsrs r2, r0, #1
	.2byte 0xc000
	movs r0, r0
	strh r0, [r0, #0]
	movs r0, r0
	ldrh r4, [r4, #14]
	lsrs r0, r0, #32
	.4byte 0xff00fffc
	ldrh r0, [r3, #2]
	lsrs r0, r0, #32
	ldrh r0, [r0, #2]
	lsrs r0, r0, #32
	adds r5, #56
	lsrs r0, r0, #32
	lsls r0, r0, #7
	movs r0, r0
	lsls r0, r0, #6
	movs r0, r0
	ldrh r0, [r3, #2]
	lsrs r0, r0, #32
	.syntax unified
	.thumb
