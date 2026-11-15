	THUMB_FUNC_START sub_0802336C
sub_0802336C: @ 0x0802336C
	add r1, r0, #0
	add r0, r0, #125
	ldrb r0, [r0]
	cmp r0, #1
	bne _0802337A
	mov r0, #6
	strb r0, [r1, #20]
_0802337A:
	bx lr
	THUMB_FUNC_END sub_0802336C

