	.syntax unified
	THUMB_FUNC_START sub_08005554
sub_08005554: @ 0X08005554
	str r4, [r4, r2]
	lsrs r0, r0, #32
	movs r0, r0
	movs r1, r0
	strb r5, [r3, r6]
	lsrs r0, r0, #32
	strb r1, [r1, r7]
	lsrs r0, r0, #32
	ldrsb r5, [r5, r1]
	lsrs r0, r0, #32
	ldrsb r5, [r1, r2]
	lsrs r0, r0, #32
	ldrsb r5, [r6, r6]
	lsrs r0, r0, #32
	ldrsb r5, [r0, r7]
	lsrs r0, r0, #32
	ldr r5, [r0, r0]
	lsrs r0, r0, #32
	ldr r5, [r2, r0]
	lsrs r0, r0, #32
	.syntax unified
	.thumb
