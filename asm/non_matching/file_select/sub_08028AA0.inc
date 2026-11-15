	THUMB_FUNC_START sub_08028AA0
sub_08028AA0: @ 0x08028AA0
	add r2, r0, #0
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	add r1, r2, #0
	add r1, r1, #69
	mov r0, #100
	strb r0, [r1]
	sub r1, r1, #9
	mov r0, #137
	strb r0, [r1]
	add r1, r1, #4
	mov r0, #56
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #62
	strb r0, [r1]
	ldr r1, _08028AD8  @ =gUnknown_0813D120
	ldrb r0, [r2, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [r2, #72]
	add r1, r2, #0
	add r1, r1, #92
	ldr r0, _08028ADC  @ =0x000021AA
	strh r0, [r1]
	bx lr
_08028AD8:
	.4byte gUnknown_0813D120
_08028ADC:
	.4byte 0x000021AA
	THUMB_FUNC_END sub_08028AA0

