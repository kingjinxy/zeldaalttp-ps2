	THUMB_FUNC_START sub_0812C7F0
sub_0812C7F0: @ 0x0812C7F0
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _0812C810  @ =gUnknown_030003C0
	ldr r3, [r2]
	mov r2, #4
	strh r2, [r3]
	str r0, [r3, #4]
	lsl r1, r1, #16
	asr r1, r1, #16
	str r1, [r3, #8]
	bl sub_0812C660
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C810:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C7F0

