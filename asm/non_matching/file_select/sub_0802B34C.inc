	THUMB_FUNC_START sub_0802B34C
sub_0802B34C: @ 0x0802B34C
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, [r4, #76]
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r5, [r4, #76]
	ldrb r2, [r5, #31]
	lsr r2, r2, #6
	lsl r2, r2, #6
	ldrb r3, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r3
	orr r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r5, #29]
	lsr r0, r0, #6
	lsl r0, r0, #6
	ldrb r2, [r4, #29]
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r4, #29]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	ldrh r0, [r4, #58]
	sub r0, r0, #16
	strh r0, [r4, #58]
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B34C

	.byte 0x00
	.byte 0x00
