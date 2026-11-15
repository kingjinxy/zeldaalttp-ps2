	THUMB_FUNC_START sub_0802B5D8
sub_0802B5D8: @ 0x0802B5D8
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003AC0
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802B5F0
	add r0, r4, #0
	mov r1, #13
	mov r2, #0
	bl sub_0804CB38
_0802B5F0:
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	strb r0, [r4, #28]
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802B5D8

