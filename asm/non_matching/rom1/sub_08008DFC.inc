	.syntax unified
	THUMB_FUNC_START sub_08008DFC
sub_08008DFC: @ 0X08008DFC
	push {r4, r5, lr}
	adds r4, r0, #0
	ldrh r0, [r4, #50]
	ldrh r1, [r4, #54]
	ldr r2, [pc, #160]
	bl 0x8009364
	ldr r1, [pc, #196]
_08008E0C:
	adds r1, #6
	ldrh r2, [r1, #0]
	cmp r2, #0
	beq.n _08008E30
	cmp r0, r2
	bne.n _08008E0C
	movs r2, #80
	ldrh r3, [r4, r2]
	ldr r0, [pc, #172]
	ands r0, r3
	ldrh r5, [r1, #2]
	cmp r0, r5
	beq.n _08008E30
	lsls r3, r3, #18
	lsrs r3, r3, #18
	ldrh r5, [r1, #4]
	orrs r3, r5
	strh r3, [r4, r2]
_08008E30:
	adds r0, r4, #0
	pop {r4, r5, pc}
	.byte 0x02
	.byte 0x00
	.byte 0x00
	.byte 0x80
	.byte 0x00
	.byte 0x40
	.byte 0x03
	.byte 0x00
	.byte 0x00
	.byte 0x40
	.byte 0x00
	.byte 0x80
	.byte 0x48
	.byte 0x00
	.byte 0x00
	.byte 0xc0
	.byte 0x00
	.byte 0xc0
	.byte 0x47
	.byte 0x00
	.byte 0x00
	.byte 0xc0
	.byte 0x00
	.byte 0xc0
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.byte 0x00
	.syntax unified
	.thumb
