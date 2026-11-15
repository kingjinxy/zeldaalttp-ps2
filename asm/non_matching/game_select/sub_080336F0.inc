	THUMB_FUNC_START sub_080336F0
sub_080336F0: @ 0x080336F0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08033722
	mov r0, #16
	strb r0, [r4, #23]
	ldrb r2, [r4, #24]
	mov r0, #80
	mov r1, #1
	bl sub_0804C8A8
	ldrb r0, [r4, #24]
	add r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bls _08033722
	add r0, r4, #0
	bl DeleteThisEntity
_08033722:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080336F0

