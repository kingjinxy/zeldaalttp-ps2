	THUMB_FUNC_START sub_0802B218
sub_0802B218: @ 0x0802B218
	add r3, r0, #0
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	ldrb r1, [r3, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r1, r3, #0
	add r1, r1, #46
	mov r0, #1
	strb r0, [r1]
	ldrb r1, [r3, #28]
	sub r0, r0, #50
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldr r0, _0802B26C  @ =gUnknown_08427700
	str r0, [r3, #72]
	add r1, r3, #0
	add r1, r1, #64
	mov r0, #56
	strb r0, [r1]
	sub r1, r1, #1
	mov r0, #31
	strb r0, [r1]
	sub r1, r1, #3
	mov r0, #217
	strb r0, [r1]
	add r1, r1, #32
	mov r0, #85
	strh r0, [r1]
	ldrh r0, [r3, #54]
	sub r0, r0, #4
	strh r0, [r3, #54]
	strh r2, [r3, #58]
	bx lr
_0802B26C:
	.4byte gUnknown_08427700
	THUMB_FUNC_END sub_0802B218

