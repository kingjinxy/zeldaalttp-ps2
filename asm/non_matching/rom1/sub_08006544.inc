	.syntax unified
	THUMB_FUNC_START sub_08006544
sub_08006544: @ 0X08006544
	lsrs r1, r3, #3
	lsls r0, r0, #4
	asrs r2, r3, #3
	strh r0, [r0, #8]
	movs r0, r3
	movs r0, r0
	lsrs r4, r2, #32
	movs r1, r0
	lsrs r5, r2, #32
	lsls r1, r0, #4
	asrs r6, r2, #32
	lsls r1, r0, #4
	lsrs r7, r2, #32
	lsls r1, r0, #4
	lsrs r0, r3, #32
	lsls r1, r0, #4
	asrs r1, r3, #32
	lsls r1, r0, #4
	lsrs r4, r2, #32
	lsls r1, r0, #4
	lsrs r5, r2, #32
	lsls r1, r0, #4
	asrs r6, r2, #32
	lsls r1, r0, #4
	lsrs r7, r2, #32
	lsls r1, r0, #4
	lsrs r0, r3, #32
	lsls r1, r0, #4
	asrs r1, r3, #32
	lsls r1, r0, #4
	lsrs r4, r2, #32
	lsls r1, r0, #4
	lsrs r5, r2, #32
	lsls r1, r0, #4
	asrs r6, r2, #32
	lsls r1, r0, #4
	lsrs r7, r2, #32
	lsls r1, r0, #4
	lsrs r0, r3, #32
	lsls r1, r0, #4
	asrs r1, r3, #32
	lsls r1, r0, #4
	lsrs r1, r4, #3
	lsls r1, r0, #4
	lsrs r2, r4, #3
	lsls r1, r0, #4
	asrs r3, r4, #3
	lsls r1, r0, #4
	lsrs r4, r4, #3
	lsls r1, r0, #4
	lsrs r5, r4, #3
	lsls r1, r0, #4
	asrs r6, r4, #3
	strh r1, [r0, #8]
	movs r0, r3
	movs r0, r0
	lsrs r5, r4, #32
	movs r0, r0
	lsrs r6, r4, #32
	lsls r0, r0, #4
	asrs r7, r4, #32
	lsls r0, r0, #4
	lsrs r0, r5, #32
	lsls r0, r0, #4
	lsrs r1, r5, #32
	lsls r0, r0, #4
	asrs r2, r5, #32
	lsls r0, r0, #4
	lsrs r5, r4, #32
	lsls r0, r0, #4
	lsrs r6, r4, #32
	lsls r0, r0, #4
	asrs r7, r4, #32
	lsls r0, r0, #4
	lsrs r0, r5, #32
	lsls r0, r0, #4
	lsrs r1, r5, #32
	lsls r0, r0, #4
	asrs r2, r5, #32
	lsls r0, r0, #4
	lsrs r5, r4, #32
	lsls r0, r0, #4
	lsrs r6, r4, #32
	lsls r0, r0, #4
	asrs r7, r4, #32
	lsls r0, r0, #4
	lsrs r0, r5, #32
	lsls r0, r0, #4
	lsrs r1, r5, #32
	lsls r0, r0, #4
	asrs r2, r5, #32
	lsls r0, r0, #4
	lsrs r5, r5, #3
	lsls r0, r0, #4
	lsrs r6, r5, #3
	lsls r0, r0, #4
	asrs r7, r5, #3
	lsls r0, r0, #4
	lsrs r0, r6, #3
	lsls r0, r0, #4
	lsrs r1, r6, #3
	lsls r0, r0, #4
	asrs r2, r6, #3
	strh r0, [r0, #8]
	movs r0, r3
	movs r0, r0
	lsrs r6, r6, #32
	movs r0, r0
	lsrs r7, r6, #32
	movs r0, r0
	asrs r0, r7, #32
	movs r0, r0
	lsrs r1, r7, #32
	movs r0, r0
	lsrs r2, r7, #32
	movs r0, r0
	asrs r3, r7, #32
	strh r0, [r0, #0]
	movs r0, r3
	movs r0, r0
	lsrs r4, r7, #32
	movs r1, r0
	lsrs r5, r7, #32
	movs r1, r0
	asrs r6, r7, #32
	movs r1, r0
	lsrs r7, r7, #32
	movs r1, r0
	lsrs r0, r0, #1
	movs r1, r0
	asrs r1, r0, #1
	strh r1, [r0, #0]
	movs r0, r3
	movs r0, r0
	lsrs r2, r0, #1
	movs r0, r0
	lsrs r3, r0, #1
	movs r0, r0
	asrs r4, r0, #1
	movs r0, r0
	lsrs r5, r0, #1
	movs r0, r0
	lsrs r6, r0, #1
	movs r0, r0
	asrs r7, r0, #1
	strh r0, [r0, #0]
	movs r0, r3
	movs r0, r0
	lsls r0, r0, #16
	movs r0, r0
	lsls r1, r0, #16
	movs r0, r0
	.4byte 0x8000ff02
	movs r4, r0
	movs r0, r0
	lsls r2, r0, #16
	movs r0, r0
	lsls r1, r1, #16
	movs r0, r0
	lsls r2, r1, #16
	lsls r0, r0, #4
	lsls r1, r1, #16
	movs r0, r0
	asrs r3, r1, #32
	lsls r0, r0, #4
	lsrs r4, r1, #32
	lsls r0, r0, #4
	lsrs r5, r1, #32
	lsls r0, r0, #4
	asrs r6, r1, #32
	lsls r0, r0, #4
	lsrs r7, r1, #32
	lsls r0, r0, #4
	lsrs r0, r2, #32
	lsls r0, r0, #4
	asrs r3, r1, #32
	lsls r0, r0, #4
	lsrs r4, r1, #32
	lsls r0, r0, #4
	lsrs r5, r1, #32
	lsls r0, r0, #4
	asrs r6, r1, #32
	lsls r0, r0, #4
	lsrs r7, r1, #32
	lsls r0, r0, #4
	lsrs r0, r2, #32
	lsls r0, r0, #4
	asrs r3, r1, #32
	lsls r0, r0, #4
	lsrs r4, r1, #32
	lsls r0, r0, #4
	lsrs r5, r1, #32
	lsls r0, r0, #4
	asrs r6, r1, #32
	lsls r0, r0, #4
	lsrs r7, r1, #32
	lsls r0, r0, #4
	lsrs r0, r2, #32
	lsls r0, r0, #4
	asrs r3, r3, #3
	lsls r0, r0, #4
	lsrs r4, r3, #3
	lsls r0, r0, #4
	lsrs r5, r3, #3
	lsls r0, r0, #4
	asrs r6, r3, #3
	lsls r0, r0, #4
	lsrs r7, r3, #3
	lsls r0, r0, #4
	lsrs r0, r4, #3
	strh r0, [r0, #8]
	movs r0, r3
	movs r0, r0
	lsls r1, r2, #16
	movs r1, r0
	lsls r2, r2, #16
	movs r1, r0
	.4byte 0x8001ff13
	movs r4, r0
	movs r0, r0
	lsls r3, r2, #16
	movs r1, r0
	lsls r2, r3, #16
	movs r1, r0
	lsls r3, r3, #16
	lsls r1, r0, #4
	lsls r2, r3, #16
	movs r1, r0
	asrs r4, r3, #32
	lsls r1, r0, #4
	lsrs r5, r3, #32
	lsls r1, r0, #4
	lsrs r6, r3, #32
	lsls r1, r0, #4
	asrs r7, r3, #32
	lsls r1, r0, #4
	lsrs r0, r4, #32
	lsls r1, r0, #4
	lsrs r1, r4, #32
	lsls r1, r0, #4
	asrs r4, r3, #32
	lsls r1, r0, #4
	lsrs r5, r3, #32
	lsls r1, r0, #4
	lsrs r6, r3, #32
	.syntax unified
	.thumb
