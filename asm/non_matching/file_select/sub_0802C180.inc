	THUMB_FUNC_START sub_0802C180
sub_0802C180: @ 0x0802C180
	push {r4,r5,lr}
	add r5, r1, #0
	ldrb r2, [r5]
	mov r1, #63
	add r4, r1, #0
	and r4, r4, r2
	lsl r3, r4, #4
	add r2, r0, #0
	add r2, r2, #32
	strb r3, [r2]
	lsr r2, r3, #8
	lsl r2, r2, #6
	ldrb r3, [r0, #28]
	and r1, r1, r3
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r0, r0, #83
	strb r4, [r0]
	ldrh r0, [r5, #2]
	lsr r3, r0, #8
	b _0802C1B2
_0802C1AA:
	ldrb r0, [r5, #1]
	add r0, r0, #1
	strb r0, [r5, #1]
	add r5, r5, #4
_0802C1B2:
	add r0, r3, #0
	sub r3, r3, #1
	cmp r0, #0
	bgt _0802C1AA
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802C180

