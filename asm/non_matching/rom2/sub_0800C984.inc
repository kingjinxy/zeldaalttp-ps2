	THUMB_FUNC_START sub_0800C984
sub_0800C984: @ 0x0800C984
	mov r3, #0
	ldr r2, _0800C9A0  @ =gUnknown_03000E34
	ldr r0, _0800C9A4  @ =gUnknown_03000204
	ldrb r0, [r0]
	lsl r0, r0, #7
	ldr r1, _0800C9A8  @ =gUnknown_030066A6
	add r0, r0, r1
	ldr r1, [r2]
	cmp r1, r0
	bcs _0800C99A
	mov r3, #1
_0800C99A:
	add r0, r3, #0
	bx lr
	.byte 0x00
	.byte 0x00
_0800C9A0:
	.4byte gUnknown_03000E34
_0800C9A4:
	.4byte gUnknown_03000204
_0800C9A8:
	.4byte gUnknown_030066A6
	THUMB_FUNC_END sub_0800C984

