	THUMB_FUNC_START sub_08011F28
sub_08011F28: @ 0x08011F28
	add r3, r0, #0
	ldrb r0, [r3, #20]
	cmp r0, #0
	bne _08011F78
	mov r0, #1
	strb r0, [r3, #20]
	ldrb r1, [r3, #29]
	sub r0, r0, #14
	and r0, r0, r1
	mov r1, #4
	orr r0, r0, r1
	mov r1, #63
	and r0, r0, r1
	mov r2, #128
	orr r0, r0, r2
	strb r0, [r3, #29]
	ldrb r0, [r3, #31]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r3, #31]
	ldrb r1, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r3, #28]
	mov r0, #120
	strh r0, [r3, #50]
	ldrb r1, [r3, #11]
	sub r1, r1, #1
	lsl r0, r1, #3
	sub r0, r0, r1
	lsl r0, r0, #2
	sub r0, r0, #2
	strh r0, [r3, #54]
	add r1, r3, #0
	add r1, r1, #33
	mov r0, #11
	strb r0, [r1]
_08011F78:
	ldr r1, _08011F94  @ =gGameLanguage
	ldrb r0, [r3, #11]
	mov r2, #1
	ldrb r1, [r1]
	cmp r0, r1
	bne _08011F86
	mov r2, #2
_08011F86:
	ldrb r1, [r3, #30]
	mov r0, #16
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #30]
	bx lr
_08011F94:
	.4byte gGameLanguage
	THUMB_FUNC_END sub_08011F28

