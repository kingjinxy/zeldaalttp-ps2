	THUMB_FUNC_START sub_080447C8
sub_080447C8: @ 0x080447C8
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl 0x080095A4
	ldr r4, _08044828  @ =gUnknown_0813ED84
	ldr r0, [r7]
	bl 0x080098DC
	lsl r1, r0, #24
	lsr r0, r1, #24
	add r1, r0, #0
	lsl r0, r1, #2
	add r1, r4, r0
	ldr r2, [r1]
	ldr r0, [r7]
	bl _call_via_r2
	ldr r0, [r7]
	bl 0x08008D90
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #31]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08044828:
	.4byte gUnknown_0813ED84
	THUMB_FUNC_END sub_080447C8

