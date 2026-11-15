	THUMB_FUNC_START sub_080262A4
sub_080262A4: @ 0x080262A4
	push {lr}
	add r2, r0, #0
	ldr r0, [r2, #84]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _080262B4
	str r0, [r2, #84]
_080262B4:
	ldr r0, _080262C8  @ =gUnknown_0813C678
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
	pop {r0}
	bx r0
_080262C8:
	.4byte gUnknown_0813C678
	THUMB_FUNC_END sub_080262A4

