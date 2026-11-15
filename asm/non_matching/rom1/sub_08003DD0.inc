	thumb_func_start sub_08003DD0
sub_08003DD0: @ 0x08003DD0
	movs r4, #0x3f
	lsrs r2, r0, #4
	ands r2, r4
	lsrs r3, r1, #4
	ands r4, r3
	lsls r4, r4, #6
	adds r4, r4, r2
	mov r2, ip
	movs r3, #0x50
	ldrh r3, [r2, r3]
	lsrs r3, r3, #0xe
	lsls r3, r3, #2
	ldr r2, _08003EB8 @ =0x080092A0
	ldr r2, [r2, r3]
	ldrb r2, [r2, r4]
	cmp r2, #0xff
	beq _08003DF4
	movs r2, #0
_08003DF4:
	movs r3, #1
	ands r2, r3
	mov pc, lr
	.align 2, 0

