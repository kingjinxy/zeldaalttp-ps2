	THUMB_FUNC_START sub_0802B324
sub_0802B324: @ 0x0802B324
	push {r4,lr}
	add r4, r0, #0
	bl sub_0802B34C
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802B346
	ldr r0, [r4, #76]
	mov r1, #160
	bl sub_0802C3F0
	add r0, r4, #0
	bl DeleteThisEntity
_0802B346:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B324

