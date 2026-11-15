	THUMB_FUNC_START sub_080178B8
sub_080178B8: @ 0x080178B8
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #23]
	sub r0, r0, #1
	strb r0, [r2, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080178E4
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	add r0, r2, #0
	mov r1, #5
	bl 0x08003870
_080178E4:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080178B8

