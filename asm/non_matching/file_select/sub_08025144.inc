	THUMB_FUNC_START sub_08025144
sub_08025144: @ 0x08025144
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	ldrh r0, [r3, #58]
	sub r0, r0, #2
	mov r2, #0
	strh r0, [r3, #58]
	ldrb r1, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r1, r3, #0
	add r1, r1, #46
	mov r0, #2
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #35
	strb r2, [r0]
	ldrb r1, [r3, #28]
	mov r0, #49
	neg r0, r0
	and r0, r0, r1
	mov r1, #16
	orr r0, r0, r1
	strb r0, [r3, #28]
	ldr r0, _08025198  @ =gUnknown_0813C36C
	str r0, [r3, #72]
	add r0, r3, #0
	add r0, r0, #43
	ldrb r1, [r0]
	lsr r1, r1, #4
	add r0, r3, #0
	bl 0x08003870
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08025198:
	.4byte gUnknown_0813C36C
	THUMB_FUNC_END sub_08025144

