	.syntax unified
	THUMB_FUNC_START sub_0800A5A8
sub_0800A5A8: @ 0X0800A5A8
	lsls r7, r0, #8
	movs r0, r0
	lsls r0, r1, #8
	movs r0, r0
	lsls r1, r1, #8
	movs r0, r0
	lsls r2, r1, #8
	movs r0, r0
	lsls r3, r1, #8
	strh r0, [r0, #0]
	movs r0, r6
	movs r0, r0
	add r5, pc, #336
	lsrs r0, r0, #32
	add r5, pc, #432
	lsrs r0, r0, #32
	add r5, pc, #432
	lsrs r0, r0, #32
	add r5, pc, #464
	lsrs r0, r0, #32
	.syntax unified
	.thumb
