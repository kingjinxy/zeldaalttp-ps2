	.syntax unified
	THUMB_FUNC_START sub_0800AD54
sub_0800AD54: @ 0X0800AD54
	lsls r5, r0, #16
	movs r0, r0
	.4byte 0x8000ff05
	lsrs r0, r0, #32
	movs r0, r0
	lsls r1, r0, #16
	movs r0, r0
	.4byte 0x8000ff01
	lsls r0, r0, #16
	movs r0, r0
	lsls r1, r0, #16
	movs r0, r0
	lsls r2, r0, #16
	movs r0, r0
	.4byte 0x8000ff02
	lsls r1, r1, #16
	movs r0, r0
	lsls r2, r1, #24
	movs r0, r0
	lsls r3, r1, #24
	movs r0, r0
	lsls r4, r1, #16
	.syntax unified
	.thumb
