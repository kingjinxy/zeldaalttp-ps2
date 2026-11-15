	.syntax unified
	THUMB_FUNC_START sub_080026EC
sub_080026EC: @ 0X080026EC
	bl _08002424
	bl sub_080025F4
	movs r2, #80
	ldrh r2, [r0, r2]
	lsrs r2, r2, #16
	bcc.n sub_08002738
	ldrh r2, [r0, #54]
	adds r2, #10
	strh r2, [r0, #54]
	ldrh r2, [r1, #54]
	movs r3, #128
	tst r2, r3
	bne.n _08002710
	ldrh r2, [r0, #58]
	subs r2, #10
	strh r2, [r0, #58]
_08002710:
	push {r1}
	movs r1, #80
	ldrh r2, [r0, r1]
	ldr r3, [pc, #712]
	ands r2, r3
	ldr r3, [pc, #716]
	orrs r2, r3
	strh r2, [r0, r1]
	movs r2, #128
	strb r2, [r0, #31]
	ldrb r2, [r0, #29]
	movs r3, #63
	ands r2, r3
	movs r3, #128
	orrs r2, r3
	strb r2, [r0, #29]
	pop {r1}
	pop {pc}
	.byte 0x00
	.byte 0xb5
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
