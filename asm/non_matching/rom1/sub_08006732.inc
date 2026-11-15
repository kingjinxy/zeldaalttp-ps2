	.syntax unified
	THUMB_FUNC_START_NOALIGN sub_08006732
sub_08006732: @ 0X08006732
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
	lsls r1, r0, #4
	asrs r7, r3, #32
	lsls r1, r0, #4
	lsrs r0, r4, #32
	lsls r1, r0, #4
	lsrs r1, r4, #32
	lsls r1, r0, #4
	asrs r7, r4, #3
	lsls r1, r0, #4
	lsrs r0, r5, #3
	lsls r1, r0, #4
	lsrs r1, r5, #3
	lsls r1, r0, #4
	asrs r2, r5, #3
	lsls r1, r0, #4
	lsrs r3, r5, #3
	lsls r1, r0, #4
	lsrs r4, r5, #3
	strh r1, [r0, #8]
	movs r0, r3
	movs r0, r0
	lsls r2, r4, #16
	movs r0, r0
	lsls r3, r4, #16
	movs r0, r0
	.4byte 0x8000ff24
	movs r4, r0
	movs r0, r0
	lsls r4, r4, #16
	movs r0, r0
	lsls r3, r5, #16
	movs r0, r0
	lsls r4, r5, #16
	lsls r0, r0, #4
	lsls r3, r5, #16
	movs r0, r0
	asrs r5, r5, #32
	lsls r0, r0, #4
	lsrs r6, r5, #32
	lsls r0, r0, #4
	lsrs r7, r5, #32
	lsls r0, r0, #4
	asrs r0, r6, #32
	lsls r0, r0, #4
	lsrs r1, r6, #32
	lsls r0, r0, #4
	lsrs r2, r6, #32
	lsls r0, r0, #4
	asrs r5, r5, #32
	lsls r0, r0, #4
	lsrs r6, r5, #32
	lsls r0, r0, #4
	lsrs r7, r5, #32
	lsls r0, r0, #4
	asrs r0, r6, #32
	lsls r0, r0, #4
	lsrs r1, r6, #32
	lsls r0, r0, #4
	lsrs r2, r6, #32
	lsls r0, r0, #4
	asrs r5, r5, #32
	lsls r0, r0, #4
	lsrs r6, r5, #32
	lsls r0, r0, #4
	lsrs r7, r5, #32
	lsls r0, r0, #4
	asrs r0, r6, #32
	lsls r0, r0, #4
	lsrs r1, r6, #32
	lsls r0, r0, #4
	lsrs r2, r6, #32
	lsls r0, r0, #4
	asrs r3, r6, #3
	lsls r0, r0, #4
	lsrs r4, r6, #3
	lsls r0, r0, #4
	lsrs r5, r6, #3
	lsls r0, r0, #4
	asrs r6, r6, #3
	lsls r0, r0, #4
	lsrs r7, r6, #3
	lsls r0, r0, #4
	lsrs r0, r7, #3
	strh r0, [r0, #8]
	movs r0, r3
	movs r0, r0
	lsls r6, r5, #17
	movs r0, r0
	lsls r5, r5, #17
	movs r0, r0
	lsls r4, r5, #17
	movs r0, r0
	lsls r5, r5, #9
	movs r0, r0
	lsls r6, r5, #17
	movs r0, r0
	lsls r7, r5, #17
	movs r0, r0
	lsls r0, r6, #17
	movs r0, r0
	lsls r7, r5, #17
	strh r0, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsls r3, r6, #17
	movs r1, r0
	lsls r2, r6, #17
	movs r1, r0
	lsls r1, r6, #17
	movs r1, r0
	lsls r2, r6, #9
	movs r1, r0
	lsls r3, r6, #17
	movs r1, r0
	lsls r4, r6, #17
	movs r1, r0
	lsls r5, r6, #17
	movs r1, r0
	lsls r4, r6, #17
	strh r1, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsls r0, r7, #17
	movs r0, r0
	lsls r7, r6, #17
	movs r0, r0
	lsls r6, r6, #17
	movs r0, r0
	lsls r7, r6, #9
	movs r0, r0
	lsls r0, r7, #17
	movs r0, r0
	lsls r1, r7, #17
	movs r0, r0
	lsls r2, r7, #17
	movs r0, r0
	lsls r1, r7, #17
	strh r0, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsls r3, r7, #17
	movs r0, r0
	lsls r4, r7, #17
	movs r0, r0
	lsls r5, r7, #17
	movs r0, r0
	lsls r6, r7, #17
	lsls r0, r0, #4
	lsls r7, r7, #17
	strh r0, [r0, #8]
	movs r4, r1
	movs r0, r0
	lsls r1, r0, #18
	movs r1, r0
	lsls r2, r0, #18
	movs r1, r0
	lsls r3, r0, #18
	movs r1, r0
	lsls r4, r0, #18
	lsls r1, r0, #4
	lsls r5, r0, #18
	strh r1, [r0, #8]
	movs r4, r1
	movs r0, r0
	lsls r7, r0, #18
	movs r0, r0
	lsls r0, r1, #18
	movs r0, r0
	lsls r1, r1, #18
	movs r0, r0
	lsls r2, r1, #18
	lsls r0, r0, #4
	lsls r3, r1, #18
	strh r0, [r0, #8]
	movs r4, r1
	lsls r5, r1, #18
	movs r0, r0
	lsls r6, r1, #18
	movs r0, r0
	lsls r7, r1, #18
	movs r0, r0
	lsls r0, r2, #18
	movs r0, r0
	lsls r1, r2, #18
	movs r0, r0
	lsls r2, r2, #18
	movs r0, r0
	lsls r3, r2, #18
	movs r0, r0
	lsls r4, r2, #18
	movs r0, r0
	lsls r5, r2, #18
	movs r0, r0
	lsls r6, r2, #18
	movs r0, r0
	lsls r7, r2, #18
	movs r0, r0
	lsls r0, r3, #18
	movs r0, r0
	lsls r1, r3, #18
	movs r0, r0
	lsls r2, r3, #18
	movs r0, r0
	lsls r3, r3, #18
	movs r0, r0
	lsls r4, r3, #18
	movs r0, r0
	lsls r5, r3, #18
	movs r0, r0
	lsls r6, r3, #18
	movs r0, r0
	lsls r7, r3, #18
	movs r0, r0
	lsls r0, r4, #18
	movs r0, r0
	lsls r1, r4, #18
	movs r0, r0
	lsls r2, r4, #18
	movs r0, r0
	lsls r3, r4, #18
	movs r0, r0
	lsls r4, r4, #18
	strh r0, [r0, #0]
	lsls r0, r4, #1
	lsls r5, r4, #18
	movs r1, r0
	lsls r6, r4, #18
	movs r1, r0
	lsls r7, r4, #18
	movs r1, r0
	lsls r0, r5, #18
	movs r1, r0
	lsls r1, r5, #18
	movs r1, r0
	lsls r2, r5, #18
	movs r1, r0
	lsls r3, r5, #18
	movs r1, r0
	lsls r4, r5, #18
	movs r1, r0
	lsls r5, r5, #18
	movs r1, r0
	lsls r6, r5, #18
	movs r1, r0
	lsls r7, r5, #18
	movs r1, r0
	lsls r0, r6, #18
	movs r1, r0
	lsls r1, r6, #18
	movs r1, r0
	lsls r2, r6, #18
	movs r1, r0
	lsls r3, r6, #18
	movs r1, r0
	lsls r4, r6, #18
	movs r1, r0
	lsls r5, r6, #18
	movs r1, r0
	lsls r6, r6, #18
	movs r1, r0
	lsls r7, r6, #18
	movs r1, r0
	lsls r0, r7, #18
	movs r1, r0
	lsls r1, r7, #18
	movs r1, r0
	lsls r2, r7, #18
	movs r1, r0
	lsls r3, r7, #18
	movs r1, r0
	lsls r4, r7, #18
	strh r1, [r0, #0]
	lsls r0, r4, #1
	lsls r5, r7, #18
	movs r0, r0
	lsls r6, r7, #18
	movs r0, r0
	lsls r7, r7, #18
	movs r0, r0
	lsls r0, r0, #19
	movs r0, r0
	lsls r1, r0, #19
	movs r0, r0
	lsls r2, r0, #19
	movs r0, r0
	lsls r3, r0, #19
	movs r0, r0
	lsls r4, r0, #19
	movs r0, r0
	lsls r5, r0, #19
	movs r0, r0
	lsls r6, r0, #19
	movs r0, r0
	lsls r7, r0, #19
	movs r0, r0
	lsls r0, r1, #19
	movs r0, r0
	lsls r1, r1, #19
	movs r0, r0
	lsls r2, r1, #19
	movs r0, r0
	lsls r3, r1, #19
	movs r0, r0
	lsls r4, r1, #19
	movs r0, r0
	lsls r5, r1, #19
	movs r0, r0
	lsls r6, r1, #19
	movs r0, r0
	lsls r7, r1, #19
	movs r0, r0
	lsls r0, r2, #19
	movs r0, r0
	lsls r1, r2, #19
	movs r0, r0
	lsls r2, r2, #19
	movs r0, r0
	lsls r3, r2, #19
	movs r0, r0
	lsls r4, r2, #19
	strh r0, [r0, #0]
	lsls r0, r4, #1
	lsls r6, r1, #14
	movs r0, r0
	lsls r7, r1, #14
	movs r0, r0
	lsls r0, r2, #14
	strh r0, [r0, #0]
	movs r4, r1
	movs r0, r0
	lsls r1, r2, #14
	movs r1, r0
	lsls r2, r2, #14
	movs r1, r0
	lsls r3, r2, #14
	strh r1, [r0, #0]
	movs r4, r1
	movs r0, r0
	lsls r4, r2, #14
	movs r0, r0
	lsls r5, r2, #14
	movs r0, r0
	lsls r6, r2, #14
	strh r0, [r0, #0]
	movs r4, r1
	movs r0, r0
	lsrs r3, r5, #3
	movs r0, r0
	lsrs r4, r5, #3
	movs r0, r0
	lsrs r5, r5, #3
	movs r0, r0
	lsrs r6, r5, #3
	movs r0, r0
	lsrs r7, r5, #3
	lsls r0, r0, #4
	lsrs r0, r6, #3
	lsls r0, r0, #4
	.4byte 0x8100fff0
	movs r4, r0
	movs r0, r0
	lsls r7, r2, #14
	subs r0, #0
	lsls r0, r3, #10
	subs r2, #0
	lsls r1, r3, #10
	lsls r0, r0, #4
	lsls r2, r3, #14
	movs r0, r0
	lsls r3, r3, #18
	movs r0, r0
	lsls r4, r3, #14
	movs r0, r0
	lsls r4, r3, #14
	strh r0, [r0, #0]
	lsls r5, r3, #14
	subs r4, #1
	lsls r6, r3, #10
	subs r6, #1
	lsls r7, r3, #10
	lsls r1, r0, #4
	lsls r0, r4, #14
	movs r1, r0
	lsls r1, r4, #18
	movs r1, r0
	lsls r2, r4, #14
	movs r1, r0
	lsls r2, r4, #14
	strh r1, [r0, #0]
	lsls r3, r4, #14
	ands r0, r0
	lsls r4, r4, #10
	tst r0, r0
	lsls r5, r4, #10
	lsls r0, r0, #4
	lsls r6, r4, #14
	movs r0, r0
	lsls r7, r4, #18
	movs r0, r0
	lsls r0, r5, #14
	movs r0, r0
	lsls r0, r5, #14
	strh r0, [r0, #0]
	lsls r0, r0, #20
	movs r0, r0
	lsls r1, r0, #20
	movs r0, r0
	.4byte 0x8000ff02
	movs r4, r0
	movs r0, r0
	lsls r3, r0, #4
	lsls r0, r0, #4
	lsls r3, r0, #20
	movs r0, r0
	lsls r4, r0, #24
	movs r0, r0
	lsrs r5, r0, #4
	movs r0, r0
	.4byte 0x8000ff05
	lsls r6, r0, #20
	movs r1, r0
	lsls r7, r0, #20
	movs r1, r0
	.4byte 0x8001ff08
	movs r4, r0
	movs r0, r0
	lsls r1, r1, #4
	lsls r1, r0, #4
	lsls r1, r1, #20
	movs r1, r0
	lsls r2, r1, #24
	movs r1, r0
	lsrs r3, r1, #4
	movs r1, r0
	.4byte 0x8001ff0b
	lsls r4, r1, #20
	movs r0, r0
	lsls r5, r1, #20
	movs r0, r0
	.4byte 0x8000ff0e
	movs r4, r0
	movs r0, r0
	lsls r7, r1, #4
	lsls r0, r0, #4
	lsls r7, r1, #20
	movs r0, r0
	lsls r0, r2, #24
	movs r0, r0
	lsrs r1, r2, #4
	movs r0, r0
	.4byte 0x8000ff11
	lsrs r2, r2, #32
	movs r0, r0
	lsrs r3, r2, #32
	movs r0, r0
	lsrs r4, r2, #32
	movs r0, r0
	lsrs r5, r2, #32
	movs r0, r0
	lsrs r6, r2, #32
	movs r0, r0
	lsrs r7, r2, #32
	movs r0, r0
	lsrs r0, r3, #32
	movs r0, r0
	lsrs r1, r3, #32
	strh r0, [r0, #0]
	movs r0, r4
	movs r0, r0
	lsrs r2, r3, #32
	movs r1, r0
	lsrs r3, r3, #32
	movs r1, r0
	lsrs r4, r3, #32
	movs r1, r0
	lsrs r5, r3, #32
	.syntax unified
	.thumb
