	THUMB_FUNC_START sub_08068014
sub_08068014: @ 0x08068014
	lsl r0, r0, #24
	mov r1, #224
	lsl r1, r1, #19
	and r1, r1, r0
	lsr r1, r1, #24
	lsl r0, r1, #1
	add r0, r0, r1
	lsl r0, r0, #2
	ldr r1, _0806802C  @ =gUnknown_0814C654
	add r0, r0, r1
	bx lr
	.byte 0x00
	.byte 0x00
_0806802C:
	.4byte gUnknown_0814C654
	THUMB_FUNC_END sub_08068014

