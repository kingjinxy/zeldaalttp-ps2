	THUMB_FUNC_START sub_0801B828
sub_0801B828: @ 0x0801B828
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801B87A
	mov r0, #5
	bl sub_08012494
	add r1, r0, #0
	cmp r1, #0
	beq _0801B874
	ldrb r0, [r4, #10]
	strb r0, [r1, #10]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	add r2, r1, #0
	add r2, r2, #43
	strb r0, [r2]
	str r4, [r1, #84]
	str r1, [r4, #88]
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	b _0801B87A
_0801B874:
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
_0801B87A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B828

