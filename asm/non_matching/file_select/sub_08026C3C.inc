	THUMB_FUNC_START sub_08026C3C
sub_08026C3C: @ 0x08026C3C
	add r1, r0, #0
	add r0, r0, #98
	ldrh r0, [r0]
	cmp r0, #0
	bne _08026C4E
	mov r0, #5
	strb r0, [r1, #20]
	mov r0, #60
	strb r0, [r1, #23]
_08026C4E:
	bx lr
	THUMB_FUNC_END sub_08026C3C

