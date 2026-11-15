	THUMB_FUNC_START sub_080348D0
sub_080348D0: @ 0x080348D0
	add r1, r0, #0
	ldr r2, [r1, #96]
	ldrb r0, [r1, #20]
	cmp r0, #0
	beq _080348EC
	ldrb r3, [r2, #4]
	cmp r3, #0
	beq _080348EC
	mov r0, #0
	strb r3, [r1, #20]
	strb r0, [r1, #21]
	strb r0, [r2, #4]
	mov r0, #1
	strb r0, [r2, #2]
_080348EC:
	bx lr
	THUMB_FUNC_END sub_080348D0

	.byte 0x00
	.byte 0x00
