	THUMB_FUNC_START sub_0800C940
sub_0800C940: @ 0x0800C940
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
	ldrb r2, [r4, #8]
	ldrb r3, [r4, #9]
	lsl r3, r3, #8
	add r2, r2, r3
	lsr r2, r2, #2
	bl CpuFastSet
	add r4, r4, #10
	add r0, r4, #0
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800C940

