	.syntax unified
	THUMB_FUNC_START sub_0800A550
sub_0800A550: @ 0X0800A550
	add r0, sp, #196
	lsrs r0, r0, #32
	lsls r0, r0, #4
	movs r0, r0
	.2byte 0xc000
	movs r0, r0
	lsls r1, r0, #24
	movs r0, r0
	lsls r2, r0, #24
	movs r0, r0
	.4byte 0x8000ff00
	movs r4, r2
	movs r0, r0
	movs r0, r0
	strh r0, [r0, #0]
	movs r4, r0
	movs r0, r0
	lsls r0, r2, #16
	movs r0, r0
	lsls r7, r1, #16
	movs r0, r0
	lsls r6, r1, #16
	movs r0, r0
	lsls r5, r1, #12
	movs r0, r0
	lsls r4, r1, #8
	movs r0, r0
	lsls r4, r1, #4
	lsls r0, r0, #4
	lsls r0, r0, #8
	movs r0, r0
	lsls r1, r0, #8
	movs r0, r0
	lsls r2, r0, #8
	movs r0, r0
	lsls r3, r0, #8
	movs r0, r0
	lsls r4, r0, #8
	movs r0, r0
	lsls r5, r0, #8
	movs r0, r0
	lsls r6, r0, #8
	movs r0, r0
	.syntax unified
	.thumb
