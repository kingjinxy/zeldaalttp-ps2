	THUMB_FUNC_START sub_08025798
sub_08025798: @ 0x08025798
	push {lr}
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	ldrh r1, [r0, #58]
	sub r1, r1, #2
	mov r3, #0
	strh r1, [r0, #58]
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	mov r2, #1
	orr r1, r1, r2
	strb r1, [r0, #28]
	add r2, r0, #0
	add r2, r2, #46
	mov r1, #2
	strb r1, [r2]
	add r1, r0, #0
	add r1, r1, #35
	strb r3, [r1]
	ldrb r2, [r0, #28]
	mov r1, #49
	neg r1, r1
	and r1, r1, r2
	mov r2, #16
	orr r1, r1, r2
	strb r1, [r0, #28]
	ldr r1, _080257E0  @ =gUnknown_0813C454
	str r1, [r0, #72]
	mov r1, #0
	bl sub_08003870
	pop {r0}
	bx r0
_080257E0:
	.4byte gUnknown_0813C454
	THUMB_FUNC_END sub_08025798

