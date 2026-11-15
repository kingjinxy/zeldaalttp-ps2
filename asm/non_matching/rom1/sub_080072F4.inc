	.syntax unified
	THUMB_FUNC_START sub_080072F4
sub_080072F4: @ 0X080072F4
	push {lr}
	push {r0, r4}
	mov r1, sl
	ldrb r0, [r1, r2]
	orrs r0, r0
	bne.n _0800730E
	movs r2, #28
	ldrb r2, [r1, r2]
	movs r0, #29
	ldrb r0, [r1, r0]
	orrs r0, r2
	bne.n _08007334
	movs r0, #18
_0800730E:
	cmp r0, #32
	bcs.n _08007334
	adds r4, r0, #0
	ldr r1, [pc, #280]
	lsls r4, r4, #1
	ldrb r2, [r1, r4]
	adds r4, #1
	ldrb r4, [r1, r4]
	ldr r1, [pc, #276]
	ldr r1, [r1, r4]
	ldrh r4, [r1, #0]
	ands r4, r3
	beq.n _08007334
	bl sub_080071B8
	bne.n _08007334
	strb r2, [r1, #9]
	strb r0, [r1, #1]
	strb r3, [r1, #3]
_08007334:
	pop {r0, r4}
	pop {pc}
	.byte 0x02
	.byte 0x04
	.byte 0x53
	.byte 0x04
	.byte 0x62
	.byte 0x04
	.byte 0x22
	.byte 0x04
	.byte 0x24
	.byte 0x04
	.byte 0x13
	.byte 0x00
	.byte 0x01
	.byte 0x04
	.byte 0x43
	.byte 0x04
	.byte 0x01
	.byte 0x04
	.byte 0x03
	.byte 0x00
	.byte 0x01
	.byte 0x04
	.byte 0x01
	.byte 0x00
	.byte 0x01
	.byte 0x00
	.byte 0x01
	.byte 0x04
	.byte 0x01
	.byte 0x00
	.byte 0x01
	.byte 0x04
	.byte 0x02
	.byte 0x04
	.byte 0x00
	.byte 0x00
	.byte 0x10
	.byte 0x05
	.byte 0x00
	.byte 0x03
	.byte 0xd0
	.byte 0x0b
	.byte 0x00
	.byte 0x03
	.syntax unified
	.thumb
