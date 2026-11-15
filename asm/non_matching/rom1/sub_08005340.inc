	.syntax unified
	THUMB_FUNC_START sub_08005340
sub_08005340: @ 0X08005340
	lsls r4, r4, #1
	ldr r1, [pc, #508]
	ldrh r4, [r1, r4]
	orrs r4, r4
	bne.n _0800531E
_0800534A:
	lsls r3, r3, #4
	subs r3, #4
	lsls r3, r3, #12
	str r3, [r0, #16]
	ldr r2, [pc, #496]
	.syntax unified
	.thumb
