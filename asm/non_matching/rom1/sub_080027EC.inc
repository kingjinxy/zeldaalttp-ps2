	.syntax unified
	THUMB_FUNC_START sub_080027EC
sub_080027EC: @ 0X080027EC
	ldrh r2, [r0, #50]
	movs r3, #15
	ands r2, r3
	cmp r2, #5
	bcc.n _08002820
_080027F6:
	movs r2, #102
	strh r2, [r0, #44]
_080027FA:
	movs r2, #128
	strb r2, [r0, #11]
	ldrh r2, [r1, #54]
	movs r3, #64
	orrs r2, r3
	strh r2, [r1, #54]
	ldrb r2, [r0, #28]
	movs r3, #254
	ands r2, r3
	strb r2, [r0, #28]
	movs r3, #60
	ldrb r2, [r0, r3]
	lsls r2, r2, #29
	lsrs r2, r2, #29
	strb r2, [r0, r3]
	eors r2, r2
	movs r3, #66
	strb r2, [r0, r3]
	pop {pc}
_08002820:
	eors r2, r2
	strb r2, [r0, #11]
	ldrb r2, [r0, #28]
	movs r3, #1
	orrs r2, r3
	strb r2, [r0, #28]
	ldrh r2, [r1, #54]
	ldr r3, [pc, #452]
	ands r2, r3
	strh r2, [r1, #54]
	pop {pc}
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
