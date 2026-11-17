	.syntax unified
	THUMB_FUNC_START sub_08009824
sub_08009824: @ 0X08009824
	bcs.n _0800982C
_08009826:
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_0800982C:
	mov pc, lr
	.byte 0x00
	.byte 0x00
_08009830:
	lsrs r4, r2, #4
	lsrs r5, r3, #4
	lsls r5, r5, #6
	adds r4, r4, r5
	ldrb r4, [r7, r4]
	cmp r4, #255
	beq.n _08009842
	cmp r4, #32
	beq.n _08009848
_08009842:
	mov r4, ip
	orrs r4, r6
	mov ip, r4
_08009848:
	mov pc, lr
	.byte 0x00
	.byte 0x00
	.4byte 0x03006d14
	.4byte gUnknown_0813EC48+0x2c
	.4byte sub_08008FA4+0x5ed
	.4byte 0x03000208
	.4byte 0x0201eff0
	.4byte sub_08008FA4+0x2fc
	.4byte 0x03000450
	.4byte 0x00000400
	.4byte 0x00004000
	.4byte sub_08008FA4+0x7e4
	.syntax unified
	.thumb
