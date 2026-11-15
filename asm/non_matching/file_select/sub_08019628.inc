	THUMB_FUNC_START sub_08019628
sub_08019628: @ 0x08019628
	push {lr}
	ldrb r2, [r0, #28]
	mov r1, #4
	neg r1, r1
	and r1, r1, r2
	strb r1, [r0, #28]
	ldrb r1, [r0, #20]
	add r1, r1, #1
	strb r1, [r0, #20]
	mov r1, #5
	bl 0x08003870
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08019628

