	THUMB_FUNC_START sub_08019340
sub_08019340: @ 0x08019340
	push {lr}
	add r3, r0, #0
	ldrb r1, [r3, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r1, r3, #0
	add r1, r1, #46
	mov r0, #6
	strb r0, [r1]
	add r2, r3, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _08019394  @ =gUnknown_08139AB0
	ldr r0, [r0]
	str r0, [r3, #72]
	add r0, r3, #0
	add r0, r0, #69
	ldrb r1, [r0]
	add r0, r0, #47
	strb r1, [r0]
	ldrb r0, [r3, #20]
	add r0, r0, #1
	strb r0, [r3, #20]
	mov r0, #1
	strb r0, [r3, #23]
	add r1, r3, #0
	add r1, r1, #113
	mov r0, #32
	strb r0, [r1]
	add r0, r3, #0
	mov r1, #0
	bl sub_08003870
	pop {r0}
	bx r0
_08019394:
	.4byte gUnknown_08139AB0
	THUMB_FUNC_END sub_08019340

