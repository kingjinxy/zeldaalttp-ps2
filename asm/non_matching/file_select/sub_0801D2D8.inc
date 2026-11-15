	THUMB_FUNC_START sub_0801D2D8
sub_0801D2D8: @ 0x0801D2D8
	add r2, r0, #0
	mov r0, #1
	strb r0, [r2, #21]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	ldr r1, [r2, #84]
	add r0, r1, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801D304
	mov r0, #7
	strb r0, [r1, #20]
	ldr r1, [r2, #84]
	mov r0, #0
	str r0, [r1, #84]
	ldr r1, [r2, #84]
	mov r0, #192
	lsl r0, r0, #9
	str r0, [r1, #16]
_0801D304:
	bx lr
	THUMB_FUNC_END sub_0801D2D8

	.byte 0x00
	.byte 0x00
