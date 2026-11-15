	.syntax unified
	THUMB_FUNC_START sub_08003A48
sub_08003A48: @ 0X08003A48
	movs r1, #0
_08003A4A:
	push {r4, lr}
	adds r4, r0, #0
	movs r0, #15
	movs r2, #0
	bl 0x804c8a8
	cmp r0, #0
	beq.n _08003A9A
	movs r1, #72
	ldr r1, [r4, r1]
	ldrh r3, [r4, #50]
	movs r2, #0
	ldrsb r2, [r1, r2]
	adds r3, r3, r2
	strh r3, [r0, #50]
	ldrh r3, [r4, #54]
	movs r2, #1
	ldrsb r2, [r1, r2]
	adds r3, r3, r2
	strh r3, [r0, #54]
	ldrh r3, [r4, #58]
	strh r3, [r0, #58]
	ldrb r3, [r4, #8]
	cmp r3, #3
	bne.n _08003A9A
	movs r1, #1
	strb r1, [r0, #11]
	ldr r3, [r4, #96]
	cmp r3, #0
	beq.n _08003A9A
	movs r1, #0
	str r1, [r4, #96]
	str r3, [r0, #88]
	movs r2, #104
	ldrb r3, [r4, r2]
	cmp r3, #0
	beq.n _08003A9A
	strb r1, [r4, r2]
	movs r2, #96
	strb r3, [r0, r2]
_08003A9A:
	adds r0, r4, #0
	bl 0x8012540
	pop {r4, pc}
	.byte 0x00
	.byte 0x00
	.byte 0x03
	.byte 0x00
	.byte 0x00
	.byte 0x80
	.byte 0x48
	.byte 0x00
	.byte 0x00
	.byte 0xc0
	.byte 0x47
	.byte 0x00
	.byte 0x00
	.byte 0xc0
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x40
	.byte 0x42
	.byte 0x00
	.byte 0x01
	.byte 0x00
	.byte 0x20
	.byte 0x00
	.byte 0x03
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
