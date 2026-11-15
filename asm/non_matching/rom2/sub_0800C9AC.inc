	THUMB_FUNC_START sub_0800C9AC
sub_0800C9AC: @ 0x0800C9AC
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r5, [r4]
	ldrb r0, [r4, #1]
	lsl r0, r0, #8
	add r5, r5, r0
	ldrb r0, [r4, #2]
	lsl r0, r0, #16
	add r5, r5, r0
	ldrb r0, [r4, #3]
	lsl r0, r0, #24
	add r5, r5, r0
	ldrb r1, [r4, #4]
	ldrb r0, [r4, #5]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrb r0, [r4, #6]
	lsl r0, r0, #16
	add r1, r1, r0
	ldrb r0, [r4, #7]
	lsl r0, r0, #24
	add r1, r1, r0
	ldrb r2, [r4, #8]
	ldrb r0, [r4, #9]
	lsl r0, r0, #8
	add r2, r2, r0
	lsr r2, r2, #2
	add r0, r5, #0
	bl CpuFastSet
	add r0, r5, #0
	bl sub_0800BE50
	add r4, r4, #10
	add r0, r4, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800C9AC

