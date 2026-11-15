	THUMB_FUNC_START sub_0802527C
sub_0802527C: @ 0x0802527C
	push {lr}
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	mov r1, #8
	strb r1, [r0, #23]
	ldrb r2, [r0, #28]
	sub r1, r1, #12
	and r1, r1, r2
	mov r2, #1
	orr r1, r1, r2
	strb r1, [r0, #28]
	ldr r1, _080252A4  @ =gUnknown_0813C390
	str r1, [r0, #72]
	mov r1, #0
	bl 0x08003870
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080252A4:
	.4byte gUnknown_0813C390
	THUMB_FUNC_END sub_0802527C

