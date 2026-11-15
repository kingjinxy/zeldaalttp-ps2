	THUMB_FUNC_START sub_080188A0
sub_080188A0: @ 0x080188A0
	push {lr}
	add r2, r0, #0
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	add r1, r2, #0
	add r1, r1, #46
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080188DC  @ =gUnknown_0813991C
	str r0, [r2, #72]
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	ldrb r0, [r2, #10]
	cmp r0, #0
	beq _080188D0
	mov r0, #128
	lsl r0, r0, #3
	str r0, [r2, #12]
_080188D0:
	add r0, r2, #0
	mov r1, #0
	bl 0x08003870
	pop {r0}
	bx r0
_080188DC:
	.4byte gUnknown_0813991C
	THUMB_FUNC_END sub_080188A0

