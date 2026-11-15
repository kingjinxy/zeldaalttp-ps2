	THUMB_FUNC_START sub_0801C814
sub_0801C814: @ 0x0801C814
	push {lr}
	mov r2, #0
	mov r1, #6
	strb r1, [r0, #20]
	strb r2, [r0, #26]
	add r3, r0, #0
	add r3, r3, #60
	ldrb r2, [r3]
	mov r1, #128
	orr r1, r1, r2
	strb r1, [r3]
	ldr r1, _0801C840  @ =gUnknown_0813A724
	str r1, [r0, #72]
	add r2, r0, #0
	add r2, r2, #42
	mov r1, #5
	strb r1, [r2]
	bl 0x08003870
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801C840:
	.4byte gUnknown_0813A724
	THUMB_FUNC_END sub_0801C814

