	THUMB_FUNC_START sub_0812BD50
sub_0812BD50: @ 0x0812BD50
	push {r4-r7,lr}
	add r5, r0, #0
	add r7, r1, #0
	add r6, r2, #0
	cmp r5, #0
	beq _0812BE06
	ldr r0, [r5, #8]
	cmp r0, #0
	beq _0812BD68
	add r0, r5, #0
	bl sub_0812BE3C
_0812BD68:
	mov r4, #0
	str r4, [r5, #52]
	add r0, r5, #0
	add r0, r0, #73
	strb r4, [r0]
	add r0, r0, #1
	strb r4, [r0]
	str r6, [r5]
	str r7, [r5, #8]
	str r4, [r5, #12]
	add r0, r5, #0
	mov r1, #0
	bl sub_0812C334
	add r1, r5, #0
	add r1, r1, #75
	mov r0, #64
	strb r0, [r1]
	mov r2, #0
	strh r4, [r5, #16]
	mov r0, #34
	str r0, [r5, #20]
	str r4, [r5, #24]
	strb r2, [r5, #28]
	strb r2, [r5, #29]
	strb r2, [r5, #30]
	strh r4, [r5, #32]
	strh r4, [r5, #34]
	add r1, r1, #2
	mov r0, #128
	strb r0, [r1]
	add r1, r1, #1
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #79
	strb r2, [r0]
	add r1, r1, #2
	mov r0, #2
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #81
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #67
	ldrb r3, [r0]
	cmp r3, #1
	bne _0812BDDA
	add r1, r1, #2
	mov r0, #12
	strb r0, [r1]
	sub r1, r1, #6
	mov r0, #127
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #83
	strb r3, [r0]
	b _0812BDEC
_0812BDDA:
	add r1, r5, #0
	add r1, r1, #82
	mov r0, #3
	strb r0, [r1]
	add r0, r5, #0
	add r0, r0, #76
	strb r2, [r0]
	add r0, r0, #7
	strb r2, [r0]
_0812BDEC:
	add r1, r5, #0
	add r1, r1, #68
	mov r3, #0
	mov r2, #127
	mov r0, #127
	strh r0, [r1]
	add r0, r5, #0
	add r0, r0, #72
	strb r2, [r0]
	sub r0, r0, #2
	strh r3, [r0]
	sub r0, r0, #34
	str r0, [r5, #48]
_0812BE06:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0812BD50

