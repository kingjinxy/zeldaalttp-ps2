	THUMB_FUNC_START sub_081348B0
sub_081348B0: @ 0x081348B0
	add r2, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, [r2, #52]
	ldr r0, _081348C8  @ =0x68736D53
	cmp r3, r0
	bne _081348C6
	strh r1, [r2, #38]
	strh r1, [r2, #36]
	ldr r0, _081348CC  @ =0x00000101
	strh r0, [r2, #40]
_081348C6:
	bx lr
_081348C8:
	.4byte 0x68736D53
_081348CC:
	.4byte 0x00000101
	THUMB_FUNC_END sub_081348B0

