	THUMB_FUNC_START sub_0801B620
sub_0801B620: @ 0x0801B620
	push {lr}
	add r2, r0, #0
	add r0, r0, #108
	ldrh r0, [r0]
	cmp r0, #1
	bne _0801B634
	add r1, r2, #0
	add r1, r1, #107
	mov r0, #0
	strb r0, [r1]
_0801B634:
	ldr r1, _0801B640  @ =gUnknown_0813A0A4
	add r0, r2, #0
	bl 0x08009924
	pop {r0}
	bx r0
_0801B640:
	.4byte gUnknown_0813A0A4
	THUMB_FUNC_END sub_0801B620

