	THUMB_FUNC_START sub_08134664
sub_08134664: @ 0x08134664
	add r2, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, [r2, #52]
	ldr r0, _08134680  @ =0x68736D53
	cmp r3, r0
	bne _0813467C
	strh r1, [r2, #38]
	strh r1, [r2, #36]
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r2, #40]
_0813467C:
	bx lr
	.byte 0x00
	.byte 0x00
_08134680:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08134664

