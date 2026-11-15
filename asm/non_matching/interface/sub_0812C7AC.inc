	THUMB_FUNC_START sub_0812C7AC
sub_0812C7AC: @ 0x0812C7AC
	push {lr}
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _0812C7C8  @ =gUnknown_030003C0
	ldr r2, [r2]
	mov r3, #128
	lsl r3, r3, #2
	strh r3, [r2]
	str r1, [r2, #4]
	str r0, [r2, #8]
	bl sub_0812C660
	pop {r0}
	bx r0
_0812C7C8:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C7AC

