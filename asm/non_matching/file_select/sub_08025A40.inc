	THUMB_FUNC_START sub_08025A40
sub_08025A40: @ 0x08025A40
	add r2, r0, #0
	ldr r1, [r2, #84]
	ldrb r0, [r1, #8]
	cmp r0, #3
	bne _08025A5A
	ldrb r0, [r1, #9]
	cmp r0, #19
	bne _08025A5A
	ldr r0, [r1, #88]
	cmp r2, r0
	bne _08025A5A
	mov r0, #0
	str r0, [r1, #88]
_08025A5A:
	mov r0, #0
	str r0, [r2, #84]
	bx lr
	THUMB_FUNC_END sub_08025A40

