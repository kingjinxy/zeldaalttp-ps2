	.syntax unified
	THUMB_FUNC_START sub_08002838
sub_08002838: @ 0X08002838
	ldrb r2, [r1, #30]
	orrs r2, r2
	bne.n _080028AA
	push {r0, r1}
	movs r2, #24
	ldrh r3, [r0, #50]
	lsrs r3, r3, #4
	bcs.n _0800288E
	movs r1, #240
	b.n _080028A4
	.syntax unified
	.thumb
