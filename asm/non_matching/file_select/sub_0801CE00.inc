	THUMB_FUNC_START sub_0801CE00
sub_0801CE00: @ 0x0801CE00
	mov r2, #0
	mov r1, #1
	strb r1, [r0, #20]
	ldr r1, _0801CE10  @ =gUnknown_03006C80
	ldrb r1, [r1]
	strb r1, [r0, #23]
	str r2, [r0, #88]
	bx lr
_0801CE10:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0801CE00

