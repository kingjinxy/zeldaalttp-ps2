	.syntax unified
	THUMB_FUNC_START sub_08001210
sub_08001210: @ 0X08001210
	lsls r6, r2, #1
	movs r5, r0
	lsls r2, r1, #1
	movs r5, r0
	lsls r5, r4, #1
	movs r6, r0
	lsls r7, r4, #1
	movs r4, r0
	.syntax unified
	.thumb
