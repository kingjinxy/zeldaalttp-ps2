	THUMB_FUNC_START sub_081357F4
sub_081357F4: @ 0x081357F4
	add r1, r0, #0
	mov r2, #0
	mov r0, #0
	strb r0, [r1, #26]
	strb r0, [r1, #22]
	ldrb r0, [r1, #24]
	cmp r0, #0
	bne _08135808
	mov r0, #12
	b _0813580A
_08135808:
	mov r0, #3
_0813580A:
	ldrb r2, [r1]
	orr r0, r0, r2
	strb r0, [r1]
	bx lr
	THUMB_FUNC_END sub_081357F4

	.byte 0x00
	.byte 0x00
