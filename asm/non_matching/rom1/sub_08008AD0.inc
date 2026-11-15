	.syntax unified
	THUMB_FUNC_START sub_08008AD0
sub_08008AD0: @ 0X08008AD0
	push {lr}
	ldrb r2, [r0, #11]
	orrs r2, r2
	bne.n _08008ADC
	bl 0x800402c
_08008ADC:
	ldr r1, [pc, #76]
	movs r4, #43
	ldrb r4, [r0, r4]
	lsrs r4, r4, #2
	lsls r4, r4, #1
	ldrsb r2, [r1, r4]
	adds r4, #1
	ldrsb r3, [r1, r4]
	movs r1, #2
	bl 0x8001b54
	pop {pc}
	.4byte 0x03000c00
	.4byte 0x080088b4
	.4byte 0x08008881
	.syntax unified
	.thumb
