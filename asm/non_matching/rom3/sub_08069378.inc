	THUMB_FUNC_START sub_08069378
sub_08069378: @ 0x08069378
	push {lr}
	add r3, r0, #0
	b _08069386
_0806937E:
	ldrb r0, [r1]
	strb r0, [r3]
	add r1, r1, #1
	add r3, r3, #1
_08069386:
	add r0, r2, #0
	sub r2, r2, #1
	cmp r0, #0
	bne _0806937E
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08069378

	.byte 0x00
	.byte 0x00
