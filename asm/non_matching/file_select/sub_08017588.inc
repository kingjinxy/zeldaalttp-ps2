	THUMB_FUNC_START sub_08017588
sub_08017588: @ 0x08017588
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x080095A4
	ldr r5, _080175C8  @ =gUnknown_08139548
	add r0, r4, #0
	bl 0x080098DC
	lsl r0, r0, #24
	lsr r0, r0, #22
	add r0, r0, r5
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	add r0, r4, #0
	bl 0x08008D90
	ldrb r2, [r4, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #31]
	ldrb r0, [r4, #29]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #29]
	pop {r4,r5}
	pop {r0}
	bx r0
_080175C8:
	.4byte gUnknown_08139548
	THUMB_FUNC_END sub_08017588

