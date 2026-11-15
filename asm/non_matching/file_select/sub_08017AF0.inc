	THUMB_FUNC_START sub_08017AF0
sub_08017AF0: @ 0x08017AF0
	push {lr}
	add r2, r0, #0
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	add r3, r2, #0
	add r3, r3, #46
	mov r1, #0
	mov r0, #2
	strb r0, [r3]
	ldr r0, _08017B30  @ =gUnknown_08139750
	str r0, [r2, #72]
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	mov r0, #1
	strb r0, [r2, #23]
	sub r3, r3, #4
	strb r1, [r3]
	add r3, r3, #73
	strb r0, [r3]
	strb r1, [r2, #26]
	add r0, r2, #0
	bl 0x08003870
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08017B30:
	.4byte gUnknown_08139750
	THUMB_FUNC_END sub_08017AF0

