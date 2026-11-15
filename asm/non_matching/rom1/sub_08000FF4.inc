	.syntax unified
	THUMB_FUNC_START sub_08000FF4
sub_08000FF4: @ 0X08000FF4
	ldr r0, [r6, #32]
	lsls r0, r0, #12
	ldr r0, [r0, #44]
	lsls r0, r0, #12
	ldr r0, [r2, #52]
	lsls r0, r0, #12
	ldr r0, [r4, #60]
	lsls r0, r0, #12
	movs r6, r1
	b.n _0800100A
	.byte 0xe0
	.byte 0x00
_0800100A:
	lsrs r0, r0, #24
	asrs r0, r0, #1
	movs r0, #128
	lsls r2, r0, #1
	movs r4, r0
	movs r3, r0
	movs r0, r1
	movs r2, r0
	movs r4, r1
	lsls r7, r0, #1
	movs r0, r2
	lsls r0, r1, #1
	movs r4, r2
	movs r1, r0
	movs r0, r3
	lsls r6, r0, #1
	lsls r0, r6, #2
	movs r4, r0
	movs r4, r3
	lsls r2, r2, #1
	movs r0, r4
	lsls r3, r2, #1
	movs r4, r4
	lsls r4, r2, #1
	movs r0, r5
	lsls r5, r2, #1
	movs r4, r5
	lsls r0, r2, #1
	movs r4, r6
	lsls r6, r1, #1
	movs r0, r7
	lsls r2, r1, #1
	movs r4, r7
	lsls r4, r1, #1
	lsls r0, r0, #1
	lsls r7, r1, #1
	movs r4, r6
	lsls r5, r1, #1
	movs r0, r7
	lsls r1, r1, #1
	movs r4, r7
	lsls r3, r1, #1
	lsls r0, r0, #1
	movs r1, r3
	lsls r4, r0, #1
	movs r2, r3
	lsls r0, r1, #1
	movs r7, r2
	lsls r4, r1, #1
	movs r0, r3
	lsls r0, r2, #1
	movs r5, r3
	lsls r4, r2, #1
	movs r6, r3
	lsls r0, r3, #1
	movs r3, r3
	lsls r4, r3, #1
	movs r4, r3
	lsls r0, r4, #1
	movs r6, r0
	lsls r4, r4, #1
	movs r5, r0
	lsls r0, r5, #1
	movs r1, r4
	lsls r4, r5, #1
	movs r2, r2
	lsls r0, r6, #1
	movs r3, r2
	lsls r4, r6, #1
	movs r5, r7
	lsls r0, r7, #1
	movs r7, r0
	lsls r4, r7, #1
	movs r2, r1
	lsls r0, r0, #2
	movs r0, r1
	lsls r4, r0, #2
	movs r1, r1
	lsls r0, r1, #2
	movs r3, r1
	lsls r4, r1, #2
	movs r4, r4
	lsls r0, r2, #2
	movs r0, r4
	lsls r4, r2, #2
	movs r6, r2
	lsls r0, r4, #2
	movs r7, r3
	lsls r0, r3, #2
	movs r4, r2
	lsls r4, r4, #2
	movs r5, r2
	lsls r4, r4, #2
	lsls r0, r3, #1
	movs r0, r3
	lsls r1, r3, #1
	movs r0, r3
	lsls r6, r2, #1
	movs r0, r3
	lsls r2, r3, #1
	movs r0, r3
	movs r5, r4
	lsls r0, r5, #2
	movs r4, r5
	lsls r4, r5, #2
	movs r6, r5
	movs r0, r3
	movs r7, r5
	movs r0, r3
	movs r0, r6
	movs r0, r3
	movs r1, r6
	movs r0, r3
	movs r2, r6
	movs r0, r3
	movs r3, r6
	movs r0, r3
	movs r5, r6
	movs r0, r3
	movs r6, r6
	movs r0, r3
	movs r7, r6
	movs r0, r3
	movs r0, r7
	movs r0, r3
	movs r4, r6
	movs r0, r3
	movs r0, r0
	movs r0, r0
	movs r4, #125
	lsrs r0, r0, #32
	.syntax unified
	.thumb
