	THUMB_FUNC_START sub_0802C278
sub_0802C278: @ 0x0802C278
	push {r4,r5,lr}
	ldr r1, _0802C2B4  @ =gUnknown_0202E110
	add r5, r1, #0
	add r5, r5, #44
	mov r2, #255
	mov r4, #0
	add r3, r1, #0
	add r3, r3, #64
_0802C288:
	ldrb r0, [r1]
	orr r0, r0, r2
	strb r0, [r1]
	ldrb r0, [r1, #1]
	orr r0, r0, r2
	strb r0, [r1, #1]
	strb r4, [r1, #2]
	add r1, r1, #4
	cmp r1, r3
	bcc _0802C288
	add r1, r5, #0
	mov r0, #0
	add r2, r1, #0
	add r2, r2, #16
_0802C2A4:
	strb r0, [r1]
	strb r0, [r1, #1]
	add r1, r1, #4
	cmp r1, r2
	bcc _0802C2A4
	pop {r4,r5}
	pop {r0}
	bx r0
_0802C2B4:
	.4byte gUnknown_0202E110
	THUMB_FUNC_END sub_0802C278

