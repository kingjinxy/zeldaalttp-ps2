	THUMB_FUNC_START sub_08012F84
sub_08012F84: @ 0x08012F84
	lsl r0, r0, #24
	lsl r1, r1, #24
	lsr r2, r1, #24
	ldr r1, _08012FA0  @ =gUnknown_02016330
	lsr r0, r0, #22
	add r0, r0, r1
	ldr r1, [r0]
	cmp r1, #0
	beq _08012FA4
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r0, [r0]
	b _08012FA6
	.byte 0x00
	.byte 0x00
_08012FA0:
	.4byte gUnknown_02016330
_08012FA4:
	mov r0, #0
_08012FA6:
	bx lr
	THUMB_FUNC_END sub_08012F84

