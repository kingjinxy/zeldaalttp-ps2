	THUMB_FUNC_START sub_080256DC
sub_080256DC: @ 0x080256DC
	add r2, r0, #0
	mov r0, #2
	strb r0, [r2, #20]
	add r3, r2, #0
	add r3, r3, #43
	ldrb r0, [r3]
	sub r0, r0, #64
	mov r1, #255
	and r0, r0, r1
	asr r0, r0, #3
	strb r0, [r3]
	ldr r1, _0802571C  @ =gUnknown_0813C41C
	ldr r0, [r2, #84]
	add r0, r0, #124
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, #4
	mov r3, #58
	ldrsh r1, [r2, r3]
	cmp r0, r1
	ble _08025720
	mov r0, #1
	strb r0, [r2, #11]
	mov r0, #224
	lsl r0, r0, #9
	str r0, [r2, #16]
	mov r0, #192
	lsl r0, r0, #1
	b _0802572A
_0802571C:
	.4byte gUnknown_0813C41C
_08025720:
	mov r0, #192
	lsl r0, r0, #8
	str r0, [r2, #16]
	mov r0, #128
	lsl r0, r0, #2
_0802572A:
	str r0, [r2, #12]
	bx lr
	THUMB_FUNC_END sub_080256DC

	.byte 0x00
	.byte 0x00
