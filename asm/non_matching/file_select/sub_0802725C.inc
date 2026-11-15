	THUMB_FUNC_START sub_0802725C
sub_0802725C: @ 0x0802725C
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0802727E
	ldrb r2, [r3, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	b _08027294
_0802727E:
	mov r2, #1
	mov r0, #1
	strb r0, [r3, #20]
	add r0, r3, #0
	add r0, r0, #116
	strb r1, [r0]
	ldrb r1, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
_08027294:
	strb r0, [r3, #28]
	bx lr
	THUMB_FUNC_END sub_0802725C

