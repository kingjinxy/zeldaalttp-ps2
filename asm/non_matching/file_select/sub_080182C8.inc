	THUMB_FUNC_START sub_080182C8
sub_080182C8: @ 0x080182C8
	push {r4,r5,lr}
	add r4, r0, #0
	bl sub_08018514
	add r3, r4, #0
	add r3, r3, #41
	ldrb r2, [r3]
	mov r0, #128
	and r0, r0, r2
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _08018320
	ldrb r0, [r4, #20]
	add r0, r0, #1
	mov r1, #0
	strb r0, [r4, #20]
	mov r0, #8
	strb r0, [r4, #23]
	add r5, r4, #0
	add r5, r5, #42
	strb r1, [r5]
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl sub_08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #28
	strb r0, [r5]
	ldrb r1, [r5]
	add r0, r4, #0
	bl sub_08003870
	ldr r0, [r4, #84]
	ldrb r1, [r5]
	add r1, r1, #3
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_08003870
	b _08018336
_08018320:
	lsl r0, r2, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _08018336
	strb r1, [r3]
	add r0, r4, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #128
	orr r1, r1, r2
	strb r1, [r0]
_08018336:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080182C8

