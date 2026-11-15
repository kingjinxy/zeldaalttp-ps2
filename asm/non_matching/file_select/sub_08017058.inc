	THUMB_FUNC_START sub_08017058
sub_08017058: @ 0x08017058
	push {r4,lr}
	add r4, r0, #0
	bl 0x08009E44
	add r0, r4, #0
	add r0, r0, #67
	ldrb r0, [r0]
	cmp r0, #0
	bne _08017074
	add r0, r4, #0
	add r0, r0, #124
	ldrb r1, [r0]
	sub r0, r0, #61
	strb r1, [r0]
_08017074:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017058

	.byte 0x00
	.byte 0x00
