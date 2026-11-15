	THUMB_FUNC_START sub_0802BC48
sub_0802BC48: @ 0x0802BC48
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r5, r1, #0
	ldrb r0, [r4, #6]
	cmp r0, #0
	bne _0802BC5E
	add r0, r4, #0
	bl sub_0802BC74
_0802BC5E:
	ldrb r0, [r4, #5]
	cmp r0, #0
	bne _0802BC6C
	add r0, r4, #0
	add r1, r5, #0
	bl sub_0802BB24
_0802BC6C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802BC48

	.byte 0x00
	.byte 0x00
