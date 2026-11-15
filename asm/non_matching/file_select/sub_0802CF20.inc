	THUMB_FUNC_START sub_0802CF20
sub_0802CF20: @ 0x0802CF20
	push {lr}
	bl sub_0802CEC4
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0802CF5C
	ldr r0, _0802CF54  @ =gUnknown_03006C80
	add r1, r0, #0
	add r1, r1, #81
	ldrb r0, [r1]
	cmp r0, #0
	bne _0802CF62
	mov r0, #1
	strb r0, [r1]
	mov r0, #129
	lsl r0, r0, #2
	bl sub_0800D6A4
	bl 0x08004710
	ldr r1, _0802CF58  @ =gUnknown_0201ED90
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [r1, #16]
	b _0802CF62
_0802CF54:
	.4byte gUnknown_03006C80
_0802CF58:
	.4byte gUnknown_0201ED90
_0802CF5C:
	ldr r0, _0802CF6C  @ =gUnknown_03006C80
	add r0, r0, #81
	strb r1, [r0]
_0802CF62:
	bl sub_0803A20C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802CF6C:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0802CF20

