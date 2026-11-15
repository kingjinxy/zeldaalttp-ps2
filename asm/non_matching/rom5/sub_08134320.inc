	THUMB_FUNC_START sub_08134320
sub_08134320: @ 0x08134320
	ldrb r1, [r4, #18]
	mov r0, #20
	ldrsb r2, [r4, r0]
	mov r3, #128
	add r3, r3, r2
	mul r3, r1, r3
	ldrb r0, [r5, #16]
	mul r0, r3, r0
	asr r0, r0, #14
	cmp r0, #255
	bls _08134338
	mov r0, #255
_08134338:
	strb r0, [r4, #2]
	mov r3, #127
	sub r3, r3, r2
	mul r3, r1, r3
	ldrb r0, [r5, #17]
	mul r0, r3, r0
	asr r0, r0, #14
	cmp r0, #255
	bls _0813434C
	mov r0, #255
_0813434C:
	strb r0, [r4, #3]
	bx lr
	THUMB_FUNC_END sub_08134320

