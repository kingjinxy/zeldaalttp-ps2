	THUMB_FUNC_START sub_0804CA78
sub_0804CA78: @ 0x0804CA78
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	str r2, [r7, #8]
	mov r0, #15
	mov r1, #24
	mov r2, #32
	bl sub_0804C8A8
	str r0, [r7, #12]
	ldr r0, [r7, #12]
	cmp r0, #0
	beq _0804CAB2
	ldr r1, [r7, #12]
	ldr r2, [r7, #4]
	add r0, r2, #0
	lsl r2, r0, #16
	asr r0, r2, #16
	lsl r2, r0, #16
	ldr r3, [r7, #8]
	add r0, r3, #0
	lsl r3, r0, #16
	asr r0, r3, #16
	lsl r3, r0, #16
	ldr r0, [r7]
	bl sub_0803D4A4
_0804CAB2:
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804CA78

	.byte 0x00
	.byte 0x00
