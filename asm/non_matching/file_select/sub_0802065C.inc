	THUMB_FUNC_START sub_0802065C
sub_0802065C: @ 0x0802065C
	push {lr}
	ldr r1, [r0, #84]
	cmp r1, #0
	bne _0802066A
	bl sub_08020478
	b _0802066E
_0802066A:
	mov r0, #0
	str r0, [r1, #84]
_0802066E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802065C

	.byte 0x00
	.byte 0x00
