	THUMB_FUNC_START sub_08134648
sub_08134648: @ 0x08134648
	add r2, r0, #0
	ldr r3, [r2, #52]
	ldr r0, _0813465C  @ =0x68736D53
	cmp r3, r0
	bne _0813465A
	ldr r0, [r2, #4]
	ldr r1, _08134660  @ =0x7FFFFFFF
	and r0, r0, r1
	str r0, [r2, #4]
_0813465A:
	bx lr
_0813465C:
	.4byte 0x68736D53
_08134660:
	.4byte 0x7FFFFFFF
	THUMB_FUNC_END sub_08134648

