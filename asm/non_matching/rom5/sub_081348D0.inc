	THUMB_FUNC_START sub_081348D0
sub_081348D0: @ 0x081348D0
	add r2, r0, #0
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, [r2, #52]
	ldr r0, _081348F0  @ =0x68736D53
	cmp r3, r0
	bne _081348EE
	strh r1, [r2, #38]
	strh r1, [r2, #36]
	mov r0, #2
	strh r0, [r2, #40]
	ldr r0, [r2, #4]
	ldr r1, _081348F4  @ =0x7FFFFFFF
	and r0, r0, r1
	str r0, [r2, #4]
_081348EE:
	bx lr
_081348F0:
	.4byte 0x68736D53
_081348F4:
	.4byte 0x7FFFFFFF
	THUMB_FUNC_END sub_081348D0

