	THUMB_FUNC_START sub_0802B5B8
sub_0802B5B8: @ 0x0802B5B8
	push {r4,lr}
	add r4, r0, #0
	mov r1, #58
	ldrsh r0, [r4, r1]
	cmp r0, #0
	bne _0802B5CA
	add r0, r4, #0
	bl sub_0802B5D8
_0802B5CA:
	ldr r1, [r4, #84]
	mov r0, #2
	strb r0, [r1, #23]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B5B8

	.byte 0x00
	.byte 0x00
