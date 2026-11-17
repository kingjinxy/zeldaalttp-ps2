	.syntax unified
	THUMB_FUNC_START sub_08001CD8
sub_08001CD8: @ 0X08001CD8
	asrs r0, r0, #32
	movs r0, r2
	asrs r0, r0, #32
	movs r0, r2
	.4byte 0xfd03fd00
	movs r3, r0
	lsls r3, r0, #12
	lsls r0, r0, #12
	lsls r5, r7, #15
	lsls r5, r7, #3
	.4byte 0xfa00fdfd
	.4byte 0x6fa06
	lsls r6, r0, #24
	lsls r0, r0, #24
	lsls r2, r7, #27
	lsls r2, r7, #3
	.4byte 0xb500fafa
	bl sub_08001D5C
	ldrb r3, [r1, #13]
	movs r2, #128
	tst r2, r3
	beq.n _08001D16
	movs r2, #42
	ldrb r3, [r0, r2]
	lsrs r3, r3, #1
	lsls r3, r3, #3
_08001D16:
	movs r2, #43
	strb r3, [r0, r2]
	pop {pc}
	.syntax unified
	.thumb
