	THUMB_FUNC_START sub_0800C9F8
sub_0800C9F8: @ 0x0800C9F8
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4]
	ldrb r1, [r4, #1]
	lsl r1, r1, #8
	add r0, r0, r1
	ldrb r1, [r4, #2]
	lsl r1, r1, #16
	add r0, r0, r1
	ldrb r1, [r4, #3]
	lsl r1, r1, #24
	add r0, r0, r1
	ldrb r1, [r4, #4]
	ldrb r2, [r4, #5]
	lsl r2, r2, #8
	add r1, r1, r2
	ldrb r2, [r4, #6]
	lsl r2, r2, #16
	add r1, r1, r2
	ldrb r2, [r4, #7]
	lsl r2, r2, #24
	add r1, r1, r2
	bl LZ77UnCompVram
	add r4, r4, #10
	add r0, r4, #0
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800C9F8

	.byte 0x00
	.byte 0x00
