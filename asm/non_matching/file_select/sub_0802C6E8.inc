	THUMB_FUNC_START sub_0802C6E8
sub_0802C6E8: @ 0x0802C6E8
	ldr r1, _0802C6FC  @ =gUnknown_03006C80
	add r1, r1, #92
	ldrb r0, [r0, #10]
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0802C700
	mov r0, #0
	b _0802C70A
	.byte 0x00
	.byte 0x00
_0802C6FC:
	.4byte gUnknown_03006C80
_0802C700:
	sub r0, r0, #1
	strb r0, [r1]
	ldr r1, _0802C70C  @ =gUnknown_03000420
	mov r0, #1
	strb r0, [r1, #2]
_0802C70A:
	bx lr
_0802C70C:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_0802C6E8

