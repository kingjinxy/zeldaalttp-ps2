	THUMB_FUNC_START sub_080349F0
sub_080349F0: @ 0x080349F0
	push {lr}
	ldrb r1, [r0, #21]
	add r1, r1, #1
	strb r1, [r0, #21]
	ldr r2, [r0, #96]
	ldrb r1, [r2, #5]
	strb r1, [r0, #23]
	ldrb r1, [r2, #6]
	add r2, r0, #0
	add r2, r2, #43
	strb r1, [r2]
	ldr r2, [r0, #96]
	mov r1, #2
	strb r1, [r2, #2]
	mov r1, #4
	bl sub_0804CE00
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080349F0

	.byte 0x00
	.byte 0x00
