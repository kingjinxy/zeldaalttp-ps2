	THUMB_FUNC_START sub_0801C2B0
sub_0801C2B0: @ 0x0801C2B0
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801C2C2
	mov r0, #3
	strb r0, [r1, #20]
_0801C2C2:
	bx lr
	THUMB_FUNC_END sub_0801C2B0

