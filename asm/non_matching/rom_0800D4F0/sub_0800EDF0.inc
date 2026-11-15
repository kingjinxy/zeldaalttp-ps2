	THUMB_FUNC_START sub_0800EDF0
sub_0800EDF0: @ 0x0800EDF0
	add r1, r0, #0
	ldrb r0, [r1, #2]
	add r2, r0, #0
	cmp r2, #0
	beq _0800EE02
	sub r0, r0, #1
	strb r0, [r1, #2]
	mov r0, #1
	b _0800EE06
_0800EE02:
	strb r2, [r1]
	mov r0, #0
_0800EE06:
	bx lr
	THUMB_FUNC_END sub_0800EDF0

