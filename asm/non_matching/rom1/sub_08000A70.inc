	thumb_func_start sub_08000A70
sub_08000A70: @ 0x08000A70
	movs r2, #0xff
	mvns r0, r0
	beq _08000AA6
	movs r2, #0
	ldr r1, _08000AF0 @ =0x0000FFFF
	tst r0, r1
	bne _08000A82
	movs r2, #0x10
	lsrs r0, r0, #0x10
_08000A82:
	movs r1, #0xff
	tst r0, r1
	bne _08000A8C
	adds r2, #8
	lsrs r0, r0, #8
_08000A8C:
	movs r1, #0xf
	tst r0, r1
	bne _08000A96
	adds r2, #4
	lsrs r0, r0, #4
_08000A96:
	movs r1, #3
	tst r0, r1
	bne _08000AA0
	adds r2, #2
	lsrs r0, r0, #2
_08000AA0:
	lsrs r0, r0, #1
	bhs _08000AA6
	adds r2, #1
_08000AA6:
	adds r0, r2, #0
	mov pc, lr
	.align 2, 0

