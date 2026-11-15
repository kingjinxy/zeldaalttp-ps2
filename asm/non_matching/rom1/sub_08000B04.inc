	.syntax unified
	THUMB_FUNC_START sub_08000B04
sub_08000B04: @ 0X08000B04
	movs r3, #14
	movs r0, r0
	.4byte 0xfffc
	movs r3, #14
	movs r0, r0
	movs r2, r0
	.4byte 0xfffcfff8
	asrs r0, r0, #32
	movs r3, #15
	movs r0, r0
	.4byte 0xfffc
	movs r3, #15
	movs r0, r0
	movs r2, r0
	.4byte 0xfffcfff8
	asrs r0, r0, #32
	movs r3, #16
	movs r0, r0
	.4byte 0xfffc
	movs r3, #16
	movs r0, r0
	movs r2, r0
	.4byte 0xfffcfff8
	movs r0, r0
	movs r3, #16
	movs r0, r0
	.4byte 0x1000fffc
	movs r3, #16
	movs r0, r0
	movs r0, r0
	movs r0, r0
	movs r2, r0
	.4byte 0xfffefff8
	movs r0, r0
	asrs r3, r1, #12
	movs r0, r0
	.4byte 0x1000fffe
	asrs r3, r1, #12
	movs r0, r0
	movs r2, r0
	.4byte 0xfffefff8
	movs r0, r0
	asrs r4, r1, #12
	movs r0, r0
	.4byte 0x1000fffe
	asrs r4, r1, #12
	movs r0, r0
	movs r2, r0
	.4byte 0xfffefff8
	movs r0, r0
	asrs r5, r1, #12
	movs r0, r0
	.4byte 0x1000fffe
	asrs r5, r1, #12
	movs r0, r0
	lsrs r4, r7, #11
	lsrs r0, r0, #32
	lsrs r0, r2, #12
	lsrs r0, r0, #32
	lsrs r4, r4, #12
	lsrs r0, r0, #32
	lsrs r0, r7, #12
	lsrs r0, r0, #32
	lsrs r4, r1, #13
	lsrs r0, r0, #32
	lsrs r0, r2, #13
	lsrs r0, r0, #32
	lsrs r4, r4, #13
	lsrs r0, r0, #32
	lsrs r0, r7, #13
	lsrs r0, r0, #32
	.syntax unified
	.thumb

