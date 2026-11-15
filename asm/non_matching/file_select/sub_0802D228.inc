	THUMB_FUNC_START sub_0802D228
sub_0802D228: @ 0x0802D228
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r6, r0, #0
	add r7, r1, #0
	lsl r2, r2, #24
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r8, r3
	lsr r5, r2, #24
	cmp r5, #0
	beq _0802D274
_0802D240:
	add r0, r7, #0
	mov r1, #10
	bl __umodsi3
	add r4, r0, #0
	add r0, r7, #0
	mov r1, #10
	bl __udivsi3
	add r7, r0, #0
	add r0, r4, #0
	add r0, r0, #32
	mov r1, r8
	orr r0, r0, r1
	strh r0, [r6]
	add r0, r6, #0
	add r0, r0, #64
	add r4, r4, #64
	orr r4, r4, r1
	strh r4, [r0]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	sub r6, r6, #2
	cmp r5, #0
	bne _0802D240
_0802D274:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802D228

	.byte 0x00
	.byte 0x00
