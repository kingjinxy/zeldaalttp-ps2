	THUMB_FUNC_START sub_08033AC4
sub_08033AC4: @ 0x08033AC4
	push {r4,lr}
	add r4, r0, #0
	bl sub_08034238
	ldrb r1, [r4, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r4, #28]
	add r4, r4, #94
	ldrb r0, [r4]
	and r2, r2, r0
	strb r2, [r4]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033AC4

	.byte 0x00
	.byte 0x00
