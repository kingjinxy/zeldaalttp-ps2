	THUMB_FUNC_START sub_0812C764
sub_0812C764: @ 0x0812C764
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _0812C784  @ =gUnknown_030003C0
	ldr r2, [r2]
	mov r3, #2
	strh r3, [r2]
	str r0, [r2, #4]
	str r1, [r2, #8]
	bl sub_0812C660
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C784:
	.4byte gUnknown_030003C0
	THUMB_FUNC_END sub_0812C764

