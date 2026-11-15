	THUMB_FUNC_START sub_08036110
sub_08036110: @ 0x08036110
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #20]
	cmp r0, #0
	bne _08036158
	mov r4, #1
	mov r0, #1
	strb r0, [r5, #20]
	ldrb r1, [r5, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	orr r0, r0, r4
	strb r0, [r5, #28]
	ldrb r3, [r5, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r3
	mov r3, #128
	orr r0, r0, r3
	strb r0, [r5, #29]
	ldrb r0, [r5, #31]
	and r1, r1, r0
	orr r1, r1, r3
	strb r1, [r5, #31]
	add r1, r5, #0
	add r1, r1, #94
	ldrb r0, [r1]
	and r2, r2, r0
	orr r2, r2, r4
	strb r2, [r1]
	add r0, r5, #0
	mov r1, #2
	bl sub_08003870
_08036158:
	add r0, r5, #0
	bl GetNextFrame
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _08036174
	add r0, r5, #0
	bl DeleteThisEntity
	b _0803618A
_08036174:
	cmp r0, #14
	bhi _0803618A
	ldrb r2, [r5, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r5, #28]
_0803618A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08036110

