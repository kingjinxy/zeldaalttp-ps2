	.syntax unified
	THUMB_FUNC_START sub_0800174C
sub_0800174C: @ 0X0800174C
	.4byte 0x10f000
	asrs r0, r0, #32
	lsls r0, r6, #3
	.4byte 0x8f800
	lsrs r0, r0, #32
	lsls r0, r7, #3
	lsls r2, r1, #1
	movs r1, r0
	lsls r4, r1, #1
	movs r3, r0
	lsls r0, r2, #1
	movs r2, r0
	lsls r6, r1, #1
	movs r4, r0
	lsls r1, r1, #1
	movs r1, r0
	lsls r3, r1, #1
	movs r3, r0
	lsls r7, r1, #1
	movs r2, r0
	lsls r5, r1, #1
	movs r4, r0
	movs r0, r0
	movs r0, r0
	.4byte 0x7310ec80
	lsrs r6, r1, #3
	lsls r7, r6, #4
	.4byte 0xffffffff
	movs r0, r0
	movs r7, r1
	.4byte 0xffffffff
	.4byte 0xffffffff
	.4byte 0xffffffff
	adds r3, #51
	ldmia r4!, {r2, r3, r6, r7}
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xff
	.byte 0xff
	.byte 0x00
	.byte 0x00
	.byte 0xc8
	.byte 0xfe
	.byte 0x31
	.byte 0xf7
	.byte 0xef
	.byte 0x8c
	.byte 0x7f
	.byte 0x13
	.byte 0x99
	.byte 0x99
	.byte 0x0f
	.byte 0xf0
	.byte 0x00
	.byte 0x00
	.byte 0x0f
	.byte 0x00
	.byte 0xff
	.byte 0xff
	.byte 0xff
	.byte 0xff
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xff
	.byte 0xff
	.byte 0x33
	.byte 0x33
	.byte 0xcc
	.byte 0xcc
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0xff
	.byte 0xff
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
