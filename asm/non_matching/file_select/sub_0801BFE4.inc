	THUMB_FUNC_START sub_0801BFE4
sub_0801BFE4: @ 0x0801BFE4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801C03E
	mov r0, #5
	bl sub_08012494
	add r2, r0, #0
	cmp r2, #0
	beq _0801C038
	mov r0, #3
	strb r0, [r2, #10]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	sub r0, r0, #3
	mov r1, #31
	and r0, r0, r1
	add r1, r2, #0
	add r1, r1, #43
	strb r0, [r1]
	str r4, [r2, #84]
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #105
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	b _0801C03E
_0801C038:
	ldrb r0, [r4, #23]
	add r0, r0, #1
	strb r0, [r4, #23]
_0801C03E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801BFE4

