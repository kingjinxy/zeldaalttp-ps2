	THUMB_FUNC_START sub_0803D310
sub_0803D310: @ 0x0803D310
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r2, r0, #0
	add r0, r1, #0
	add r1, r7, #0
	strh r2, [r1]
	add r1, r7, #2
	strh r0, [r1]
	add r1, r7, #0
	mov r2, #0
	ldrsh r0, [r1, r2]
	add r1, r7, #2
	mov r3, #0
	ldrsh r2, [r1, r3]
	add r1, r0, #0
	mul r1, r2, r1
	add r0, r1, #0
	cmp r0, #0
	bge _0803D33A
	add r0, r0, #255
_0803D33A:
	asr r0, r0, #8
	add r1, r0, #0
	lsl r0, r1, #16
	asr r1, r0, #16
	add r0, r1, #0
	b _0803D346
_0803D346:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D310

	.byte 0x00
	.byte 0x00
