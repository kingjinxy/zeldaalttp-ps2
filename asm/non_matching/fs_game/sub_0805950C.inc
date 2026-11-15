	THUMB_FUNC_START sub_0805950C
sub_0805950C: @ 0x0805950C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_080597A8
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08059524
	b _0805979E
_08059524:
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	bne _0805952E
	b _0805970A
_0805952E:
	cmp r0, #1
	bgt _0805953A
	cmp r0, #0
	bne _08059538
	b _0805977A
_08059538:
	b _08059798
_0805953A:
	cmp r0, #2
	bne _08059540
	b _0805964E
_08059540:
	cmp r0, #3
	beq _08059546
	b _08059798
_08059546:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #3
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #67
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #131
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #192
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #193
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #194
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #195
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
_0805964E:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #2
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #66
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #128
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #129
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #130
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
_0805970A:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #1
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #64
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	add r2, r1, #0
	add r2, r2, #65
	add r1, r2, #0
	lsl r2, r1, #16
	lsr r1, r2, #16
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
_0805977A:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #123
	ldrb r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #120
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08008F3C
	b _08059798
_08059798:
	ldr r0, [r7]
	bl DeleteThisEntity
_0805979E:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805950C

	.byte 0x00
	.byte 0x00
